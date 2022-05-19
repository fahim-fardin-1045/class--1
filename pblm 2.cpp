#include <stdio.h>
int main()
{
double km,meter,feet,inches,centimeters;

printf("Enter the distance between Mirpur to Ashulia = ");
scanf("%lf",&km);

meter = km * 1000;
feet = km * 3280.8399;
inches = km * 39370.078;
centimeters = km * 100000;

printf("Distance in meter from Mirpur to Ashulia:%.2lf\n",meter);
printf("Distance in feet from Mirpur to Ashulia:%.2lf\n",feet);
printf("Distance in inches from Mirpur to Ashulia:%.2lf\n",inches);
printf("Distance in centimeter from Mirpur to Ashulia:%.2lf\n",centimeters);

return 0;
}
