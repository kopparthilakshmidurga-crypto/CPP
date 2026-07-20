#include<iostream>
using namespace std;
class student
{
	public:
		static int count;
	void display()
	{
		cout<<"Count: "<<count<<endl;
	}
};
 int student::count=100;
int main()
{
	student s1,s2;
	s1.display();
	s2.display();
	return 0;
}
