//
// Created by aoi on 2020/1/3.
//
//请求某人输入其姓名，然后向这个人发出问候
#include <iostream>
#include <string>

int main()
{
//请某人输入其姓名
    std::cout << "Please enter your first name: ";
//读姓名
    std::string name; //定义变量name
    std::cin >> name; //把姓名读进name
//输出对这个人的问候语
    std::cout << "Hello, " << name << "!" <<std::endl;
    return 0;
}
