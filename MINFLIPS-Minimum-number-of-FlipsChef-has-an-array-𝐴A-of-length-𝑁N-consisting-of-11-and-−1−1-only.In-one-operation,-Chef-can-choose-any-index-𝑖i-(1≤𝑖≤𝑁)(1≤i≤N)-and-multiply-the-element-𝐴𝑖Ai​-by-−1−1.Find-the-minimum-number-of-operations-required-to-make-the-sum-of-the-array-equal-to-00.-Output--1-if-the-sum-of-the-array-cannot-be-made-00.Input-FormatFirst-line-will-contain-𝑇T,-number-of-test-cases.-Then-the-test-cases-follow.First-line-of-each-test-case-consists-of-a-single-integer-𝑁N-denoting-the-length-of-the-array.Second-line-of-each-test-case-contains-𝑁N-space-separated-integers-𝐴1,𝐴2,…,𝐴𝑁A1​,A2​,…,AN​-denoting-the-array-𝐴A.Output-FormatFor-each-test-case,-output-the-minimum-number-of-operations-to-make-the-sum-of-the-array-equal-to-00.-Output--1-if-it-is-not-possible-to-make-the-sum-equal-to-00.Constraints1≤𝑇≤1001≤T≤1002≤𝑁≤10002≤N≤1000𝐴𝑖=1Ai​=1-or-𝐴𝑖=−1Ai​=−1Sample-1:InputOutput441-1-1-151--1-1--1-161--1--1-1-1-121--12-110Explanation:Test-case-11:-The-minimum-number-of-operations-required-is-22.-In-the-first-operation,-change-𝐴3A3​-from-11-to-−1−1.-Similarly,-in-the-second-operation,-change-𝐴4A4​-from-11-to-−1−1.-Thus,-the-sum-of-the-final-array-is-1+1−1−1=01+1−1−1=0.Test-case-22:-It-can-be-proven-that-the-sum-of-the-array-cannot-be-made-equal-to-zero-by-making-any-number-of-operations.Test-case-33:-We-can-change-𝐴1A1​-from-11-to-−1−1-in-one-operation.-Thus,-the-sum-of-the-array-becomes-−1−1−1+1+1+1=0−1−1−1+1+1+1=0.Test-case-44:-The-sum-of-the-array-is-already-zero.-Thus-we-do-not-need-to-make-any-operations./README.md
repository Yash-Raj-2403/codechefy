<h2><a href="https://www.codechef.com/DSAMONDAY026/problems/MINFLIPS">Minimum number of Flips

Chef has an array 
𝐴
A of length 
𝑁
N consisting of 
1
1 and 
−
1
−1 only.

In one operation, Chef can choose any index 
𝑖
i 
(
1
≤
𝑖
≤
𝑁
)
(1≤i≤N) and multiply the element 
𝐴
𝑖
A
i
	​

 by 
−
1
−1.

Find the minimum number of operations required to make the sum of the array equal to 
0
0. Output -1 if the sum of the array cannot be made 
0
0.

Input Format
First line will contain 
𝑇
T, number of test cases. Then the test cases follow.
First line of each test case consists of a single integer 
𝑁
N denoting the length of the array.
Second line of each test case contains 
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

 denoting the array 
𝐴
A.
Output Format

For each test case, output the minimum number of operations to make the sum of the array equal to 
0
0. Output -1 if it is not possible to make the sum equal to 
0
0.

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
1000
2≤N≤1000
𝐴
𝑖
=
1
A
i
	​

=1 or 
𝐴
𝑖
=
−
1
A
i
	​

=−1
Sample 1:
Input
Output
4
4
1 1 1 1
5
1 -1 1 -1 1
6
1 -1 -1 1 1 1
2
1 -1

2
-1
1
0

Explanation:

Test case 
1
1: The minimum number of operations required is 
2
2. In the first operation, change 
𝐴
3
A
3
	​

 from 
1
1 to 
−
1
−1. Similarly, in the second operation, change 
𝐴
4
A
4
	​

 from 
1
1 to 
−
1
−1. Thus, the sum of the final array is 
1
+
1
−
1
−
1
=
0
1+1−1−1=0.

Test case 
2
2: It can be proven that the sum of the array cannot be made equal to zero by making any number of operations.

Test case 
3
3: We can change 
𝐴
1
A
1
	​

 from 
1
1 to 
−
1
−1 in one operation. Thus, the sum of the array becomes 
−
1
−
1
−
1
+
1
+
1
+
1
=
0
−1−1−1+1+1+1=0.

Test case 
4
4: The sum of the array is already zero. Thus we do not need to make any operations.</a></h2><h4>Difficulty: </h4>