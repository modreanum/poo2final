#ifndef _REWARD_PROGRAM_H_
#define _REWARD_PROGRAM_H_

#include "CLIENT.h"
#include <memory>
#include <vector>

class REWARD_PROGRAM {
    static std::vector<std::shared_ptr<CLIENT>> clients;
private:
    REWARD_PROGRAM();
public:
    static void AddClient(std::shared_ptr<CLIENT>);
    static void ShowAllClients();

};



#endif