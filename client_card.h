#include "client.h"
#ifndef _CLIENT_CARD_H_
#define _CLIENT_CARD_H_
#include "client_type.h"
#include <string>
#include <ostream>
#include <string>
class UnderAgeException : public std::exception {
public:
    const char* what() const noexcept override {
        return "Client is under 18 years old.";
    }
};
class CLIENT_CARD : public CLIENT {
protected:
    int years_since_joining;

public:

    CLIENT_CARD(const char* name, int age, const int years_since_joining_);


// cc
    CLIENT_CARD(const CLIENT_CARD& other);

//op=
    CLIENT_CARD& operator=(const CLIENT_CARD& other);


    void Print(std::ostream &os) const override;

    virtual CLIENT_TYPE GetClientType() const override;

    int get_years_since_joining() const;
    void set_years_since_joining(const int &years_since_joining);

    virtual ~CLIENT_CARD();
    friend std::ostream &operator<<(std::ostream &os, const CLIENT_CARD &client);
};

#endif
