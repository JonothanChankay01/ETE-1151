#include <iostream>
#include <vector>
#include <string>

int main() {
    constexpr double pi = 3.14;

    std::cout<<"1. Caclculate the area of a square "<<std::endl;
    std::cout<<"2. Calculate the area of a rectangle "<<std::endl;
    std::cout<<"3. Calculate the area of a circle "<<std::endl;
    std::cout<<"4. Calculate the area of a cylinder "<<std::endl;
    std::cout<<"Please enter your choice (1-4) here: ";
    int choice;
    std::cin>>choice;
    
    if (choice==1) {
            int side;
            std::cout<<"Enter the length of the side of the square: ";
            std::cin>>side;
            std::cout<<"The area of the square is: "<<side*side<<std::endl;

    } else if (choice==2) {
            int length;
            int width;
            std::cout<<"Enther the length of the rectangle: ";
            std::cin>>length;
            std::cout<<"Enter the width of the rectangle: ";
            std::cin>>width;
            const int AreaRec = length * width;
            std::cout<<"The area of the rectangle is "<<AreaRec<<std::endl;

    } else if (choice==3) {
            int radius;
            std::cout<<"Enter the radius of the circle:";
            std::cin>>radius;
            const double AreaCir = pi * radius * radius;
            std::cout<<"The area of the circle is "<<AreaCir<<std::endl;
            
    } else if (choice==4) {
            int radius;
            int height;
            std::cout<<"Enter the radius of the cylinder:";
            std::cin>>radius;
            std::cout<<"Enter the height of the cylinder:";
            std::cin>>height;
            const double AreaCyl = 2 * pi * radius * height + 2 * pi * radius * radius;
            std::cout<<"The area of the cylinder is "<<AreaCyl<<std::endl;
    }
        else {
            std::cout<<"That is not a valid choice. Please enter a number between 1 and 4."<<std::endl;
        }

        return 0;
    }
