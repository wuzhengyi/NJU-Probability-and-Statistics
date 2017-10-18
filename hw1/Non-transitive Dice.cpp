#include <iostream>
#include <algorithm>
//#include <numeric>

using namespace std;

void gen(int *,int ,int);
bool comp(short *,short *);
void showDice(short*);

int cnt = 0;
short int dices[462][6];

int main(){
	int array[6];
	
	gen(array,0,6);

	
	short  *x,*y,*z;
	for(int i=0;i<cnt;i++){
		x = dices[i]; 
		for(int j=0;j<cnt;j++){
			y = dices[j];
			if(comp(x,y)==false)
				continue;
			for(int k=0;k<cnt;k++){
				z = dices[k];
				if(comp(y,z)&&comp(z,x)){
				
					cout << "solution:" << endl;
					showDice(x);
					showDice(y);
					showDice(z);
					cout << endl;
				}
			}
		}
	}
} 

void gen(int a[],int x,int sum){
	if(x==5){
		//a[x] = sum - accumulate(a,a+x,0);
		a[x] = sum;
		//int index = 0;
		for(int i=0;i<=5;i++){
			//int n = a[i];
			//while(n--){
				//cout << i+1 << " ";
				//dices[cnt][index] = i+1;
			//	index ++;
			//}
			dices[cnt][i] = a[i];
		}
		//cout << endl;
		cnt++;
	}
	else{
		for(int i=0;i<=sum;i++){
			a[x] = i;
			gen(a,x+1,sum-i);
		}
	}
}

bool comp(short *a,short *b){
	int sum = 0 ;
	for(int i=1;i<6;i++){
		for(int j=0;j<i;j++){
			sum += a[i] * b[j];
		}
	}
	if(sum > 20)
		return true;
	else
		return false;
}

void showDice(short *a){
	for(int i=0;i<6;i++){
	
		int n = a[i];
		while(n--)
			cout << i+1 << " ";
	}
	cout << endl;
}
