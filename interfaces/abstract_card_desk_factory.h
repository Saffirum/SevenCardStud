#pragma once

#include "poker_core/card.h"

#include <vector>

namespace PokerCore
{

class AbstractCardDeskFactory
{
public:
    virtual ~AbstractCardDeskFactory() = default;

    virtual std::vector<Card> createCardDesk() const = 0;
};

} // namespace PokerCore

