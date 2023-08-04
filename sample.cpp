#include<bits/stdc++.h>
using namespace std;
class Distance
{
		int feet;
		int inches;
	public:
		void inputdis()
		{
			cout<<"Enter feet: ";
			cin>>feet;
			cout<<"Enter inches: ";
			cin>>inches;
		}
		void outputdis()
		{
			cout<<"Total Distance: feet= "<<feet<<" inches= "<<inches<<endl;
		}
		void add(Distance d11, Distance d22)
		{
			feet = d11.feet + d22.feet;
			inches = d11.inches + d22.inches;
			feet = feet + (inches / 12);
			inches = inches % 12;
		}
};
int main()
{
	Distance d1, d2, d3;
	d1.inputdis();
	d2.inputdis();
	d3.add(d1, d2);
	d3.outputdis();
	return 0;
}
