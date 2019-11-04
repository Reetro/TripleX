// This is my first c++ only project made during the second section of the unreal c++ udemy course
#include <iostream>

int main()
{
    std::cout << "Squidward: ah it sure is nice that spongebob isn't around anymore. WE GOTTA GET SPONGEBOB BACK!!!!!" << std::endl;
    std::cout << "SPONGEBOB IS JUST THROUGH THESE DOORS WE GOTTA GUESS THE RIGHT CODES TO FIND HIM" << std::endl;

    const int CodeA = 4;
    const int CodeB = 7;
    const int CodeC = 8;

    const int CodeSum = CodeA + CodeB + CodeC; 
    const int CodeProduct = CodeA * CodeB * CodeC; 

    std::cout << std::endl;
    std::cout << "+ There are 3 numbers in the code" << std::endl;
    std::cout << "+ The codes add up to: " << CodeSum << std::endl;
    std::cout << "+ The codes multiply to give: " << CodeProduct << std::endl;

    int GuessA, GuessB, GuessC;

    std::cin >> GuessA;
    std::cin >> GuessB;
    std::cin >> GuessC;

    const int GuessSum = GuessA + GuessB + GuessC;
    const int GuessProduct = GuessA * GuessB * GuessC;

    if (GuessSum == CodeSum && GuessProduct == CodeProduct)
    {
        std::cout << "O MY GOSH YOU WON YOU GOT SPONGEBOB BACK";
    }
    else 
    {
       std::cout << "O MY GOSH HOW ARE THIS BAD??? NOW WE'LL NEVER GET SPONGEBOB BACK!!!"; 
    }

    return 0;
}