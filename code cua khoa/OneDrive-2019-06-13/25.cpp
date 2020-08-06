#include <iostream>
#include <list>


using namespace std;

struct Job{
	int p;
	int d;
};


bool compare(const Job& j1, const Job& j2){
	return j1.d<j2.d;
}

void init(){
	int n;
	list<Job> List;
	Job j;
	
	cin >> n;
	for(int i=0; i<n; ++i){
		cin >> j.p >> j.d;
		List.push_back(j);
	}
	
	List.sort(compare);
/*	cout << "\n--------\n";
	for(auto it=List.begin(); it!=List.end(); ++it)
		cout << it->p << "  " << it->d << endl;*/
		
	
	int t=0, res=0;
	for(auto it=List.begin(); it!=List.end(); ++it)
		if (it->p >= t){
			++res;
			t = it->d;
		}
	
	cout << res << endl;
	
}


int main()
{
	int t, n;
	
	cin >> t;
	while (t--){
		init();
	}
	return 0;
}
