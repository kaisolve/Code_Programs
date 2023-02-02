#include<iostream>
#include "Stack.h"
using namespace std;

int main(){
stack st;
st.push(50);
st.push(30);
st.push(31);
st.push(245);
st.push(23);
// st.display();
// st.push(2);
st.pop();
// st.display();
// st.peek();
cout<<st.topf();

}

