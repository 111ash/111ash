#include <stdio.h>
void strcp(char a[], char b[]);//function to mimic the strcpy inbuilt function
void strcp(char a[], char b[])
{
    int i = 0;
    while (b[i] != '\0')
    {
        a[i] = b[i];
        i++;
    }
    a[i]='\0';
    printf("%s  %s", a, b);
}

int main(){
    char a[100] = "ragdoll cat";
    char b[100] = "husky dog";
    strcp(a,b);
    return 0;
}
