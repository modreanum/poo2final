#include "product.h"
#include <cstring>

PRODUCT::PRODUCT(const char *name, int price)
{
    size_t len = strlen(name);
    this->name = new char[len + 1];
    strcpy(this->name, name);
    this->price = price;
}

PRODUCT::PRODUCT(const PRODUCT &prod)
{
    //constructor de copiere
    size_t len = strlen(prod.name);
    name = new char[len + 1];
    strcpy(name, prod.name);

    price = prod.price;
}

PRODUCT::PRODUCT()
{
    name=0;
    price=0;
}

PRODUCT::~PRODUCT()
{
    //destructor
    delete[] name;
}

char *PRODUCT::getName() const
{
    //GET
    return name;
}

void PRODUCT::setName (const char *name_)
{
    //SET
    delete[] name;
    size_t len = strlen(name_);
    name = new char[len + 1];
    strcpy(name, name_);
}

int PRODUCT::getPrice()const
{
    //GET
    return price;
}

void PRODUCT::setPrice(const int newPrice)
{
    //SET
    price = newPrice;
}

PRODUCT& PRODUCT::operator=(const PRODUCT &rhs)
{
    if (this != &rhs)
        setName(rhs.name);

    this->price = rhs.price;

    return *this;
}

bool PRODUCT::operator==(const PRODUCT &rhs) const
{
    return strcmp(this->name, rhs.name)==0 && this->price == rhs.price;
}

bool PRODUCT::operator!=(const PRODUCT &rhs) const
{
    return !(rhs == *this);
}

std::istream& operator>>(std::istream &is, PRODUCT &s)
{
    char buf[100];
    is >> buf;
    s.setName(buf);
    is >> s.price;
    return is;
}

std::ostream& operator<<(std::ostream &os,const PRODUCT &s)
{
    if (!s.name)
    {
        os << "Not initialized\n";
        return os;
    }
    os << "PRODUCT: name: " << s.name << " price: " << s.price << '\n';
    return os;
}
