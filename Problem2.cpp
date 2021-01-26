/*
You are given two positive integers A and B. Find the number of pairs of positive integers (X,Y) such that 1≤X≤A, 1≤Y≤B and X+Y is even.

Input
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first and only line of each test case contains two space-separated integers A and B.
Output
For each test case, print a single line containing one integer ― the number of valid pairs.

Constraints
1≤T≤1,000
1≤A,B≤109
Subtasks
Subtask #1 (10 points): A,B≤10
Subtask #2 (10 points): A,B≤1,000
Subtask #3 (80 points): original constraints

Example Input
4
1 1
2 3
4 6
8 9
Example Output
1
3
12
36

*/

#include<iostream>
using namespace std;
int main()
{
	static int ans = 0;
	int i,j,k,n = 8;
	int m = 9;
	for(i = 1;i<=n;i++)
	{
		if(i%2 == 0)
		{
			for(j=1;j<=m;j=j+2)
			{
			 ans+=1;
			}
		}
		else
		{
			for(k=2;k<=m;k=k+2)
			{
			 ans+=1;
			}
		}
	
	}
	cout<<ans<<endl;
	return 0;
}