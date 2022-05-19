#include <stdio.h>
int main()
{
double subject_1,subject_2,subject_3,subject_4,subject_5,aggregate,percentage;

printf("Enter the number of subject_1 = ");
scanf("%lf",&subject_1);
printf("Enter the number of subject_2 = ");
scanf("%lf",&subject_2);
printf("Enter the number of subject_3 = ");
scanf("%lf",&subject_3);
printf("Enter the number of subject_4 = ");
scanf("%lf",&subject_4);
printf("Enter the number of subject_5 = ");
scanf("%lf",&subject_5);

aggregate = subject_1 + subject_2 +subject_3 + subject_4 + subject_5;
percentage = aggregate*(100.00/500.00);

printf("aggregate mark = %lf\n",aggregate);
printf("percentage of student =%.2lf\n",percentage);


return 0;
}
