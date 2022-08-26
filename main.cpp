    #include <iostream>
    #include <string>
    #include <vector>
    #include <algorithm>
    #include <cmath>
    #include <iomanip>
     
    #define ll long long
     
    using namespace std;
     
    /**
     * Auto-generated code below aims at helping you parse
     * the standard input according to the problem statement.
     **/
     
    int main()
    {
        int t;
        cin >> t; cin.ignore();
        for(int ti=0;ti<t;ti++){
            int n,m;
            cin>>n>>m;
            vector<string> s(n);
            for(int i=0;i<n;i++) cin>>s[i];
            for(int i=0;i<m;i++){
    			int p=n-1;
    			bool free=false;
    			for(int j=n-1;j>=0;j--){
    				if(free){
    					if(s[j][i]=='o'){
    						p=j-1;
    						free=false;
    					}else if(s[j][i]=='*'){
    						s[p][i]='*';
    						s[j][i]='.';
    						p--;
    					}
    				}else{
    					if(s[j][i]=='.')free=true;
    					else p=j-1;
    				}
    			}
    		}
            for(int i=0;i<n;i++){
    			cout<<s[i]<<endl;
    		}
        }
    }