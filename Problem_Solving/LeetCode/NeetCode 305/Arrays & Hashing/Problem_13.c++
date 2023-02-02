// can place flower;
// giving vector and n, if num = 0 then can't plant else = 1 then you can plant;
// algotithm is to filter, if num in vector, num+1,num-1 == 0 then n--;
// else continue;
// complexity O(n);

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        flowerbed.insert(flowerbed.begin(),0);
        flowerbed.push_back(0);
    for(int i=1; i<flowerbed.size()-1;i++){
    if(flowerbed[i-1]+flowerbed[i]+flowerbed[i+1]==0){
        n--;
        i++;
    }
}
return n=0;
}
};