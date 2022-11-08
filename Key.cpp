#include <iostream>
#include <string>
using namespace std;
typedef struct key{
	char pub;
	char pr;
}Key;
int main()
{
	Key keys[19]={{'a', 'd'}, {'b', 'w'}, {'c', 'k'},{'d', ';'}, {'e', 'i'}, {'f', 'h'},
{'g', 'm'}, {'h', 'o'}, {'i', 'a'},
{'j', 'z'}, {'k', 'b'}, {'l', 'n'},
{'m', 'y'}, {';', 'c'}, {'w', 'e'},
{'o', 'f'}, {'y', 'g'}, {'z', 'j'},
{'n', 'l'}};
	string str;
	getline(cin,str,'\n');
	for(int i=0;i<str.length();i++){
		for(int j=0;j<19;j++){
			if(str[i]==keys[j].pr){
				str[i]=keys[j].pub;
				break;
			}
		}
	}
	cout<<str;
	return 0;
}
