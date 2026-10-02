#include<stdio.h>

int main(){

double area,radius;
const double PI=3.142;

printf("please input radius:");
scanf("%lf",&radius);
area=PI*radius*radius;
printf("The area is %.2lf",area);


return 0;
}
