<h2><a href="https://www.codechef.com/START256D/problems/FIXEDPTS">Fixed Points

For a permutation 
𝑃
P of the integers 
[
1
,
𝑁
]
[1,N], a fixed point is an index 
𝑖
i such that 
𝑃
𝑖
=
𝑖
P
i
	​

=i.

Given 
𝑁
N and 
𝐾
K, determine whether there exists a permutation 
𝑃
P of the integers 
[
1
,
𝑁
]
[1,N] which has exactly 
𝐾
K fixed points.

Input Format
The first line of input will contain a single integer 
𝑇
T, denoting the number of test cases.
The first and only line contains 
2
2 integers 
𝑁
N and 
𝐾
K.
Output Format

For each test case, output 
Yes
Yes if there exists such a permutation, and 
No
No otherwise.

Constraints
1
≤
𝑇
≤
6000
1≤T≤6000
1
≤
𝑁
≤
100
1≤N≤100
0
≤
𝐾
≤
𝑁
0≤K≤N
Sample 1:
Input
Output
5
1 0
1 1
2 0
2 1
3 1

No
Yes
Yes
No
Yes

Explanation:

Test Case 1 & 2: The only permutation of size 
1
1 is 
[
1
]
[1], which has 
1
1 fixed point, not 
0
0.

Test Case 3: 
[
2
,
1
]
[2,1] has 
0
0 fixed points.</a></h2><h4>Difficulty: </h4>