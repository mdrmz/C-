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
		cout << "rahmin am�";
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
	str x; // yap�land�r�c� fonksiyon burada g�rev ald�
	cout << x.i << endl ;
	cout << x.mehmet << endl;
	x.hi("durmaz");
	cout << endl;
	x.getX();
	x.setX(3);
	x.getX();
		
		
	return 0;

 

}
