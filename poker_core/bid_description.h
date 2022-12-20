#pragma once

#include <string>
#include <vector>

namespace PokerCore
{

class BidDescription
{
public:
    enum Type {Fixed, AtLeast, FromList};

    BidDescription(std::string name,
                    bool automatic,
                    bool mandatory,
                    Type type,
                    std::vector<double> values);

    std::string name();

    bool isAutomatic();

    bool isMandatory(); 

    Type type();
    
    std::vector<double> values();

private:
    std::string m_name;

    bool m_automatic;

    bool m_mandatory;

    Type m_type;

    std::vector<double> m_values;
};

} // namespace PokerCore
