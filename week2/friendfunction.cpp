// Adding Two Classes using FRIEND FUNCTIONS
#include<iostream>
using namespace std;

class Demo 
{	private:
     int x, y;

     void fun1() 
	 {
        x = 10;
        y = 20;
        cout << "I am inside member function (fun1()) in the class" << endl;//here we can directly write <<x<y since they are inside the class
     }
public:
 void fun2() 
	 {
       
        cout << "I am inside member function (fun2()) in the class" << endl;
     }

     friend void add(Demo d);  // Declare friend function with parameter
};

void add(Demo d) {  // Friend function
    // Cannot call d.fun1() because it is private
    // So we need to set values directly if possible, or use constructor
    d.x = 10;  // Accessing private data
    d.y = 20;
    cout << "Sum = " << d.x + d.y << endl;
	//here we cannot directly write <<x<y since they are outside the class but as it is friend function we can access using object
}

int main() {
    Demo ob;
    add(ob); 
	 // Pass object to friend function
	 ob.fun2();
    return 0;
}
