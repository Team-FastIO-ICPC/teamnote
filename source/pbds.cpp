#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using oset = tree<int, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>;
using omultiset = tree<int, null_type, less_equal<>, rb_tree_tag, tree_order_statistics_node_update>;
void m_erase(omultiset &os, int val) {
  int index = os.order_of_key(val);
  auto it = os.find_by_order(index);
  if (*it == val) os.erase(it);
}
