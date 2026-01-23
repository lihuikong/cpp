#include "Person.h"
#include<iostream>

Person::Person(std::string n, std::string addr)
    :Name(n), Address(addr)
    {}

void Person::printInfo(){
    std::cout << "Name:" << Name << std::endl;
    std::cout << "Address:" << Address << std::endl;
}