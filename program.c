#include <stdio.h>
#include <string.h>
void slice(char *c)
{
    int a,b;
    printf("give start and end \n");
    scanf("%d %d", &a, &b);
    int p = strlen(c);
    if (a<=p && b<=p && a<b)
    {
        for (int i = a; i <=b; i++)
        {
            printf("%c" , c[i]);
        }
        
    }
    else{
        printf("invalid output\n");
    }
    
}
int main()
{
    char c[] = "meow";
    slice(c);
    return 0;
}