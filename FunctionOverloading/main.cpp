#include <iostream>
#include <string>
using namespace std;

int getResult(int num1, int num2);
string getResult(string str1, string str2);
int getResult(int cube);

int main()
{
	int resultNum = getResult(30, 20);
	string nameResult = getResult("Jonathan", "Reeves");
	int cubeResult = getResult(3);

	cout << "result num is " << resultNum << endl;
	cout << "name result is " << nameResult << endl;
	cout << "cube result is " << cubeResult << endl;


	return 0;
}

int getResult(int num1, int num2)
{
	return num1 * num2;
}

string getResult(string str1, string str2)
{
	return str1 + " " + str2;
}

int getResult(int cube)
{
	return cube * cube * cube;
}