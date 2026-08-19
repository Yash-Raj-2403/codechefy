<h2><a href="https://www.codechef.com/START252D/problems/MRSWAP">Mirror Swap

You have an array 
𝐴
A of size 
2
⋅
𝑁
2⋅N.

You can perform the following operation as many times as you want:

Swap 
𝐴
𝑖
A
i
	​

 with 
𝐴
2
𝑁
+
1
−
𝑖
A
2N+1−i
	​

 (i.e. it's mirror element).

For example, we can swap 
𝐴
1
A
1
	​

 with 
𝐴
2
𝑁
A
2N
	​

, 
𝐴
2
A
2
	​

 with 
𝐴
2
𝑁
−
1
A
2N−1
	​

 and so on.

You want to maximize the value 
𝐴
1
+
𝐴
2
+
…
+
𝐴
𝑁
A
1
	​

+A
2
	​

+…+A
N
	​

, i.e. the sum of the first half of the array. Find this maximum value.

Input Format
The first line of input will contain a single integer 
𝑇
T, denoting the number of test cases.
Each test case consists of multiple lines of input.
The first line contains a single integer 
𝑁
N.
The second line contains 
𝑁
N integers - 
𝐴
1
,
𝐴
2
,
…
,
𝐴
2
𝑁
A
1
	​

,A
2
	​

,…,A
2N
	​

.
Output Format

For each test case, output the maximum sum of the first half.

Constraints
1
≤
𝑇
≤
100
1≤T≤100
1
≤
𝑁
≤
100
1≤N≤100
1
≤
𝐴
𝑖
≤
100
1≤A
i
	​

≤100
Sample 1:
Input
Output
2
3
1 4 3 4 2 1
1
100 99

9
100
Explanation:

Test Case 1: You can swap 
𝐴
3
A
3
	​

 and 
𝐴
4
A
4
	​

 to get 
[
1
,
4
,
4
,
3
,
2
,
1
]
[1,4,4,3,2,1] which has a first-half sum of 
9
9, which is optimal.

Test Case 2: No swaps need to be made.</a></h2><h4>Difficulty: </h4>