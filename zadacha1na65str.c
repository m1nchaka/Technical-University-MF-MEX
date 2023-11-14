#include <stdio.h>

int main() {

    int numbers[6];
	int i;

    printf("Vuvedete 6 chisla:\n");
    for ( i = 0; i < 6; ++i) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }


    int min = numbers[0];
    int minIndex = 0;
    for ( i = 1; i < 6; ++i) {
        if (numbers[i] < min) {
            min = numbers[i];
            minIndex = i;
        }
    }


    printf("Minimalnoto chislo e: %d\n", min);
    printf("Indesa na mininum chisloto: %d\n", minIndex);

    return 0;
}