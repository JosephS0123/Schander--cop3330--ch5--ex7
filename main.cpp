#include <iostream>
#include <cmath>

int main() {

    double a, b, c, root1, root2, discriminant;
    std:: cout << "Enter coefficients a, b and c: ";
    std:: cin >> a >> b >> c;
    discriminant = b*b - 4*a*c;
    
    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2*a);
        root2 = (-b - sqrt(discriminant)) / (2*a);
        std:: cout << "Roots are real and different." << std::endl;
        std:: cout << "Root 1 = " << root1 << std::endl;
        std:: cout << "Root 2 = " << root2 << std::endl;
    }
    
    else if (discriminant == 0) {
        std:: cout << "Roots are real and the same." << std::endl;
        root1 = -b/(2*a);
        std:: cout << "x1 = x2 =" << root1 << std:: endl;
    }

    else {
        std::cout << "Roots are not real solutions."  << std::endl;
    }
}
