// write a program sum of n natural numbers 
#include<stdio.h>
int main(){
    int i=1;
    int sum=0,n;
    
    printf("enter number :");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++){
        sum=sum +i;
    }
    printf("sum of n natural numbers :%d\n",sum);
    return 0;
}

output:-   
        enter number :4
        sum of n natural numbers :10
