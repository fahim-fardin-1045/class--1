#include<stdio.h>
#define pi 3.1416
int main()
{
  double length,breadth,radius,area_rectangle,perimeter_rectangle,area_circle,circumference_circle;
  
  printf("enter the length");
  scanf("%lf",&length);
  
  printf("enter the breadth");
  scanf("%lf",&breadth);
  
  printf("enter the radius");
  scanf("%lf",&radius);
  
  area_rectangle = length * breadth ;
  perimeter_rectangle = 2 * (length+breadth);
  area_circle = pi * radius*radius;
  circumference_circle = 2*pi*radius;
  
  printf("area of rectangle = %.2lf\n",area_rectangle);
  printf("perimeter of rectangle = %.2lf\n ",perimeter_rectangle);
  printf("area of circle = %.2lf\n",area_circle);
  printf("perimeter of rectangle = %.2lf\n",circumference_circle);
  
  return 0;
  
}
