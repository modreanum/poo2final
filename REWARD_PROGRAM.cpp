#include "reward_program.h"
#include "client_card.h"

#include <iostream>
#include <string>
#include <set>

std::vector<std::shared_ptr<CLIENT>> REWARD_PROGRAM::clients;

REWARD_PROGRAM::REWARD_PROGRAM() = default;

void REWARD_PROGRAM::AddClient(std::shared_ptr<CLIENT>client) {
    clients.push_back(client);
}

void REWARD_PROGRAM::ShowAllClients() {
    for (auto &client : REWARD_PROGRAM::clients) {
        std::cout << *client << '\n';
    }
}


