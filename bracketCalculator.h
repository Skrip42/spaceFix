#ifndef BRACKET_CALCULATOR
#define BRACKET_CALCULATOR
#include <stack>
#include <string>
#include <map>
#include <vector>

class bracketCalculator
{
    private:
        std::stack<int> bracketStack;
        std::map<int, int> bracketCount;
        std::vector<char> openBracketList;
        std::vector<char> closeBracketList;
        int currentBracketIndex;
        //std::vector<char> 
        //char openBracket[10];
        //char closeBracket[10];
    public:
        void addBracketType(char openBracket, char closeBracket);
        std::map<char, int> calculate(std::string subject);
};
#endif
