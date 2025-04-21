#include <stdio.h>
#include <stdlib.h>

struct Note {
	char student[1024];
	float note;
	char discipline[1024];
};

int getNextIndex(struct Note *notes) {
	int index = 0;
	while(notes[index].student[0] != 0) {
		index++;
	}

	return index;
}

int main() {
	struct Note notes[1024] = {0};
	FILE *fr = fopen("notes.bin", "rb");

	if (fr != NULL) {
		fread(notes, sizeof(struct Note), sizeof(notes) / sizeof(struct Note), fr);
		fclose(fr);
	}


	while (1) {
		char buffer[3];

		system("clear");
		printf("Menu: \n\n");
		printf("1 - Add note\n");
		printf("2 - List all notes:\n\n");
		printf("Select your option: ");
		fgets(buffer, sizeof(buffer), stdin);
		char choose = buffer[0];
		
		if (choose == '1') {
			printf("antes do get: %d\n", notes[0].student[0] == 0);
			int index = getNextIndex(notes);
			system("clear");

			printf("Type name student: ");
			fgets(notes[index].student, 1024, stdin);
			
			printf("Type name discipline: ");
			fgets(notes[index].discipline, 1024, stdin);

			printf("Type value note: ");
			fscanf(stdin, "%f", &notes[index].note);

			printf("Note added!");

			FILE *fw = fopen("notes.bin", "wb");

			fwrite(notes, sizeof(struct Note), sizeof(notes) / sizeof(struct Note), fw);

			fclose(fw);
			continue;
		} else if (choose == '2') {
			system("clear");
			int index = 0;

			while(notes[index].student[0] != 0) {
				printf("%d note:\n", index + 1);
				printf("Student: %s", notes[index].student);
				printf("Discipline: %s", notes[index].discipline);
				printf("Note: %f\n\n", notes[index].note);
				index++;
			}

			fgets(buffer, sizeof(buffer), stdin);
			continue;
		}
	}
	

	return 0;
}
