#include "final.hpp"
#include <iostream>
using std::cout;

Image::Image(int i) {
_id = i;
std::cout << "ctor: " << _id << '\n';
}

~Image() {
    cout << "dtor: " << _id << '\n';
}

void draw() {
    cout << "drawing Image " << _id << '\n';
}

ImageWrapper::ImageWrapper() {
 _id = _next++;
 _ptr = 0;   
}

~ImageWrapper::ImageWrapper() {
    delete *ptr;
}

void ImageWrapper::draw() {
    if (!ptr) ptr = new ImageWrapper(_id);
    ptr->draw();
}

int ImageWrapper::_next = 1;

int main() {
    Image Images[3];

    for (int i; true;) {
        cout << "Exit[0], Image[1-5]";
        std::cin >> i;
        if (i == 0)
        break;
        images[i-1].draw();
    }

}