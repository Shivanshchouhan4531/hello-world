// write a program to get square using float  funcation
#include<stdio.h> 
float square(float);
int main(){
    
    float a,b;
    printf("enter number:");
    scanf("%f",&a);
    b=square(a);
    printf("square is %f\n",b);
    return 0;
    
}
float square(float x){
      float y= x*x;
      return (y);
      
}
