#include<stdio.h>
int main(){
    int arr[10]={1,2,3,4,5,1,2,5,8,7};
    int c=0;
    int x;
    printf("enter the number taht should be count\n");
    scanf("%d",&x);
    for(int i=0;i<10;i++){
        if (arr[i]==x){
            c=c+1;
        }
    }
    printf("the number of time %d is present in the array is %d",x,c);
}