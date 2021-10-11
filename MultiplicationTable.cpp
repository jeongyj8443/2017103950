//this file make MultiplicationTable

#include<iostream>
using namespace std;

int main() {
	//1단 부터 8단 까지 출력
	for (int i = 1; i < 10; i++) {
		cout << "< " << i << "단 " << ">" << endl;
		for (int j = 1; j < 10; j++) {
			cout << i << " * " << j << " = " << i * j << endl;
		}
		cout << endl;
	}
	return 0;
}