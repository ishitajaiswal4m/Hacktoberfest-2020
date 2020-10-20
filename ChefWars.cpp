//https://www.codechef.com/AUG20B/problems/CHEFWARS
#include <bits/stdc++.h>
using namespace std;
int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T,chef,darth;
    cin>>T;
    for(int t=0;t<T;t++){
        chef=1,darth=1;
        int health,power;
        cin >> health >> power;
        while(chef==1&&darth==1){
            health=health-power;
            power=power/2;
            if(health<=0)
                darth=0;
            else if(power==0)
                chef=0;
        }
        if(chef==0)
            cout <<"0"<<endl;
        else
            cout << "1" <<endl;
    }
    
    return 0;
}
