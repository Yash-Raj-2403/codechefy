<h2><a href="https://www.codechef.com/DSAMONDAY025/problems/CGOOE">Count Good Elements

You are given an array 
𝐴
A containing 
𝑁
N integers.

An element 
𝐴
𝑖
A
i
	​

 is good if it is strictly smaller than each of the previous five elements, or all preceding elements if fewer than five exist.

For example, 
𝐴
3
A
3
	​

 must be smaller than both 
𝐴
1
A
1
	​

 and 
𝐴
2
A
2
	​

, while 
𝐴
7
A
7
	​

 must be smaller than 
𝐴
2
,
𝐴
3
,
𝐴
4
,
𝐴
5
,
A
2
	​

,A
3
	​

,A
4
	​

,A
5
	​

, and 
𝐴
6
A
6
	​

.

Find the number of good elements.

Input Format
The first line contains an integer 
𝑇
T, the number of test cases.
For each test case:
The first line contains an integer 
𝑁
N.
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

.
Output Format

For each test case, print the number of days with a good price on a separate line.

Constraints
1
≤
𝑇
≤
100
1≤T≤100
7
≤
𝑁
≤
100
7≤N≤100
350
≤
𝐴
𝑖
≤
750
350≤A
i
	​

≤750
Sample 1:
Input
Output
1
7
400 600 550 500 450 425 410
2
Explanation:

The good elements are at positions 
1
1 and 
7
7.

Positions 
2
2 through 
6
6 are not good because each value is greater than 
400
400, which lies within its comparison range.

At position 
7
7, the value 
410
410 is smaller than the previous five values: 
600
,
 
550
,
 
500
,
 
450
,
 
425
600, 550, 500, 450, 425.</a></h2><h4>Difficulty: </h4>