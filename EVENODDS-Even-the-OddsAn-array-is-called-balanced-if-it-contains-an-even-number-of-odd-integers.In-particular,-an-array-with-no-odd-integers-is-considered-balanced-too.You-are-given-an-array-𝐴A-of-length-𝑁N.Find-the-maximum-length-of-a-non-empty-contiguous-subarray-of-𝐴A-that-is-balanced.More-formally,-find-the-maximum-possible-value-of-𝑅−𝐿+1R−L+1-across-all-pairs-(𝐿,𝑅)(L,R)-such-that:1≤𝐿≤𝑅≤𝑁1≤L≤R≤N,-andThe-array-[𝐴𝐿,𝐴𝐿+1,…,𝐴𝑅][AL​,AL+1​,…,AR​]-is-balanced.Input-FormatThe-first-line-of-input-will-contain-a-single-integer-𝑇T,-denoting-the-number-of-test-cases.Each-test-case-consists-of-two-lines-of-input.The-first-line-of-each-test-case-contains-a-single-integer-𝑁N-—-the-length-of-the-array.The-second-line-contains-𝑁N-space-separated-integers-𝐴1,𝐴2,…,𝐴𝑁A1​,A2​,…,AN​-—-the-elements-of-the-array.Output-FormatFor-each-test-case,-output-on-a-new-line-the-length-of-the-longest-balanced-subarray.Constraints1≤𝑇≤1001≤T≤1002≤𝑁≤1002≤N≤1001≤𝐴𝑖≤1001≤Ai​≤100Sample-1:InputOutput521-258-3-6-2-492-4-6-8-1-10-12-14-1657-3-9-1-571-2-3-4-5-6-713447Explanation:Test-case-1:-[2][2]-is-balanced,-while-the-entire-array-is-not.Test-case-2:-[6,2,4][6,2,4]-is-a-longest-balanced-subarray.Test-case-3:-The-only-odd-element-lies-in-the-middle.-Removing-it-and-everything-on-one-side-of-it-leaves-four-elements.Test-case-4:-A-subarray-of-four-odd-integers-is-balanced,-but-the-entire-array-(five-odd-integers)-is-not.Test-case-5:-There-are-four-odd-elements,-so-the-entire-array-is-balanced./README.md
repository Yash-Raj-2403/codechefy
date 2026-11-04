<h2><a href="https://www.codechef.com/START263D/problems/EVENODDS">Even the Odds

An array is called balanced if it contains an even number of odd integers.
In particular, an array with no odd integers is considered balanced too.

You are given an array 
𝐴
A of length 
𝑁
N.
Find the maximum length of a non-empty contiguous subarray of 
𝐴
A that is balanced.

More formally, find the maximum possible value of 
𝑅
−
𝐿
+
1
R−L+1 across all pairs 
(
𝐿
,
𝑅
)
(L,R) such that:

1
≤
𝐿
≤
𝑅
≤
𝑁
1≤L≤R≤N, and
The array 
[
𝐴
𝐿
,
𝐴
𝐿
+
1
,
…
,
𝐴
𝑅
]
[A
L
	​

,A
L+1
	​

,…,A
R
	​

] is balanced.
Input Format
The first line of input will contain a single integer 
𝑇
T, denoting the number of test cases.
Each test case consists of two lines of input.
The first line of each test case contains a single integer 
𝑁
N — the length of the array.
The second line contains 
𝑁
N space-separated integers 
𝐴
1
,
𝐴
2
,
…
,
𝐴
𝑁
A
1
	​

,A
2
	​

,…,A
N
	​

 — the elements of the array.
Output Format

For each test case, output on a new line the length of the longest balanced subarray.

Constraints
1
≤
𝑇
≤
100
1≤T≤100
2
≤
𝑁
≤
100
2≤N≤100
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
5
2
1 2
5
8 3 6 2 4
9
2 4 6 8 1 10 12 14 16
5
7 3 9 1 5
7
1 2 3 4 5 6 7

1
3
4
4
7

Explanation:

Test case 1: 
[
2
]
[2] is balanced, while the entire array is not.

Test case 2: 
[
6
,
2
,
4
]
[6,2,4] is a longest balanced subarray.

Test case 3: The only odd element lies in the middle. Removing it and everything on one side of it leaves four elements.

Test case 4: A subarray of four odd integers is balanced, but the entire array (five odd integers) is not.

Test case 5: There are four odd elements, so the entire array is balanced.</a></h2><h4>Difficulty: </h4>