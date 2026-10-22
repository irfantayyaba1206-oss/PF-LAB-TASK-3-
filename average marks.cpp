#include <iostream>
using namespace std;
 
int main() {
    int marks, total = 0, count = 0;
 
    cout << "Enter marks (-1 to stop): ";
    cin >> marks;
 
    while (marks != -1) {
        total = total + marks;
        count++;
        cin >> marks;
    }
 
    if (count > 0) {
        double average = (double)total / count;
        cout << "Average = " << average << endl;
    } else {
        cout << "No marks entered." << endl;
    }
 
    return 0;
}
