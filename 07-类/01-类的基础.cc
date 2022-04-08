#include <iostream>
using namespace std;
class Point1
{
public:
    Point1()
    {
        x = 0;
        y = 0;
        next = NULL;
    }

private:
    int x;
    int y;
    Point1 *next;
};

class Point
{
public:
    Point()
    {
        this->x = 0;
        this->y = 0;
        this->next = NULL;
    }
    int getX();
    int getY();
    void inPutX(int x);
    void inPutY(int y);
    Point *getNext();
    void inPutNext(Point *next);

private:
    int x;
    int y;
    Point *next;
};
int Point::getX() { return this->x; }
int Point ::getY() { return this->y; }
void Point ::inPutX(int x) { this->x = x; }
void Point ::inPutY(int y) { this->y = y; }
Point *Point ::getNext()
{
    return this->next;
}
void Point ::inPutNext(Point *next)
{
    this->next = next;
}
int main()
{
    // Point1 P;
    // P.x; //会报错，因为x是 private型

    Point P1, P2;
    P1.inPutX(10);
    std::cout << P1.getX() <<    std::endl;
    std::cout << P1.getNext() << std::endl;
    P1.inPutNext(&P2);
    std::cout << P1.getNext() << std::endl;
    return 0;
}
