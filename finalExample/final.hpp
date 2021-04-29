#ifndef FINAL_HPP_
#define FINAL_HPP_

class Image {

    int _id;
    public:
    Image(int i);
    ~Image();
    void draw();
};

class Image {
Image *ptr;
int _id;
static int _next;

public:
Image();
~Image();
void draw();
};

#endif //!FINAL_HPP