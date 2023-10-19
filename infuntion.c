#include<stdio.h>
void indian(); // declare
void french();
int main(){
    char ch;
    printf("enter the character i or f :");
    scanf("%c",&ch);
    
    if(ch=='i'){
            indian(); // call
        
    }
    else{
         french(); //call
    }
}
    void indian(){  //defination
        printf("jay shree ram");
    }
    void french(){
        printf("banjor");
    }
    
    
