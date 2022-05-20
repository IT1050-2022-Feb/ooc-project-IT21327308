//Report class
#include<iostream>
using namespace std;

class Report{
	
	private:
		char report_no [5];
		
		
	public:
	    Report(char r_no[]);
		void printReports();
		
};

int main(){
	
	Report r1("R001");
	Report r2("R002");
    
    cout<<r1.printReports()<<endl;
    
    cout<<r2.printReports()<<endl;
    
    
    
	return 0;
	
}