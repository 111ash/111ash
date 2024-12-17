#include <stdio.h>
int main(){
    char a[200];
    gets(a);
    puts(a);
    for (int i = 0; a[i] != '\0'; i++)
    {
        a[i] = a[i] +1;
    }
    puts(a);// after encryption 
    
    return 0;
}
