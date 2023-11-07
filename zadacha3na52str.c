#include <stdio.h>
#include <math.h>

int main() {
    double principal, interestRate;
    int years = 0;
    double balance = 0;

    printf("Vuvedete nachalnata glavnica: ");
    scanf("%lf", &principal);
    printf("Vuvedete godishniq lihven procent(v procenti): ");
    scanf("%lf", &interestRate);

    interestRate /= 100.0;

    while (balance < 1000000) {
        balance = principal * pow(1 + interestRate, years);
        years++;
    }

    printf("Shte otneme %d godini balansat da dostigne 1,000,000 lv.\n", years);

    return 0;
}