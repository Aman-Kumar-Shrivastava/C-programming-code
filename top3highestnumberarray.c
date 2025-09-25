#include<stdio.h>
int main(){
    int arr[] = {2,5,8,9,10};
    int max1 = arr[0], max2 = arr[0], max3 = arr[0];

    // Initialize max1, max2, max3 to minimum possible
    max1 = max2 = max3 = 0; 

    for(int i = 0; i < 5; i++){
        if(arr[i] > max1){
            max3 = max2;
            max2 = max1;
            max1 = arr[i];
        } else if(arr[i] > max2 && arr[i] != max1){
            max3 = max2;
            max2 = arr[i];
        } else if(arr[i] > max3 && arr[i] != max2 && arr[i] != max1){
            max3 = arr[i];
        }
    }
    printf("%d %d %d", max1, max2, max3);
    return 0;
}