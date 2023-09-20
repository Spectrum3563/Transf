#include <iostream>
using namespace std;
#define M 1000000007
int i, j;
void way(){
	int n, m;
	cin >> n >> m;int coin[m];
	for(i=0;i<m;i++){
		cin >> coin[i];
	}
	int ways[n+1];
    for(i=0;i<=n;i++){
        ways[i]=0;
    }
    ways[0]=1;
    for(i=0;i<3;i++){
        for(j=0;j<=n;j++){
            if(coin[i] <= j){
                ways[j] += ways[ ( j - coin[i] ) ] ;
                ways[j] %= M;
            }
        }
    }
    cout << ways[n];return;
}

int main(){
    way();
}
