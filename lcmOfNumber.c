#include<stdio.h>
int main(){
    int a,b,lcm;
    printf("Enter two number:");
    scanf("%d%d",&a,&b);

if(m>n){
    lcm=m;
}else{
    lcm=n;
}
while(1){
if(lcm%m==0 && lcm%n==0){
    printf("\nlcm of%d and %d is %d",a,b,lcm);
    break;
}
lcm++;
}
return 0;
}
