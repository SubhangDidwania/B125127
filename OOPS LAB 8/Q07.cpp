#include <iostream>
#include <cmath>
using namespace std;

class MatchFormat {
public:
    virtual int calculateTarget(int firstInningsScore) const = 0;
};

class T20Match : public MatchFormat {
public:
    int calculateTarget(int firstInningsScore) const override {
        int margin = static_cast<int>(ceil(firstInningsScore * 0.01));
        return firstInningsScore + margin;
    }
};

class ODIMatch : public MatchFormat {
public:
    int calculateTarget(int firstInningsScore) const override {
        int margin = static_cast<int>(ceil(firstInningsScore * 0.02));
        return firstInningsScore + margin;
    }
};

int main() {
    int score = 180;

    T20Match t20;
    ODIMatch odi;

    cout << "First innings score: " << score << endl;
    cout << "T20 target: " << t20.calculateTarget(score) << endl;
    cout << "ODI target: " << odi.calculateTarget(score) << endl;

    return 0;
}
