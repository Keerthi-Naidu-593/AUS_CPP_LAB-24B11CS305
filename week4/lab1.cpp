// Function Templates 
#include<iostream>
 using namespace std; 
template <typename T> 
T add(T a, T b)  
{ 	 
     return a + b; 
}
 int main()  
{ 	 	
        cout << "integers sum= "<< add<int>(2, 5) << "\n";    
	 	cout << "double sum= "<< add<double>(2.4, 3.5) << "\n"; 
   	 	cout << "float sum= "<<add<float>(1.33f,1.66f)<<"\n"; 
   	 	return 0; 
} 

