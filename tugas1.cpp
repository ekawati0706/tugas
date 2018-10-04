#include<iostream>
#include<conio.h>
#define max 3
using namespace std;
main()
{
	float a[max],jumlah=0,rata_rata;
	int j;
	
	cout<<"masukan nilai : \n\n";
	for(j=0;j<max;j++)
	{
		cout<<"A["<<j<<"]=";
		cin>>a[j];
		jumlah=jumlah+a[j];
    }
		rata_rata=jumlah/max;
		cout<<endl;
		
		cout<<"nilai rata-rata= "<<rata_rata;
		
		getch();
	
}
