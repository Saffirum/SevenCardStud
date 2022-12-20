#pragma once

#include "card.h"

#include "utils/disable_copy.h"

#include <vector>

namespace PokerCore
{

class Hand : private Utils::DisableCopy
{
public:
    Hand();

    const std::vector<Card>& cards() const;
    void addCard(Card card);
    Card removeCard(size_t position);

private:
    std::vector<Card> m_cards;
};


} // namespace PokerCore
