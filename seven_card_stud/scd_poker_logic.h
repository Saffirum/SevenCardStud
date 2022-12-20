#pragma once

#include "interfaces/abstract_poker_logic.h"

namespace SevenCardStud
{

class PokerLogic : public PokerCore::AbstractPokerLogic
{
    PokerLogic();

    void start();

    void step();

    int maxPlayersCount() const;
    int minPlayersCount() const;
};

} // namespace SevenCardStud
