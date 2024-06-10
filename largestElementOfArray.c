#include <stdio.h>
int main(){
    int a[5];
    int i,l;
    printf("Enter the 5 element:");
    for(i=0;i<=4;i++){
    scanf("%d",a[i]);
    }
    l=a[0];
    for(i=1;i<=4;i++){
        if(a[0]>=a[i]){
            l=a[i];
        }
    }
    printf("largest number:%d",&l);
    return 0;
}