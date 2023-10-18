 // write a program to print 5 to 50 odd nmbers using continue statment
#include<stdio.h>
int main (){
    
    int i;
    for(i=5;i<=50;i++){
        if(i%2==0){
            continue ;
            
        }
        printf("%d\n",i);
    }
     
    return 0;
}
