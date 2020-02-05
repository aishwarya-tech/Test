#include <iostream>
#include <string>
using namespace std;

class gifts
{
	public:
		string quantity;
		int weight;
		public:
		string getquan()
		{
			cout<<"Enter the quantity: ";
			getline(cin,quantity);
			return quantity;
		}
		
		int getwei()
		{
			cout<<"Enter the weight of gift: ";
			cin>>weight;
			return weight;
		}
};

class choco: public gifts
{
	public:
		int wgt;
	//	wgt=0;
	public:
		void itemwei()
		{
	/*	for(k=0;k<=20;k++)
		{
			wgt=wgt+
		} */
		
		}  
};

class sweets: public gifts
{
	public:
		int wgt1;
		//wgt1=0;
	public:
		void itemwei1()
		{
	/*	wgt1= wgt1+weight;
		return wgt1;  */
		}   
};

int main()
{
	string ans;
	int ch;
	choco c1;
	sweets s1;
	string a[10],b[10],x[10];
	int c[20],d[20];
	int i,j,w1,k,w2;
	j,k=0;
	for(i=0; i<=20;i++)
	{
		c[i]=0;
		d[i]=0;
	}
	
	do
	{
	cout<<"\n 1) Gift Chocolates \n 2) Gift sweets \n 3) Total weight of chocolate gift\n 4) Total weight of sweets gift \n 5) Sort chocolates \n Enter your choice: ";
	cin>>ch;
	switch(ch)
	{
		case 1:
			cout<<"\n Gifting chocolates!! \n";
			a[j]=c1.getquan();
			c[j]=c1.getwei();
			j++;
			break;
			
		case 2:
			cout<<"\n Gifting sweets!! \n";
			b[k]=s1.getquan();
			d[k]=s1.getwei();
			k++;
				break;
				
		case 3:
			//c1.wgt=0;
			w1=0;
			for(i=0;i<=20;i++)
			{
				w1=w1+c[i];
			}
				//w1=c1.itemwei();
				cout<<"\n The total weight is: "<<w1;
				break;
				
		case 4:
			//s1.wgt1=0;
			w2=0;
			//	s1.itemwei1();
			for(i=0;i<=20;i++)
			{
				w2=w2+d[i];
			}
				cout<<"\n The total weight is: "<<w2;
				break;
				
		case 5:
			cout<<"\n Enter the chocolate: ";
			cin>>ans;
			for(i=0; i<=10; i++)
			{
				if(a[i] == ans)
				{
					x[i]=a[i];
				}
			}
			for(i=0;i<=5;i++)
			{
				cout<<x[i];
			}
	}
}while(1);
	
	
	//choco c1;

	

	
//	sweets s1;
	


	return 0;

}
