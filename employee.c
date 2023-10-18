// if a company have 10 employes some work above 40 hours and some not .how grt otp he got 120 per hour
// determinr overtimr pay --> otp of 10 employe
#include<stdio.h>
int main(){
    float otp;
    int hour, i=1;
    
    while(i<=10){
        printf("enter your hours:");
        scanf("%d",&hour);
        if(hour>=40){
            // here if the employe work above 40 hours then he got 120 per hour
            // otp = hour -40 , 1hous = 120
            otp=(hour-40)*120;
        }
        else{
            otp=0;
        }
        printf("hour=%d overtime pay =rs.%f\n",hour,otp);
        i++;
    }
    return 0;
}
