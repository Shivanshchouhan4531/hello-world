// write a factorial program using loops
#include<stdio.h>
int main(){
    int i=1,fact =1;
    int num;
    
    printf("enter the number you want for factorial:");
    scanf("%d",&num);
    while(num>=i){
        fact = fact*i;
        i++;
    }
   /* for (i;num>=i;i++){
        fact = fact*i;
        
    }*/
    
    printf("factorial is :%d\n",fact);
    return 0;
    
}
