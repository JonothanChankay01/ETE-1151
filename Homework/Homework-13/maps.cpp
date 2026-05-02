#include <iostream>
#include <map>
#include <string>

int main(){
    //Initilize the two maps
    std::map<int, std::string> numbers1 = {
        {1, "1"}, {2, "2"}, {3, "3"}, {4, "4"}, {5, "5"}, {6, "6"}, {7, "7"}, {8, "8"}, {9, "9"} //numbers 1 value declared as string so it can hold values from both maps
};

    std::map<int, int> numbers2 = {
        {1, 10}, {2, 20}, {3, 30}, {4, 40}, {5, 50}, {6, 60}, {7, 70}, {8, 80}, {9, 90}
    };

    //Interlace the maps
    //iterator
    std::map<int, int>::iterator it = numbers2.begin();

    for(it = numbers2.begin(); it != numbers2.end(); ++it){
        int key = it->first;
        int value2 = it->second;
        if (numbers1.count(key)){
            numbers1[key] = numbers1[key] + ", " + std::to_string(value2);//checks if key value is already in map 1. If so, adds comma
        }else{
            numbers1[key] = std::to_string(value2);//if key value is only in map 2, adds it to the first map
        }
    }

    //Print the interlaced map (STARTER)
    std::cout << "Interlaced map (numbers1): ";
    for (const auto& pair : numbers1) {
        std::cout << pair.first << ": " << pair.second << " ";
    }
    std::cout << std::endl;

    return 0;
}



