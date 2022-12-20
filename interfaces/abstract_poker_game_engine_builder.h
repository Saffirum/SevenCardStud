#pragma once

#include <memory>

namespace PokerCore
{
    
class PokerGameEngine;
class AbstractDealer;
class AbstractPokerLogic;
class AbstractHandEvaluator;
class AbstractCardDeskFactory;

class AbstractPokerGameEngineBuilder
{
public:
    virtual ~AbstractPokerGameEngineBuilder() = default;

    virtual void setupDealer(std::unique_ptr<AbstractCardDeskFactory> cardDeskFactory) = 0;

    virtual void setupPokerLogic() = 0;

    virtual void setupHandEvaluator() = 0;

    std::unique_ptr<PokerGameEngine> resultPokerGameEngine();

protected:
    void setDealer(std::unique_ptr<AbstractDealer> dealer);

    void setPokerLogic(std::unique_ptr<AbstractPokerLogic> logic);

    void setHandEvaluator(std::unique_ptr<AbstractHandEvaluator> handEvaluator);

private:
    void reset();

private:
    std::unique_ptr<AbstractDealer> m_dealer;

    std::unique_ptr<AbstractGameEngine> m_gameEngine;

    std::unique_ptr<AbstractHandEvaluator> m_handEvaluator;
};

} // namespace PokerCore
