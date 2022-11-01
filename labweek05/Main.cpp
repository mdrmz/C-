#include <iostream>
#include <string>
#include <locale>
using namespace std;


class a
{
public:


	string name;

	a()
	{

	}
	a(string& name)
	{
		this->name = name;
	}
	~a()
	{

	}
private:

	int aid;

protected:

	string aname;

};
int lessa(int &a)
{
	if (a == 1)
	{
		cout << "biyoloji þeçildi";
		return 1;
	}
	else if (a == 2)
	{
		cout << "fizik þeçildi";
		return 2;
	}
	else if (a == 3)
	{
		cout << "bil101  þeçildi";
		return 3;
	}
	else if (a == 4)
	{
		cout << "mat235 þeçildi";
		return 4;

	}
	else if (a == 5)
	{
		cout << "tde56 þeçildi";
		return 5;
	}
	else
	{
		cout << "yanlýþ þeçim tekrar ders seçin";
		return 0;
	}
}
class lessons
{
public :
	

	string name;

	lessons()
	{

	}
	lessons( string& name)
	{
		this->name = name;
	}
	~lessons()
	{

	}
private:

	int lessid;

protected:

	string techname;

};

class student
{
	friend  int lessa(int);
	friend lessons;
public: 


	string name;
	int lessinput();

	student()
	{

	}
	~student()
	{

	}
	student(string& name, int& id)
	{
		this->name = name;
		this->stdid = id;
	}

private:

	int stdid;

protected:
	
};

int student::lessinput()
{
	
	int a;
	int* input;
	cout << "lütfen ders þeçin" << endl;
	cout << "1.bijoloji" << endl;
	cout << "2.fizik" << endl;
	cout << "3.bil101" << endl;
	cout << "4.mat235" << endl;
	cout << "5.tde56 " << endl;
	
	cin >> a;
	
	input = &a;

	 return lessa(*input);
	
}
void check(int &x)
{

	if (x == 15)
	{
		cout << "ders þeçimi baþaralý";
	}
	else
		cout << "eksik veya fazla ders þeçmeyin";
}

int main()
{
	setlocale(LC_ALL, "Turkish");
	string name;
	int id,fori,y = 0,b;
	student *stf[5];
	cout << "ögrenci ismi girin" << endl;

	cin >> name;
	cout << "id girirn" << endl ;
	cin >> id;
	int* idptr = &id;
	string* nameptr = &name;

	stf[0] = new  student(*nameptr,*idptr);

	for (fori = 0; fori < 5; fori++)
	{
		b = stf[0]->lessinput();
		y = y + b;
	}
	
	int* chcptr = &y;
	check(*chcptr);
	
	
}