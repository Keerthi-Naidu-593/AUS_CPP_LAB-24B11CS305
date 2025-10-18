 #include <iostream>
 using namespace std;
 int main() {
 try {
 int choice;
 cout << "Enter 1 for int exception, 2 for float exception, 3 for string exception: ";
 cin >> choice;
 if (choice == 1)
 throw 25; // Integer exception
 else if (choice == 2)
 throw 3.14f; // Float exception
 else if (choice == 3)
 throw "thanks"; // String exception
 else
 throw 'K'; // Character exception
 }
 catch (int e) {
 cout << "Caught an integer exception: " << e << endl;
 }
 catch (float e) {
 cout << "Caught a float exception: " << e << endl;
 }
 catch (const char* e) {
 cout << "Caught a string exception: " << e << endl;
 }
 catch (...) {
 cout << "Caught an unknown exception!" << endl;
 }
 cout << "Program continues after exception handling." << endl;
 return 0;
 }

