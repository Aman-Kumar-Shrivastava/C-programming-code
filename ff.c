#include<stdio.h>
int printSum();
int main(){
    int a,b;
    printf("enter the number \n");
    scanf("%d", &a);
    scanf("%d", &b);
    printSum(a,b);
    return 0;
}
int printSum(int a,int b){
    int sum =a+b;
    printf("The Sum id %d",sum);
    return sum;
}

