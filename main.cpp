#include <iostream>
using namespace std;

int main()
{
	int FirstInputNum = 0;
	int SecondInputNum = 0;

	cin >> FirstInputNum;
	cin >> SecondInputNum;

	cout << FirstInputNum << " + " << SecondInputNum <<  " = " << FirstInputNum + SecondInputNum << endl;
	cout << FirstInputNum << " - " << SecondInputNum << " = " << FirstInputNum - SecondInputNum << endl;
	cout << FirstInputNum << " * " << SecondInputNum << " = " << FirstInputNum * SecondInputNum << endl;
	cout << FirstInputNum << " / " << SecondInputNum << " = " << FirstInputNum/ SecondInputNum << endl;
}