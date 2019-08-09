#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle
{
	public:
		Rectangle();
		Rectangle(double x, double y, double w, double h);
		virtual ~Rectangle();
		double CalculateArea();
		double CalculatePerimeter();
		
		// getters
		double getX();
		double getY();
		double getWidth();
		double getHeight();
		
		// setters
		void setX(double x);
		void setY(double y);
		void setWidth(double width);
		void setHeight(double height);
	
	private:
		double x, y;
		double width, height;	
};

#endif
