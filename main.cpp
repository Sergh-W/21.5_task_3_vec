#include <iostream>
#include <cmath>

struct Vector
{
    double x = 0.00;
    double y = 0.00;
    double z = 0.00;

    void scale (double valX,double valY,double valZ)
    {
        valX *= valZ;
        valY *= valZ;
        std::cout << "Result = " << valX << ", " << valY << std::endl;
    }

    void length (double valX,double valY)
    {
        double len = std::pow(valX, 2) + std::pow(valY, 2);
        len = std::sqrt(len);
        std::cout << "Vector length = " << len << std::endl;
    }

    void normalize (double valX,double valY)
    {
        double len = std::pow(valX, 2) + std::pow(valY, 2);
        len = std::sqrt(len);
        double norm = std::pow ((valX / len), 2) + std::pow ((valY / len), 2);
        std::cout << "Result = " << norm << std::endl;
    }
};

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
        std::cout << "Result = " << vec1.x + vec2.x << ", " << vec1.y + vec2.y << std::endl;
    }

    if (command == "subtract") {
        Vector vec1;
        Vector vec2;
        std::cout << "Enter the x and y coordinate values of the first vector (separated by a space): ";
        std::cin >> vec1.x >> vec1.y;
        std::cout << "Enter the x and y coordinate values of the second vector (separated by a space): ";
        std::cin >> vec2.x >> vec2.y;
        std::cout << "Result = " << vec1.x - vec2.x << ", " << vec1.y - vec2.y << std::endl;
    }

    if (command == "scale") {
        Vector vec;
        std::cout << "Enter the x and y coordinate values of the vector and value of scalar (separated by a space): ";
        std::cin >> vec.x >> vec.y >> vec.z;
        vec.scale(vec.x, vec.y, vec.z);
    }

    if (command == "length") {
        Vector vec;
        std::cout << "Enter the x and y coordinate values of the vector (separated by a space): ";
        std::cin >> vec.x >> vec.y;
        vec.length(vec.x, vec.y);
    }

    if (command == "normalize") {
        Vector vec;
        std::cout << "Enter the x and y coordinate values of the vector (separated by a space): ";
        std::cin >> vec.x >> vec.y;
        vec.normalize(vec.x, vec.y);
    }

    else if (command != "add" && command != "subtract" && command != "scale"
                              && command != "length" && command != "normalize")
    {
        std::cerr << "You entered an invalid command!" << std::endl;
    }

    return 0;
}