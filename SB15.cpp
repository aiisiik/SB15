#include <iostream>
const int N = 100;

int FindOddNumbers(int Limit, bool IsOdd) {
	for (int i = IsOdd; i <= Limit; i=i+2) {
		std::cout << i << " ";
	}
	return 0;
}

int main() {
	FindOddNumbers(N, false);
}