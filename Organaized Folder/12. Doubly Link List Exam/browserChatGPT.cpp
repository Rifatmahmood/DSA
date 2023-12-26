#include <iostream>
#include <list>
#include <algorithm>

int main() {
    std::list<std::string> webAddresses;
    std::string address;

    // Input: Reading the values of the doubly linked list
    while (true) {
        std::cin >> address;
        if (address == "end") {
            break;
        }
        webAddresses.push_back(address);
    }

    // Iterator to keep track of the current position
    auto current = webAddresses.begin();

    int Q;
    std::cin >> Q;

    std::string command, addressName;

    // First command is always "visit" with a valid address
    std::cin >> command >> addressName;

    // Handle the first command separately
    auto it = std::find(webAddresses.begin(), webAddresses.end(), addressName);
    if (it != webAddresses.end()) {
        current = it;
        std::cout << *it << std::endl;
    } else {
        std::cout << "Not Available" << std::endl;
    }

    // Process the remaining commands
    while (--Q) {
        std::cin >> command;

        if (command == "visit") {
            std::cin >> addressName;
            it = std::find(webAddresses.begin(), webAddresses.end(), addressName);
            if (it != webAddresses.end()) {
                current = it;
                std::cout << *it << std::endl;
            } else {
                std::cout << "Not Available" << std::endl;
            }
        } else if (command == "next") {
            if (std::next(current) != webAddresses.end()) {
                ++current;
                std::cout << *current << std::endl;
            } else {
                std::cout << "Not Available" << std::endl;
            }
        } else if (command == "prev") {
            if (current != webAddresses.begin()) {
                --current;
                std::cout << *current << std::endl;
            } else {
                std::cout << "Not Available" << std::endl;
            }
        }
    }

    return 0;
}
