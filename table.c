// write a program to make a table 
#include<stdio.h>
int main(){
    int i;
    int n;
    
    printf("enter number :");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++){
       printf("%d\n",2*i);
    }
    
    return 0;
}

output:-enter number :10
2
4
6
8
10
12
14
16
18
20
