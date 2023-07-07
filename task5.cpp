#include<iostream>
#include<string.h>
using namespace std;

class points
{
	public:
		int x,y;
		void set(int x,int y)
		{
			this->x=x;
			this->y=y;
		}
		void get()
		{
			cout<<"X="<<x<<"  "<<"Y="<<y<<endl;
		}
		points operator+(points n)
		{
			points temp;
			temp.x=this->x+n.x;
			temp.y=this->y+n.y;
			return temp;
		}
};
int main()
{
	points p1,p2,p3;
	p1.set(10,15);
	p1.get();
	p2.set(13,14);
	p2.get();
	p3=p1+p2;
	p3.get();
}
