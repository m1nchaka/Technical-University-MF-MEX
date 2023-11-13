#include <stdio.h>

int main(){
    int number;

    printf("Vavedete chisloto: ");
    scanf("%d", &number);

    if(number % 5 ==0){
        printf("%d se deli na 5. \n", number);
    }

    else{ 
        int roundedNumber = ((number / 5) + 1) * 5;
        printf("%d ne se deli na 5. Zakrugleno do nai blizoto: %d\n", number, roundedNumber);
    }
    system("pause");
    return 0;
}
