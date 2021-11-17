#include <iostream> 

int main() {
    // output introduction messages to player
    std::cout << "Welcome to TripleX testing facility." << std::endl;
    std::cout << "In order to be granted access to the tools in this facility you must first pass a test. Get ready." << std::endl;
    std::cout << std::endl;

    const int CodeA = 4;
    const int CodeB = 2;
    const int CodeC = 1;
    int PlayerGuess;

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    std::cout << "- The 3 secret code numbers add to: "<< CodeSum << std::endl;
    std::cout << "- They multiply together to be: " << CodeProduct << std::endl;
    
    return 0;
}