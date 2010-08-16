#include "point.h"

#include <cmath>

#include <QPoint>

double Point::realLength() {
	return sqrt(pow(x(), 2) + pow(y(), 2));
}

void Point::selected(bool sel) {
	isselected = sel;
}

bool Point::selected() {
	return isselected;
}

Point::Point() {
	isselected = false;
}

Point::Point(int x, int y) : QPoint(x, y) {
	isselected = false;
}

Point::Point(const QPoint & point) : QPoint(point) {
	isselected = false;
}

Point::~Point() {
}


