#include "client_without_card.h"

#include <iostream>


CLIENT_WITHOUT_CARD::CLIENT_WITHOUT_CARD(const char* name, int age, int years_since_client)
        : CLIENT(name, age) // call base class constructor
        , years_since_client(years_since_client) // other data
{}


//operator=
CLIENT_WITHOUT_CARD& CLIENT_WITHOUT_CARD::operator=(const CLIENT_WITHOUT_CARD& other) {
    if (this != &other) {
        CLIENT::operator=(other);
        years_since_client = other.years_since_client;
    }
    return *this;
}

//cc
CLIENT_WITHOUT_CARD::CLIENT_WITHOUT_CARD(const CLIENT_WITHOUT_CARD &d) : CLIENT(d.name,d.age), years_since_client(d.years_since_client) {}


CLIENT_TYPE CLIENT_WITHOUT_CARD::GetClientType() const {
    return CLIENT_TYPE::CLIENT_WITHOUT_CARD;
}


int CLIENT_WITHOUT_CARD::get_years_since_client() const {
    return years_since_client;
}

void CLIENT_WITHOUT_CARD::set_years_since_client(const int &years_since_client) {
    this->years_since_client = years_since_client;
}




std::ostream &operator<<(std::ostream &os, const CLIENT_WITHOUT_CARD &client) {
    client.Print(os);
    return os;
}
void CLIENT_WITHOUT_CARD::Print(std::ostream &os) const {
    CLIENT::Print(os);
    os << " years since client: " << years_since_client;
}

CLIENT_WITHOUT_CARD::~CLIENT_WITHOUT_CARD() = default;

