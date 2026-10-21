<h2><a href="https://www.codechef.com/START261D/problems/EXSHAKE">Exun Handshake

𝑁
N groups of participants are trying to reach the annual Exun symposium. Group 
𝑖
i has 
𝐴
𝑖
A
i
	​

 people.

By tradition, everyone at the symposium shakes hands with everyone else exactly once as a sign of sportsmanship, whether they are from the same group or not. So if 
𝑃
P people attend in total, there are 
𝑃
(
𝑃
−
1
)
2
2
P(P−1)
	​

 handshakes.

The ceremony takes a long time, and the organisers only have time for 
𝑀
M handshakes. They will invite some of the groups (a group comes in full or not at all) so that the total number of handshakes is at most 
𝑀
M.

Find the maximum number of groups that can be invited.

Inviting no groups at all is allowed, and gives 
0
0 handshakes.

Input Format
The first line of input contains a single integer 
𝑇
T, denoting the number of test cases.
Each test case consists of two lines of input.
The first line of each test case contains two space-separated integers 
𝑁
N and 
𝑀
M.
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

For each test case, output on a new line the maximum number of groups that can be invited.

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
0
≤
𝑀
≤
10
8
0≤M≤10
8
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
4
4 10
3 1 4 2
3 0
2 5 3
5 45
2 2 2 2 2
3 0
4 1 1

2
0
5
1
Explanation:

Test case 
1
1: Inviting the groups with 
1
1 and 
2
2 people gives 
3
3 people and 
3
⋅
2
2
=
3
2
3⋅2
	​

=3 handshakes. Any 
3
3 groups bring at least 
1
+
2
+
3
=
6
1+2+3=6 people, which means at least 
15
>
10
15>10 handshakes.</a></h2><h4>Difficulty: </h4>