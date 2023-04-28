#ifndef PRODUCT_H
#define PRODUCT_H
#include <iostream>
#include <cstring>
#include <exception>

class PRODUCT
{
private:
    char *name = nullptr;
    int price;

public:
    PRODUCT(const char *name, int price);
    PRODUCT(const PRODUCT &prod);
    PRODUCT();
    virtual ~PRODUCT();

    char *getName() const;
    void setName(const char *name_);
    int getPrice() const;
    void setPrice(const int newPrice);

    PRODUCT &operator=(const PRODUCT &rhs);
    bool operator==(const PRODUCT &rhs) const;
    bool operator!=(const PRODUCT &rhs) const;

    friend std::istream &operator>>(std::istream &is, PRODUCT &s);
    friend std::ostream &operator<<(std::ostream &os, const PRODUCT &s);
};

#endif
