#ifndef LINE_H_
#define LINE_H_

#include "point.h"

class Line
{
public:
	Line(Point * st, Point * en);
	~Line();
	
	void selected(bool selected);
	bool selected();
	
	double manhattanLength();
	double realLength();
	
	Point * startNode();
	Point * endNode();
	
	void startNode(Point * st);
	void endNode(Point * en);
	
private:
	bool isselected;
	Point * start;
	Point * end;
};

#endif /*LINE_H_*/
