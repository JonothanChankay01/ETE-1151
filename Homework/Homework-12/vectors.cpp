#include <iostream>
#include <vector>

int main() {
    // Initialize the two vectors
    std::vector<int> numbers1 = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    std::vector<int> numbers2 = {10, 20, 30, 40, 50, 60, 70, 80, 90};


    //code goes here
    //initializing iterators
    std::vector<int>::iterator iterator_n1 = numbers1.begin();
    std::vector<int>::iterator iterator_n2 = numbers2.begin();
    while (iterator_n2 != numbers2.end()){//while second vector has not been fully traversed, keep interlacing
        if (iterator_n1 != numbers1.end()){
            ++iterator_n1;//move iterator forward in first vector to make room for interlacing
        }
        iterator_n1 = numbers1.insert(iterator_n1, * iterator_n2);//puts elements from 2 in to 1
        ++iterator_n1;//move iterator past element that was inserted
        ++iterator_n2;//move iterator 2 to next element
    }

    // Print the interlaced vector
    std::cout << "Interlaced vector (numbers1): ";
    for (std::vector<int>::iterator iterator = numbers1.begin(); iterator != numbers1.end(); ++iterator){
        std::cout << *iterator << " ";
    }
    std::cout << std::endl;

    return 0;
}