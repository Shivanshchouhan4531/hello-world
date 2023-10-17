/write a program to  check e=wheather number is armsrtrong or not
#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c,num;
    printf("enter the number and three digit:");
    scanf("%d %d %d %d",&a,&b,&c,&num);
    
 if ( num==(pow(a,3)+pow(b,3)+pow(c,3))){
     printf("number is armstrong");
     
 }
 else {
      printf("number is not armstrong");
 }
}

output :-  
         enter the number and three digit:3 7 1 371
         number is armstrong
