#ifndef SPACE_FIXER
#define SPACE_FIXER
#include <string>
#include <vector>
#include "bracketCalculator.h"

class spaceFixer 
{
    private:
        int spaceCount;
        char spaceSymbolReplacement;
        std::vector<char> spaceSymbolSearch;

        
    public:
        std::string fix(std::string);
        spaceFixer(char repl, std::vector<char> ser, bracketCalculator match);
};
#endif
