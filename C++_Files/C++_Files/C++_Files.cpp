#include <iostream>
#include <fstream>
#include <string>


using namespace std;

int main()
{
	string x = "Mehmet Durmaz";
	string a;
	// Files create
	ofstream MyFile("filename.txt");

	// File Write

	MyFile << x;

	MyFile.close();

	ifstream myRead("filename.txt");

	while (getline(myRead, x))
	{
		cout << x;
	}
	myRead.close();



	return 0;
}