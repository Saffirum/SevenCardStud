#pragma once

#include "interfaces/abstract_card_desk_factory.h"

namespace PokerCore
{

class StandardCardDeskFactory : public AbstractCardDeskFactory
{
public:
    std::vector<Card> createCardDesk() const;
};

} // namespace PokerCore

