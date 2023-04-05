#include <iostream>
#include <string>
#include "point.h"
#include "round.h"
#include "ispointround.h"
using namespace std;

int main() {

    Point p;
    p.setX(2);
    p.setY(3);

    Round c;
    c.setR(3);
    Point center;
    center.setX(2);
    center.setY(2);
    c.setCenter(center);

    isPointRound(&p, &c);

    system("pause");
    return 0;
    //system("pause");
}