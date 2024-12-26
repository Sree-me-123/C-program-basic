#include <stdio.h>
#include <math.h>

int main() {
    int gratingline = 15000, n;
    float L, orderdis, x, theeta;
    double lambda;

    // Input the distance between the screen and grating
    printf("Enter the distance between screen and grating (L): ");
    scanf("%f", &L); 

    // Input the diffraction order number
    printf("Enter the diffraction order number (n): ");
    scanf("%d", &n);

    // Input the distance between left and right spots
    printf("Enter distance between left and right spots (orderdis): ");
    scanf("%f", &orderdis); 

    // Calculate the half distance for x
    x = orderdis / 2;

    // Calculate the diffraction angle (in radians)
    theeta = atan(x / L);

    // Print the diffraction angle in degrees
    printf("Diffraction angle (in radians) = %6.4f\n", theeta);
    printf("Diffraction angle (in degrees) = %6.3f\n", theeta * (180.0 / M_PI));


    // Calculate the wavelength using the formula
    lambda = (sin(theeta)) / (gratingline * n);

    // Print the wavelength
    printf("Wavelength = %lf\n", lambda);
    printf("Wavelength = %e meters\n", lambda);

    return 0; 
}
