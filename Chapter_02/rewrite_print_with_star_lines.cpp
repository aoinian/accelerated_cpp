//
// Created by aoi on 2020/1/3.
//
#include <iostream>
#include <string>
using std::cin;
using std::endl;
using std::cout;
using std::string;

int main() {
    //请求用户输入
    cout << "Please enter your first name: ";
    //读入用户输入的姓名
    string name;
    cin >> name;
    //构造输出的信息
    const string greeting = "Hello, " + name + " !";
    //围住问候语的空白个数
    const int pad = 1;
    //待输出的行数与列数
    const int rows = pad * 2 + 3;
    const string::size_type cols = greeting.size() + pad * 2 + 2;
    //输出一个空白行，把输入和输出分开
    cout << endl;
    //输出 rows 行
    //不变式：导目前为止，我们已经输出了 r 行
    for (int r = 0; r != rows; ++r) {
        string::size_type c = 0;
        //不变式：到目前为止，在当前行中我们已经输出了 c 个字符
        while (c != cols)
            //应该输出问候语了吗？
            if (r == pad + 1 && c == pad + 1) {
                cout << greeting;
                c += greeting.size();
            } else {
                //我们位于边界上吗？
                if (r == 0 || r == rows - 1 || c == 0 || c == cols - 1)
                    cout << "*";
                else
                    cout << " ";
                ++c;
            }
         cout << endl;
    }

    return 0;
}
//    std::cout << "Please enter your first name: ";
//    std::string name;
//    std::cin >> name;
//    const std::string greeting = "Hello, "+name+"!";
//    // below needs to edit
//    const int pad = 1;
//    const int rows = pad * 2 + 3;
//    //把输入和输出分开
//    std::cout << std::endl;
//    //输出rows行
//    int r = 0;
//    while (r!=rows){
//        const std::string::size_type cols = greeting.size()+pad*2+2;
//        std::string::size_type c = 0;
//        while (c != cols){
//            //输出一个（或多个）字符
//            //修改C的值，保持不变式的真实性
//            if (c == 0 || r == rows -1 || c == 0 || c == cols -1){
//                std::cout << "*";
//                ++c;
//            }else{
//                //输出一个以上的非边界字符
//                //修改C的值，保持不变式的真实性
//                if (r == pad +1 && c == pad + 1){
//                    std::cout << greeting;
//                    c += greeting.size();
//                }else{
//                    std::cout << " ";
//                    ++c;
//                }
//
//            }
//        }
//        std::cout << std::endl;
//        ++r;
//    }
