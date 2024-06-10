#include <stdio.h>
#include <string.h>
int main (){
    char a[50];
    int i,count=0;
    printf("Enter the String:");
    scanf("%s",&a);
    i=0;
    while(a[i]!='\0'){
        count++;
        i++;
    }
    printf("length of string%d",count);
    return o;
}