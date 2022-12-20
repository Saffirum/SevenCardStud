#pragma once

namespace Utils 
{

struct DisableMove
{
    DisableMove() = default;

    DisableMove(const DisableMove&) = default;
    DisableMove& operator=(const DisableMove&) = default;

    DisableMove(DisableMove&&) = delete;
    DisableMove& operator=(DisableMove&&) = delete;
};

} // namespace Utils 