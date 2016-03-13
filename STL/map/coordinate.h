#ifndef COORDINATE_H
#define COORDINATE_H
#include <ostream>
using namespace std;

class Coordinate {
    friend ostream &operator<<(ostream &out, Coordinate &coor);
    public:
        Coordinate(int x = 0, int y = 0);
    private:
        int m_x;
        int m_y;

};
#endif

Coordinate::Coordinate(int x, int y) {
    m_x = x;
    m_y = y;
}

ostream &operator<<(ostream &out, Coordinate &coor) {
    out << coor.m_x << "," << coor.m_y << endl;
    return out;
}
