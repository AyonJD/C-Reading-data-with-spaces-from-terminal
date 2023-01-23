#include <iostream>
#include <string> //To allow this program to store string

int main(){
/*
    // Printing error message
    std::cerr << "Something went wrong" << std::endl;

    // Printing log message
    std::clog << "This is the log message" << std::endl;

    // Printing in sonsole (terminal)
    std::cout << "Please enter your name and age seperate with space" << std::endl;
*/

    std::string first_name;
    int age;
    
    // Reading from terminal in multiple line
    // std::cin >> first_name;
    // std::cin >> age;
    // We can get data of first_name and age from one line input with seperated with space
    // std::cin >> first_name >> age

    // Reading from terminal in one compact line
    std::string full_name;

    std::cout << "Please enter your Full Name and Age: " << std::endl;
    std::getline(std::cin, full_name);
    std::cin >> age;

    std::cout << "Your name is " << full_name << " & age is " << age << std::endl;

    return 0;
}