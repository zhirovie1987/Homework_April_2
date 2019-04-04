#include <iostream>

using namespace std;

void Swap (int16_t &x, int16_t &y);

int main () {
	
	int16_t Array_To_Sort[] = {6, 7, -1, 4, 5, 0, 6, 123, 0, 9, 1, 33, 8, -9, 6, 7, -2, 4, 5, 0, -90, 9, 1, 3, 8, -9};
	constexpr auto ARR_SIZE =  sizeof(Array_To_Sort) / sizeof(uint16_t); 
	
	for (auto  y : Array_To_Sort) cout << y << ' ';
	cout<<endl;
	
	for (auto j = 0; j < ARR_SIZE; ++j) {
		for (auto i = 1; i < ARR_SIZE - j; ++i) {
			if (*(Array_To_Sort + i) < *(Array_To_Sort + i - 1)) {
				Swap (*(Array_To_Sort + i), *(Array_To_Sort + i - 1));
			}
		
		}
	}
	
	for (auto  y : Array_To_Sort) cout << y << ' ';
		
	return 0;
}

void Swap (int16_t &x, int16_t &y) {
	auto Temp = x;
	x = y;
	y = Temp;
}
