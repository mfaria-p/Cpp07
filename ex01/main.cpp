#include "iter.hpp"

//The function printElement takes a reference to an element of an array
//and prints the element to the standard output.

template <typename T>
void printElement(T &element) {
    std::cout << element << std::endl;
}

// The function incrementElement takes a reference to an element of an array
// and increments the element by 1.
template <typename T>
void incrementElement(T &element) {
    ++element;
}

// The function doubleElement takes a reference to an element of an array
// and doubles the element.
template <typename T>
void doubleElement(T &element) {
    element *= 2;
}

//The ++ and * operators works for numeric types like int, double, etc., 
//but it does not work and are not defined for std::string.

int main() {
    int intArray[] = {1, 2, 3, 4, 5};
    char charArray[] = {'a', 'b', 'c', 'd', 'e'};
    std::string stringArray[] = {"apple", "banana", "cherry", "date", "elderberry"};

    std::cout << "intArray:" << std::endl;
    iter(intArray, 5, printElement);
    std::cout << std::endl;

    std::cout << "charArray:" << std::endl;
    iter(charArray, 5, printElement);
    std::cout << std::endl;

    std::cout << "stringArray:" << std::endl;
    iter(stringArray, 5, printElement);
    std::cout << std::endl;

    std::cout << "Incrementing intArray:" << std::endl;
    iter(intArray, 5, incrementElement);
    iter(intArray, 5, printElement);
    std::cout << std::endl;

    std::cout << "Doubling intArray:" << std::endl;
    iter(intArray, 5, doubleElement);
    iter(intArray, 5, printElement);
    std::cout << std::endl;

    return 0;
}