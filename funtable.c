// write a program make table using funcation
#include<stdio.h>
void table();
int main(){
    int n;
    printf("enter any number:");
    scanf("%d",&n);
    
    table(n);
    
    return 0;
}
void table(int n){
    for (int i =1;i<=10;i++){
        printf("%d\n",n*i);
    }
}
