// write program to find the fibonaci series 
// logic--> fibo(n-1)+fibo(n-2);
#include<stdio.h>
int fibo(int n); // declare 
int main(){
    
   int n=0; // intailize
  
    for(int i=1;i<=10;i++){ // loop use for repetation
    printf("%d\t",fibo(n)); // call the funcation
    n++;  // increment the value of n 
     
    }
    return 0;
    
}
int fibo(int n){ // define the loop
               if(n==0){
                   return n;
               }
               if(n==1){
                   return n;
}
    return (fibo(n-1)+fibo(n-2));
    
}
