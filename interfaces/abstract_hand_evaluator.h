#pragma once

namespace PokerCore
{

class Hand;

class AbstractHandEvaluator
{
public:
    virtual ~AbstractHandEvaluator() = default;

    virtual int value(const Hand& hand) const = 0;
};

} // namespace PokerCore

