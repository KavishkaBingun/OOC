
#include<iostream>
#include<string>
using namespace std;
//class declarration
class Lecturer
{
private:
	string lecturerName;
	string subject;
	string availableDay;
public:
	void setLecturerDetails(string lName, string sub, string aDay);
	void displayLecturerDetails();
	void setAvailableDay();

};
//class method definition
void Lecturer::setLecturerDetails(string lName, string sub, string aDay)
{
	lecturerName = lName;
	subject = sub;
	availableDay = aDay;
}

void Lecturer::displayLecturerDetails()
{
	cout << "LecturerName = " << lecturerName << endl;
	cout << "Subject = " << subject << endl;
	cout << "AvailableDay = " << availableDay << endl << endl;
}

void Lecturer::setAvailableDay()
{
	cout << "Input Available day of " << lecturerName << " : ";
	cin >> availableDay;
	cout << endl;
}
int main()
{
	//creat an objects
	Lecturer l1, l2, l3;

	//set values to object
	l1.setLecturerDetails("Ms.Shalini", "OOC", "Tuesday");
	l2.setLecturerDetails("Ms.Losini", "IWT", "Wednsday");
	l3.setLecturerDetails("Ms.Lokesha", "OOC", "Thursday");

	l1.setAvailableDay();
	l2.setAvailableDay();
	l3.setAvailableDay();

	l1.displayLecturerDetails();
	l2.displayLecturerDetails();
	l3.displayLecturerDetails();



	return 0;
}



