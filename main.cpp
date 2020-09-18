#include <iostream>
using namespace std;
#include "company.h"//Aggregation 
#include "room.h"
#include "hall.h"
//using namespace std;

#include "transport.h"//abstract class (ploymorphism)
#include "land.h"//Derived class
#include "water.h"//Derived class
#include "air.h"//Derived class

int main()
{ 
	int y,x,k=0;
	int count=1;
	vector <company> v;
	vector <string> e;
	cout<<"                     WELCOME TO INDGOOD INTERNATIONALS TRANSPORTATION         "<<endl;
	while(count)
	{
     //company c;
     v.push_back(company());
     x = 1;
		while(x)
		{

			cout << "Enter\n" << "1 to allocate Room\n" << "2 to allocate Hall\n" << "3 if no storage is required\n";
			cin >> y;
			room r;
			hall h;
			if(y==1)
			{
				  
				  cin >> r;
			}
			if(y==2)
			{
				
				cin >> h;
			}
			switch(y)
			{
				case 1: 
				  v[k].GetRoom(r);
				  break;
				case 2:
				  v[k].GetHall(h);
				  break;
				default:
				   break;
			}
			
			cout << "Press 0 If you want to go to next step \n" <<"Press 1 If you want to continue the same process\n";
			cin >> x;
		}
	v[k].take_order();
	string s = v[k].Export();
	e.push_back(s);
	cout << "\n" << "Press 0 If you want to go to next step\n" << "Press 1 If you want to continue the same process\n";
	cin >> count;
	k++;
	cout << endl;
   }

  cout << "Press 3 if you want to see Database\n"<<"Press 4 if you want to exit from program\n";
  cin >> count;


 if(count == 3)
 {
		for(int i=0;i<v.size();i++)
		{
		v[i].financial_statement();
		float r;
		int s;
		r = v[i].distance;
		s = v[i].quantity;
		if(e[i]=="Land")
		{
			land_transport l(r,s,50000,120); 
			transport* t;
			t = &l;
			t->show();
		}
		else if(e[i]=="Sea")
		{
			ship_transport sh(r,s,100000,50);
		    transport* t;
		    t = &sh;
		    t->show();
		}
		else
		{
			air_transport A(r,s,25000,500);
		     transport* t;
		     t = &A;
		     t->show();
		}
		}
		cout<<"   \n\n\n       THANKS FOR USING SOFTWARE  !       "<<endl;
  } 
  else
  {
  	cout<<"     \n\n\n     THANKS FOR USING SOFTWARE !        "<<endl;
  	  exit(0);
  }
	return 0;
}
