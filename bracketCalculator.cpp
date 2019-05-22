#include "bracketCalculator.h"

void bracketCalculator::addBracketType(char openBracket, char closeBracket)
{
    openBracketList.push_back(openBracket);
    closeBracketList.push_back(closeBracket);
}

std::map<char, int> bracketCalculator::calculate(std::string subject)
{
    std::map<char, int> col;
    for (const char&c : subject) {
    }
    return col;
}
