#include <stdio.h>

#define PI 3.14


/**
 * deameter - finds diameter of circle.
 * @radius - radius of circle.
 *
 * Return(int): diameter of circle.
 */
double diameter(double radius){
    return (radius * 2);
}


/**
 * circumference - finds circumference of circle.
 * @radius - radius of circle.
 *
 * Return(int): circumference of circle.
 */
double circumference(double radius){
    return (2 * PI * radius);
}


/**
 * area - finds area of circle.
 * @radius - radius of circle.
 *
 * Return(int): area of circle.
 */
double area(double radius){
    return (PI * radius * radius);
}


//------------------------------------------------
// main program
int main(void) {
    double radius;
    printf("Enter radius of the circle: ");
    if (scanf("%lf", &radius) == 1) {
        printf("Diameter = %.2f\n", diameter(radius));
        printf("Circumference = %.2f\n", circumference(radius));
        printf("Area = %.2f\n", area(radius));
    }
    return 0;
}

