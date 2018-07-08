#include <iostream>
#include "square.h"

using namespace std;

class square
{
public:
    float getArea()
    {
        return length*width;
    }
    float getParameter()
    {
        return 2*(length+width);
    }
    void setLenWid(float len, float wid)
    {
        length = len;
        width = wid;
    }
    square operator+(const square& s)
    {
        square sq;
        sq.length = this->length + s.length;
        sq.width = this->width + s.width;
        return sq;
    }

private:
    float length;
    float width;
};
