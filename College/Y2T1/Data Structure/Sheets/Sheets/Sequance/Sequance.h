#include <bits/stdc++.h>
using namespace std;

class sequence
{
public:
    typedef double value_type;
    typedef std::size_t size_type;
    static const size_type CAPACITY = 30;
    sequence( );
    void start( );
    void advance( );
    void insert(const value_type& entry);
    void attach(const value_type& entry);
    void remove_current( );
    size_type size( ) const;
    bool is_item( ) const;
    value_type current( ) const;
 private:
    value_type data[CAPACITY];
    size_type used;
    size_type current_index;
   };
 