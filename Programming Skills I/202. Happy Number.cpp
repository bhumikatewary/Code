class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> visited ;
int sop = 0;
while (true)
{
	while ( n > 0 )
	{
		sop = sop + ((n%10) * (n%10));
		n = n/10;
	}
	if( sop == 1)
		return true;

	if( visited.find(sop) == visited.end() ) // if the number is not in the set
		visited.insert(sop);   // insert it 
	else
		return false;

	n = sop;  // update the number
	sop = 0 ;
}
        
    }
};
