#include<iostream>
using namespace std;
int main(){
int first = 1, second = 2, sum = 0;
while(second <= 4000000){
	if((second%2) == 0)
		sum += second;
	second += first;
	first = second - first;
}
cout<<sum;
}