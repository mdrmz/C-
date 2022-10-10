#include <iostream>
#include <string>

using namespace std;
class str 
{
public :
	string mehmet = "mehmet durmaz";
	int i = 15;
	void hi(string a);
	str() 
	{
		cout << "rahmin amý";
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
	str x; // yapýlandýrýcý fonksiyon burada görev aldý
	cout << x.i << endl ;
	cout << x.mehmet << endl;
	x.hi("durmaz");
	cout << endl;
	x.getX();
	x.setX(3);
	x.getX();
		
		
	return 0;

 

}
