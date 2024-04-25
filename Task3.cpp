#include <iostream>
#include <string>

int main() {
    std::string subscriptions[] = {"B123", "C234", "A345", "C15", "B177", "G3003", "C235", "B179"};

    for (const auto &subscription : subscriptions) {
        if (subscriptions[0] == 'B') {
            std::cout << subscription << std::endl;

        }
    }
    return 0;
}