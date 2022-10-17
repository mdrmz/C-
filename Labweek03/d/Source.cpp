#include <iostream>
using namespace std;

void hesapla(int* x, const int* size, const double& ort)
{
	int i = 0;
	while (i <= *size)
	{
		if (*(x + i) > ort)
		{
			cout << i << "." <<" ortalamdan buyuk deger : " << *(x + i) << endl;
		}
		i++;
	}
}
 double topla(int* x, int* size)
{
	int i;
	i = 0;
	int result = 0;
	
	while (i < *size)
	{
		result = result + *(x + i);
		i++;
	}
	
	return (double)(result / *size);
}
int main()
{
	int a = 4;
	int b;

	cout << "lutfen deger girin" << endl;
	cin >> a;
	int* dizi = new int[4];
	for (int i = 0; i < a; i++)
	{
		cout << "deger gir" << endl;
		cin >> b;
		dizi[i] = b;
	}
	

	hesapla(dizi, &a, topla(dizi, &a));



	return 0;


}



