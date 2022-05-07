// Started at 9:58 5-7-2022

// Section 11
// Math examples

#include <iostream>
#include <cmath>        // required

using namespace std;

int main() {
    
    double num {};
    
    cout << "Enter a number (double): ";
    cin >> num;
    
    cout << "The sqrt of " << num << " is: " << sqrt(num) << endl;
    cout << "The cubed root of " << num << " is: " << cbrt(num) << endl;
    
    cout << "The sine of " << num << " is: " << sin(num) << endl;
    cout << "The cosine of " << num << " is: " << cos(num) << endl;
    
    cout << "The ceil of " << num << " is: " << ceil(num) << endl;
    cout << "The floor of " << num << " is: " << floor(num) << endl;
    cout << "The round of " << num << " is: " << round(num) << endl;
    
    
    double power {};
    cout << "\nEnter a power to raise " << num << " to: ";
    cin >> power;
    cout << num << " raised to the " << power << " power is: " << pow(num, power) << endl;
    
    
    cout << endl;
    return 0;
}

// Section 11
// Random Numbers

#include <iostream>
#include <cstdlib>      // required for rand()
#include <ctime>        // required for time()

using namespace std;

int main() {
    
    int random_number {};
    size_t count {10};      // number of random numbers to generate
    int min {1};            // lower bound (inclusive)
    int max {6};            // upper bound (inclusive)
    
    // seed the random number generator
    // If your don't seed the generator you will get the same requence random numbers every run
    
    cout << "RAND_MAX on my system is: " << RAND_MAX << endl;
    srand(time(nullptr));
    
    
    for(size_t i{1}; i<=count; ++i) {
        random_number = rand() % max + min;     // generate a random number [min, max]
        cout << random_number << endl;
    }
    
    cout << endl;
    return 0;
}

// Section 11
// Function Defintions
// Area of Circle and Volume of a Cylinder
#include <iostream>

using namespace std;

const double pi {3.14159};
double calc_area_circle(double radius) {
    return pi * radius * radius;
}


double calc_volume_cylinder(double radius, double height) {
    return calc_area_circle(radius) * height;
}

void area_circle() {
    double radius{};
    cout << "\nEnter the radius of the circle: ";
    cin >> radius;
    cout << "The area of a circle with radius " << radius << " is " << calc_area_circle(radius) << endl;
}

void volume_cylinder () {
    double radius{};
    double height{};
    cout << "\nEnter the radius of the cylinder: ";
    cin >> radius;
    cout << "\nEnter the height of the cylinder: ";
    cin >> height;
    
    cout << "The volume of a cylinder with radius " << radius << " and height " << height << " is " << calc_volume_cylinder(radius, height) << endl;
}

int main() {    
    
    area_circle();
    area_circle();
    volume_cylinder();
    
    return 0;
}

// Ended at 12:01 5-7-2022
