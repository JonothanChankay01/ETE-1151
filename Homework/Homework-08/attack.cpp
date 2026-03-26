#include <iostream>

int health = 30;
int mana = 10;

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

int attack(int damage, int manaCost){
    std::cout<<"You cast fireball. The enemy is hit for 10 fire damage."<<std::endl;
    health -= damage;
    mana -= manaCost;
    if (health <= 0) health = 0;
    if (mana <= 0) mana = 0;
    return 0;
}

void showStats(){
    std::cout<<"Enemy Health: "<<health<<std::endl;
    std::cout<<"Your Mana: "<<mana<<std::endl;

}
    
int main(){
    bool fighting = true;
    int choice;
    std::cout<<"An enemy had approached!"<<std::endl;

    while (fighting){
    std::cout<<"Choose your attack!"<<std::endl;
    std::cout<<"1. Basic Attack"<<std::endl;
    std::cout<<"2. Hard Hit"<<std::endl;
    std::cout<<"3. Fireball (5 mana)"<<std::endl;
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
            attack(10, 5);
            break;


    }
}
    if (health == 0){
        std::cout<<"You have defeated the enemy."<<std::endl;
        fighting = false;
    }


    return 0;
}
