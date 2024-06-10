#include <stdio.h>
int main(){
    int a,b,sum=0;
    printf("Enter the number:");
        scanf("%d",&a);
while(a>0){
    b=a%10;
    a=a/10;
    sum=sum+b;
}
printf("sum of =%d",sum);
return 0;
}