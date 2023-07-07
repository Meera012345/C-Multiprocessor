#include<iostream>
#include<string.h>
using namespace std;

class india
{
	public:
		void Wearing()
		{
			cout<<"                                            ______________CLOTHING IN INDIA______________"<<endl<<endl;
			cout<<"         Clothing in India varies with the different ethnicities, geography, climate, and cultural traditions of the people of each region of India."<<endl<<endl;	
			cout<<"         Traditional Indian clothing for women across the country in Indian includes saris worn with choli tops; a skirt called a lehenga or chaniya worn with choli and a dupatta scarf to create an ensemble called a ghagra choli; while many south Indian children traditionally wear Langa_voni."<<endl<<endl;
			cout<<"         For men, traditional clothes are the Achkan/Sherwani, Bandhgala, Lungi, Kurta, Angarkha, Jama, Dhoti or Kurta Pajama."<<endl<<endl;
			cout<<"         The Indian fashion industry as such remains academically understudied, even though there is research available on textiles, craft traditions and history of Indian dress."<<endl<<endl<<endl;	
		}
};
class pakistan : public india
{
	public:
		void Wearing()	
		{
			cout<<"                                           ______________CLOTHING IN PAKISTAN______________"<<endl<<endl;
			cout<<"        Pakistani clothing refers to the ethnic clothing that is typically worn by people in the country of Pakistan and by the people of Pakistani origin."<<endl<<endl;
			cout<<"        The Shalwar kameez, Achkan Sherwani and Kurta shalwar Kameez are the national dresses of Pakistan and is worn by men and women in all five provinces of Punjab, Sindh, Balochistan, Khyber Pakhtunkhwa, and Gilgit-Baltistan in the country and in Azad Kashmir."<<endl<<endl;
			cout<<"        Pakistani fashion industry is introducing Pakistani traditional dresses all over the world as cultural representatives and is becoming a reason to introduce international trends in Pakistan."<<endl<<endl<<endl<<endl;	
		}	
};
int main()
{
	pakistan o1;
	o1.Wearing();
	o1.india::Wearing();
}
