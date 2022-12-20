#pragma once

#include "utils/disable_copy.h"
#include "utils/disable_move.h"

#include <string>

namespace PokerCore
{

class PlayerProfile : private Utils::DisableCopy, private Utils::DisableMove
{
public:
    PlayerProfile();

    int id() const;

    const std::string& name() const;
    void setName(const std::string& name);

    double billValue() const;
    void depositMoney(double value);
    void withdrawMoney(double value);

private:
    int m_id;

    std::string m_name;

    double m_bill;
};


} // namespace PokerCore
