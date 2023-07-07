#include<iostream>
#include<string.h>

using namespace std;

class Brother
{
	private:
		char M[];
		
	public:
		Brother(char D[])
		{
			strcpy(M,D);
		}
		void set_value()
		{
			cout<<"Whom Day is Today?"<<endl;
		}
		void set_value(char D[])
		{
			cout<<M<<" "<<D;
		}
};
int main()
{
	Brother m("Today is");
	m.set_value();
	m.set_value("Brother's Day..");
	return 0;
}
