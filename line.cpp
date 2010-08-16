#include "line.h"

Line::Line(Point * st, Point * en) {
	start = st;
	end = en;
	isselected = false;
}

void Line::selected(bool sel) {
	isselected = sel;
}

bool Line::selected() {
	return isselected;
}

double Line::realLength() {
	Point diff = *start - *end;
	return diff.realLength();
}

double Line::manhattanLength() {
	Point diff = *start - *end;
	return diff.manhattanLength();
}

Point * Line::startNode() {
	return start;
}

Point * Line::endNode() {
	return end;
}

void Line::startNode(Point * st) {
	start = st;
}

void Line::endNode(Point * en) {
	end = en;
}

Line::~Line() {
}
