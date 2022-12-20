#pragma once

#include "poker_core/card.h"

#include "utils/disable_copy.h"

namespace PokerCore
{

class AbstractCardDeskFactory;

class AbstractDealer : private Utils::DisableCopy
{
public:
    AbstractDealer(const AbstractCardDeskFactory& cardDeskFactory);
    
    virtual ~AbstractDealer() = default;

    virtual void shuffle() = 0;

    virtual Card takeCard() = 0;

    virtual size_t cardsLeft() = 0;
};

} // namespace PokerCore

