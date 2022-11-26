#include <iostream>
#include<string>
#include"person.hpp"
using namespace std;

int main(int argc, char *argv[])
{
    Person<string,int> ob1("lucy",100);
    ob1.showPerson();
    return 0;
}
