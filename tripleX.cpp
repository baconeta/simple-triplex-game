#include <iostream> 

int main() {
    // output introduction messages to player
    std::cout << "Welcome to TripleX testing facility." << std::endl;
    std::cout << "In order to be granted access to the tools in this facility you must first pass a test. Get ready." << std::endl;
    std::cout << std::endl;

    const int CodeA = 4;
    const int CodeB = 2;
    const int CodeC = 1;
    int GuessA, GuessB, GuessC;
    int GuessSum, GuessProduct;

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    std::cout << "- The 3 secret code numbers add to: "<< CodeSum << std::endl;
    std::cout << "- They multiply together to be: " << CodeProduct << std::endl;
    std::cout << "What is your guess for the codes?" << std::endl;

    std::cin >> GuessA;
    std::cin >> GuessB;
    std::cin >> GuessC;

    GuessSum = GuessA + GuessB + GuessC;
    GuessProduct = GuessA * GuessB * GuessC;

    std::cout << std::endl;

    if (GuessProduct == CodeProduct && GuessSum == CodeSum) {
        std::cout << "You win!" << std::endl;
    } else {
        std::cout << "Incorrect guess. You failed, and have been kicked out of the facility." << std::endl;
    }
    
    return 0;
}