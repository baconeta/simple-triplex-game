#include <iostream> 

void PrintIntroduction() {
    std::cout << "Welcome to TripleX testing facility.\n";
    std::cout << "In order to be granted access to the tools in this facility you must first pass a test. Get ready.\n\n";
}

void PlayGame() {
    PrintIntroduction();

    const int CodeA = 4;
    const int CodeB = 2;
    const int CodeC = 1;

    int DifficultyLevel = 1;
    int GuessA, GuessB, GuessC;
    int GuessSum, GuessProduct;

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    std::cout << "- The 3 secret code numbers add to: "<< CodeSum << std::endl;
    std::cout << "- They multiply together to be: " << CodeProduct << std::endl << std::endl;
    std::cout << "What is your guess for the 3 codes?\n";

    std::cin >> GuessA;
    std::cin >> GuessB;
    std::cin >> GuessC;

    GuessSum = GuessA + GuessB + GuessC;
    GuessProduct = GuessA * GuessB * GuessC;

    std::cout << std::endl;

    if (GuessProduct == CodeProduct && GuessSum == CodeSum) {
        std::cout << "Code for level " << DifficultyLevel  << " accepted. Access granted to next level.\n";
    } else {
        std::cout << "Incorrect guess. You failed, and have been kicked out of the facility.\n";
    }
}

int main() {
    while (true) {
        PlayGame();
    }
    
    return 0;
}