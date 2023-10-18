//check weather number is prime or not
#include<stdio.h>
int main(){
   int fector=0;
   int i,n;
      
      printf("enter number:");
      scanf("%d",&n);
   for(i=1;i<=n;i++){
       if(n%i==0){
                   fector++;
       }
   }
       if(fector==2){
           printf("number is a prime");
       }
       else{
           printf("number is not a prime ");
       }
   
   return 0;
}
