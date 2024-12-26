#include <stdio.h>
#include <math.h>

int main() {
    int gratingline = 15000, n;
    double L, orderdis, x, theeta, lambda;

    // Input the distance between the screen and grating
    printf("Enter the distance between screen and grating (L in meters): ");
    scanf("%lf", &L); // Use %lf for double

    // Input the diffraction order number
    printf("Enter the diffraction order number (n): ");
    scanf("%d", &n); // Use & to get the address

    // Input the distance between left and right spots
    printf("Enter distance between left and right spots (orderdis in meters): ");
    scanf("%lf", &orderdis); // Use %lf for double

    // Calculate the half distance for x
    x = orderdis / 2.0; // Ensure calculation uses double

    // Calculate the diffraction angle in radians
    theeta = atan(x / L);

    // Print the diffraction angle in radians
    printf("Diffraction angle (in radians) = %6.10f\n", theeta);

    // Convert and print the diffraction angle in degrees
    double theta_degrees = theeta * (180.0 / M_PI);
    printf("Diffraction angle (in degrees) = %6.10f\n", theta_degrees);

    // Calculate the wavelength using the formula
    lambda = (sin(theeta)) / (gratingline * n);

    // Print the wavelength
    printf("Wavelength = %e meters\n", lambda); // Using %e for scientific notation

    return 0; // Return success
}
