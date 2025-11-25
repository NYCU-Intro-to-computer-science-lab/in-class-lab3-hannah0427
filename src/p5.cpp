#include <iostream>
#include <cmath>
using namespace std;

int step=0;

void hanoi(int n, int A, int B, int C){
 if(n == 1){
 cout << "Move disk "<< n << 'from' << A << " to " << B << endl;
 cout << "Move disk "<< n << 'from' << B << " to " << C << endl;
 step++;
 }
 else{
 hanoi(n-1, A, C, B);
 hanoi(1, A, B, C);
 hanoi(n-1, B, A, C);
 }
}
int main(){
 int n;
 cin >> n;
 hanoi(n, A, B, C);
 cout << step << endl;
}