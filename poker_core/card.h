#pragma once

#include "utils/disable_copy.h"

#include <string>

namespace PokerCore
{

class Card : private Utils::DisableCopy
{
public:
    Card(const std::string& value);

    Card(Card&&) = default;
    Card& operator=(Card&&) = default;

    bool isOpened() const;
    void setOpened(bool isOpened);

private:
    std::string m_value;

    bool m_opened;
};

} // namespace PokerCore
