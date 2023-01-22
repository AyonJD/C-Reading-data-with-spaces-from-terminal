#include <iostream>
#include <string> //To allow this program to store string

int main(){

    // Printing error message
    std::cerr << "Something went wrong" << std::endl;

    // Printing log message
    std::clog << "This is the log message" << std::endl;

    std::string first_name;
    int age;

    // Printing in sonsole (terminal)
    std::cout << "Please enter your name and age seperate with space" << std::endl;

    // Reading from terminal
    std::cin >> first_name;
    std::cin >> age;

    std::cout << "Your name is " << first_name << " & age is " << age << std::endl;

    return 0;
}