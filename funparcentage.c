// take markes and give the parcentage 
#include<stdio.h>
int parcent(int science, int maths ,int english,int hindi,int sst,int sanskrit);
int main(){
    printf("the parcentage isn:%d\n",parcent(98,95,94,97,94,96)); // actual parameter
    return 0;
}
int parcent(int a,int b,int c,int d,int e,int f){ //formal parameter 
    return (a+b+c+d+e+f)/6;
}
