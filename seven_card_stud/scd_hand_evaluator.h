#pragma once

#include "interfaces/abstract_hand_evaluator.h"

namespace SevenCardStud
{

class HandEvaluator : public PokerCore::AbstractHandEvaluator
{
public:
    HandEvaluator();

    int value(const PokerCore::Hand& hand) const;
};

} // namespace SevenCardStud