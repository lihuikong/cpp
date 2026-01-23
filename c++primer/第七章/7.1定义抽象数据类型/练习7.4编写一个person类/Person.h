#ifndef PERSON_H
#define PERSON_H
#include<string>

class Person{
    private:
    std::string Name;
    std::string Address;

    public:
    Person(std::string n , std::string addr);

    void printInfo();
};
#endif