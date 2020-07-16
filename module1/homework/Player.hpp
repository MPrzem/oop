#pragma once

#include<memory>

#include "Ship.hpp"



class Player{
private:
    std::shared_ptr<Ship> ship_;
    int money_;
    size_t availableSpace_;
public:
    Player(std::shared_ptr<Ship> ship,int money,size_t space);
    void updateAvailableSpace();
};