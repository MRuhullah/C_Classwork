#include<stdio.h>
int main()
{
    double units;
    printf("Enter the number of Units : ");
    scanf("%lf",&units);
    
    if (units<=50 )
    {
        printf("Bill = Rs %lf",units*0.5);
    }
    else if (units<=100 )
    {
        printf("Bill = Rs %lf",50*0.5+(units-50)*1);
    }
    else if (units<=150 )
    {
        printf("Bill = Rs %lf",50*0.5 + 50*1 + (units -100)*1.5 );
    }
    else if (units<=200 )
    {
        printf("Bill = Rs %lf",50*0.5 + 50*1 + 50*1.5 + (units-150)*2);
    }
    else if (units>200)
    {
        printf("Bill = Rs %lf",50*0.5 + 50*1 + 50*1.5 + 50*2 + (units-200)*5);
    }
    else{
        printf("plz try again later");
    }
}