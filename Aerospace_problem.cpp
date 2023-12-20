//Aerospace_problem
#include <iostream>
#include <cmath>
using namespace std;
// Function to calculate projectile trajectory
void calculateProjectileTrajectory(double initialVelocity, double launchAngle) {
    const double g = 9.81; // Acceleration due to gravity (m/s^2)
    // Convert launch angle to radians
    double launchAngleRad = launchAngle * M_PI / 180.0;
    // Calculate time of flight
    double timeOfFlight = (2.0 * initialVelocity * sin(launchAngleRad)) / g;
    // Calculate range
    double range = initialVelocity * cos(launchAngleRad) * timeOfFlight;
    // Calculate maximum height
    double maxHeight = pow(initialVelocity * sin(launchAngleRad), 2.0) / (2.0 * g);
    // Output results
    cout << "Projectile Trajectory Calculation\n";
    cout << "Initial Velocity: " << initialVelocity << " m/s\n";
    cout << "Launch Angle: " << launchAngle << " degrees\n";
    cout << "Time of Flight: " << timeOfFlight << " seconds\n";
    cout << "Range: " << range << " meters\n";
    cout << "Maximum Height: " << maxHeight << " meters\n";
}
int main() {
    // Input parameters
    double initialVelocity = 100.0; // Initial velocity in m/s
    double launchAngle = 45.0; // Launch angle in degrees
    // Calculates and displays projectile trajectory
    calculateProjectileTrajectory(initialVelocity, launchAngle);
    return 0;
}




