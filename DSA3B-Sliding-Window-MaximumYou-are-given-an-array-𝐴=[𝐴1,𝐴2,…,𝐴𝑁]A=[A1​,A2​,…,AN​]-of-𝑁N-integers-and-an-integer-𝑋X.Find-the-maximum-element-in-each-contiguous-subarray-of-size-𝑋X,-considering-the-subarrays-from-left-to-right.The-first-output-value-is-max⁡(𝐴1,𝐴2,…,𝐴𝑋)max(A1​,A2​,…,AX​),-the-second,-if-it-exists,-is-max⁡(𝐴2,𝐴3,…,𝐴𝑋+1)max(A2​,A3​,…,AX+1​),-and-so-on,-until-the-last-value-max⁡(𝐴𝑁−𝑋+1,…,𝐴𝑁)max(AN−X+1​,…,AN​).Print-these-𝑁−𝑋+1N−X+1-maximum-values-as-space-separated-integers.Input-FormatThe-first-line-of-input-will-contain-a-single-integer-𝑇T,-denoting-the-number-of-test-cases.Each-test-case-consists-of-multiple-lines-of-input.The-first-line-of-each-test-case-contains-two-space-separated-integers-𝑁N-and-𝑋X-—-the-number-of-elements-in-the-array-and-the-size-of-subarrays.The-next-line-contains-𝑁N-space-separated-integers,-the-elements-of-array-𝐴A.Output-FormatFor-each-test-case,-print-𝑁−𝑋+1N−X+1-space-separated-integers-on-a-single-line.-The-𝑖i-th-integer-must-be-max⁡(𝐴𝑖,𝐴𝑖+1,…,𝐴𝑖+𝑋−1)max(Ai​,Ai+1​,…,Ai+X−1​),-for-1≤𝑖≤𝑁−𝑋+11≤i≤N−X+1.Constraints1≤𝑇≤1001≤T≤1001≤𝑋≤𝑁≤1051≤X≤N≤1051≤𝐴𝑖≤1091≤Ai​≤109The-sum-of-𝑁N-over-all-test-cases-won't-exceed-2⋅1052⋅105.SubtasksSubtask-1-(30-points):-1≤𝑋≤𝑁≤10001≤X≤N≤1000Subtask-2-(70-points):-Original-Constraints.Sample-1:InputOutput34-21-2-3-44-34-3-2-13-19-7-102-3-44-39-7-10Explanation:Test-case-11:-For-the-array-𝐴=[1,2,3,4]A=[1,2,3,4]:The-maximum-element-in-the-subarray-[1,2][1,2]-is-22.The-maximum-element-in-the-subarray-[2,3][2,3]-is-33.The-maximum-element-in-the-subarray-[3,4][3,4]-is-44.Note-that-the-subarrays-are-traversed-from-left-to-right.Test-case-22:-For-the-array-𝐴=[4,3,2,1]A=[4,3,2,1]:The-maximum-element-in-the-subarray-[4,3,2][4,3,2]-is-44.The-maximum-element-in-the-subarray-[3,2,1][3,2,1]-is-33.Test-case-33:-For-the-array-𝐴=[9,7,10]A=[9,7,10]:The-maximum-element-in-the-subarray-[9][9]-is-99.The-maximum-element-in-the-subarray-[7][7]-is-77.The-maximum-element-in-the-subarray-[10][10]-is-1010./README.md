<h2><a href="https://www.codechef.com/DSAMONDAY025/problems/DSA3B">Sliding Window Maximum

You are given an array 
𝐴
=
[
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
]
A=[A
1
	​

,A
2
	​

,…,A
N
	​

] of 
𝑁
N integers and an integer 
𝑋
X.

Find the maximum element in each contiguous subarray of size 
𝑋
X, considering the subarrays from left to right.

The first output value is 
max
⁡
(
𝐴
1
,
𝐴
2
,
…
,
𝐴
𝑋
)
max(A
1
	​

,A
2
	​

,…,A
X
	​

), the second, if it exists, is 
max
⁡
(
𝐴
2
,
𝐴
3
,
…
,
𝐴
𝑋
+
1
)
max(A
2
	​

,A
3
	​

,…,A
X+1
	​

), and so on, until the last value 
max
⁡
(
𝐴
𝑁
−
𝑋
+
1
,
…
,
𝐴
𝑁
)
max(A
N−X+1
	​

,…,A
N
	​

).

Print these 
𝑁
−
𝑋
+
1
N−X+1 maximum values as space-separated integers.

Input Format
The first line of input will contain a single integer 
𝑇
T, denoting the number of test cases.
Each test case consists of multiple lines of input.
The first line of each test case contains two space-separated integers 
𝑁
N and 
𝑋
X — the number of elements in the array and the size of subarrays.
The next line contains 
𝑁
N space-separated integers, the elements of array 
𝐴
A.
Output Format

For each test case, print 
𝑁
−
𝑋
+
1
N−X+1 space-separated integers on a single line. The 
𝑖
i-th integer must be 
max
⁡
(
𝐴
𝑖
,
𝐴
𝑖
+
1
,
…
,
𝐴
𝑖
+
𝑋
−
1
)
max(A
i
	​

,A
i+1
	​

,…,A
i+X−1
	​

), for 
1
≤
𝑖
≤
𝑁
−
𝑋
+
1
1≤i≤N−X+1.

Constraints
1
≤
𝑇
≤
100
1≤T≤100
1
≤
𝑋
≤
𝑁
≤
10
5
1≤X≤N≤10
5
1
≤
𝐴
𝑖
≤
10
9
1≤A
i
	​

≤10
9
The sum of 
𝑁
N over all test cases won't exceed 
2
⋅
10
5
2⋅10
5
.
Subtasks
Subtask 1 (30 points): 
1
≤
𝑋
≤
𝑁
≤
1000
1≤X≤N≤1000
Subtask 2 (70 points): Original Constraints.
Sample 1:
Input
Output
3
4 2
1 2 3 4
4 3
4 3 2 1
3 1
9 7 10

2 3 4
4 3
9 7 10

Explanation:

Test case 
1
1: For the array 
𝐴
=
[
1
,
2
,
3
,
4
]
A=[1,2,3,4]:

The maximum element in the subarray 
[
1
,
2
]
[1,2] is 
2
2.
The maximum element in the subarray 
[
2
,
3
]
[2,3] is 
3
3.
The maximum element in the subarray 
[
3
,
4
]
[3,4] is 
4
4.

Note that the subarrays are traversed from left to right.

Test case 
2
2: For the array 
𝐴
=
[
4
,
3
,
2
,
1
]
A=[4,3,2,1]:

The maximum element in the subarray 
[
4
,
3
,
2
]
[4,3,2] is 
4
4.
The maximum element in the subarray 
[
3
,
2
,
1
]
[3,2,1] is 
3
3.

Test case 
3
3: For the array 
𝐴
=
[
9
,
7
,
10
]
A=[9,7,10]:

The maximum element in the subarray 
[
9
]
[9] is 
9
9.
The maximum element in the subarray 
[
7
]
[7] is 
7
7.
The maximum element in the subarray 
[
10
]
[10] is 
10
10.</a></h2><h4>Difficulty: </h4>