//Payment class
#include<iostream>
using namespace std;

class Payment{
	
	private:
		char payment_no [5];
		double payment_amount;
		
	public:
	    Auction(char pay_no[], double pay_amount);
		void displayPaymentDetails();
		void addNewPayments();
};

int main(){
	
	Payment p1("P1",2500000.00);
	Payment p2("P2",1800000.00);
    
    cout<<p1.displayPaymentDetails()<<endl;
    
    cout<<p2.displayPaymentDetails()<<endl;

	
	return 0;
	
}