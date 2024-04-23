#include <cmath>
#include <vector>
#include <iostream>

#define sqrtOfFive sqrt(5)
#define goldenRatio (1 + sqrtOfFive) / 2


int CalculateFibonacci(int n) {
	return ((pow(goldenRatio, n)) - (1 - goldenRatio)) / sqrtOfFive;
}

std::vector<int> GetSequence(int nthNumber) {
	std::vector<int> sequence;

	for (int i = 0; i < nthNumber; i++) {
		sequence.push_back(CalculateFibonacci(i));
	}

	return sequence;
}

int main() {
	int nthNumber, result;
	nthNumber = result = 0;

	std::cout << "Enter an integer: ";
	std::cin >> nthNumber;

	std::vector<int> sequence = GetSequence(nthNumber);
	
	for (int i = 0; i < sequence.size(); i++) {
		std::cout << sequence[i];
		if (i == sequence.size() - 1) {
			continue;
		}
		std::cout << ", ";
	}

	return 0;
}