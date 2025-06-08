#include <stdio.h>
#include <math.h>

int main(){

    double radius = 0.0;
    double area = 0.0;
    double surface_area = 0.0;
    double volume = 0.0;
    const double pi = 3.14159; // const, means constant, can't change this value

    printf("Enter the radius: ");
    scanf("%lf", &radius);
    
    area = pi * pow(radius, 2);
    surface_area = 4 * pi * pow(radius, 2);
    volume = (4.0/3.0) * pi * pow(radius, 3);

    printf("Area (2d): %.2lfcm\n", area);
    printf("Surface area (3d): %.2lfcm\n", surface_area);
    printf("Volume: %.2lfcm", volume);

    return 0;
}