#include <stdio.h>

struct car {
    char *name;
    float price;
    int speed;
};

void set_price(struct car *saturn, float number) {
	// (*saturn).price = number;

	saturn->price = number;
}

int main() {
	// struct car saturn;  // Variable "saturn" of type "struct car"

	// saturn.name = "Saturn SL/2";
	// saturn.price = 15999.99;
	// saturn.speed = 175;

	// printf("Name:           %s\n", saturn.name);
	// printf("Price (USD):    %f\n", saturn.price);
	// printf("Top Speed (km): %d\n", saturn.speed);

	// struct car saturn;  // Variable "saturn" of type "struct car"

	// saturn.name = "Saturn SL/2";
	// saturn.price = 15999.99;
	// saturn.speed = 175;

	// printf("Name:           %s\n", saturn.name);
	// printf("Price (USD):    %f\n", saturn.price);
	// printf("Top Speed (km): %d\n", saturn.speed);

	// Now with an initializer! Same field order as in the struct declaration:
	// struct car saturn = {"Saturn SL/2", 16000.99, 175};

	// struct car saturn = {.speed=175};

	// printf("Name:      %s\n", saturn.name);
	// printf("Price:     %f\n", saturn.price);
	// printf("Top Speed: %d km\n", saturn.speed);

	// struct car saturn = {.speed=175, .name="Saturn SL/2"};

	// // Pass a pointer to this struct car, along with a new,
	// // more realistic, price:
	// set_price(&saturn, 799.99);

	// printf("Price: %f\n", saturn.price);

	struct car a, b;

	b = a;  // Copy the struct

	return 0;
}