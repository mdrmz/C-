#include <iostream>
#include <string>
#include <locale>

using namespace std;

class dergi
{
public:
	
	inline void dergiiç(int);
	int icerik();
	void reklamVer();
	
	string name;
	int date;
	dergi() 
	{
		this->date = 2022;
		this->name = "mehmet dergisi";
	}
	~dergi()
	{

	}
	
private:
	int satismiktari = 0;

protected:
	string lorem;
};

inline  void dergi::dergiiç(int a)
{
	if (a == 1)
	{
		cout << "Barcelona Ucl şampiyonu oldu";
	}
	else if (a == 2)
		cout << "Covid -19 can almaya devam ediyor";
	else if (a == 3)
		cout << "seda sayan yine evlendi ";
	else if (a == 4)
		cout << "mehmet durmaz yeni buluşunu akşam kamuoyunu duyaracgını açıkladı";
	else if (a == 5)
		cout << "bunlar boş iş geçin bacım";

}

void dergi::reklamVer()
{
	cout << "TRRTRTRTRTRT en Kaliteli dertgisisisisisi" << endl;
}

int dergi::icerik()
{
	int input;
	cout << "lütfen hangi içierik ile ilgiendiginizi girin" << endl;
	cout << "1.spor" << endl;
	cout << "2.saglık" << endl;
	cout << "3.magazin" << endl;
	cout << "4.bilim" << endl;
	cout << "5.boş işler(burç gibi)" << endl;
	cin >> input;
	if (input == 1)
	{
		cout << "spor şeçildi üçreti : 50 ₺";
		return 50;
	}
		
	else if (input == 2)
	{
		cout << "spor şeçildi üçreti : 70 ₺";
		return 70;
	}
	else if (input == 3)
	{
		cout << "magazin şeçildi üçreti : 100 ₺";
		return 100;
	}
	else if (input == 4)
	{
		cout << "bilim şeçildi üçreti : 10 ₺";
		return 10;
	}
	else if (input == 5)
	{
		cout << " boş işler(burç gibi) şeçildi üçreti : 5000 ₺";
		return 5000;
	}
	return 0;
}

class users 
{

	friend dergi;

public:

	void puy(dergi drg);
	void oku(dergi drg);
	void moveToTrash();
	~ users()
	{

	}
	string usersName;
	int old;
	users(string name, int old)
	{
		this->old = old;
		this->usersName = name;
	}
	
	
private:
	int id;
protected:

};
void users::puy(dergi drg)
{
	 int ode = drg.icerik();
	 cout << endl << ode + " kadar ödendi " << endl;
}
void  users ::oku(dergi drg)
{
	drg.dergiiç(2);
}
void users :: moveToTrash()
{
	cout << "çöpe git" << endl;
}
void nealdı(dergi drg, users usr)
{
	cout << usr.usersName + " "; 
	usr.puy(drg);
}


void sil(int del, int size, users* usr[])
{
	int i, inputdel;
	for (i = 0; i < size - 1; i++)
	{
		if (usr[i]->old == del)
			usr[i] = NULL;
	}
}

int main()
{
	const int arrylenght = 100;
	users* usr[arrylenght];
	
	setlocale(LC_ALL,"Turkish");

	int input1;
	dergi drg;

	drg.reklamVer();


	cout <<"\nyapmak istediginiz islemi secim" << endl;
	cout << "1.kulanıcı oluştur" << endl;
	cout << "2.kulanıcı sil" << endl;
	cout << "3.kulanıcı düzenle" << endl;
	cout << "çıkmak için 0 basın";
	cin >> input1;
	int index = 0;
	while (input1 != 0)
	{
		
		if (input1 == 1)
		{
			
			string name;
			int old;
			cout << "isim girin" << endl;
			cin >> name;
			cout << "yas girin" << endl;
			cin >> old;
			usr[index] = new users(name, old);
			cout << "kulancı oluştu" << endl;
			index++;
		}
		if (input1 == 2)
		{
			int del;
			for (int i = 0; i < arrylenght - 1; i++)
			{
				cout << usr[i]->usersName << "   kodu : ";
				cout << i << endl;
			}
			cin >> del;
			sil(del, arrylenght, usr);
		}	

		if (input1 == 3)
		{
			
		}
		cout << "\nyapmak istediginiz islemi secim" << endl;
		cout << "1.kulanıcı oluştur" << endl;
		cout << "2.kulanıcı sil" << endl;
		cout << "3.kulanıcı düzenle" << endl;
		cout << "çıkmak için 0 basın" << endl;
		cin >> input1;
	}
}