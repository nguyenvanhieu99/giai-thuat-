#include<iostream>
#include<cstring>
using namespace std;
void ham(char *str){
	char buffer[16];
	strcpy(buffer,str);
}
int main(){
	char l[256];
	for(int i=0;i<256;++i){
		l[i]='A';
	}
	ham(l);

	return 0;
}

