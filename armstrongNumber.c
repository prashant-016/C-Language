#include <stdio.h>
int main(){
    int a,b,t,sum=o;
    printf("Enter the number:");
    scanf("%d",&a);
    t=a;
    while(a>0){
        b=a%10;
        a=a/10;
        sum=sum+(b*b*b);
    }
    if(t==sum){
        printf("armstrong number");
    }else{
        printf("not armstrong number");
    }
    return 0;
}