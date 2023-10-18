// keep taking a input from user whan the number is not divided by 7 
#include <stdio.h>

int main() {
    int n;
    do{
        printf("enter number:");
        scanf("%d",&n);
        printf("%d\n",n);
        if(n%7==0){
            break;
        }
        printf("thank you\n");
    }while(1);

    return 0;
}
