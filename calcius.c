// convert celcius to franhight
//°F = °C × (9/5)+32
#include <stdio.h>

int main() {
    // Write C code here
    float celcius ;
    float fer;
    
    printf("enter celcius");
    scanf("%f", &celcius);
    
    fer=(celcius*9/5)+32;
    printf("ferenhight =%f",fer);
    return 0;
}
