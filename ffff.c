#include<stdio.h>
float fh();
int main(){
    float n;
    printf("enter a celuis dgree");
    scanf("%d",&n);
    fh(n);
    return 0;
}
float fh(int n){
    float f;
    f=(n*9/5)+32;
    printf("fahrenhiet degree is %f",f);
    return f;

}