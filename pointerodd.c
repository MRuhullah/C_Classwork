#include<stdio.h>
int main()
{
int n, i;
printf("Enter the number that represents total no. of elements in the array: ");
scanf("%d", &n);
int a[n];
printf("\nEnter %d elements of the array: \n", n);
for(i = 0; i<n; i++)
{
scanf("%d", &a[i]);
}
int *ptr = a;
printf("The even numbers of array are: \n");
for(i = 0; i<n; i++)
{
if(*(ptr+i) % 2 != 0)
{
printf("a[%d]: %d \n", i, *(ptr+i)); }
}
return 0;
}