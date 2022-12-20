#pragma once

#include "interfaces/abstract_dealer.h"

#include <vector>

namespace SevenCardStud
{

class Dealer : public PokerCore::AbstractDealer
{
public:
    Dealer(const PokerCore::AbstractCardDeskFactory& cardDeskFactory);

    void shuffle();

    PokerCore::Card takeCard();

    size_t cardsLeft();

private:
    std::vector<PokerCore::Card> m_cards;
};

} // namespace SevenCardStud

