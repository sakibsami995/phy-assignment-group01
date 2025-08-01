#include <stdio.h>
#include <math.h>



void calculation(double *m, double *theta, double *d, double *lambda) {

    printf("Enter the value of m : ");
    scanf("%lf", m);
    printf("Enter the value of theta (degrees): ");
    scanf("%lf", theta);
    printf("Enter the value of d (um): ");
    scanf("%lf", d);

    double radian = (*theta) * (3.14159 / 180.0);
    *lambda = ((*d) * sin(radian)) / (*m) * 1000;
}





void print_color(double lambda) {
    printf("Wavelength: %.2f nm - Color: ", lambda);

    if (lambda >= 380 && lambda < 450) {
        printf("Violet");
    } else if (lambda >= 450 && lambda < 485) {
        printf("Blue");
    } else if (lambda >= 485 && lambda < 500) {
        printf("Cyan");
    } else if (lambda >= 500 && lambda < 565) {
        printf("Green");
    } else if (lambda >= 565 && lambda < 590) {
        printf("Yellow");
    } else if (lambda >= 590 && lambda < 625) {
        printf("Orange");
    } else if (lambda >= 625 && lambda <= 750) {
        printf("Red");
    } else {
        printf("Not in visible spectrum");
    }
    printf("\n");
}


int main() {
    double m, theta, d, lambda;

    calculation(&m, &theta, &d, &lambda);

    print_color(lambda);

    return 0;
}
