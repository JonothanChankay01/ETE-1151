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
};

int main() {

    Pikachu pikachu(10);

    return 0;
}