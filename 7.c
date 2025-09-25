#include<stdio.h>
int main(){
    //arithmetic operator use for basic mathematical operation
    int a=10; int b=20;
    int c=a+b; //addition
    int d=b-a; //subtraction
    int e=a*b; //multiplication
    int f=b/a; //division
    int g=b%a; //modulus
    printf("Addition is %d\n",c);
    printf("Subtraction is %d\n",d);
    printf("Multiplication is %d\n",e);
    printf("Division is %d\n",f);
    printf("Modulus is %d\n",g);
    //relational operator use for comparison
    printf("a is equal to b: %d\n",a==b);
    printf("a is not equal to b: %d\n",a!=b);
    printf("a is greater than b: %d\n",a>b);
    printf("a is less than b: %d\n",a<b);
    printf("a is greater than or equal to b: %d\n",a>=b);
    printf("a is less than or equal to b: %d\n",a<=b);
    //logical operator use for combining multiple conditions
    int x=5,y=10;
    printf("x is greater than 0 and y is greater than 0: %d\n",(x>0 && y>0));
    printf("x is greater than 0 or y is greater than 0: %d\n",(x>0 || y>0));
    printf("not(x is greater than 0): %d\n",!(x>0));
    //shorthand assignment operator
    int p=10;
    p+=5; //p=p+5
    printf("Value of p after shorthand addition: %d\n",p);
    p-=3; //p=p-3
    printf("Value of p after shorthand subtraction: %d\n",p);
    //unary operator
    int q=5;
    printf("Value of q: %d\n",q);
    printf("Value of q after increment: %d\n",++q); //pre-in
    printf("Value of q after decrement: %d\n",--q); //pre-de
    printf("Value of q after increment: %d\n",q++); //post-in
    printf("Value of q after decrement: %d\n",q--); //post-de
    printf("Final value of q: %d\n",q);
    //conditional operator
    int age=18;
    (age>=18)?printf("You are eligible to vote.\n"):printf("You are not eligible to vote.\n");
    //bitwise operator
    int m=5,n=3;
    printf("Bitwise AND of m and n: %d\n",m&n);
    printf("Bitwise OR of m and n: %d\n",m|n);
    printf("Bitwise XOR of m and n: %d\n",m^n);
    //comma operator
    int r;
    r=(a=5,b=10,a+b);
    printf("Value of r using comma operator: %d\n",r);
    return 0;
}