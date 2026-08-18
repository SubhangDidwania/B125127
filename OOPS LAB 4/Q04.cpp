#include <iostream>
using namespace std;

class Song {
    string name, artist;
    float duration;

public:
    Song(string n, string a, float d) { // Constructor to initialize the Song object
        name = n;
        artist = a;
        duration = d;
    }

    friend void compareSongs(Song s1, Song s2); // Declaring compareSongs as a friend function
};

void compareSongs(Song s1, Song s2) { // Friend function definition
    if (s1.duration > s2.duration)
        cout << s1.name << " by " << s1.artist << " is longer." << endl;
    else if (s2.duration > s1.duration)
        cout << s2.name << " by " << s2.artist << " is longer." << endl;
    else
        cout << "Both songs have the same duration." << endl;
}

int main() {
    Song s1("Blinding Lights", "The Weeknd", 4.20); // Creating an object of Song class
    Song s2("Perfect", "Ed Sheeran", 4.40); // Creating another object of Song class
    compareSongs(s1, s2);
    return 0;
}