<h2><a href="https://www.codechef.com/START263D/problems/MINRECT">Recangle Covering

You are given a binary grid with 
𝑁
N rows and 
𝑀
M columns. The grid contains at least one cell equal to 
1
1.
The cell at the intersection of the 
𝑖
i-th row and 
𝑗
j-th column is denoted 
(
𝑖
,
𝑗
)
(i,j).

A rectangular sub-grid is a rectangular region of the grid.
Formally, it is defined by two cells 
(
𝑥
1
,
𝑦
1
)
(x
1
	​

,y
1
	​

) and 
(
𝑥
2
,
𝑦
2
)
(x
2
	​

,y
2
	​

) such that 
𝑥
1
≤
𝑥
2
x
1
	​

≤x
2
	​

 and 
𝑦
1
≤
𝑦
2
y
1
	​

≤y
2
	​

, and contains all cells 
(
𝑖
,
𝑗
)
(i,j) such that:

𝑥
1
≤
𝑖
≤
𝑥
2
x
1
	​

≤i≤x
2
	​

, and
𝑦
1
≤
𝑗
≤
𝑦
2
y
1
	​

≤j≤y
2
	​

.

The area of a rectangular sub-grid is defined to be the number of cells it contains.

Find the minimum area of a rectangular sub-grid such that the following condition holds:

Every cell not contained in the sub-grid has the value 
0
0.
Input Format
The first line of input will contain a single integer 
𝑇
T, denoting the number of test cases.
Each test case consists of multiple lines of input.
The first line of each test case contains two space-separated integers 
𝑁
N and 
𝑀
M — the number of rows and columns of the grid.
The next 
𝑁
N lines describe the grid. The 
𝑖
i-th of these lines contains a binary string of length 
𝑀
M — the 
𝑖
i-th row of the grid.
Output Format

For each test case, output on a new line the smallest possible area.

Constraints
1
≤
𝑇
≤
50
1≤T≤50
1
≤
𝑁
,
𝑀
≤
30
1≤N,M≤30
Each grid contains at least one 
1
1.
There is no bound on the sum of 
𝑁
⋅
𝑀
N⋅M over all test cases.
Sample 1:
Input
Output
4
1 1
1
3 4
0000
0110
0010
4 5
10000
00000
00000
00001
3 6
000000
000110
000000

1
4
20
2

Explanation:

Test case 2: The 1s occupy rows 
2
2 to 
3
3 and columns 
2
2 to 
3
3, so the smallest rectangle has area 
2
⋅
2
=
4
2⋅2=4.

Test case 3: Two opposite corner cells are 1, so all 
4
⋅
5
=
20
4⋅5=20 cells must lie in the rectangle.</a></h2><h4>Difficulty: </h4>