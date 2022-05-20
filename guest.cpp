//guest class
#include<iostream>

using namespace std;

class Guest{
private:
char name [20];
char contact [20];
char Email[20];
public:
Guest(char g_name[],char c_no[],char mail[]);
void displayDetails();
};


int main()
{
  Guest gst1("kamal", "0254875848", "kamal45@gmail.com");
  Guest gst2("sachini","0715203645","sachii5@gmail.com");
  
  cout<<gst1.displayDetails()<<endl;
  
  cout<<gst2.displayDetails()<<endl;

  return 0;
}