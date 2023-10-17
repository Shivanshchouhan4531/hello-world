// find the year is leap year or not 
#include <stdio.h>
int main(){
    int year ;
    printf("enter any  year :");
    scanf("%d",&year);
    
    if(year %4==0){
        printf("year is a leap year ");
    }
    else{
        printf("year is not a leap year ");
    }
    return 0;
}
output :-
        enter any  year :2024
        year is a leap year 
