#include <stdio.h>
#include <stdbool.h>

bool isLeapYear(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        return true;
    }
    return false;
}

int main() {
    int day, month, year;
    bool valid = true;

    printf("Vuvedete dati (den mesec godina): ");
    scanf("%d %d %d", &day, &month, &year);

    bool leap = isLeapYear(year);

    if (month < 1 || month > 12) {
        valid = false;
    } else if (month == 2) {
        if (leap && (day < 1 || day > 29)) {
            valid = false;
        } else if (!leap && (day < 1 || day > 28)) {
            valid = false;
        }
    } else if ((month == 4 || month == 6 || month == 9 || month == 11) && (day < 1 || day > 30)) {
        valid = false;
    } else if (day < 1 || day > 31) {
        valid = false;
    }

    if (valid) {
        printf("Vuvedenite dati  %d-%d-%d e validen.\n", day, month, year);
    } else {
        printf("Vuvedenite dati ne e validen.\n");
    }

    return 0;
}