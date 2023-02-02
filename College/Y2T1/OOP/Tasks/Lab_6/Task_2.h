#include <iostream>
using namespace std;

class solv{
private:
friend class sum;
int first;
int end;
int num;
public:
solv();
solv(int f,int s, int n);
};
solv::solv(int f, int ss,int n){
    first=f;
    end=ss;
    num=n;
}
class sum
{
    public:
    int sern(solv obj){
        int sum=(obj.end)*(obj.first+obj.num);
        return sum;
    }

};
