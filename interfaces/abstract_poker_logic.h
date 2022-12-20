#pragma once

namespace PokerCore
{

class PokerGameEngine;

class AbstractPokerLogic
{
public:
    virtual ~AbstractPokerLogic() = default;

    void setPokerGameEngine(PokerGameEngine* game);

    virtual void start() = 0;

    virtual void step() = 0;

    virtual int maxPlayersCount() const = 0;
    virtual int minPlayersCount() const = 0;

private:
    PokerGameEngine* game;
};

} // namespace PokerCore

