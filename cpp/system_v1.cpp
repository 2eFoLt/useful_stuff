#include <iostream>
#include <string>
#include <cmath>
#include <vector>

using namespace std;

class task_sheet
{
 private:
  string descrip;
  bool done_state = false;
  
 public:
  void set_descrip(string _descrip)	
  {
  descrip = _descrip;
  }
  
  string get_descrip()
  {
  	return descrip;
  }
  
  void check()
  {
  	done_state = true;
  }
	
	
};
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	
	vector<task_sheet> list;
	list.reserve(1);
	string input = "";
	int var, i = 0;
	cin >> input;
	cout << "Enter commands, master. " << endl;
	
	while (input != "exit")
 {
	cin >> input;
	if (input == "hello" or  input == "hi")
	{
	 cout << "Hello, my master. What do you want? " << endl;
	 cout << "1. Sign new task" << endl;
	 cout << "2. Check task state" << endl;
	 cout << "3. Change task state" << endl;
	 cin >> var;
	  switch(var)
	  {
	  	case 1:
	  		
	  		getline(cin, input);
	  		list[i].set_descrip(input);
	  		i++;
	  		cout << list.size();
         break;
     
        case 2:
        	
         break;
        	
        case 3:
        	
        break;
	  }
	  
    }
 }
    cout << "Goodbye, master..." << endl;
	return 0;
}