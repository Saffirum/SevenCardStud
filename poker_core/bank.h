#pragma once

#include "utils/disable_copy.h"
#include "utils/disable_move.h"

namespace PokerCore
{

class Bank : private Utils::DisableCopy, private Utils::DisableMove
{
public:
    Bank();

    double currentBalance() const;
    void addMoney(double value);
    void substractMoney(double value);

private:
    double m_money;
};

} // namespace PokerCore

