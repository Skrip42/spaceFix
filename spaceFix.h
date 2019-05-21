#include <string>
#include <stack>

class spaceFixer 
{
    private:
        int spaceCounter = 0;
        char currentBracket = '';
        const char spaceSimbol = ' ';
        const char openBrackets = "[{(";
        const char closedBrackets = "]})";
        std::stack<char> bracketStack;

        bool isBracket(char);
        
    public:
        char fix(char);
}
