//
// Created by aoi on 2020/1/3.
//
#include <iostream>
#include <string>

int main() {

    std::cout << "Please enter your first name: ";
    std::string name;
    std::cin >> name;
    const std::string greeting = "Hello, "+name+"!";
    // generate other lines
    const std::string spaces(greeting.size(),' ');
    const std::string second = "* "+spaces +" *";
    const std::string first(second.size(), '*');

    //output all lines
    std::cout << std::endl;
    std::cout << first << std::endl;
    std::cout <<second << std::endl;
    std::cout << "* " <<greeting <<" *"<<std::endl;
    std::cout <<second << std::endl;
    std::cout << first << std::endl;
    return 0;
}
