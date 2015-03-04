#include<iostream>
using namespace std;
int main(){
	long int largest, div = 2, num = 600851475143;
	bool repeat = true;
	while(repeat){
		cout<<"div"<<div<<":"<<largest<<endl;
		if(num % div !=0)
			div += 1;
		else{
			largest = num;
			num /= div;
			if(num == 1){
				cout<<largest;
				repeat = false;
			}
		}
		if (num == 0)
			repeat = false;
	}
}