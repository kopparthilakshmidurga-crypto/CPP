#include<iostream>
using namespace std;
class rectangle
{
	private:
		float length,width;
	public:
		void getdata();
		void calculatearea();
};
void rectangle::getdata()
{
	cout<<"Enter length:"<<endl;
	cin>>length;
	cout<<"Enter width :"<<endl;
	cin>>width;
}
void rectangle::calculatearea()
{
	float area=length*width;
	cout<<"Area of rectangle is :"<<area<<endl;
}
int main()
{
	rectangle r;
	r.getdata();
	r.calculatearea();
	return 0;
}
