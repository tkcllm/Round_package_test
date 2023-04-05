#pragma once
#include <iostream>
#include "point.h"
using namespace std;

class Round {
public:
    void setR(int r);
    int getR();

    void setCenter(Point center);
    Point getCenter();

private:
    int m_R;
    int m_Center;
};