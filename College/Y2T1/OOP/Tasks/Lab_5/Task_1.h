#include <iostream>
using namespace std;
class reg{
    string regnum;
    float regfee;

    public: static int count;
    
    public:
    
    reg(string num,float fee);
        ~reg();
    void print();
};
