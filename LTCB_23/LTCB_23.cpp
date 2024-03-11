#include <iostream>
#include<conio.h> 
using namespace std;
int main ()
{
	int thang; cout << "Nhap thang:"; cin >> thang;
	switch (thang) {
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			cout << "Thang " << thang << "co 31 ngay ";
			break;
		case 4:case 6:case 9:case 11:
			cout << "Thang " << thang << "co 30 ngay ";
			break;
		case 2: cout << "Thang " << thang << "co 29 ngay ";
			break;
		default:
			cout << "Ko co thang" << thang;
			break;
	}
	return 0;
}
