#include<bits/stdc++.h>
using namespace std;
#define M 1000000007

void lcs1(){
	string s1, s2;
	cin >> s1 >> s2;
	int l1=s1.length();
	int l2=s2.length();
	int n[s1.length()+1][s2.length()+1];
	for(int i=0;i<=l1;i++){
		n[i][0]=0;
	}
	for(int i=0;i<=l2;i++){
		n[0][i]=0;
	}
	for(int i=1;i<=l1;i++){
		for(int j=1;j<=l2;j++){
			if(s1[i]==s2[j]){
				n[i][j]=n[i-1][j-1]+1;
			}else{
				if(n[i-1][j]>n[i][j-1]){
					n[i][j]=n[i-1][j];
				}else{
					n[i][j]=n[i][j-1];
				}
			}
		}
	}
	
	cout << n[s1.length()][s2.length()] << "\n";
	return;
}
/*int ln=n[s1.length()][s2.length()];
	string lcs="";
	int i=l1, j=l2;
	while(i>0&&j>0){
		if(s1[i-1]==s2[j-1]){
			lcs=s1[i-1]+lcs;
		}else if(n[i-1][j]>n[i][j-1]){
			
		}
	}*/
int main(){
	lcs1();
}
