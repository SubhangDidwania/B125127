#include <iostream>
using namespace std;

class Compressor {
public:
    virtual double compress(double fileSize) const = 0;
};

class TextCompressor : public Compressor {
public:
    double compress(double fileSize) const override {
        return 0.4 * fileSize;
    }
};

class ImageCompressor : public Compressor {
public:
    double compress(double fileSize) const override {
        return 0.7 * fileSize;
    }
};

int main() {
    double textSize = 500.0;
    double imageSize = 800.0;

    TextCompressor textComp;
    ImageCompressor imageComp;

    cout << "Original text file size: " << textSize << " MB" << endl;
    cout << "Compressed text file size: " << textComp.compress(textSize) << " MB" << endl;
    cout << "Original image file size: " << imageSize << " MB" << endl;
    cout << "Compressed image file size: " << imageComp.compress(imageSize) << " MB" << endl;

    return 0;
}
