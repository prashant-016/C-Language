#include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter a number:");
    scanf("%d",&a);
    printf("Enter b number:");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
printf("a=%d",a);
printf("b=%d",b);
return 0;
}