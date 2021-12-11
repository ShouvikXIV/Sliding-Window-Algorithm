#include <bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int k = 0;
    multiset<int> st;
	int v[8] = {1,9,-1,-2,7,3,-1,2};
	for(int i = 0;i<4;i++) //assuming the length of the sub array should be 4
	{
		k+=v[i];
	}
	st.insert(k);
	int z = 0;
	for(int j = 3;j<8;j++) 
	{
		k = k-v[z];
		k=k+v[j+1];
		z+=1;
		st.insert(k);
	}
	multiset<int>::iterator it = st.end();--it;
	// for(it = st.begin();it!=st.end();it++)
	// {
	 	cout<<*it<<' ';
	// }

	return 0;
}   