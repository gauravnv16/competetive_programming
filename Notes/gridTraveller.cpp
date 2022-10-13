#include <bits/stdc++.h>

using namespace std;
int gridTraveller(int x,int y){
    if(x == 0 || y == 0) return 0;
    if(x == 1 || y == 1) return 1;
    int right = gridTraveller(x,y-1);
    int down = gridTraveller(x-1,y);

    return right+down;
}
int main(){
    int m,n;
    scanf("%d %d",&m,&n);
    printf("%d",gridTraveller(3,2));
    return 0;
}

