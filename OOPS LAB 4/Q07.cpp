#include <iostream>
using namespace std;

class Player {
    string name;
    int health, score, level;

public:
    Player(string n, int h, int s, int l) { // Constructor to initialize the Player object
        name = n;
        health = h;
        score = s;
        level = l;
    }

    friend class GameManager; // Declaring GameManager as a friend class
};

class GameManager { // Friend class definition
public:
    void display(Player p) { // Function to display the player's details
        cout << "Player: " << p.name << endl;
        cout << "Health: " << p.health << endl;
    }

    void alive(Player p) { // Function to check if the player is alive or dead
        if (p.health > 0)
            cout << "Player is Alive" << endl;
        else
            cout << "Player is Dead" << endl;
    }

    void status(Player p) { // Function to display the player's status 
        cout << "Level: " << p.level << endl;
        cout << "Score: " << p.score << endl;
    }
};

int main() {
    Player p("Subhang", 80, 1500, 5);
    GameManager g;

    g.display(p);
    g.alive(p);
    g.status(p);

    return 0;
}