// This is my first c++ only project made during the second section of the unreal c++ udemy course
#include <iostream>

void PrintIntroduction()
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
    std::cout << "SPONGEBOB IS JUST THROUGH THESE DOORS WE GOTTA GUESS THE RIGHT CODES TO FIND HIM\n\n";
}

bool PlayGame()
{
    // Intro messages
    PrintIntroduction(); 

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
        std::cout << "\nO MY GOSH YOU WON YOU GOT SPONGEBOB BACK";
        return true;
    }
    else 
    {
       std::cout << "\nO MY GOSH HOW ARE THIS BAD??? NOW WE'LL NEVER GET SPONGEBOB BACK!!!"; 
       return false;
    }
}

int main()
{
    while(true)
    {
        bool bLevelComplete = PlayGame();
        std::cin.clear();
        std::cin.ignore();
    }

    return 0;
}