//write a program for n number squre
#include<stdio.h>
#include<math.h>
void square(int n);
int main(){
    int n;
    printf("enter any number:");
    scanf("%d",&n);
     square(n);
     return 0;
}
void square(int n){
                   int p=pow(n,2);
                  printf("squre is :%d",p);
                  
}
