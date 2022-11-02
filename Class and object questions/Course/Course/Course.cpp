#include<iostream>
#include<string>
using namespace std;

class course
{
private:
	int courseID;
	string courseName;
	int creditPoints;
public:
	void setCourseDetails(int a, string b, int c);
	int displayCourseDetail();
	void setCreditPoints();
};
void course::setCourseDetails(int a, string b, int c)
{
	courseID = a;
	courseName = b;
	creditPoints = c;
}
int course::displayCourseDetail()
{
	cout << "CourseID = "<< courseID << endl;
	cout << "CourseName = " << courseName << endl;
	cout << "CreditPoints = "<< creditPoints << endl<<endl;
	return 0;
}
void course::setCreditPoints()
{
	cout << "Enter new " << courseName << " credit points : " ;
	cin >> creditPoints;
}
int main()
{
	

	course c1, c2, c3, c4;

	c1.setCourseDetails(1050,"OOC",2);
	c2.setCourseDetails(1060, "SPM", 3);
	c3.setCourseDetails(1100, "IWT", 4);
	c4.setCourseDetails(1090, "ISDM", 4);

	c1.setCreditPoints();
	c2.setCreditPoints();
	c3.setCreditPoints();
	c4.setCreditPoints();

	c1.displayCourseDetail();
	c2.displayCourseDetail();
	c3.displayCourseDetail();
	c4.displayCourseDetail();

	

	return 0;
}
