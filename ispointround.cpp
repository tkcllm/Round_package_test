#include "ispointround.h"

void isPointRound(Point *p, Round *c) {

    int pcMiddle = (p->getX() - c->getCenter().getX()) * (p->getX() - c->getCenter().getX()) + (p->getY() - c->getCenter().getY()) * (p->getY() - c->getCenter().getY());
    int rMiddle = c->getR() * c->getR();

    if (pcMiddle > rMiddle) {

        cout << "the point is outside the circle" << endl;
    } else if (pcMiddle < rMiddle) {

        cout << "the point is inside the circle" << endl;
    } else {

        cout << "the point is on the circle" << endl;
    }

}