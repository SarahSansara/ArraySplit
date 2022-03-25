#include <iostream>
#include <ctime>

using namespace std;

int main() {
	srand(time(NULL));
	const int sizeL = 10, sizeS = 5;
	int arrL[sizeL], arrS1[sizeS], arrS2[sizeS];
	
	cout << "Array large:" << endl;
	for (int i = 0; i < sizeL; i++) {
		arrL[i] = rand() % 100 + 1;
		cout << "[" << i << "]:" << arrL[i] << endl;
	}
	cout << "Array small 1:" << endl;
	for (int i = 0; i < sizeS; i++) {
		arrS1[i] = arrL[i];
		cout << "[" << i << "]:" << arrS1[i] << endl;
	}
	cout << "Array small 2:" << endl;
	for (int i = 0; i < sizeS; i++) {
		arrS2[i] = arrL[i + sizeS];
		cout << "[" << i << "]:" << arrS2[i] << endl;	
	}

	system("pause");
	return 0;
}
