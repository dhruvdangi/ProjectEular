#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n1,n2;
	int ans=0;
	for(n1=999;n1>1;n1--)
	{	for(n2=990;n2>1;n2 -= 11)
		{
			int palindrome = n1 * n2;
			int reverse = 0, palindrome_copy = palindrome;
			while(palindrome!=0){
				reverse = (palindrome % 10) + reverse * (pow(10,1));
				palindrome /= 10;
			}
			if(palindrome_copy == reverse && palindrome_copy > ans)
				{
					ans = palindrome_copy;
				}
		}
	}
	cout<<ans;
}