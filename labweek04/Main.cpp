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
		cout << "Real Madrid Ucl şampiyonu oldu" << endl;
	}
	else if (a == 2)
		cout << "Covid -19 can almaya devam ediyor" << endl;
	else if (a == 3)
		cout << "seda sayan yine evlendi ";
	else if (a == 4)
		cout << "mehmet durmaz yeni buluşunu akşam kamuoyunu duyaracgını açıkladı" << endl;
	else if (a == 5)
		cout << "bunlar boş iş geçin bacım" << endl;

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
		cout << "\nspor şeçildi üçreti : 50 ₺\n";
		return 1;
	}
		
	else if (input == 2)
	{
		cout << "\nsaglik şeçildi üçreti : 70 ₺\n";
		return 2;
	}
	else if (input == 3)
	{
		cout << "\nmagazin şeçildi üçreti : 100 ₺\n";
		return 3;
	}
	else if (input == 4)
	{
		cout << "\nbilim şeçildi üçreti : 10 ₺\n";
		return 4;
	}
	else if (input == 5)
	{
		cout << "\n boş işler(burç gibi) şeçildi üçreti : 5000 ₺\n";
		return 5;
	}
	return 0;
}

class users 
{

	friend dergi;

public:
	users* next;
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
	int ücret = drg.icerik();
	drg.dergiiç(ücret);
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
	users* head;
	users* tmp;
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
			usr[index]->next = usr[index + 1];
			index++;
		}
		
		if (input1 == 2)
		{
			int a;
			head = usr[0];
			cout << "Silmek istediginiz  deger girin";
			cin >> a;

			if (usr[0]->old == a)
			{
				usr[0] = usr[0]->next;
			}
			tmp = head;
			head = head->next;
			while (head != NULL)
			{
				if (head->old == a)
				{
					tmp->next = head->next;

				}
				tmp = head;
				head = head->next;
			}

		}

		if (input1 == 3)

		{
			head = usr[0];
			while (head != NULL) {
				cout << head->old << " " << head->usersName << endl;
				head = head->next;
			}
		}
		if (input1 == 4)
		{
			usr[0]->oku(drg);
			
			
		}
		cout << "\nyapmak istediginiz islemi secim" << endl;
		cout << "1.kulanıcı oluştur" << endl;
		cout << "2.kulanıcı sil" << endl;
		cout << "3.kulanıcı düzenle" << endl;
		cout << "çıkmak için 0 basın" << endl;
		cin >> input1;
	}
}
//
//class linklist
//{
//	users* head;
//	users* son;
//	users* tmp;
//public:
//	void add(users* newnode)
//	{
//		if (head == NULL)
//		{
//			head = son = newnode;
//		}
//		else
//		{
//			son->next = newnode;
//			son = newnode;
//		}
//	}
//
//	void del()
//	{
//		int a;
//		cout << "Silmek istediginiz  deger girin";
//		cin >> a;
//
//		if (head->old == a)
//		{
//			head = head->next;
//		}
//		tmp = head;
//		head = head->next;
//		while (head != NULL)
//		{
//			if (head->old == a)
//			{
//				tmp->next = head->next;
//
//			}
//			tmp = head;
//			head = head->next;
//		}
//	}
//	void list()
//	{
//		users* gez;
//		for (gez = head; gez != NULL; gez = gez->next)
//		{
//			cout << gez->old << " " << gez->usersName << endl;
//
//		}
//	}
//};