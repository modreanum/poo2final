#include "client.h"
#ifndef _CLIENT_WITHOUT_CARD_H_
#define _CLIENT_WITHOUT_CARD_H_
#include "client_type.h"
#include <string>
#include <ostream>
#include <string>

class CLIENT_WITHOUT_CARD : public CLIENT {
protected:
    int years_since_client;

public:

    CLIENT_WITHOUT_CARD(const char* name, int age, const int years_since_client_);


// cc
    CLIENT_WITHOUT_CARD(const CLIENT_WITHOUT_CARD& other);

//op=
    CLIENT_WITHOUT_CARD& operator=(const CLIENT_WITHOUT_CARD& other);


    void Print(std::ostream &os) const override;

    virtual CLIENT_TYPE GetClientType() const override;

    int get_years_since_client() const;
    void set_years_since_client(const int &years_since_client);

    virtual ~CLIENT_WITHOUT_CARD();
    friend std::ostream &operator<<(std::ostream &os, const CLIENT_WITHOUT_CARD &client);
};

#endif
