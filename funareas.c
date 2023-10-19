//write a program for
//area of side *side
//area of circle 3.14*radius *radius
//area of rectangle a*b
#include<stdio.h>
// define
    int square(int side);
    float circle(float radius);
    int  rectangle(int a,int b);
    int main(){
           int side ;
           printf("enter side:");
           scanf("%d",&side);
          printf("area of square is :%d\n",square(side)); // call
           
           float radius;
           printf("enter radius:");
           scanf("%f",&radius);
          printf("area of circle :%f\n",circle(radius)); // call
           
           int a ,b;
           printf("enter a and b :");
           scanf("%d %d",&a,&b);
         printf("area of rectrangle:%d\n",rectangle(a,b)); // call
         
           return 0;
}
// defination 
int square (int side){
    return side *side;
}
float circle(float radius){
    return 3.14*radius*radius;
}
int rectangle(int a,int b){
    return a*b;
}
