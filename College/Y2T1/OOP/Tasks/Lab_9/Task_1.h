#include <bits/stdc++.h>
using namespace std;
template <class ty>
class calculator{
    ty num1,num2;
    public:
    calculator(ty one,ty two){
        num1=one;
        num2=two;
    }
    // void addition();
    ty subtracton(){
        return num1-num2;
    };
    ty multiplication(){
        return num1*num2;
    };
    // ty division();
};
//template <class ty>
//void calculator::addition(){
   // cout<<num1+num2;
//}

// template <class ty>
// ty calculator::subtraction(){
//     return num1-num2;
// }

// template <class ty>
// ty calculator::multiplication(){
//     return num1*num2;
// }

// template <class ty>
// ty calculator::division(){
//     return num1/num2;
// }
