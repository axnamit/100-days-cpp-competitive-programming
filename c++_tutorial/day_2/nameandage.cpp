//Take name & age, print formatted output

#include<iostream>
#include<string>

int main(){
    std::string name;
    int age;
    std::cout << "Enter your name " << std::endl;
    std::cin >> name ;
    std::cout << "Enter your age " << std::endl;
    std::cin >> age ;
    std::cout << "Hey your name is " << name << " and your age is " << age << std::endl;
    return 0;
}