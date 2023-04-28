#include "client.h"
#include "client_without_card.h"
#include "client_card.h"
#include <iostream>
#include <cstring>
#include <string>
#include <ostream>
#include <vector>
using namespace std;
//stl
CLIENT::CLIENT(string name, int age) : name(name), age(age) {
}
//------------------------------------------------------------------------------------------------
const string &CLIENT::getName() const {
    return name;
}

void CLIENT::setName(const string &name) {
    CLIENT::name = name;
}

int CLIENT::getAge() const {
    return age;
}

void CLIENT::setAge(int age) {
    CLIENT::age = age;}
//---------------------------------------------------------------------------------------

    ostream &operator<<(ostream &os, const CLIENT &client) {
        client.Print(os);
        return os;
    }

    void CLIENT::Print(ostream &os) const {
        os << "name: " << name << " age: " <<age;
    }

//stl and static function counting
int CLIENT::count_clients(const std::vector<CLIENT>& clients) {
    return clients.size();}