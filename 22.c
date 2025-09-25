#include<stdio.h>
int main(){
    int a=12;
    int b=14;
    int c=1;
    if(a>b && a>c){
        printf("a is greater");
    }
    else if(b>a && b>c){
        printf("b is greater");
    }
    else{
        printf("c is greater");
    }
    return 0;
}