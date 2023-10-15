//conversion of distanse
 #include<stdio.h>
 int main(){
     float km ,m ,cm,ft,inch;
     printf("enter distance in km");
     scanf("%d",&km);
     //1km= 1000m
m=km*1000;
     //1m=100cm
cm=m*100;
     //1inch=m/2.54
inch=cm/2.54;
     //1ft=inch/12
ft=inch/12;
 printf("distance in meter :%f\n",m);
 printf("distance in cm :%f\n",cm);
 printf("distance in inch :%f\n",inch);
 printf("distance in ft :%f\n",ft);
 
 return 0;
 
 }
