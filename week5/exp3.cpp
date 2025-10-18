#include <iostream>
 #include <vector>
 #include <list>
 using namespace std;
 int main() {
 // Vector operations
 vector<int> v;
 v.push_back(10);
 v.push_back(20);
 v.push_back(30);
 cout << "Vector elements: ";
 for (int i = 0; i < v.size(); i++)
 cout << v[i] << " ";
 cout << "\nSize: " << v.size() << ", Capacity: " << v.capacity() << endl;
 v.pop_back();
 cout << "After pop_back, Vector elements: ";
 for (auto it = v.begin(); it != v.end(); ++it)
 cout << *it << " ";
 cout << endl;
 // List operations
 list<int> l;
 l.push_back(100);
 l.push_front(50);
 l.push_back(150);
 cout << "\nList elements: ";
 for (auto it = l.begin(); it != l.end(); ++it)
 cout << *it << " ";
 l.remove(100); // remove element
 cout << "\nAfter removing 100, List elements: ";
 for (int x : l)
 cout << x << " ";
 cout << endl;
 return 0;
} 
