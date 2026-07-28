#include<iostream>
#include<string>
using namespace std;
class A
{
	int a,b;
	string name;
	public:
		A() {a=0;b=0;name="Null";
		cout<<"Object is created..."<<endl;}
		A(int x) {
		a=x;b=x; 
		}
		A(int x,int y) { 
		a=x;b=y; 
		}
		A(int x,int y,string s) {
		a=x;b=y;name=s;  
		}
		A(string s,int x,int y)  {
		name=s;a=x;b=y;  
		}
		~A()
		{ cout<<"Object is destroyed  ..... "<<endl; }
		
		 void printing()
		{ cout<<" a=  "<<a<<"  b  "<<b<<"  Name:  "<<name<<endl;   }
};
		int main()
		{
			A obj1;
			obj1.printing();
			A obj2(20);
			obj2.printing();
			A obj3(24,32);
			obj3.printing();
			A obj4(20,39,"aditya");
			obj4.printing();
			A obj5("cpp",20,22);
			obj5.printing();
		}
