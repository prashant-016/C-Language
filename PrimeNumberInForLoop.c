#include <stdio.h>
int main(){
    int num=100,p=2,i;
    while(num){
        for(i=2;i<p;i++){
            if(p%i==0){
                break;
            if(i==0)
                printf("%d",p);
                num--;
            }
            p++;
    }
    return 0;
}