#ifndef ARTIST_H
#define ARTIST_H

#include <string>
#include "Person.h"

class Artist : public Person {
private:
    std::string genre;

public:
    Artist(std::string name, int age, std::string genre);
    std::string playMusic();
    std::string introduce(); //override
};

#endif