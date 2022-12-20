#pragma once

#include "player_game_state.h"
#include "bank.h"

#include "utils/disable_copy.h"
#include "utils/disable_move.h"

#include <memory>
#include <vector>

namespace PokerCore
{

class AbstractDealer;
class AbstractPokerLogic;
class AbstractHandEvaluator;

class PokerGameEngine : private Utils::DisableCopy, private Utils::DisableMove
{
public:
    PokerGameEngine(std::unique_ptr<AbstractPokerLogic> logic, 
                std::unique_ptr<AbstractDealer> dealer,
                std::unique_ptr<AbstractHandEvaluator> handEvaluator);

    void addPlayers(std::vector<std::shared_ptr<PlayerProfile>> players);
    void setPlayersLost(std::vector<std::shared_ptr<PlayerProfile>> players);

    int playersCount() const;
    int maxPlayersCount() const;
    int minPlayersCount() const;

    void start();
    void step();

    bool isFinished() const;

    std::vector<std::shared_ptr<PlayerProfile>> winners() const;
    void setWinners(std::vector<std::shared_ptr<PlayerProfile>> player);

private:
    Bank m_bank;

    std::vector<PlayerGameState> m_players;

    std::unique_ptr<AbstractDealer> m_dealer;

    std::unique_ptr<AbstractHandEvaluator> m_handEvaluator;

    std::unique_ptr<AbstractPokerLogic> m_pokerLogic;

    std::vector<std::shared_ptr<PlayerProfile>> m_winners;
};

} // namespace PokerCore
