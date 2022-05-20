//Vehicle class
//Vehicle class
#include<iostream>
using namespace std;

class Vehicle{
	
private:
char vehicle_no [20];
double vehicle_value;
		
public:
vehicle(char v_no[], double v_value);
char getVehicleNo();
double getVehicleValue();
void addNewVehicle();	
};

int main(){
	
	Vehicle v1("BCX4545",2500000.00);
	Vehicle v2("JKH2545",1800000.00);
    
    cout<<" 1st vehicle number is: "<<
	v1.getVehicleNo()<<endl;
	
	cout<<" 1st vehicle value is: "<<
	v1.getVehicleValue()<<endl;
	
    cout<<" 2nd vehicle number is: "<<
	v2.getVehicleNo()<<endl;
	
	cout<<"2nd vehicle value is: "<<
	v2.getVehicleValue()<<endl;	
	
	
	return 0;
	
}
