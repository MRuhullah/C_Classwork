#include <stdio.h>
float conversion(float faren)
{
    int cel;
    cel = (5/9)*(faren - 32);
    return cel;
}
int main()
{
    float faren;
    printf("Enter a Temp To Convert: ");
    scanf("%f\n",&faren);
    printf("The Temp in Farenhiet is : %2f and in Celcius is : %2f",faren,conversion(faren));
    return 0;
}