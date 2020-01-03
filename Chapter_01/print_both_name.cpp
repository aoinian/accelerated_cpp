//
// Created by aoi on 2020/1/3.
//
#include <iostream>
#include <string>
int main(){
    std::cout << "What is your name?"<< std::endl; //加入std::endl使得输入换行
    std::string name;
    std::cin >> name;
    std::cout << "Hello, " << name
              << std::endl << "And what is yours?";
    std::cin >> name;
    std::cout << "Hello, " << name
              << "; \nnice to meet you too!" << std::endl;
    return 0;
}
