#include<iostream>
using namespace std;
class Bidder{
private:
char bidder_id[20];
char bidder_password[20];
char bidder_uname[20];
public:
Bidder(char b_id[],char b_pw[],char b_uname[]);
void printSBidderDetails();
void updateBidderDetails();
};
int main()
{
 Bidder b1("BD0001","hgdhd5w","Amal.A");
 Bidder b2("BD0002","werhkaia55","Kasun.L");
cout<<s1.printBidderDetails()<<endl;
 cout<<s2.printBidderDetails()<<endl;
 s1.updateBidderDetails();
 s2.updateBidderDetails();
 
 return 0;
}
