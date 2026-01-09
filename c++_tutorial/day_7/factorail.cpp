//factorial

//5! = 5 * 4*3*2*1; = 120

#include<iostream>

int factorial(int n){//5/4/3/2

    int fact = 1;//1 * 5 = 5* 4 =20 * 3 = 60 * 2 = 120 * 1 = 120 
    while( n >=1 ){
        fact = fact * n;
        n--;
    }
    return fact;
}
int main(){
    std::cout <<"print any number "<< std::endl;
    int n;
    std::cin >> n;
    std::cout << "factorial "<<  factorial(n)<<std::endl;

    return 0;
}