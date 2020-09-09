#include<bits/stdc++.h>
using namespace std;

int const no=50;
int c=0;

class store
{
	int goodsCode[no];
	float goodsPrice[no];
public:
	void calculate();
	void addGoods();
	void editGoods();
	void display();
	void search();
	void delGood();
};

void store::addGoods()
{
	cout<<"Enter Good Code: ";
	cin>>goodsCode[c];
	
	cout<<"Enter Price:";
	cin>>goodsPrice[c];
	c++;
}

void store::display()
{
	cout<<"\nGoods"<<setw(8)<<"Price\n";
	
  for(int i=0;i<c;i++)	
  {
	cout<<"\n"<<goodsCode[i];
 	cout<<setw(5)<<" "<<goodsPrice[i];
  }
  cout<<"\n------------";
}

void store::calculate()
{
	float sum=0;
for(int i=0;i<c;i++)	
	sum+=goodsPrice[i];
 cout<<"\nTotal Bill: "<<sum<<"\n";	
}

void store::editGoods()
{
	int x,NewCode,NewPrice;
	cout<<"\nEnter Good Code to edit: ";
	cin>>x;
	cout<<"\nEnter New Code: ";
	cin>>NewCode;
	cout<<"\nEnter New Price: ";
	cin>>NewPrice;
	
 for(int i=0;i<c;i++)
   if(goodsCode[i]==x)
     {
     	goodsCode[i]=NewCode;
     	goodsPrice[i]=NewPrice;
	 }  
}

void store::search()
{
	bool flag=false;
	int x;
	cout<<"\nEnter Goods Code to Check: ";
	cin>>x;
 for(int i=0;i<c;i++)
 {
   if(goodsCode[i]==x)
	{
		flag=true;
	}
 }

if(flag != false)
 cout<<"Available\n";
else 
 cout<<"Not Available\n"; 
}

void store::delGood()
{
  int x;
  cout<<"Enter item code: ";
  cin>>x;
 for(int i=0;i<c;i++)
 {
   if(goodsCode[i]==x)
	{
	  goodsPrice[i]=0;
	  goodsCode[i]=0;	
	}
 }
}

main()
{
   int option;
   store obj;
	cout<<setfill('*')<<setw(28)<<" * FASHION WEAR * "<<setfill('*')<<setw(11)<<'\n';
	
	cout<<setfill(' ')<<setw(28)<<"DEPARTMENTAL STORE"<<"\n"<<"\n"<<"\n";	
    
	cout<<"\n"<<"   MAIN MENU"<<"\n";
    cout<<" ****************";
    cout<<"\n 1.Calculate Bill\n";
	cout<<"\n 2.Add Goods\n";
	cout<<"\n 3.Edit Goods\n";
	cout<<"\n 4.Display All\n";   
    cout<<"\n 5.Search\n";
    cout<<"\n 6.Delete Goods\n";
    cout<<"\n 7.Exit\n";
	cout<<" ****************\n";
	
do
{
cout<<"\nChoose from above options(1-7): ";
cin>>option;
 switch(option)
  {
    case 1: obj.calculate();
	break;
	case 2: obj.addGoods();
	break;
	case 3: obj.editGoods();
	break;
    case 4: obj.display();
	break;
	case 5: obj.search();
	break;
	case 6: obj.delGood();
	break;
	case 7: break;
	default: cout<<"Invalid input,Try Again\n";
  }	
}while(option!=7);

}
