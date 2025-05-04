#include <iostream>
#include <cmath>

struct Vector
{
    double x = 0.00;
    double y = 0.00;
    double z = 0.00;
};

void add (double &x, double &y, double &x2, double &y2)
{
    std::cout << "Result = " << x + x2 << ", " << y + y2 << std::endl;
}

void subtract (double &x, double &y,double &x2, double &y2)
{
    std::cout << "Result = " << x - x2 << ", " << y - y2 << std::endl;
}

void scale (double &x,double &y,double &z)
{
    x *= z;
    y *= z;
    std::cout << "Result = " << x << ", " << y << std::endl;
}

void length (double &x, double &y)
{
    double len = std::pow(x, 2) + std::pow(y, 2);
    len = std::sqrt(len);
    std::cout << "Vector length = " << len << std::endl;
}

void normalize (double &x, double &y)
{
    double len = std::pow(x, 2) + std::pow(y, 2);
    len = std::sqrt(len);
    double norm = std::pow ((x / len), 2) + std::pow ((y / len), 2);
    std::cout << "Result = " << norm << std::endl;
}

int main() {
    std::string command;
    std::cout << std::endl;
    std::cout << "******************************************************************************" << std::endl;
    std::cout << "Hello. Enter one of the commands:" << std::endl;
    std::cout << "Adding two vectors - 'add';\n"
                 "Subtracting two vectors - 'subtract';\n"
                 "Multiplying a vector by a scalar - 'scale';\n"
                 "Finding the length of a vector - 'length';\n"
                 "Normalizing a vector - 'normalize'." << std::endl;
    std::cout << "******************************************************************************" << std::endl;
    std::cout << "!!! If you enter an invalid command, the program will automatically terminate." << std::endl;
    std::cout << "******************************************************************************" << std::endl;
    std::cout << "Your command: ";
    std::cin >> command;

    if (command == "add") {
        Vector vec1;
        Vector vec2;
        std::cout << "Enter the x and y coordinate values of the first vector (separated by a space): ";
        std::cin >> vec1.x >> vec1.y;
        std::cout << "Enter the x and y coordinate values of the second vector (separated by a space): ";
        std::cin >> vec2.x >> vec2.y;
        add(vec1.x, vec1.y, vec2.x, vec2.y);
    }

    if (command == "subtract") {
        Vector vec1;
        Vector vec2;
        std::cout << "Enter the x and y coordinate values of the first vector (separated by a space): ";
        std::cin >> vec1.x >> vec1.y;
        std::cout << "Enter the x and y coordinate values of the second vector (separated by a space): ";
        std::cin >> vec2.x >> vec2.y;
        subtract( vec1.x, vec1.y, vec2.x, vec2.y);
    }

    if (command == "scale") {
        Vector vec;
        std::cout << "Enter the x and y coordinate values of the vector and value of scalar (separated by a space): ";
        std::cin >> vec.x >> vec.y >> vec.z;
        scale(vec.x, vec.y, vec.z);
    }

    if (command == "length") {
        Vector vec;
        std::cout << "Enter the x and y coordinate values of the vector (separated by a space): ";
        std::cin >> vec.x >> vec.y;
        length(vec.x, vec.y);
    }

    if (command == "normalize") {
        Vector vec;
        std::cout << "Enter the x and y coordinate values of the vector (separated by a space): ";
        std::cin >> vec.x >> vec.y;
        normalize(vec.x, vec.y);
    }

    else if (command != "add" && command != "subtract" && command != "scale"
                              && command != "length" && command != "normalize")
    {
        std::cerr << "You entered an invalid command!" << std::endl;
    }

    return 0;
}
