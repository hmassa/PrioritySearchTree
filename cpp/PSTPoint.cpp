///////////////////////////////////////////////////////////////////////////////
//                       Copyright (c) 2011 - 2012 by                        //
//                                Simon Pratt                                //
//                           (All rights reserved)                           //
///////////////////////////////////////////////////////////////////////////////
//                                                                           //
// FILE:    PSTPoint.cpp                                                     //
//                                                                           //
// MODULE:  Priority Search Tree                                             //
//                                                                           //
// NOTES:   None.                                                            //
//                                                                           //
///////////////////////////////////////////////////////////////////////////////
#include <iostream>
#include <string>
#include "PSTPoint.h"

using namespace std;

void PSTPoint::setX(double new_x) {
  x = new_x;
}

void PSTPoint::setY(double new_y) {
  y = new_y;
}

bool PSTPoint::operator<(const PSTPoint& p) {
  return x < p.getX();
}

bool PSTPoint::operator>(const PSTPoint& p) {
  return x > p.getX();
}

PSTPoint& PSTPoint::operator=(const PSTPoint& p) {
  x = p.getX();
  y = p.getY();
  return *this;
}
