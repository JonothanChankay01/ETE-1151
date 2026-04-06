#include <iostream>

int health = 30;

int attack(){
    std::cout<<"You perform a basic attack. The enemy is tickled."<<std::endl;
    return 0;

}

int attack(int damage){
    std::cout<<"You perform a hard hit. You do 5 damage to the enemy."<<std::endl;
    health -= damage;
    if (health <= 0) health = 0;
    return 0;

}

int attack(int damage, std::string spell){
    std::cout<<"You cast " << spell << ". The enemy is hit for " << damage << " fire damage."<<std::endl;
    health -= damage;
    if (health <= 0) health = 0;
    return 0;
}

void showStats(){
    std::cout<<"Enemy Health: "<<health<<std::endl;

}
    
int main(){
    bool fighting = true;
    int choice;
    std::cout<<"An enemy has approached!"<<std::endl;

    while (fighting){
    std::cout<<"Choose your attack!"<<std::endl;
    std::cout<<"1. Basic Attack"<<std::endl;
    std::cout<<"2. Hard Hit"<<std::endl;
    std::cout<<"3. Fireball"<<std::endl;
        showStats();
        std::cin>>choice;
        switch(choice){
            case 1:
            attack();
            break;

            case 2:
            attack(5);
            break;

            case 3:
            attack(10, "fireball");
            break;


    }
    
    if (health == 0){
        std::cout<<"The enemy has been defeated."<<std::endl;
        fighting = false;
    }
}



    return 0;
}
