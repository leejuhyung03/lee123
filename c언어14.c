#include <stdio.h>

int main(void)
{
    int result;
    int num1;

    printf("숫자를 입력하시오:");
    scanf("%d", &num1);

    result= num1*num1;

    printf("제곱값은:%d\n", result);
    return 0;
    


}