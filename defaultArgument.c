#include <stdio.h>
void example_func(int x){
    printf("%d\n",x);
}
void example_func_default(){
    example_func(0);
}
int main (){
    example_func(5);
    example_func_default();
    output : 0;
    return 0;
}