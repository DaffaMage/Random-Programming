#include <iostream>

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
    void resetSquare()
    {
        length = width = 0;
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
    square operator-(const square& s)
    {
        square sq;
        sq.length = this->length - s.length;
        sq.width = this->width - s.width;
        return sq;
    }

private:
    float length;
    float width;
};

int main()
{
    square sq1;
    square sq2;
    square sq3;
    square sq4;

    sq1.setLenWid(22,10);
    sq2.setLenWid(8,5);

    sq3 = sq1 + sq2;
    sq4 = sq3 - sq1 + sq2;

    cout << "Area of Box 3 is " << sq3.getArea() << endl;
    cout << "Parameter of Box 3 is " << sq3.getParameter() << endl;
    cout << "Area of Box 4 is " << sq4.getArea() << endl;
    cout << "Parameter of Box 4 is " << sq4.getParameter();
    sq4.resetSquare();
    cout << "Parameter of Box 4 is " << sq4.getParameter();
    return 0;
}
