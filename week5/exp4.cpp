#include <iostream>
 #include <deque>
 using namespace std;
 int main() {
 deque<int> dq;
 // Insert elements
 dq.push_back(10); // Insert at rear
 dq.push_back(20);
 dq.push_front(5); // Insert at front
 cout << "Deque elements: ";
 for (int x : dq) {
 cout << x << " ";
 }
 cout << endl;
 // Access elements
 cout << "Front element: " << dq.front() << endl;
 cout << "Back element: " << dq.back() << endl;
 // Deletion
 dq.pop_front(); // Remove front element
 dq.pop_back(); // Remove rear element
 cout << "Deque after deletion: ";
 for (int x : dq) {
 cout << x << " ";
 }
 cout << endl;
 // Insert more elements
 dq.push_front(100);
 dq.push_back(200);
 cout << "Deque final state: ";
 for (int x : dq) {
 cout << x << " ";
 }
 cout << endl;
 return 0;
}
