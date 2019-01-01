#include <iostream>
using namespace std;

int main ()
{
	int a,b,hasil;
	
	cout <<"==========================================="<<endl;
	cout <<"PROGRAM VALIDASI PEMBAGIAN TIDAK DENGAN NOL"<<endl;
	cout <<"==========================================="<<endl;
	
	cout <<"MASUKKAN BILANGAN A = ";
	cin >>a;
	cout <<"MASUKKAN BILANGAN B = ";
	cin >>b;
	
	if (b==0)
	{
	cout <<"MAAF, PEMBAGIAN TIDAK BISA DENGAN NOL"<<endl;
	}
	else
	{
	hasil = a/b;
	cout <<"HASIL PEMBAGIAN = "<<hasil;
	}
}
