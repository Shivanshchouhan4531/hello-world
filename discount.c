// write a program to calculate the dicount on the items
#include <stdio.h>

int main() {
    
    int qty,dis ;
    float total,rate;
    // here the rate is = price * items quantity for 1 item
    printf("enter the quantity his rate: ");
    scanf("%d %f",&qty,&rate);
    
    if (qty >1000){
        dis=10;
    }
    else {
        dis=0;
    }
        
       // here the qty is a price of a one item and the rate is number of items
    total=(qty*rate )-(qty*rate*dis/100);
    printf("the total amount is :%f",total);
    
    

    return 0;
}

outout is :- 
            enter the quantity his rate: 2000 10
            the total amount is :18000.000000
