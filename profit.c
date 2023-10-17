// find the profit and loss
#include <stdio.h>
int main(){
    float cp,sp,p,l;
printf("enter your cost price:");
scanf("%f",&cp);

printf("enter your selling price:");
scanf("%f",&sp);

p=sp-cp;
l=cp-sp;

if(p>0){
    printf("your are in a profit :%f\n",p);
    
}
if(p<0){
    printf("you are in a loss:%f\n",l);
    
}
if(p==0){
    printf("you are not in a profit and loss");
}
return 0;

}
output:-
  enter your cost price:2000
  enter your selling price:2500
  your are in a profit :500.000000
