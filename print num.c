//write a program to print 1 to 100
//i = terminator, counter
#include <stdio.h>
int main(){
    int n,i;
    printf("enter number:");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++){
        printf("%d\n",i);
    }
    
    return 0;
    
}

output :-enter number:10
1
2
3
4
5
6
7
8
9
10
