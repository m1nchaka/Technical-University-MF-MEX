
#include <stdio.h>

int main() {
    int count = 0;
    int sum = 0;       
    int number;         

    printf("Vuvedi chislo. Programata shte spre kato napishesh 10 chetni chisla.\n");

    while (count < 10) {
        printf("Vuvedi chislo: ");
        scanf("%d", &number);

        if (number % 2 == 0) {
            count++;
            sum += number;
        }
    }

    if (count == 0) {
        printf("Nqma chetni chisla.\n");
    } else {
        printf("Obshto vuvedebi: %d\n", count);
        printf("Srednoto atremetichno na chetni chisla: %.2f\n", (float)sum / count);
    }


    return 0;
}
