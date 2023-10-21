// write a program using recursion and convert theferenhite inta a celcius
#include<stdio.h>
float feran(float celcius); // define
int main(){
   float celcius;
    printf("enter the celcius:");
    scanf("%f",&celcius);
    
    printf("feranhite  is :%f",feran(celcius)); // call
    return 0;
}
float feran(float celcius){
               float feranhite;
               feranhite=celcius * 9/5 +32; // formula
               return feranhite;
}
