#include <stdio.h>

int main()
{
double initial = 0, step = 0 , stop = 0 ;
do
{
printf("initial(m): ");
scanf("%lf",initial);
if (initial < 0 )printf("must be > 0");

}while(initial < 0)

do
{
printf("step(m): ");
scanf("%lf",step);
if (step <= 0 )printf("must be > 0");

}while(step <= 0)

do
{
printf("stop(m): ");
scanf("%lf",stop);
if (stop < 0 )printf("must be > 0");

}while(stop < 0)
printf("meters     feet");
printf("**********");
for (double conv = initial; conv <= stop; conv+=step)
{
printf("%-10.2f %-10.2f",conv,conv * 3.20884);
}
  printf("\n");
}
