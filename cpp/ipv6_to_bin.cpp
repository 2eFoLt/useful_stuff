#include <iostream>
#include <sstream>
#include <string>
#include <algorithm>
using namespace std;

string toBinary(int n)
{
    string r;
    while(n!=0) 
	{
	r = (n%2==0 ?"0":"1")+r; 
	n/=2;
	}
    return r;
}

const char* hex_char_to_bin(char c)
{
    switch(toupper(c))
    {
        case '0': return "0000";
        case '1': return "0001";
        case '2': return "0010";
        case '3': return "0011";
        case '4': return "0100";
        case '5': return "0101";
        case '6': return "0110";
        case '7': return "0111";
        case '8': return "1000";
        case '9': return "1001";
        case 'A': return "1010";
        case 'B': return "1011";
        case 'C': return "1100";
        case 'D': return "1101";
        case 'E': return "1110";
        case 'F': return "1111";
    }
}


void clear_ipv6(string &input)
{
for (int i = 0; i < input.size(); i++)
{
	if (input[i]==':') input[i] = ' ';
}
}

void clear_ipv4(string &input)
{
for (int i = 0; i < input.size(); i++)
{
	if (input[i]=='.') input[i] = ' ';
}
}

int main()
{
	int decval;
	stringstream buffer;
	string input, oper, result = "";
	getline(cin, input);
  if (input.find('.') != string::npos)
  {
  	clear_ipv4(input);
  	buffer.str(input);
 	while (buffer >> oper)
 	{
 	 for (int i = 0; i < oper.size(); i++)
	  {
	  decval = stoi(oper);
	  result += toBinary(decval);	
	  result += ' ';
	  }	
	 }	
  }
    else
 {
    clear_ipv6(input);	
    buffer.str(input);
 	while (buffer >> oper)
 	{
 	 for (int i = 0; i < oper.size(); i++)
	  {
	  result += hex_char_to_bin(oper[i]);	
	  }	
	 }	
 }
	cout << result << endl;
	system("pause");
	return 0;
}