
//Seller class
#include<iostream>
using namespace std;
class Seller{
private:
char seller_id[20];
char seller_password[20];
char seller_uname[20];
public:
Seller(char s_id[],char s_pw[],char s_uname[]);
void printSellerDetails();
void updateSellerDetails();
};
int main()
{
 Seller s1("SL0001","hgd547w","kamal.k");
 Seller s2("SL0002","hkhd58sw","sachini.s");
 cout<<s1.printSellerDetails()<<endl;
 cout<<s2.printSellerDetails()<<endl;
 s1.updateSellerDetails();
 s2.updateSellerDetails();
 
 
 return 0;
}