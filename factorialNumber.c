#include<stdio.h>
int main(){
    int a,i,b=1;
    printf("Enter the number:");
    scanf("%d",&a);
    for(i=a;i>1;i--){
        b=b*i;
    }
    printf("Factorial number is=%d",b);
    return 0;
}