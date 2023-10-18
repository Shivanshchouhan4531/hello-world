// write the program of simple intrest for 3 set of values of principal
// find simple intrest 3 times
#include <stdio.h>

int main() {
    int t,p;
    float si,r;
      int i =1;
    while(i<=3){
             printf("enter principal,rate,and time:");
             scanf("%d %f %d",&p,&r,&t);
           
            si=p*t*r/100;
          printf("simple intrest is :%f\n",si);
          i++;
    }
   
    return 0;
}
