#include <iostream>
using namespace std;
int main() {

int grade = 0;
int average = 0;
int count = 1;
int sumofgrades;


do {
  cout << "Enter the grade" << endl;
  cin >> grade;
  sumofgrades = sumofgrades + grade;
  count++;
}
while (count <=3);

average = sumofgrades / 3;
cout << "The average grade is " << average << "." << endl;

return 0;
}