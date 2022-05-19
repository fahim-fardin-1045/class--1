#include <stdio.h>
int main()
{
double fahrenheit,centigrade;
printf("enter temperature of city in fahrenheit = ");
scanf("lf",&fahrenheit);

centigrade = (5.0/9.0)*(fahrenheit-32);
printf ("temperature = %lf",centigrade);

return 0;
}
