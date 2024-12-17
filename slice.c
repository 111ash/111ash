#include <stdio.h>
int slice(char ch[], int a, int b)
{
    char p[b - a + 1]; 
    int i = 0;
    for (int x = a; x <= b - 1; x++)
    {
        p[i] = ch[x];
        i++;
    }
    p[i] = '\0';
    printf("%s", p);
    return 0;
}
int main()
{
    char ch[100] = "ashdohubfnbfoihrf";
    slice(ch, 1, 10);
    return 0;
}
