<h2><a href="https://www.codechef.com/START251D/problems/BUSROW">Bus Rows

A bus has 
𝑁
N rows of seats, and each row has 
𝑀
M seats.

The rows are numbered 
1
,
2
,
…
,
𝑁
1,2,…,N from the front of the bus to the back.
Row number 
𝑖
i contains seats numbered 
(
𝑖
−
1
)
⋅
𝑀
+
1
,
(
𝑖
−
1
)
⋅
𝑀
+
2
,
…
,
𝑖
⋅
𝑀
(i−1)⋅M+1,(i−1)⋅M+2,…,i⋅M.
For example, row number 
3
3 contains seats 
2
𝑀
+
1
,
2
𝑀
+
2
,
…
,
3
𝑀
2M+1,2M+2,…,3M.

Your seat is number 
𝑋
X.

You can choose to board the bus either from its front or from its back - which can be thought of as entering the bus from just before row 
1
1 or just after row 
𝑁
N, respectively.
After boarding, you will walk through the rows till you reach whichever row contains your seat.

Find the minimum number of rows you have to walk through, including the destination row.

Input Format
The first line of input will contain a single integer 
𝑇
T, denoting the number of test cases.
Each test case consists of a single line of input, containing three space-separated integers 
𝑁
,
𝑀
,
N,M, and 
𝑋
X — the number of rows, the number of seats in each row, and your seat number.
Output Format

For each test case, output on a new line the minimum number of rows you need to walk through to get to your seat.

Constraints
1
≤
𝑇
≤
1000
1≤T≤1000
1
≤
𝑁
,
𝑀
≤
100
1≤N,M≤100
1
≤
𝑋
≤
𝑁
⋅
𝑀
1≤X≤N⋅M
Sample 1:
Input
Output
4
4 2 5
4 2 4
1 7 7
6 4 14

2
2
1
3

Explanation:

Test case 
1
1: The bus has 
𝑁
=
4
N=4 rows of 
𝑀
=
2
M=2 seats each.
Our seat is 
𝑋
=
5
X=5, which will be in row number 
3
3 (row 
1
1 contains seats 
1
1 and 
2
2, row 
2
2 contains seats 
3
3 and 
4
4, row 
3
3 contains seats 
5
5 and 
6
6, row 
4
4 contains seats 
7
7 and 
8
8.)

It is optimal for us to enter from the back of the bus.
Then, to reach row 
3
3, we need to walk through rows 
4
4 and 
3
3, which is two rows in total.

If we enter from the front of the bus, we would need to walk through rows 
1
,
2
,
3
1,2,3 which is three rows in total - which is worse.

Test case 
2
2: The same seating arrangement as the first test, but now our seat is 
𝑋
=
4
X=4.
This is in the second row, and this time it's optimal to enter from the front of the bus and walk through rows 
1
1 and 
2
2, for two in total.

Test case 
3
3: There is only one row so no matter where we enter from the answer is 
1
1.

Test case 
4
4: There are 
6
6 rows of 
4
4 seats each. Our seat is number 
14
14, which is in the 
4
4-th row.
It's optimal to enter from the back, and walk through rows 
6
,
5
,
4
6,5,4 to reach it.</a></h2><h4>Difficulty: </h4>