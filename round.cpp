#include "round.h"
#include "point.h"

void Round::setR(int r) {

    m_R = r;
}
int Round::getR() {

    return m_R;
}

void Round::setCenter(Point center) {

    m_Center = center;
}
Point Round::getCenter() {

    return m_Center;
}
