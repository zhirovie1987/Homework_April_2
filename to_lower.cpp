#include <iostream>

using namespace std;

bool My_To_Lower (char *data);

int main () {
	
	
	char Input_String[21];

	cout << "Enter a symbol string, which shouldn't exceed 20 symbols: ";
	cin >> Input_String;
	
	My_To_Lower (Input_String) ? cout << Input_String : cout << "Well, where is my string?";
	
	return 0;
}

bool My_To_Lower (char *data) {
	constexpr char CHAR_DIFFERENCE = 'a' - 'A';
	if (data != nullptr) {
		char *p_Input_String = data;
		while (*p_Input_String != '\0') {
			if (*p_Input_String >= 'A' && *p_Input_String <= 'Z') {
				*p_Input_String += CHAR_DIFFERENCE; 
			}
			++p_Input_String;
		}
		return true;
	}
	return false;
}

