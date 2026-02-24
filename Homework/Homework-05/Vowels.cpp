#include <iostream>
#include <string>

int main() {
    int vowel_count;
    std::string input;

    std::cout<<"Enter your input: ";

    std::getline(std::cin, input);

    for(int i = 0; i < input.length(); i++){ //determines the size of the array
        char message = input[i];

        if (message == 'a' || message == 'A' || message == 'e' || message == 'E' || message == 'i' || message == 'I' || message == 'o' || message == 'O' || message == 'u' || message == 'U'){
            
            vowel_count++; //increments vowel count
        }

    }

    std::cout<<vowel_count<<" vowels found.";
    
    return 0;

}