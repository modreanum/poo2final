#include <iostream>
#include <string>
#include <fstream>
#include "product.h"
#include "client.h"
#include "reward_program.h"
#include "client_type.h"
#include "client_card.h"
#include "client_without_card.h"
#include "under_age_exception.h"
void card(CLIENT& p) {
    if (p.GetClientType() == CLIENT_TYPE::CLIENT_CARD) {
      std::cout << "This client has a card \n";
      auto a = dynamic_cast<CLIENT_CARD&>(p);
      std::cout << a.get_years_since_joining();
  }else {
        std::cout << "This client doesn't have a card \n";
    }
}


int main()
{

    auto a = std::make_shared<CLIENT_CARD>("Ana", 20, 4);
    auto b = std::make_shared<CLIENT_CARD>("Alex", 30, 5);
    auto c = std::make_shared<CLIENT_CARD>("X", 44, 2);

    auto d = std::make_shared<CLIENT_WITHOUT_CARD>("Y", 20, 1);
    auto e = std::make_shared<CLIENT_WITHOUT_CARD>("Z", 33, 1);
    CLIENT_CARD A("Ana", 20, 4);
    REWARD_PROGRAM::AddClient(a);
    REWARD_PROGRAM::AddClient(b);
    REWARD_PROGRAM::AddClient(c);
    REWARD_PROGRAM::AddClient(d);

    try {
        CLIENT_CARD cc("John", 15, 3);
        std::cout << cc << std::endl;
    }
    catch (const UnderAgeException& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    int n,nr;

    PRODUCT v[100];
    std::ifstream fin("tastatura.txt");
    //operator =
    //PRODUCT A1("prod1", 10);
    PRODUCT A1,A2;
    //A2=A1;
    //std::cout<<A2;
    //A1.setName("A1");
    //A1.setPrice(20);
    //A1.getName();
    //A1.getPrice();



    std::cout<<" 1 - read and write n products"<<"\n";
    std::cout<<" 2 - compare 2 products"<<"\n";
    std::cout<<" 3 - show all clients"<<"\n";
    std::cout<<" 4 - verify card example"<<"\n";
    std::cout<<" 5 - close"<<"\n";


    std::cin>>n;
    std::cout<<n<<"\n";
    while(n>=1&&n<=4)
    {
        if(n==1)
        {

            std::cin>> nr;
            std::cout<<"n="<<nr<<"\n";

            for(int i=0; i<nr; i++)
            {
                std::cin >> v[i];
            }
            for(int i=0; i<nr; i++)
            {
                std::cout<<v[i];

            }
        }
        else if(n==2)
        {
            std::cout<<" compare\nA1=";
            std::cin >> A1;
            std::cout<<A1;
            std::cout<<"A2=";
            std::cin>> A2;
            std::cout<<A2;
            if(A1==A2)
                std::cout<<"A1==A2";
            if(A1!=A2)
                std::cout<<"A1!=A2";
        }
        else if(n==3){
            REWARD_PROGRAM::ShowAllClients();
        }
        else if(n==4)
        {
            card(A);
        }

        std::cin>>n;
        std::cout<<"\n"<<n;}


    return 0;
}