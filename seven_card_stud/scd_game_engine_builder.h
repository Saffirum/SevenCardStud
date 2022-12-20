#pragma once

#include "interfaces/abstract_poker_game_engine_builder.h"

#include <memory>

namespace SevenCardStud
{

class PokerGameEngineBuilder : public PokerCore::AbstractPokerContextBuilder
{
public:
    void setupDealer(std::unique_ptr<AbstractCardDeskFactory> cardDeskFactory);

    void setupGameEngine();

    void setupHandEvaluator();
};

} // namespace SevenCardStud
