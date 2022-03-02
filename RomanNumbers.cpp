//Program No. 15
#include<iostream>
#include<windows.h>
#include<iomanip>
using namespace std;
main ()
{
     int z,a=1;
     system("color 1E");
     cout<<setw(10)<<"Binary Numbers"<<"	"<<setw(10)<<"Roman Numbers";
	for (z=1; z<=100; z++){
		if (z>=1 && z<=100){
			cout<<endl<<setw(10)<<a++<<setw(10);
		}	
			switch (z/10){
			case 1 :
				{	
					cout<<"X";
					break;
				}
			case 2 :
				{
					cout<<"XX";
					break;
				}
			case 3 :
				{
					cout<<"XXX";
					break;
				}
			case 4 :
				{
					cout<<"XL";
					break;	
				}
			case 5 :
				{
					cout<<"L";
					break;
				}
			case 6 :
				{
					cout<<"LX";
					break;
				}
			case 7 :
				{
					cout<<"LXX";
					break;
				}
			case 8 :
				{
					cout<<"LXXX";
					break;
					}
			case 9 :
				{
					cout<<"XC";
					break;
					}
			case 10 :
				{
					cout<<"C";
					break;
						}
			default :
			{
				break;
					}		
		}
		
		switch (z%10){
			case 1 :
				{
					cout<<"I";
					break;
				}
			case 2 :
				{
					cout<<"II";
					break;
				}
			case 3 :
				{
					cout<<"III";
					break;
				}
			case 4 :
				{
					cout<<"IV";
					break;
				}
			case 5 :
				{
					cout<<"V";
					break;
				}
			case 6 :
				{
					cout<<"VI";
					break;
				}
			case 7 :
				{
					cout<<"VII";
					break;
				}
			case 8 :
				{
					cout<<"VIII";
					break;
				}
			case 9 :
				{
					cout<<"IX";
					break;
				}
			case 10 :
				{
					cout<<"X";
					break;
				}
			default :
			{
				
				break;
			}			
		}
	}

 return 0;
}

