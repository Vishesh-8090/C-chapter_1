// inputs suplied by the user! program.

#include <stdio.h>

int main()
{
    int radius;
    float pi = 3.14;

    printf("The radius of the circle is (in cm) = \n");
    scanf("%d", &radius);

    printf("The area of the Cirle is %f cm^2. \n", pi * radius * radius);
    int height;
    
    printf("The height of the cylinder is (in cm) = \n");
    scanf("%d", &height);
    
    printf("Volume of the Cylinder %f cm^3.", pi * radius * radius * height);
    return 0;
}