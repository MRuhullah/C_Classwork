#include<stdio.h>
int main()
{
    char op;
    double num1,num2;
    printf("enter the operator (+,-,/,*)");
    scanf("%c",&op);
    printf("Enter the operands");
    scanf("%lf %lf",&num1 , &num2);
    switch (op)
    {
        case '+':
        
            printf("result %lf",num1+num2);
            break;
        
        case '-':
        
            printf("result %lf",num1-num2);
            break;
        
        case '/':
        
            printf("result %lf",num1/num2);
            break;
        
        case '*':
        
            printf("result %lf",num1*num2);
            break;
        
    }
    return 0;
}