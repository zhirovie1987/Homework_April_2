#include <iostream>

using namespace std;

void qsort (int16_t *arr, uint16_t left_border, uint16_t right_border);
void Swap (int16_t &x, int16_t &y);

int main () {
	
	int16_t Array_To_Sort[] = {6, 7, -1, 4, 5, 0, 6, 123, 0, 9, 1, 33, 8, -9, 6, 7, -2, 4, 5, 0, -90, 9, 1, 3, 8, -9};
	constexpr auto ARR_SIZE =  sizeof(Array_To_Sort) / sizeof(uint16_t); 
	
	for (auto  x : Array_To_Sort) cout << x << ' ';
	cout<<endl;
	
	qsort (Array_To_Sort, 0, ARR_SIZE - 1);
	for (auto  x : Array_To_Sort) cout << x << ' ';
	
	return 0;
}

void qsort (int16_t *arr, uint16_t left_border, uint16_t right_border) {
	auto Left = left_border;
	auto Right = right_border;
	auto Ref_Val = Left;

	while (Left < Right) {
		while (*(arr + Left) < *(arr + Ref_Val)) ++Left;
		while (*(arr + Right)> *(arr + Ref_Val)) --Right;

		if (Left <= Right) {
			Swap(*(arr + Right--), *(arr + Left++));
		}
		
		/*
		for (auto i =left_border; i <= right_border; i++){
			cout<< arr[i] << ' ';
		}
		cout<<endl;
		*/
	}
		
	if (Left < right_border) qsort(arr, Left, right_border);
	if (Right > left_border) qsort(arr, left_border, Right);
}

void Swap (int16_t &x, int16_t &y) {
	auto Temp = x;
	x = y;
	y = Temp;
}

