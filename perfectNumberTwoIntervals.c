#include <stdio.h>
int main(){
    int limit,i,j,sum=o;
    printf("Enter the limit:");
    scanf("%d",&limit);
    for(i=1;i<=limit;i++){
        for(j=1;j<=i;j++){
            if(i%j==0){
                sum=sum+i;
            }
        }
        if(i==sum){
            printf("%d",i);
        }
    }
    return 0;
}