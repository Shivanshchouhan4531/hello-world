/write a program to calculate the persentage of student and division
#include<stdio.h>
int main(){
    int per, m1,m2,m3,m4,m5;
    printf("enter five marks of each subjects :");
    scanf("%d %d %d %d %d",&m1,&m2,&m3,&m4,&m5);
    
    per=((m1+m2+m3+m4+m5)/5);
    printf("your total persantage is :%d\n",per);
    
    if(per>75){
        printf("first division");
        
    }
    else {
        if (per<75&&per>45){
            printf("second division");
        }
        else if(per <45&& per>33){
            printf("third division");
            
        }
        else {
            printf("fail!!!!");
        }
    }
        return 0;
}

output:-
      enter five marks of each subjects :98 97 96 95 94
      your total persantage is :96
      first division
