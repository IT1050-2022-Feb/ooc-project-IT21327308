//Auction class
#include<iostream>
using namespace std;

class Auction{
	
	private:
		char auction_no [5];
		int vehicle_quentity;
		
	public:
	    Auction(char a_no[], int v_qty);
		void displayAuctionDetails();
		void updateAuctionDetails();
};

int main(){
	
	Auction a1("A1",2);
	Vehicle a2("A2",5);
    
    cout<<a1.displayAuctionDetails()<<endl;
    
    cout<<a2.displayAuctionDetails()<<endl;
    
    a1.updateAuctionDetails();
    a2.updateAuctionDetails();
    
	return 0;
	
}