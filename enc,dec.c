#include <stdio.h>
int main()
{
    char a[200];
    printf("enter a string: ");
    gets(a);
    for (int i = 0; a[i] != '\0'; i++)
    {
        a[i] = a[i] + 1;
    }
    printf("the string after encyption: ");
    puts(a); // after encryption

    for (int i = 0; a[i] != '\0'; i++)
    {
        a[i] = a[i] - 1;
    }
    printf("the same string after decryption: ");
    puts(a);

    return 0;
}
