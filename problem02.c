#include <stdio.h>
#include <math.h>
int main() {


double green_wavelength = 530.0;
    double green_angle = 65.0;
    int green_order = 3;
    double red_wavelength = 700.0;
    int red_order = 2;





  double green_angle_radian = green_angle * (3.14159 / 180.0);

    double d = (green_order * green_wavelength) / sin(green_angle_radian);

    double sin_theta_redian = (red_order * red_wavelength) / d;

    double red_angle_radian = asin(sin_theta_redian);

    double red_angle = red_angle_radian * (180.0 / 3.14159);

    printf("The angle of red light is: %.1f Degree\n", red_angle);



    return 0;
}
