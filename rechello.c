// when a funcation call itself that's called a recursion
// print hello world useing recursion
#include<stdio.h>
void printhw(int n);
int main(){
      printhw(5);
}
void printhw(int n){
    // base condition
    if(n==0){
        return 1 ;
    }
    printf("hello shivansh\n");
    printhw(n-1);
    
}

