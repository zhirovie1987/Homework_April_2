#include <iostream>

using namespace std;

bool String_Reversing(char *data);

int main () {
	
	char Input_String[21];

	cout << "Enter a symbol string, which shouldn't exceed 20 symbols: ";
	cin >> Input_String;
	String_Reversing(Input_String);
	cout << Input_String;
	
	return 0;
}

bool String_Reversing(char *data) {
	auto *p_Input_String = data;
	auto Symbol_Counter = 0;
	
	while (*p_Input_String !='\0') {
		++Symbol_Counter;//определяем количество символов
		++p_Input_String;
	}
	p_Input_String = data;
	auto Temp = *p_Input_String;
	for (auto i = 0; i < Symbol_Counter / 2; ++i) {
		Temp = *(p_Input_String + (Symbol_Counter - 1 - i));//сохраняем последний символ текущей итерации 
		*(p_Input_String + (Symbol_Counter - 1 - i)) = *(p_Input_String + i);// записываем первый символ вместо последнего в текущей итерации
		*(p_Input_String + i) = Temp; //записываем сохраненный конечный символ в первый текущей итерации
	}
	
	
}
