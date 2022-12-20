#pragma once

namespace Utils 
{

struct DisableCopy
{
    DisableCopy() = default;

    DisableCopy(const DisableCopy&) = delete;
    DisableCopy& operator=(const DisableCopy&) = delete;

    DisableCopy(DisableCopy&&) = default;
    DisableCopy& operator=(DisableCopy&&) = default;
};

} // namespace Utils 