#include <stdio.h>
int main(){
    int l,u,a=0;
    printf("Enter lower value:");
    scanf("%d",&l);
    printf("Enter the upper value:");
    scanf("%d",&u);
    printf("prime number between %d and %d are:",l,u);
    while(l>u){
        a=0;
        for(i=2;i<=l/2;i++){
            if(l%i=0){
                a=1;
                break;
            }
        }
        if(a==0){
            printf("%d",l);
            l++;
        }
    }
    return 0;
}