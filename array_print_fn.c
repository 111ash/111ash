#include <stdio.h>

int print(int b[2][2]);

int print(int b[2][2]){
    printf("{%d , %d}\n", b[0][0], b[0][1]);
    printf("{%d , %d}\n" , b[1][0] , b[1][1]);
    return 0;
}
int main(){
    int a[2][2];
    printf("enter the ");
    scanf("%d %d %d %d" , &a[0][0], &a[0][1], &a[1][0], &a[1][1]);
    print(a);
    return 0;
}
