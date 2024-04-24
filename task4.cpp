#include <iostream>
int main() {
    int input = 0;
    while (input < 5 || input > 10) {
        std::cout << "Enter an integer value between 5 and 10:";
        std::cin >> input;

        if (std::cin.fail()){
            std::cin.clear();
            std::cin.ignore();
            std::cout << "Sorry you entered an invalid number please try again." << std::endl;

        }else if (input < 5 || input > 10){
            std::cout << "You entered" << input << ".Please enter a number between 5 and 10." << std::endl;

        }
    }
    std::cout << "Your input value (" << input << ") has been accepted." << std::endl;

    return 0;
}