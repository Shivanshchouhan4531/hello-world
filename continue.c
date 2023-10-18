//take number 1 to 10 then use continue when n==6
#include<stdio.h>
int main(){
    int i,n;
    printf("enter the number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if (i==6){
            continue;
        }
         printf("%d\n",i);
    }
    return 0;
}

     output:-enter the number:10
1
2
3
4
5
7
8
9
10

