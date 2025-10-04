#include<stdio.h>
int main ()
{
    //   calculate the sum of first n natural numbers
int i,n,sum;
printf("Enter a number upto which you want to calculate the sum: ");
scanf("%d",&n);
for (i=1; i<=n; i++)
{
sum+=i;
}
printf("Sum of First %d numbers is = %d",n,sum);
}
