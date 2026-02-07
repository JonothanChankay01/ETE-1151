#include <iostream>
#include <vector>
#include <string>

int main() {
    std::string location = "";
    std::cout<<" Hello. Where are you from? " << std::endl;
    std::getline(std::cin, location);
    std::cout<< location << "? I've heard that's a great place to live!" << std::endl;
    return 0;
}