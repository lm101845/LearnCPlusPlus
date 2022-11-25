#include <iostream>

using namespace std;

class Complex{
public:
    Complex(int flag){
        this->flag = flag;
    }
    Complex& operator+=(Complex& complex){
        this->flag = this->flag + complex.flag;
        return *this;
    }
    bool operator&&(Complex& complex){
        return this->flag && complex.flag;
    }
public:
    int flag;
};
int main(){

    Complex complex1(0);  //flag 0
    Complex complex2(1);  //flag 1

    //原来情况，应该从左往右运算，左边为假，则退出运算，结果为假
    //这边却是，先运算（complex1+complex2），导致，complex1的flag变为complex1+complex2的值， complex1.a = 1
    // 1 && 1
    //complex1.operator&&(complex1.operator+=(complex2))
    if (complex1 && (complex1 += complex2)){
        //complex1.operator+=(complex2)
        cout << "真!" << endl;
    }
    else{
        cout << "假!" << endl;
    }

    return EXIT_SUCCESS;
}
