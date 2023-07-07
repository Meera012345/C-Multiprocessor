#include<iostream>
#include<string.h>
using namespace std;

class Method
{
	public:
		int x;
		void Chandrayaan3()
		{
			cout<<"____________Chandrayaan:-3____________"<<endl<<endl;
			cout<<"ISRO Announces that Chandrayaan-3,india's third lunar mission,will be launches on july 14,2023."<<endl;
			cout<<"Chandrayaan-3 is composite of three Modules"<<endl;
			cout<<"1.Propulsion"<<endl<<"2.lander"<<endl<<"3.Rover"<<endl<<endl;
		}
		void Chandrayaan3(int n)
		{
			cout<<"The spacecraft will weight is "<<n<<" Kg."<<endl;
		}
		void Chandrayaan3(int a,int b)
		{
			cout<<"The propulsion module weigh is "<<a<<" kg."<<endl;
			cout<<"The lander module,including the rover,weighs "<<b<<" kg."<<endl;
		}
		void Chandrayaan3(int p,int q,int r,int w)
		{
			cout<<"The Propulsion Module will carry the lander and rover configuration until the spacecraft is in a "<<p<<" KM luna orbit."<<endl;
			cout<<"The power of Propulsion Module is "<<q<<" W."<<endl;
			cout<<"The Lander module power is "<<r<<" W."<<endl;
			cout<<"The WS with Bias Rover power is "<<w<<" W."<<endl;
		}
};
int main()
{
	Method m;
	m.Chandrayaan3();
	m.Chandrayaan3(3900);
	m.Chandrayaan3(2148,1752);
	m.Chandrayaan3(100,758,738,50);
	return 0;
}
