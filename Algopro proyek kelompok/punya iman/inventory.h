#pragma once
#include <iostream>
using namespace std;

void inventory()
{
	system("cls");
	cout<<"INVENTORY"<<endl;
	cout<<garis<<endl;
	cout<<"Tanah: "<<users[activeacc].tanah<<" Hektar"<<endl;
	cout<<"Mobil: "<<endl;
	cout<<"- Nissan: "<<users[activeacc].jmlhcar[0]<<endl;
	cout<<"- Toyota: "<<users[activeacc].jmlhcar[1]<<endl;
	cout<<"- Daihatsu: "<<users[activeacc].jmlhcar[2]<<endl;
	cout<<garis<<endl;
	system("pause");
	menu();
}
