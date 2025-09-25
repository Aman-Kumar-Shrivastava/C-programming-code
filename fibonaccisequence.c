#include<stdio.h>
int sq();
 int sq(int n){
    if (n==1){
        return 1;
    } else if(n==0){
        return 0;
    }
    int sumnm1=sq(n-1);
    int sumnm2=sq(n-2);
    int fibonaccisq=sumnm1+sumnm2;
    
    return fibonaccisq;

}
int main(){
    int n;
    scanf("%d",&n);
    printf("%d",sq(n));
    return 0;
}