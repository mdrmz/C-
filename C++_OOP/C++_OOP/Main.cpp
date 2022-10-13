#include <iostream>
#include <string>

using namespace std;

class MyClass {
public:
	void myFunction() {
		cout << "deneme";
	}
};

class MyOtherClass {
public:
	void myOtherFunction() {
		cout << "Some content in another class.";
	}
};

// Derived class
class MyChildClass : public MyClass, public MyOtherClass {
};

// Derived class (child)
class MyChild : public MyClass {
};

// Derived class (grandchild)
class MyGrandChild : public MyChild {
};

class wechicle // burda aray�z kuland�m aray�z kulan�m� bu �ekilde
{
public :
	string brand = "Ford";
	void drunk()
		
	{
		cout << "dat ,Dat";
	}

};
class car :public wechicle // aray�z� eklemek istedigimiz class� bu �ekilde implente ediyoruz
{
public :
	string model = "Mustang";
};

class str 
{
public :
	string mehmet = "mehmet durmaz";
	int i = 15;
	void hi(string a);
	str() 
	{
		cout << "rahmi";
	}
	void getX() /* x degi�keni private oldugundan d�sard�dan sadce getter setter bu �eklide ula��l�r */	
				
	{
		cout << this->x;
	}
	void setX(int a)
	{
		this->x = a;
	}
private:
	int x = 5;

};
void str::hi(string a)
{
	cout << "mehmet degi�trdi";
}

int main()
{
	MyGrandChild myc;
	MyChildClass mychlid;
	myc.myFunction();
	mychlid.myOtherFunction();

		
	//str x; // yap�land�r�c� fonksiyon burada g�rev ald�
	car myCar; // farkl� classlardan olustsurdugumuz degiskenleri burada tan�mlay�p �zleklerini ula�abiliyoruz
	cout << myCar.brand + " " + myCar.model << endl;
	myCar.drunk();
	/*cout << x.i << endl ;
	cout << x.mehmet << endl;
	x.hi("durmaz");
	cout << endl;
	x.getX();
	x.setX(3);
	x.getX();
		*/
		
	return 0;

 

}
