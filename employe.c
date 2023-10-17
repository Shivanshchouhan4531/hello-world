//find the gross salary of imployee
#include<stdio.h>
int main(){
    int bs,hra,da,gs;
    
    printf("enter the basic salary:");
    scanf("%d",&bs);
    
    if(bs<1500){
        hra =bs*10/100;
        da = bs*90/100;
    }
    else{
        hra=500;
        da= bs*98/100;
    }
        
    gs=hra+da+bs;
        printf("gross salary is : %d",gs);
        
        return 0;
}
outout :-
       enter the basic salary:2000
       gross salary is : 4460
