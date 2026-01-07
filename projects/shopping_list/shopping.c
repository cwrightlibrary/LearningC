#include <stdio.h>
#include <string.h>

#define ITEMS 5
#define MAX_LEN 20

char shopping_list[ITEMS][MAX_LEN];

int main(void) {
	for (int i = 0; i < ITEMS; i++) {
		printf("Enter item %d: ", i + 1);
		scanf("%19s", shopping_list[i]);
	}

	printf("\nShopping list:\n");
	for (int i = 0; i < ITEMS; i++) {
		printf("%s\n", shopping_list[i]);
	}

	return 0;
}