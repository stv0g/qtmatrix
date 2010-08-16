#ifndef POINT_H_
#define POINT_H_

#include <QPoint>

class Point : public QPoint
{
public:
	Point();
	Point(int x, int y);
	Point(const QPoint & point);
	~Point();
	
	double realLength();
	
	void selected(bool selected);
	bool selected();
	
private:
	bool isselected;
};

#endif /*POINT_H_*/
