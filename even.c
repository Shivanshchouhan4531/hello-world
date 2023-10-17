//check whather number is even or odd
// num%2==0 ----> even 
#include<stdio.h>
int main(){ 
    
        int num;
        printf("enter a number :");
        scanf("%d",&num);
        
            if(num%2==0){
                 printf("number is even");
               }
           else {
                 printf(" number is odd");
            
                }
        return 0;
        
    }

output :-
        enter a number :42
             number is even
