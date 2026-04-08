#include <iostream>
#include <stdexcept>
#include <string>

//division by zero exception handling
double divide(int numerator, int denominator){
    if (denominator == 0){
        throw "Division by zero is not allowed.";
    }
    return static_cast<double>(numerator) / denominator; //static cast double to keep decimal points in division result
}

//array access exception
int accessArray(int arr[], int size, int index){
    if (index < 0 || index >= size){
        throw "Index out of bounds.";
    }
    return arr[index];
}

//nested function exceptions
void nestedFunction(){
    throw "Error in nestedFunction.";
}
void outerFunction(){
    try{
        nestedFunction();
    }
    catch (const char* msg){
        std::cout << "Caught rethrown exception: " << msg << std::endl;
        throw;
    }

}

int main() {
    int numerator;
    int denominator;

    //Division function
    std::cout<<"---Division Function---"<<std::endl;
    std::cout<<"Enter numerator: ";
    std::cin>>numerator;
    std::cout<<"Enter denominator: :";
    std::cin>>denominator;
    try{
        std::cout<<"Result: "<<divide(numerator, denominator)<<std::endl;
    }
    catch (const char* msg){
        std::cout << "Caught exception: " << msg << std::endl;
    }

    //Array
    std::cout<<"---Array Access---"<<std::endl;
    int size;
    int index;

   std::cout<<"Enter size of array: ";
   std::cin>>size;
        int* newArray = new int[size];
        for (int i=0; i < size; i++){
            std::cout<<"Enter value for index"<<i<<": ";
            std::cin>>newArray[i];
        }

        std::cout<<"Enter index to access: ";
        std::cin>>index;
        try{
            int value = accessArray(newArray, size, index);
            std::cout<<"Value at index "<<index<<": "<<value<<std::endl;
        }
        catch (const char* msg){
            std::cout << "Caught exception: " << msg << std::endl;
        }

    std::cout<<"---Nested Function Exceptions---"<<std::endl;
    try{
        outerFunction();
    }
    catch (const char* msg){
        std::cout<<"Caught rethrown exception in main: "<<msg<<std::endl;
    }

    return 0;
    }


