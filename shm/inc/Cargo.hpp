#pragma once

#include <string>

class Cargo {
protected:
    std::string name_;
    uint16_t amount_;
    uint16_t basePrice_;

public:
    virtual ~Cargo();
    Cargo(const std::string&, uint16_t, uint16_t);

    virtual Cargo& operator+=(const uint16_t);
    virtual Cargo& operator-=(const uint16_t);
    virtual bool operator==(const Cargo&) const;
    virtual uint16_t getPrice()const =0;
    virtual std::string getName() const;
    virtual uint16_t getAmount() const;
    virtual uint16_t getBasePrice() const;
    virtual std::string getSpecyiicInfo() const=0;
};