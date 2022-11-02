#include<iostream>
#include<string>
using namespace std;

class Patient
{
private:
	int appoinmentID;
	string patientName;
	float doctorCharge;
	float hospitalCharge;
public:
	void setPatientDetails(int aID, string pName);
	void displayPatientDetails();
	void setDoctorCharge(float dCharge);
	void setHospitalCharge(float hCharge);
	float calculateTotalPayment();
};

void Patient::setPatientDetails(int aID, string pName)
{
	appoinmentID = aID;
	patientName = pName;
	
}

void Patient::displayPatientDetails()
{
	cout << "AppoinmentID = " << appoinmentID << endl;
	cout << "PatientName = " << patientName << endl;
}

void Patient::setDoctorCharge(float dCharge)
{
	doctorCharge = dCharge;
}

void Patient::setHospitalCharge(float hCharge)
{
	hospitalCharge = hCharge;
}

float Patient::calculateTotalPayment()
{
	return doctorCharge + hospitalCharge;
}

int main()
{
	Patient p1, p2;

	p1.setPatientDetails(1001, "Nimal");
	p1.setDoctorCharge(1500);
	p1.setHospitalCharge(500);

	p2.setPatientDetails(1002, "Sunil");
	p2.setDoctorCharge(1700);
	p2.setHospitalCharge(500);

	p1.displayPatientDetails();
	cout << "Total Payment = " << p1.calculateTotalPayment() << endl<<endl;

	p2.displayPatientDetails();
	cout << "Total Payment = " << p2.calculateTotalPayment() << endl;

	
	return 0;
}