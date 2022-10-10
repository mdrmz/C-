/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: durmaz <durmaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 09:26:38 by durmaz            #+#    #+#             */
/*   Updated: 2022/10/10 09:26:38 by durmaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <iostream>
#include <clocale> 


using namespace std;


int toplama(int a, int b)
{
	int result;

	result = a + b;
	return result;
}

int cikarma(int a, int b)
{
	int result;
	
	result = a + b;
	return result;
}

int bolme(int a, int b)
{
	int result;

	if (b != 0)
	{
		result = a / b;
	}
	return 0;
}

int carmpa(int a, int b)
{
	int  result;

	if (a == 0 || b == 0)
		return 0;

		result = a * b;
		return result;
}

int us(int x, int power)
{
	int i;

	i = 1;
	for (int j = 0; j < power; j++)
	{
		i *= x;
	}
	return i;
}

int factorial(int a)
{
	int result;

	result = 1;
	if (a == 0 || a == 1)
		return 1;
	for (int i = 1; i <= a; i++)
	{
		result *= i;
	}
	return result;
}

double delta(int a, int b, int c)
{
	// ax^2+bx+c 
	double  deltax;

	deltax = (b * b) + (4 * a * c);
	if (deltax < 0)
	{
		cout << "Reel say�larda k�k yok\n";
		return 0;
	}
	else if (deltax == 0)
	{
		cout << "E�it k�kler bulundu\n";
			return deltax;
	}
	int x1, x2;

	x1 = (-b - (deltax * 1 / 2)) / 2 * a;
	x2 = (-b + (deltax * 1 / 2)) / 2 * a;
	cout << "x1 : " << x1 << "\nx2 :" << x2;
}

int main()
{
	
	setlocale(LC_ALL,  "Turkish");

		cout << "L�tfen Yapmak �stediginiz ��lemi �e�in";
		cout << "1.toplama" << endl << "2.��karma" << endl << "3.b�lme" << endl << "4.�arpma";
		cout << endl << "5.�s alma" << endl << "6.fakt�rial" << endl << "7.2.derecden k�k alma" << endl << "��kmal i�in 0 bas�n";
		int a;
		cin >> a;
		

		switch (a)
		{
		case 1:
		{
			cout << "l�tfen iki deger gir";
			int i, j;
			cin >> i;
			cin >> j;
			 cout << toplama(i, j);
			break;
		}
		case 2:
		{

			cout << "l�tfen iki deger gir";
			int i, j;
			cin >> i;
			cin >> j;
			cout << cikarma(i, j);
			break;
		}
		case 3:
		{
			cout << "l�tfen iki deger gir";
			int i, j;
			cin >> i;
			cin >> j;
			cout << bolme(i, j);
			break;
		}
		case 4:
		{
			cout << "l�tfen iki deger gir";
			int i, j;
			cin >> i;
			cin >> j;
			cout << carmpa(i, j);
			break;
		}
		case 5:
		{
			cout << "l�tfen iki deger gir";
			int i, j;
			cin >> i;
			cin >> j;
			cout << us(i, j);
			break;
		}
		case 6:
		{
			cout << "l�tfen deger gir";
			int i;
			cin >> i;
			cout << factorial(i);
			break;
		}
		case 7:
		{
			cout << "l�tfen �� deger gir";
			int i, j, k;
			cin >> i;
			cin >> j;
			cin >> k;
			cout << delta(i, j, k);
			break;
		}
		break;
		}
	
	return 0;
}


 
