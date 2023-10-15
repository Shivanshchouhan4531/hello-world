#include<stdio.h>
 int main() {
     int p;
     float t,r,si;
        printf("enter the pricipal\ntime\nrate\n:");
        scanf("%d%f%f",&p,&t,&r);
   si=(p*t*r)/100;
       printf("intrest is %f\n",si);
return 0;
 }
