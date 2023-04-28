#ifndef CLIENT_H
#define CLIENT_H
#include "CLIENT_TYPE.h"
#include <string>
#include <ostream>
#include <vector>
#include <iostream>
class CLIENT {
protected:
    std::string name;
    int age;
public:

    CLIENT(std::string name, int age);

    const std::string &getName() const;

    void setName(const std::string &name);

    int getAge() const;

    void setAge(int age);
    virtual void Print(std::ostream &os) const;

    friend std::ostream &operator<<(std::ostream &os, const CLIENT &client);
    virtual CLIENT_TYPE GetClientType() const = 0;

    static int count_clients(const std::vector<CLIENT>& clients);

    virtual ~CLIENT() = default;
};
#endif