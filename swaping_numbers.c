

#include <stdio.h>

int main()
{
    int temp, a = 10, b = 100;
    temp = a;
    a = b;
    b = temp;
    printf("new value of a and b is %d %d", a, b);

    return 0;
}