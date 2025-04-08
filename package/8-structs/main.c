#include <stdio.h>


struct car {
	char *name;
	float price;
	int speed;
};




// int main() {
// 	struct car saturn;
	

// 	saturn.name = "teste";
// 	saturn.price = 1.23;
// 	saturn.speed = 10;

// 	printf("name: %s\n" , saturn.name);
// 	printf("price: %f\n" , saturn.price);
// 	printf("speed: %i\n" , saturn.speed);

// 	struct car test = {.name="teste", .name="teste2", .speed=1};

// 	printf("name: %s\n" , test.name);
// 	printf("price: %f\n" , test.price);

// 	return 0;
// }


void set_price(struct car *p, float f) {
	(*p).price = f;
}


int main() {

	struct car saturn = {.speed=175, .name="Saturn SL/2"};

	// Pass a pointer to this struct car, along with a new,
	// more realistic, price:
	set_price(&saturn, 799.99);

	printf("Price: %f\n", saturn.price);

	return 0;
}
