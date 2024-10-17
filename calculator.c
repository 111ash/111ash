#include <stdio.h>
int main()
{

    float a, b;
    char c;
    printf("enter the 2 numbers\n");
    scanf("%f %f", &a, &b);

    printf("choose any of the one operators: + , - , * , / \n");
    scanf(" %c", &c);

    switch (c)
    {
    case '+':
        printf("the sum of the two numbesr is %f", a + b);
        break;

    case '-':
        printf("the difference of the 2 numbers is %f", a - b);
        break;

    case '*':
        printf("the product of the 2 numbers is %f", a * b);
        break;

    case '/':
        if (b == 0)
        {
            printf("the denomentor cant be zero choose another number");
        }
        else
        {
            printf("the division of the 2 numbers is %f", a / b);
        }
        break;

    default:
        printf("invalid input");
        break;
    }
    return 0;
}