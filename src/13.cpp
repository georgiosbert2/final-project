// C++ program to demonstrate how to use std::function with bind

#include <iostream>
#include <functional>

int main() {
    // declare a function object with a void return type and two arguments of type int and string
    std::function<void(int, const std::string&)> f = [](int x, const std::string& y) {
        // code to be executed goes here
        std::cout << "The values are: " << x << ", " << y << std::endl;
    };
    
    // bind the function object to a specific instance of an object and call it with arguments
    MyObject obj;
    f = std::bind(f, &obj, _1); // binds the first argument to the object
    f(5, "Hello");              // calls the function object with the bound instance and two arguments
    
    return 0;
}