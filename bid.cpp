//Bid class
#include<iostream>
using namespace std;

class Bid{
	
private:
char bid_no [15];
double bid_value;
		
public:
Bid(char b_id[], double b_value);
void displayBidtDetails();
double getBidValue();
double findMaxBid(double val1,double val2);
void makeNewBid();
};

int main(){
	
	Bid b1("Bid1",260000.00);
	Bid b2("Bid2",1900000.00);
    
    cout<<b1.displayBidtDetails()<<endl;
    
    cout<<b2.displayBidtDetails()<<endl;
    
    double value1=b1.getBidValue();
     
    double value2=b2.getBidValue();
    
    findMaxBid(Value1,value2);
    return 0;
}
