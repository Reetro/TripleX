// This is my first c++ only project made during the second section of the unreal c++ udemy course
#include <iostream>
#include <ctime>

void PrintWinMessage()
{
    std::cout << R"(
_____.___.               __      __.__        
\__  |   | ____  __ __  /  \    /  \__| ____  
 /   |   |/  _ \|  |  \ \   \/\/   /  |/    \ 
 \____   (  <_> )  |  /  \        /|  |   |  \
 / ______|\____/|____/    \__/\  / |__|___|  /
 \/                            \/          \/  
)";
std::cout << "\nYOU GOT SPONGEBOB BACK";
}

void PrintIntroduction(int Difficulty)
{
 std::cout << R"(
______________
|\ ___________ /|
| |  _ _ _ _  | |
| | | | | | | | |
| | |-+-+-+-| | |
| | |-+-+-+-| | |
| | |_|_|_|_| | |
| |     ___   | |
| |    /__/   | |
| |   [%==] ()| |
| |         ||| |
| |         ()| |
| |           | |
| |           | |
| |           | |
|_|___________|_|     
)";
    
    std::cout << "\n\nSquidward: ah it sure is nice that spongebob isn't around anymore......WE GOTTA GET SPONGEBOB BACK!!!!!\n";
    std::cout << "SPONGEBOB IS JUST THROUGH THESE LEVEL " << Difficulty;
    std::cout << " DOORS WE GOTTA GUESS THE RIGHT CODES TO FIND HIM\n\n";
}

bool PlayGame(int Difficulty)
{
    // Intro messages
    PrintIntroduction(Difficulty); 

    // Set default code values
    const int CodeA = rand() % Difficulty + Difficulty;
    const int CodeB = rand() % Difficulty + Difficulty;
    const int CodeC = rand() % Difficulty + Difficulty;

    // Get the sum and product of code values
    const int CodeSum = CodeA + CodeB + CodeC; 
    const int CodeProduct = CodeA * CodeB * CodeC; 

    // Hint messages
    std::cout << std::endl;
    std::cout << "+ There are 3 numbers in the code";
    std::cout << "\n+ The codes add up to: " << CodeSum;
    std::cout << "\n+ The codes multiply to give: " << CodeProduct << std::endl;

    // Store player input
    int GuessA, GuessB, GuessC;
    std::cin >> GuessA >> GuessB >> GuessC;
   

    const int GuessSum = GuessA + GuessB + GuessC;
    const int GuessProduct = GuessA * GuessB * GuessC;

    // See if guess is right
    if (GuessSum == CodeSum && GuessProduct == CodeProduct)
    {
        std::cout << "\nON TO THE NEXT DOOR";
        return true;
    }
    else 
    {
       std::cout << "\nO MY GOSH HOW ARE THIS BAD??? LUCKILY YOU CAN TRY AGAIN!!!"; 
       return false;
    }
}

int main()
{
    srand(time(NULL));

    int LevelDifficulty = 1;
    const int MaxLevel = 4;

    while (LevelDifficulty <= MaxLevel) // loop game until all levels are completed
    {
        bool bLevelComplete = PlayGame(LevelDifficulty);
        std::cin.clear();
        std::cin.ignore();

        if (bLevelComplete)
        {
            ++LevelDifficulty;
        }
    }

    PrintWinMessage();

    return 0;
}