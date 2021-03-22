#ifndef PERSON_H
#define PERSON_H

#include <string>

class Person{
    private:
        std::string name;
        int age;

    public:
        Person(std::string name, int age);
        virtual std::string introduce();
        std::string getName();
        

};

#endif