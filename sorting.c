#include<stdio.h>
void printarray(int arr[],int size);
void printarray(int arr[],int size){
    for(int i=0;i<size;i++){
        printf("%d  ",arr[i]);
    }
}
int main(){
    
    int arr[10]={10,99,66,10304,567,7,6,5,9,12};
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=1;i<sizeof(arr)-1;i++){
        for(int j=0;j<size-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printarray(arr,size);
}