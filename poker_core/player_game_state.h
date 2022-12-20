#pragma once

#include "hand.h"

#include "utils/disable_copy.h"

#include <memory>

namespace PokerCore
{

class PlayerProfile;
class BidDescription;

class PlayerGameState : private Utils::DisableCopy
{
public:
    PlayerGameState(std::shared_ptr<PlayerProfile> profile);

    std::shared_ptr<PlayerProfile> profile();

    Hand& hand();

    bool giveBid(const BidDescription& bidDescription);

    std::vector<Card> changeCards();

private:
    std::shared_ptr<PlayerProfile> m_profile;

    Hand m_hand;
};

} // namespace PokerCore
