#include <stdio.h>
int main(){
    int num;
    printf("Enter the to print table:");
    scanf("%d",&num);
    for(int i=1;i<=10;i++){
        printf("%d*%d=%d",num,i,(num*i));
    }
    return 0;
}