#include<iostream>
#include<string>
using namespace std;

class Event
{
private:
	int eventid;
	string eventType;
	string themeColour;
	string location;
public:
	void setEventDetails(int eid, string eType, string tColour, string loc);
	void displayEventDetails();
	void setEventLocation();
};
void Event::setEventDetails(int eid, string eType, string tColour, string loc)
{
	eventid = eid;
	eventType = eType;
	themeColour = tColour;
	location = loc;

}

void Event::displayEventDetails()
{
	cout << "EventType = " << eventType << endl;
	cout << "ThemeColour = " << themeColour << endl;
	cout << "Location = " << location << endl<<endl;

}
void Event::setEventLocation()
{
	cout << "Enter new location of event " << eventid << " : ";
	cin >> location;
	cout << endl;
}

int main()
{
	Event* e1=new Event();
	Event* e2 = new Event();
	Event* e3 = new Event();

	e1->setEventDetails(1,"prty", "red", "Nugegoda");
	e2->setEventDetails(2, "prty", "red", "Nugegoda");
	e3->setEventDetails(3, "prty", "red", "Nugegoda");

	e1->setEventLocation();
	e2->setEventLocation();
	e3->setEventLocation();

	e1->displayEventDetails();
	e2->displayEventDetails();
	e3->displayEventDetails();

	return 0;
}