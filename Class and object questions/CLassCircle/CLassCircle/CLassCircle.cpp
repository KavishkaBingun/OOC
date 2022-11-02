#include<iostream>
#include<string>
using namespace std;

class Circle
{
private:
	float radius;
public:
	void setRadius(float rad);
	float calcArea();
};

void Circle::setRadius(float rad)
{
	radius = rad;
	cout << "Enter the radius : ";
	cin >> rad;
	cout << endl;
}
float Circle::calcArea()
{
	float area = (22.0 / 7) * radius * radius;
	return area;
	
}
int main()
{
	Circle circle;
	cout << "Area of the circle is : " << circle.calcArea();

	circle.setRadius();
	circle.calcArea();

	return 0;
}