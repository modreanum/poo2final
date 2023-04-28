#include "client_card.h"

#include <iostream>


CLIENT_CARD::CLIENT_CARD(const char* name, int age, int years_since_joining)
        : CLIENT(name, age)
        , years_since_joining(years_since_joining)
{if (age < 18) {
throw UnderAgeException();
}}


//operator=
CLIENT_CARD& CLIENT_CARD::operator=(const CLIENT_CARD& other) {
    if (this != &other) {
        CLIENT::operator=(other);
        years_since_joining = other.years_since_joining;
    }
    return *this;
}

//cc
CLIENT_CARD::CLIENT_CARD(const CLIENT_CARD &d) : CLIENT(d.name,d.age), years_since_joining(d.years_since_joining) {}


CLIENT_TYPE CLIENT_CARD::GetClientType() const {
    return CLIENT_TYPE::CLIENT_CARD;
}


int CLIENT_CARD::get_years_since_joining() const {
    return years_since_joining;
}

void CLIENT_CARD::set_years_since_joining(const int &years_since_joining) {
    this->years_since_joining = years_since_joining;
}




std::ostream &operator<<(std::ostream &os, const CLIENT_CARD &client) {
   client.Print(os);
    return os;
}
void CLIENT_CARD::Print(std::ostream &os) const {
    CLIENT::Print(os);
    os << " years since joining: " << years_since_joining;
}


CLIENT_CARD::~CLIENT_CARD() = default;

