#include <stdio.h>
#define PI 3.14159
#define ar_sq(s) ((s) * (s))
#define ar_cir(r) (PI * (r) * (r))
#define ar_tri(b, h) (0.5 * (b) * (h))

int main() {
    float side, radius, base, height;

   
    printf("Enter side of square: ");
    scanf("%f", &side);
    printf("Area of square is = %.2f\n",  ar_sq(side));

   
    printf("Enter radius of circle: ");
    scanf("%f", &radius);
    printf("Area of circle is = %.2f\n", ar_cir (radius));
    

    
    printf("Enter base and height of triangle: ");
    scanf("%f%f", &base, &height);
    printf("Area of triangle is = %.2f\n", ar_tri(base, height));

    return 0;
}