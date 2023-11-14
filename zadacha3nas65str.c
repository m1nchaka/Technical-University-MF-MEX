#include <stdio.h>

int main() {

    int numbers[15];
	int i;

    printf("Vuvedete 15 chisla:\n");
    for ( i = 0; i < 15; ++i) {
        printf("Vuvedi chislo %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }


    printf("\n Elemeti na masivi v obraten red sa :\n");
    for ( i = 14; i >= 0; --i) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}