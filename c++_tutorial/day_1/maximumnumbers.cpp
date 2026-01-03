#include<iostream>

int main (){
    // Take three numbers, print maximum
    int a,b,c;
    std::cout<< "Hey enter three numbers " << std::endl ;
    std::cin >> a >> b >> c;
    int max = a > b ? a > c ? a: c : b > c ? b : c ;
    std::cout << "Greater number is "<< max << std::endl;
    return 0;
}