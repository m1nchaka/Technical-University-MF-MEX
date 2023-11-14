#include <stdio.h>

int main() {

    float numbers[10];


    printf("Vuvedete 10 realni chisla:\n");
    for (int i = 0; i < 10; ++i) {
        printf("Enter number %d: ", i + 1);
        scanf("%f", &numbers[i]);
    }


    printf("\n Elementite na masivite sa:\n");
    for (int i = 0; i < 10; ++i) {
        printf("%.2f ", numbers[i]);
    }
    printf("\n");


    float givenNumber;
    printf("\n Vuvedi chila da sravnish s: ");
    scanf("%f", &givenNumber);

    int count = 0;
    printf("\n Elementite koito sa pogolemi ot %.2f sa:\n", givenNumber);
    for (int i = 0; i < 10; ++i) {
        if (numbers[i] > givenNumber) {
            printf("%.2f ", numbers[i]);
            count++;
        }
    }
    printf("\n");


    printf("\n Chisloto koeto e pogolqmo ot %.2f e: %d\n", givenNumber, count);

    return 0;
}