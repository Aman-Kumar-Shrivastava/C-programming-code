#include<stdio.h>
int main(){
    int n;
    int h=0;
    printf("enter the number \n");
    scanf("%d", &n);
    for(int i=1 ; i<=n ; i=i+1){
        if (n%i==0){
            h=h+1;
        }
    }
    if (h==2){
        printf("number is prime");
    } else if (h>2){
        printf("number is not prime");
    }
     
    return 0;
    
}