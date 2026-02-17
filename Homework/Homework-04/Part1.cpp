#include <cstdlib>
#include <iostream>

int CreateMap() {
    //generates random dimensions. Map will be ceneted at (0, 0)
    return (std::rand() % 100) + 1; //added one so that map isnt size 0
}

bool CheckBoundaries(int Xinput, int Yinput, int width, int height) {
    int Xlimit = width / 2; //the map covers half the width and height in each direction
    int Ylimit = height / 2;
    if (Xinput >= -Xlimit && Xinput <= Xlimit && Yinput >= -Ylimit && Yinput <= Ylimit) {
        return true;
    }
        return false;
    } 


int main() {
    char name [100]; //array to store name up to 100 characters in case someone has a really long name
    int Xinput;
    int Yinput;


    //generates random width and height of the map
    int width = CreateMap();
    int height = CreateMap();

    std::cout<<"Enter your name: ";
    std::cin >> name;

    std::cout<<"Enter your x coordinate: ";
    std::cin >> Xinput;
    std::cout<<"Enter your y coordinate: ";
    std::cin >> Yinput;

    //show the map bounds
    std::cout<<"Map origin is at (0, 0)"<<std::endl;
    std::cout<<"The X boundaries are: ("<<-(width/2)<<", "<<(width/2)<<")"<<std::endl;
    std::cout<<"The Y boundaries are: ("<<-(height/2)<<", "<<(height/2)<<")"<<std::endl;

    //check if input coordinates are within bounds using the function
    if (CheckBoundaries(Xinput, Yinput, width, height)) {
        std::cout<<"Welcome "<<name<<"! You are within the map boundaries."<<std::endl;
    } else {
        std::cout<<"Sorry "<<name<<", you are outside the map boundaries."<<std::endl;
    }

    return 0;

    

}