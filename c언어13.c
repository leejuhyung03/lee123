#include <stdio.h>

int main(void)
{
    int result1;
    int result2;
    int num1, num2;

    printf("숫자1: ");
    scanf("%d", &num1);
    printf("숫자2: ");
    scanf("%d", &num2);
    
    result1=num1+num2;
    result2=num1-num2;

    printf("%d+%d=%d \n", num1, num2, result1);
    printf("%d-%d=%d \n", num1, num2, result2);

    return 0;

}