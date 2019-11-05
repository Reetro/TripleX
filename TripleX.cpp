// This is my first c++ only project made during the second section of the unreal c++ udemy course
#include <iostream>

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
   if (Difficulty <= 1)
   {
        std::cout << R"(
 __      __         .__                                      __           ___________        .__         .__           ____  ___
/  \    /  \  ____  |  |    ____   ____    _____    ____   _/  |_  ____   \__    ___/_______ |__|______  |  |    ____  \   \/  /
\   \/\/   /_/ __ \ |  |  _/ ___\ /  _ \  /     \ _/ __ \  \   __\/  _ \    |    |   \_  __ \|  |\____ \ |  |  _/ __ \  \     / 
 \        / \  ___/ |  |__\  \___(  <_> )|  Y Y  \\  ___/   |  | (  <_> )   |    |    |  | \/|  ||  |_> >|  |__\  ___/  /     \ 
  \__/\  /   \___  >|____/ \___  >\____/ |__|_|  / \___  >  |__|  \____/    |____|    |__|   |__||   __/ |____/ \___  >/___/\  \
       \/        \/            \/              \/      \/                                        |__|               \/       \_/
  _________                                       ___.           ___.     ___________    .___.__   __   .__                     
 /   _____/______    ____    ____    ____    ____ \_ |__    ____ \_ |__   \_   _____/  __| _/|__|_/  |_ |__|  ____    ____      
 \_____  \ \____ \  /  _ \  /    \  / ___\ _/ __ \ | __ \  /  _ \ | __ \   |    __)_  / __ | |  |\   __\|  | /  _ \  /    \     
 /        \|  |_> >(  <_> )|   |  \/ /_/  >\  ___/ | \_\ \(  <_> )| \_\ \  |        \/ /_/ | |  | |  |  |  |(  <_> )|   |  \    
/_______  /|   __/  \____/ |___|  /\___  /  \___  >|___  / \____/ |___  / /_______  /\____ | |__| |__|  |__| \____/ |___|  /    
        \/ |__|                 \//_____/       \/     \/             \/          \/      \/                             \/      
)";
    
    std::cout << "\n\nSquidward: ah it sure is nice that spongebob isn't around anymore......WE GOTTA GET SPONGEBOB BACK!!!!!\n";
    std::cout << "SPONGEBOB IS JUST THROUGH THESE LEVEL " << Difficulty;
    std::cout << " DOORS WE GOTTA GUESS THE RIGHT CODES TO FIND HIM\n\n";
   }
}

bool PlayGame(int Difficulty)
{
    // Intro messages
    PrintIntroduction(Difficulty); 

    // Set default code values
    const int CodeA = 4;
    const int CodeB = 7;
    const int CodeC = 8;

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
        std::cout << "\nON TO THE NEXT DOOR WE GOTTA GET SPONGEBOB BACK";
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