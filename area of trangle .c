//Area = Square root of
//√s(s - a)(s - b)(s - c)
//where s is half the perimeter, or (a + b + c)/2.
//using sqrt()
#include<stdio.h>
#include<math.h>

int main(){
    float a,b,c,area,s;
    printf("enter side of tringle:");
    scanf("%f %f %f",&a,&b,&c);
    //half perimeter s
     s=(a+b+c)/2;
     //area of tringle using sqrt 
    area = sqrt(s*(s-a)*(s-b)*(s-c)); // pre define function uding math library
    printf("area of trangle is :%f",area);
    return 0;
}
    
