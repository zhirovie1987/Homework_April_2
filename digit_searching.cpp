#include <iostream>

using namespace std;

int main () {
	char Input_String[21];

	cout << "Enter a string, which shouldn't exceed 20 symbols: ";
	cin >> Input_String;
	
	char *p_Input_String = Input_String;
	while (*p_Input_String != '\0') {
		if (*p_Input_String >= '0' && *p_Input_String <= '9') cout << *p_Input_String << ' '; 
		++p_Input_String;
	}
	
return 0;
}
