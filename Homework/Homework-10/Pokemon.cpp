#include <iostream>
#include <string>

class Pokemon {
protected:
    std::string name;
    int level;

public:
    Pokemon(const std::string& name, int level) : name(name), level(level){}

     // Virtual destructor to ensure proper cleanup of derived class objects
    virtual ~Pokemon() {
        std::cout<<"Your "+name+" has fainted!"<<std::endl;
    }

    // Pure virtual function to be overridden by derived classes
    virtual void attack() const = 0;
    virtual void defend() const = 0;
    virtual void evolve() const = 0;

    // Function to display the Pokemon's details
    void display() const {
        std::cout << "Name: " << name << ", Level: " << level << std::endl;
    }
};

//New Pokemon Type class
class PokemonType : public Pokemon {
    protected:
        std::string type;
    
    public:
        PokemonType(const std::string& name, int level, const std::string& type) : Pokemon(name, level), type(type) {}

        void dislpayType() const {
            std::cout<< "Pokemon Type: "<< type << std::endl;
        }

};

//New Electric type for pikachu
class ElectricPokemon : public PokemonType {
    public:
        ElectricPokemon(const std::string& name, int level) : PokemonType(name, level, "Electric") {}
    
};

//Pikachu being defined as an electric type pokemon
class Pikachu : public ElectricPokemon {
    public:
        Pikachu(int level) : ElectricPokemon("Pikachu", level) {}
        void attack() const override {
            std::cout << "Pikachu uses Thunderbolt!" << std::endl;
        }
        void defend() const override {
            std::cout << "Pikachu blocks the attack!" << std::endl;
        }
        void evolve() const override {
            std::cout << "Pikachu evolves into Raichu!" << std::endl;
        }
};

int main() {

    Pikachu pikachu(10);

    std::cout<<"------The battle begins!------"<<std::endl;
    pikachu.displayType();
    pikachu.attack();
    pikachu.defend();
    pikachu.evolve();

    return 0;
}