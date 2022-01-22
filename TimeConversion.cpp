#include <bits/stdc++.h>

using namespace std;

int main()
{
    int h,m,s;
    string day;
    char dump;
    
    cin >> h >> dump >> m >> dump >> s >> day;
    
    if(day[0] == 'A'){
        if(h == 12) h = 0;
    }else{
        if(h != 12) h+=12; 
    }
    
    printf("%02d:%02d:%02d",h,m,s);

    return 0;
}
