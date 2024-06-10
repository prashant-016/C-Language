#include <stdio.h>
int main (){
    int a,b,count=o;
    printf("Enter the number:");
    scanf("%d",&a);
while(a>0){
    b=a%10;
    a=a%10;
    count++;
}
print("count of digits=%d",count);
return 0;
}