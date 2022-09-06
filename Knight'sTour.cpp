#include<bits/stdc++.h>
using namespace std;
int cnt = 1;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n,m;  
	cin >> n >> m;
	int table[n+1][m+1];
	for(int i =1;i <= n;i++){
		for(int j = 1;j <= m;j++){
			table[i][j] = 0;
		}
	}
	cnt = 0;
	int x,y;
	cin >> y >> x;
	table[x][y] = 1;
	for(int i =1;i <= n;i++){
		for(int j = 1;j <= m;j++){
			cout << table[i][j] << ' ';
		}
		cout << endl;
	}
	int cnts[8];
	vector<int> v;
	int cntm = 0;
	while(cnt <= n*m){	
		v.clear();
	 	/////////////////////////////////////////////////// X+1 Y+2
		if(x+1 <= n && y+2 <= m && table[x+1][y+2] == 0 && x+1 > 0 && y+2 > 0){
		 	x+=1;y+=2;
		 	
		 	if(x+1 <= n && y+2 <= m && table[x+1][y+2] == 0 && x+1 > 0 && y+2 > 0){ // X+1 Y+2
				cntm++;
			}
			if(x+2 <= n && y+1 <= m && table[x+2][y+1] == 0 && x+2 > 0 && y+1 > 0){ // X+2 Y+1
				cntm++;
			}
			if(x-1 <= n && y+2 <= m && table[x-1][y+2] == 0 && x-1 > 0 && y+2 > 0){ // X-1 Y+2
				cntm++;
			}
			if(x-2 <= n && y+1 <= m && table[x-2][y+1] == 0 && x-2 > 0 && y+1 > 0){ // X-2 Y+1		
				cntm++;
			}
			if(x+2 <= n && y-1 <= m && table[x+2][y-1] == 0 && x+2 > 0 && y-1 > 0){ // X+2 Y-1			
				cntm++;
			}
			if(x+1 <= n && y-2 <= m && table[x+1][y-2] == 0 && x+1 > 0 && y-2 > 0){ // X+1 Y-2			
				cntm++;
			}
			if(x-1 <= n && y-2 <= m && table[x-1][y-2] == 0 && x-1 > 0 && y-2 > 0){ // X-1 Y-2
				cntm++;
			}
			if(x-2 <= n && y-1 <= m && table[x-2][y-1] == 0 && x-1 > 0 && y-2 > 0 ){ // X-2 Y-1			
				cntm++;
			}
			cnts[0] = cntm;
			cntm = 0;
			x-=1;y-=2;
		}else{
			cnts[0] = 0;
			cntm = 0;
		}
		////////////////////////////////////////////////// X+2 Y+1
		if(x+2 <= n && y+1 <= m && table[x+2][y+1] == 0 && x+2 > 0 && y+1 > 0){ // X+2 Y+1
		 	x+=2;y+=1;
		 	
		 	if(x+1 <= n && y+2 <= m && table[x+1][y+2] == 0 && x+1 > 0 && y+2 > 0){ // X+1 Y+2
				cntm++;
			}
			if(x+2 <= n && y+1 <= m && table[x+2][y+1] == 0 && x+2 > 0 && y+1 > 0){ // X+2 Y+1
				cntm++;
			}
			if(x-1 <= n && y+2 <= m && table[x-1][y+2] == 0 && x-1 > 0 && y+2 > 0){ // X-1 Y+2
				cntm++;
			}
			if(x-2 <= n && y+1 <= m && table[x-2][y+1] == 0 && x-2 > 0 && y+1 > 0){ // X-2 Y+1		
				cntm++;
			}
			if(x+2 <= n && y-1 <= m && table[x+2][y-1] == 0 && x+2 > 0 && y-1 > 0){ // X+2 Y-1			
				cntm++;
			}
			if(x+1 <= n && y-2 <= m && table[x+1][y-2] == 0 && x+1 > 0 && y-2 > 0){ // X+1 Y-2			
				cntm++;
			}
			if(x-1 <= n && y-2 <= m && table[x-1][y-2] == 0 && x-1 > 0 && y-2 > 0){ // X-1 Y-2
				cntm++;
			}
			if(x-2 <= n && y-1 <= m && table[x-2][y-1] == 0 && x-1 > 0 && y-2 > 0 ){ // X-2 Y-1			
				cntm++;
			}
			cnts[1] = cntm;
			cntm = 0;
			x-=2;y-=1;
		}else{
			cnts[1] = 0;
			cntm = 0;
		}
		////////////////////////////////////////////////// X-1 Y+2
		if(x-1 <= n && y+2 <= m && table[x-1][y+2] == 0 && x-1 > 0 && y+2 > 0){ // X-1 Y+2
		 	x-=1;y+=2;
		 	
		 	if(x+1 <= n && y+2 <= m && table[x+1][y+2] == 0 && x+1 > 0 && y+2 > 0){ // X+1 Y+2
				cntm++;
			}
			if(x+2 <= n && y+1 <= m && table[x+2][y+1] == 0 && x+2 > 0 && y+1 > 0){ // X+2 Y+1
				cntm++;
			}
			if(x-1 <= n && y+2 <= m && table[x-1][y+2] == 0 && x-1 > 0 && y+2 > 0){ // X-1 Y+2
				cntm++;
			}
			if(x-2 <= n && y+1 <= m && table[x-2][y+1] == 0 && x-2 > 0 && y+1 > 0){ // X-2 Y+1		
				cntm++;
			}
			if(x+2 <= n && y-1 <= m && table[x+2][y-1] == 0 && x+2 > 0 && y-1 > 0){ // X+2 Y-1			
				cntm++;
			}
			if(x+1 <= n && y-2 <= m && table[x+1][y-2] == 0 && x+1 > 0 && y-2 > 0){ // X+1 Y-2			
				cntm++;
			}
			if(x-1 <= n && y-2 <= m && table[x-1][y-2] == 0 && x-1 > 0 && y-2 > 0){ // X-1 Y-2
				cntm++;
			}
			if(x-2 <= n && y-1 <= m && table[x-2][y-1] == 0 && x-1 > 0 && y-2 > 0 ){ // X-2 Y-1			
				cntm++;
			}
			cnts[2] = cntm;
			cntm = 0;
			x+=1;y-=2;		
		}else{
			cnts[2] = 0;
			cntm = 0;
		}
		////////////////////////////////////////////////// X-2 Y+1
		if(x-2 <= n && y+1 <= m && table[x-2][y+1] == 0 && x-2 > 0 && y+1 > 0){ // X-2 Y+1		
		 	x-=2;y+=1;
		 	if(x+1 <= n && y+2 <= m && table[x+1][y+2] == 0 && x+1 > 0 && y+2 > 0){ // X+1 Y+2
				cntm++;
			}
			if(x+2 <= n && y+1 <= m && table[x+2][y+1] == 0 && x+2 > 0 && y+1 > 0){ // X+2 Y+1
				cntm++;
			}
			if(x-1 <= n && y+2 <= m && table[x-1][y+2] == 0 && x-1 > 0 && y+2 > 0){ // X-1 Y+2
				cntm++;
			}
			if(x-2 <= n && y+1 <= m && table[x-2][y+1] == 0 && x-2 > 0 && y+1 > 0){ // X-2 Y+1		
				cntm++;
			}
			if(x+2 <= n && y-1 <= m && table[x+2][y-1] == 0 && x+2 > 0 && y-1 > 0){ // X+2 Y-1			
				cntm++;
			}
			if(x+1 <= n && y-2 <= m && table[x+1][y-2] == 0 && x+1 > 0 && y-2 > 0){ // X+1 Y-2			
				cntm++;
			}
			if(x-1 <= n && y-2 <= m && table[x-1][y-2] == 0 && x-1 > 0 && y-2 > 0){ // X-1 Y-2
				cntm++;
			}
			if(x-2 <= n && y-1 <= m && table[x-2][y-1] == 0 && x-1 > 0 && y-2 > 0 ){ // X-2 Y-1			
				cntm++;
			}
			cnts[3] = cntm;
			cntm = 0;
			x+=2;y-=1;
		}else{
			cnts[3] = 0;
			cntm = 0;
		}
		////////////////////////////////////////////////// X+2 Y-1
		if(x+2 <= n && y-1 <= m && table[x+2][y-1] == 0 && x+2 > 0 && y-1 > 0){ // X+2 Y-1			
		 	x+=2;y-=1;
		 	
		 	if(x+1 <= n && y+2 <= m && table[x+1][y+2] == 0 && x+1 > 0 && y+2 > 0){ // X+1 Y+2
				cntm++;
			}
			if(x+2 <= n && y+1 <= m && table[x+2][y+1] == 0 && x+2 > 0 && y+1 > 0){ // X+2 Y+1
				cntm++;
			}
			if(x-1 <= n && y+2 <= m && table[x-1][y+2] == 0 && x-1 > 0 && y+2 > 0){ // X-1 Y+2
				cntm++;
			}
			if(x-2 <= n && y+1 <= m && table[x-2][y+1] == 0 && x-2 > 0 && y+1 > 0){ // X-2 Y+1		
				cntm++;
			}
			if(x+2 <= n && y-1 <= m && table[x+2][y-1] == 0 && x+2 > 0 && y-1 > 0){ // X+2 Y-1			
				cntm++;
			}
			if(x+1 <= n && y-2 <= m && table[x+1][y-2] == 0 && x+1 > 0 && y-2 > 0){ // X+1 Y-2			
				cntm++;
			}
			if(x-1 <= n && y-2 <= m && table[x-1][y-2] == 0 && x-1 > 0 && y-2 > 0){ // X-1 Y-2
				cntm++;
			}
			if(x-2 <= n && y-1 <= m && table[x-2][y-1] == 0 && x-1 > 0 && y-2 > 0 ){ // X-2 Y-1			
				cntm++;
			}
			cnts[4] = cntm;
			cntm = 0;
			x-=2;y+=1;
		}else{
			cnts[4] = 0;
			cntm = 0;
		}
		////////////////////////////////////////////////// X+1 Y-2
		if(x+1 <= n && y-2 <= m && table[x+1][y-2] == 0 && x+1 > 0 && y-2 > 0){ // X+1 Y-2			
		 	x+=1;y-=2;
		 	
		 	if(x+1 <= n && y+2 <= m && table[x+1][y+2] == 0 && x+1 > 0 && y+2 > 0){ // X+1 Y+2
				cntm++;
			}
			if(x+2 <= n && y+1 <= m && table[x+2][y+1] == 0 && x+2 > 0 && y+1 > 0){ // X+2 Y+1
				cntm++;
			}
			if(x-1 <= n && y+2 <= m && table[x-1][y+2] == 0 && x-1 > 0 && y+2 > 0){ // X-1 Y+2
				cntm++;
			}
			if(x-2 <= n && y+1 <= m && table[x-2][y+1] == 0 && x-2 > 0 && y+1 > 0){ // X-2 Y+1		
				cntm++;
			}
			if(x+2 <= n && y-1 <= m && table[x+2][y-1] == 0 && x+2 > 0 && y-1 > 0){ // X+2 Y-1			
				cntm++;
			}
			if(x+1 <= n && y-2 <= m && table[x+1][y-2] == 0 && x+1 > 0 && y-2 > 0){ // X+1 Y-2			
				cntm++;
			}
			if(x-1 <= n && y-2 <= m && table[x-1][y-2] == 0 && x-1 > 0 && y-2 > 0){ // X-1 Y-2
				cntm++;
			}
			if(x-2 <= n && y-1 <= m && table[x-2][y-1] == 0 && x-1 > 0 && y-2 > 0 ){ // X-2 Y-1			
				cntm++;
			}
			cnts[5] = cntm;
			cntm = 0;
			x-=1;y+=2;
		}else{
			cnts[5] = 0;
			cntm = 0;
		}
		////////////////////////////////////////////////// X-1 Y-2
		if(x-1 <= n && y-2 <= m && table[x-1][y-2] == 0 && x-1 > 0 && y-2 > 0){ // X-1 Y-2
		 	x-=1;y-=2;
		 	if(x+1 <= n && y+2 <= m && table[x+1][y+2] == 0 && x+1 > 0 && y+2 > 0){ // X+1 Y+2
				cntm++;
			}
			if(x+2 <= n && y+1 <= m && table[x+2][y+1] == 0 && x+2 > 0 && y+1 > 0){ // X+2 Y+1
				cntm++;
			}
			if(x-1 <= n && y+2 <= m && table[x-1][y+2] == 0 && x-1 > 0 && y+2 > 0){ // X-1 Y+2
				cntm++;
			}
			if(x-2 <= n && y+1 <= m && table[x-2][y+1] == 0 && x-2 > 0 && y+1 > 0){ // X-2 Y+1		
				cntm++;
			}
			if(x+2 <= n && y-1 <= m && table[x+2][y-1] == 0 && x+2 > 0 && y-1 > 0){ // X+2 Y-1			
				cntm++;
			}
			if(x+1 <= n && y-2 <= m && table[x+1][y-2] == 0 && x+1 > 0 && y-2 > 0){ // X+1 Y-2			
				cntm++;
			}
			if(x-1 <= n && y-2 <= m && table[x-1][y-2] == 0 && x-1 > 0 && y-2 > 0){ // X-1 Y-2
				cntm++;
			}
			if(x-2 <= n && y-1 <= m && table[x-2][y-1] == 0 && x-1 > 0 && y-2 > 0 ){ // X-2 Y-1			
				cntm++;
			}
			cnts[6] = cntm;
			cntm = 0;
			x+=1;y+=2;
		}else{
			cnts[6] = 0;
			cntm = 0;
		}
		////////////////////////////////////////////////// X-2 Y-1
		if(x-2 <= n && y-1 <= m && table[x-2][y-1] == 0 && x-1 > 0 && y-2 > 0 ){ // X-2 Y-1			
		 	x-=2;y-=1;
		 	
		 	if(x+1 <= n && y+2 <= m && table[x+1][y+2] == 0 && x+1 > 0 && y+2 > 0){ // X+1 Y+2
				cntm++;
			}
			if(x+2 <= n && y+1 <= m && table[x+2][y+1] == 0 && x+2 > 0 && y+1 > 0){ // X+2 Y+1
				cntm++;
			}
			if(x-1 <= n && y+2 <= m && table[x-1][y+2] == 0 && x-1 > 0 && y+2 > 0){ // X-1 Y+2
				cntm++;
			}
			if(x-2 <= n && y+1 <= m && table[x-2][y+1] == 0 && x-2 > 0 && y+1 > 0){ // X-2 Y+1		
				cntm++;
			}
			if(x+2 <= n && y-1 <= m && table[x+2][y-1] == 0 && x+2 > 0 && y-1 > 0){ // X+2 Y-1			
				cntm++;
			}
			if(x+1 <= n && y-2 <= m && table[x+1][y-2] == 0 && x+1 > 0 && y-2 > 0){ // X+1 Y-2			
				cntm++;
			}
			if(x-1 <= n && y-2 <= m && table[x-1][y-2] == 0 && x-1 > 0 && y-2 > 0){ // X-1 Y-2
				cntm++;
			}
			if(x-2 <= n && y-1 <= m && table[x-2][y-1] == 0 && x-1 > 0 && y-2 > 0 ){ // X-2 Y-1			
				cntm++;
			}
			cnts[7] = cntm;
			cntm = 0;
			x+=2;y+=1;
		}else{
			cnts[7] = 0;
			cntm = 0;
		}
		////////////////////////////////////////////////////////////////////////////////////////////////////////
		for(int i =0;i < 8;i++){
			if(cnts[i] != 0){
				v.push_back(cnts[i]);
			}				
		}		
		int ok = -1;
		int vmin = *min_element(v.begin(),v.end());
		for(int i =0;i < 8;i++){
			if(cnts[i] == vmin && ok == -1){
				ok = i;
			}
		}
		if(x+1 <= n && y+2 <= m && table[x+1][y+2] == 0 && x+1 > 0 && y+2 > 0 && ok == 0){ // X+1 Y+2
			table[x+1][y+2]++;
			x+=1;
			y+=2;
			cnt++;
			for(int i =1;i <= n;i++){
				for(int j = 1;j <= m;j++){
					cout << table[i][j] << ' ';
				}
				cout << endl;
			}cout << endl;
			continue;
		}
		if(x+2 <= n && y+1 <= m && table[x+2][y+1] == 0 && x+2 > 0 && y+1 > 0 && ok == 1){ // X+2 Y+1
			table[x+2][y+1]++;
			x+=2;
			y+=1;
			cnt++;
			for(int i =1;i <= n;i++){
				for(int j = 1;j <= m;j++){
					cout << table[i][j] << ' ';
				}
				cout << endl;
			}cout << endl;
			continue;
		}
		if(x-1 <= n && y+2 <= m && table[x-1][y+2] == 0 && x-1 > 0 && y+2 > 0 && ok == 2){ // X-1 Y+2
			table[x-1][y+2]++;			
			x-=1;
			y+=2;
			cnt++;
			for(int i =1;i <= n;i++){
				for(int j = 1;j <= m;j++){
					cout << table[i][j] << ' ';
				}
			cout << endl;
			}cout << endl;
			continue;
		}
		if(x-2 <= n && y+1 <= m && table[x-2][y+1] == 0 && x-2 > 0 && y+1 > 0 && ok == 3){ // X-2 Y+1		
			table[x-2][y+1]++;
			x-=2;
			y+=1;
			cnt++;
			for(int i =1;i <= n;i++){
				for(int j = 1;j <= m;j++){
					cout << table[i][j] << ' ';
				}
			cout << endl;
			}cout << endl;
			continue;
		}
		if(x+2 <= n && y-1 <= m && table[x+2][y-1] == 0 && x+2 > 0 && y-1 > 0 && ok == 4){ // X+2 Y-1			
			table[x+2][y-1]++;
			x+=2;
			y-=1;
			cnt++;
			for(int i =1;i <= n;i++){
				for(int j = 1;j <= m;j++){
					cout << table[i][j] << ' ';
				}
			cout << endl;
			}cout << endl;
			continue;
		}
		if(x+1 <= n && y-2 <= m && table[x+1][y-2] == 0 && x+1 > 0 && y-2 > 0 && ok == 5){ // X+1 Y-2			
			table[x+1][y-2]++;
			x+=1;
			y-=2;
			cnt++;
			for(int i =1;i <= n;i++){
				for(int j = 1;j <= m;j++){
					cout << table[i][j] << ' ';
				}
			cout << endl;
			}cout << endl;
			continue;
		}
		if(x-1 <= n && y-2 <= m && table[x-1][y-2] == 0 && x-1 > 0 && y-2 > 0 && ok == 6){ // X-1 Y-2
			table[x-1][y-2]++;
			x-=1;
			y-=2;
			cnt++;
			for(int i =1;i <= n;i++){
				for(int j = 1;j <= m;j++){
					cout << table[i][j] << ' ';
				}
			cout << endl;
			}
			cout << endl;
			continue;
		}
		if(x-2 <= n && y-1 <= m && table[x-2][y-1] == 0 && x-1 > 0 && y-2 > 0 && ok == 7){ // X-2 Y-1			
			table[x-2][y-1]++;
			x-=2;
			y-=1;
			cnt++;
			for(int i =1;i <= n;i++){
				for(int j = 1;j <= m;j++){
					cout << table[i][j] << ' ';
				}
				cout << endl;
			}
			cout << endl;
			continue;
		}
		else{
			cout << "Done." << endl;
			break;
		}
	}

return 0;
}
