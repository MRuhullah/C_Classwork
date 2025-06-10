#include<stdio.h>
#include<math.h>
int main()
{
    // Program to Find Roots of Quadratic eqns ax^2 + bx + c and display them
    float a,b,c;
    float d,p,q;
    printf("Enter the Coefficent of x^2 \n");
    scanf("%f",&a);
    printf("Enter the Coefficent of x\n");
    scanf("%f",&b);
    printf("Enter the value of constant\n");
    scanf("%f",&c);
    d=sqrt((b*b)-4*(a*c));
    if (d>0)
    {
        printf("the roots are real and distinct and are %.2f and %.2f",-b+d/(2*a),-b-d/(2*a));
    }
    else if (d==0)
    {
        printf("the roots are real and are %.2f and %.2f",-b/(2*a),-b/(2*a));
    }
    else if (d<0)
    {
        p=-b/(2*a);
        q=sqrt(d)/(2*a);
        printf("the roots are imaginary and are %.2f+i%.2f and %lf-i%lf",p,q,p,q);
    }
    else
    {
        printf("Values not valid for calculation ");
    }
    return 0;
}