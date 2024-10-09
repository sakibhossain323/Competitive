// autor: https://codeforces.com/contest/652/submission/108479892
namespace __gnu_pbds{
          typedef tree<long long,
                       null_type,
                       less_equal<long long>,
                       rb_tree_tag,
                       tree_order_statistics_node_update> ordered_set;
}
using namespace __gnu_pbds;

void Insert(ordered_set &s,ll x){
    s.insert(x);
}
 
bool Exist(ordered_set &s,ll x){
    if((s.upper_bound(x))==s.end()){
        return 0;
    }
    return ((*s.upper_bound(x))==x);
}

void Erase(ordered_set &s,ll x){
    if(Exist(s,x)){
        s.erase(s.upper_bound(x));
    }
}