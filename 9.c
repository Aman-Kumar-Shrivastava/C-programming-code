#include<stdio.h>
int main(){
    float fdgree;
    printf("enter the temparature in fahrehiet \n");
    scanf("%f",&fdgree);
    float cdgree=(fdgree-32)*5/9;
    printf("temparature in celcius is %f",cdgree);
    return 0;
}