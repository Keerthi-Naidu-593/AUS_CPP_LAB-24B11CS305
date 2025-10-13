// Demonstration of OVERLOADING MEMBER FUNCTION

#include<iostream>
using namespace std;
class DemoOverloading
{
		public:
				void add()
				{
					cout<<"\nI am in add () - No Arg ";
					
				}
			inline	void add(int a, int b) //applying inline function to overload program
				{
					cout<<"\nI am in add (int, int ), The sum = "<<a+b;
					
				}
			inline	void add(float a, float b)
				{
					cout<<"\nI am in add (float, float ) - The sum = "<<a+b;
					
				}
			inline	void add(int a, float b)
				{
					cout<<"\nI am in add(int, float) - The sum="<<a+b;
				}
};
int main()
{
	DemoOverloading ob;
	ob.add();
	ob.add(10,20);
	ob.add(10.5f,10.5f);
	ob.add(10,10.5f);
}
