/*Count the numbers of digits, letters and blank spaces separately in an input string. Note there is no '\n' on the end of the input. You can use code below to get each character from keyboard.
---------------------------
char c;
while (cin.get(c)) {
your counting code is here.
......
}
---------------------------
Sample Input
He110, w0r1d!
Sample Output
5 5 1*/
#include <iostream>
using namespace std;
int main()
{
char c;
int dig=0,let=0,bla=0;
while (cin.get(c)) {
	if(c>='0'&&c<='9'){
		dig++;
	}
	if((c>='a'&&c<='z')||(c>='A'&&c<='Z')){
		let++;
	}
	if(c==' '){
		bla++;
	}
}
cout<<dig<<' '<<let<<' '<<bla;
	return 0;
}
