#include<cstdio> 
#include<iostream>
#include<cstring>
using namespace std;
void chuanhoa(char s[]){
	char sc[100]="" ;
	char st[10]="";
	strcat(st,", ");
	char *p=strtok(s," ") ;
	while (p!=NULL){
		p[0]=toupper(p[0]);
		for(int i=1;i<strlen(p);i++){
			
			p[i] = tolower(p[i]) ;
			
		}
		strcat( sc , p )   ;
		p=strtok(NULL," ") ;

		strcat(sc," ")     ;
		
	}

	puts(sc)               ;
}

int main(){
	int bo;char s[100];
	scanf("%d",&bo);gets(s);
	while(bo--){
		
		gets(s);
		
		
		chuanhoa(s);
		
	}

	return 0;
}

