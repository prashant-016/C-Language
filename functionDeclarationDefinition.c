#include <stdio.h>
int add (int a,int b);
int add (int a,int b){
    return a+b;
}
int main(){
    int result = add(2,3);
    printf("The result is:%d\n",result);
    return 0;
}