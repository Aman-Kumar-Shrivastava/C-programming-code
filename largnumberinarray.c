#include<stdio.h>
int main(){
    int c=0;
    int arr[5]={1,2,3,4,5};
    int max=arr[0];
    int min=arr[0];
    for(int i=0;i<5;i++){
        c=c+arr[i];
        if(arr[i]>max){
            max=arr[i];
            
        }
        if (arr[i]<min){
            min=arr[i];
        }
    }
    printf("avergae of array is %d \n",c/5);
    printf("the largest number in an arr is %d \n",max);
    printf("the lowest number in an arr is %d",min);
}