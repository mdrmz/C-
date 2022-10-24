#include <iostream>
#include <string>
#include <locale>

using namespace std;

class dergi
{
public:
	friend  void satis();
	inline void dergiiç();
	int icerik();
	void reklamVer();
	
	string name;
	int date;
	dergi(string name , int date) 
	{
		this->date = date;
		this->name = name;
	}
	~dergi()
	{

	}
	
private:
	int satismiktari = 0;

protected:
	string lorem;
};

inline  void dergi::dergiiç()
{
	cout << "ne yazım buraya";
}
void dergi::reklamVer()
{
	cout << "tr nin en kaliteli dergisi";
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
	drg.dergiiç();
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

int main()
{
	users* usr[10];
	int input1;

	cout << "yapmak istediginiz islemi secim" << endl;
	cout << "1.kulanıcı oluştur" << endl;
	cout << "2.kulanıcı sil" << endl;
	cout << "3.kulanıcı düzenle" << endl;
	cin >> input1;
	switch (input1)
	{
	case 1:
	{
		string name;
		int old, index = 0;
		cout << "isim girin" << endl ;
		cin >> name;
		cin >> old;
		usr[index]->usersName


		break;
	}
	default:
		break;
	}
	
}
