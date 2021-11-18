#include <iostream> 

void PrintIntroduction() {
    std::cout << "Welcome to TripleX testing facility.\n";
    std::cout << "In order to be granted access to the tools in this facility you must first pass a test. Get ready.\n\n";
}

bool PlayGame(int DifficultyLevel) {
    std::cout << "You are in room "<< DifficultyLevel << ".\n";

    const int CodeA = (rand() % DifficultyLevel) + DifficultyLevel;
    const int CodeB = (rand() % DifficultyLevel) + DifficultyLevel;
    const int CodeC = (rand() % DifficultyLevel) + DifficultyLevel;

    int GuessA, GuessB, GuessC;
    int GuessSum, GuessProduct;

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    std::cout << "- The 3 secret code numbers add to: "<< CodeSum << std::endl;
    std::cout << "- They multiply together to be: " << CodeProduct << std::endl << std::endl;
    std::cout << "What is your guess for the secret codes?\n";

    std::cin >> GuessA;
    std::cin >> GuessB;
    std::cin >> GuessC;

    GuessSum = GuessA + GuessB + GuessC;
    GuessProduct = GuessA * GuessB * GuessC;

    std::cout << std::endl;

    if (GuessProduct == CodeProduct && GuessSum == CodeSum) {
        std::cout << "Code for level " << DifficultyLevel  << " accepted. Access granted to next level.\n";
        return true;
    } else {
        std::cout << "Incorrect guess. You failed, try again.\n";
        return false;
    }
}

int main() {
    PrintIntroduction();

    int DifficultyLevel = 1;
    const int MaximumLevelDifficulty = 5;

    while (DifficultyLevel <= MaximumLevelDifficulty) {
        bool bLevelComplete = PlayGame(DifficultyLevel);
        std::cin.clear();
        std::cin.ignore();
        if (bLevelComplete)
        {
            ++DifficultyLevel;
        }
        
    }
    std::cout << "Congratulations, you have been granted access to all secure facility tools and areas. Well done.\n";
    return 0;
}