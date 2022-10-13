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

class wechicle // burda arayüz kulandým arayüz kulanýmý bu þekilde
{
public :
	string brand = "Ford";
	void drunk()
		
	{
		cout << "dat ,Dat";
	}

};
class car :public wechicle // arayüzü eklemek istedigimiz classý bu þekilde implente ediyoruz
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
	void getX() /* x degiþkeni private oldugundan dýsardýdan sadce getter setter bu þeklide ulaþýlýr */	
				
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
	cout << "mehmet degiþtrdi";
}

int main()
{
	MyGrandChild myc;
	MyChildClass mychlid;
	myc.myFunction();
	mychlid.myOtherFunction();

		
	//str x; // yapýlandýrýcý fonksiyon burada görev aldý
	car myCar; // farklý classlardan olustsurdugumuz degiskenleri burada tanýmlayýp özleklerini ulaþabiliyoruz
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
