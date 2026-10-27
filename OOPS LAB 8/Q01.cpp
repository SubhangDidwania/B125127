#include <iostream>
using namespace std;

class Character {
public:
    virtual int attack() const = 0; 
};

class Warrior : public Character {
private:
    int strength;

public:
    Warrior(int s) {
        strength = s;
    }

    int attack() const override {
        return 20 + 2 * strength;
    }
};

class Archer : public Character {
private:
    int agility;

public:
    Archer(int a) {
        agility = a;
    }

    int attack() const override {
        return 15 + 3 * agility;
    }
};

int main() {
    Warrior warrior(12);
    Archer archer(8);

    cout << "Warrior damage: " << warrior.attack() << endl;
    cout << "Archer damage: " << archer.attack() << endl;

    return 0;
}
