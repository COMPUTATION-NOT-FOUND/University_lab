#include <iostream>
#include <stdexcept>

void processInput(int x) {
    if (x == 0)
        throw std::invalid_argument("Input cannot be zero");
    else if (x < 0)
        throw std::out_of_range("Input cannot be negative");
    else
        std::cout << "Input is valid\n";
}

int main() {
    try {
        int userInput;
        std::cout << "Enter a positive integer: ";
        std::cin >> userInput;
        processInput(userInput);
    } catch (const std::invalid_argument& e) {
        std::cerr << "Invalid argument: " << e.what() << std::endl;
    } catch (const std::out_of_range& e) {
        std::cerr << "Out of range: " << e.what() << std::endl;
    } catch (...) {
        std::cerr << "An unknown error occurred" << std::endl;
    }

    return 0;
}
