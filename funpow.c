//write a funcation power (a,b), to calculate the value of a raished to b

#include <stdio.h>
#include <math.h>
int power(int a , int b);
int main(){ 
    int a, b ;
    printf("enter number a and b :");
    scanf("%d %d",&a,&b);
    
    printf("power of a raised b is %d\n",power(a,b));
    
}
int power(int a,int b){
    int power;
    power=pow(a,b);
    return power;
}
