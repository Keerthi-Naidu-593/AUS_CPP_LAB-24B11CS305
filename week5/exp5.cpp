#include <iostream>
 #include <map>
 #include <string>
 using namespace std;
 int main() {
 // Declare a map with key as int and value as string
 map<int, string> student;
 // Insertion
 student[1] = "keer";
 student[2] = "nitya";
 student.insert({3, "padma"});
 student.insert({4, "kusuma"});
 cout << "Map Elements (Key -> Value):" << endl;
 for (auto it = student.begin(); it != student.end(); ++it) {
 cout << it->first << " -> " << it->second << endl;
 }
 // Searching an element
 int key = 3;
 auto it = student.find(key);
 if (it != student.end()) {
 cout << "\nFound: " << it->first << " -> " << it->second << endl;
 } else {
 cout << "\nKey " << key << " not found." << endl;
 }
 // Deleting an element
 student.erase(2);
 cout << "\nAfter deleting key 2:" << endl;
 for (auto &pair : student) {
 cout << pair.first << " -> " << pair.second << endl;
 }
 // Size of the map
 cout << "\nSize of the map: " << student.size() << endl;
 return 0;
}

