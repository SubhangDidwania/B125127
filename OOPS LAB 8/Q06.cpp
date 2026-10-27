#include <iostream>
using namespace std;

class SecurityScanner {
public:
    virtual void scan(int threats) const = 0;
};

class BasicScanner : public SecurityScanner {
public:
    void scan(int threats) const override {
        cout << "Basic Scanner: Detected threats = " << threats << endl;
    }
};

class AdvancedScanner : public SecurityScanner {
public:
    void scan(int threats) const override {
        int removed = (0.9 * threats);
        int remaining = threats - removed;
        cout << "Advanced Scanner: Detected threats = " << threats << endl;
        cout << "Advanced Scanner: Threats removed (90%) = " << removed << endl;
        cout << "Advanced Scanner: Threats remaining = " << remaining << endl;
    }
};

int main() {
    int threats = 100;

    BasicScanner basic;
    AdvancedScanner advanced;

    basic.scan(threats);
    advanced.scan(threats);

    return 0;
}
