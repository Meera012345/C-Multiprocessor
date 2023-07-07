#include<iostream>
#include<string.h>
using namespace std;

class Points
{
	public:
		int x;
		void set(int x)
		{
			this->x=x;
		}
		void get()
		{
			cout<<"X="<<x<<endl;
		}
		operator++(int)
		{
			x++;
		}
		operator--(int)
		{
			x--;
		}
};
int main()
{
	Points p;
	p.set(100);
	p.get();
	p++;
	p.get();
	p--;
	p.get();
}
