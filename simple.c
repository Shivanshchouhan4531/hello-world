// write the program of simple intrest for 3 set of values of principal
// find simple intrest 3 times
#include <stdio.h>

int main() {
    int t,p,i;
    float si,r;
  
    for(i=1;i<=3;i++){
             printf("enter principal,rate,and time:");
             scanf("%d %f %d",&p,&r,&t);
           
            si=p*t*r/100;
          printf("simple intrest is :%f\n",si);
    }
   
    return 0;
}
            output :- enter principal,rate,and time:10000 3 1 
                      simple intrest is :300.000000
                      enter principal,rate,and time:80000 3 1
                      simple intrest is :2400.000000
                      enter principal,rate,and time:10000 10 1 
                      simple intrest is :1000.000000
