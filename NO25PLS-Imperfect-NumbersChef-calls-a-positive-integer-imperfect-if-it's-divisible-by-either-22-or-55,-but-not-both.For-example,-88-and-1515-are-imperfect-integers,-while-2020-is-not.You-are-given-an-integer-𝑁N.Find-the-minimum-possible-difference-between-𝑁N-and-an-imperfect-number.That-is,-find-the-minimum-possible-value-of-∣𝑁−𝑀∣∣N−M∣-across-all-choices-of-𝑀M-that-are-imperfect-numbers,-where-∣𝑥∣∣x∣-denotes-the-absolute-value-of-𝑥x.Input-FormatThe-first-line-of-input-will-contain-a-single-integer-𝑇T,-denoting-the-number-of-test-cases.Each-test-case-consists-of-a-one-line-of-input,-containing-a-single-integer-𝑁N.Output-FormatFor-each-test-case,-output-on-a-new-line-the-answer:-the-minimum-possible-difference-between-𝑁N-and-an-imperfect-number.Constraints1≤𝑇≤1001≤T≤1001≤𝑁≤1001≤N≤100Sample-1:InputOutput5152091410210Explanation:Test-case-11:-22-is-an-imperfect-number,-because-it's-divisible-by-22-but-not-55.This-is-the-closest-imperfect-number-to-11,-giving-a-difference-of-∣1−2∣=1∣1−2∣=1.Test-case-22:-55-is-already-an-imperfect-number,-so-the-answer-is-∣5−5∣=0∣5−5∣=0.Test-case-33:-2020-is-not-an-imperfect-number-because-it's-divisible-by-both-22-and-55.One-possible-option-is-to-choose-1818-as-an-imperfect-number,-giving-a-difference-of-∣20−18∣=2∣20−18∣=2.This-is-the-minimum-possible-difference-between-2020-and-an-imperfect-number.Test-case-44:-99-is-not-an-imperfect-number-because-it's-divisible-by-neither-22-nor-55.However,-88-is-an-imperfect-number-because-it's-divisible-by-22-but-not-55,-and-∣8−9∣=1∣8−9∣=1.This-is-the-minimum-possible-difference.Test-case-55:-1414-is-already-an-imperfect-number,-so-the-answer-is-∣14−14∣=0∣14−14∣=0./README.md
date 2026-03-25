<h2><a href="https://www.codechef.com/START231D/problems/NO25PLS">Imperfect Numbers

Chef calls a positive integer imperfect if it's divisible by either 
2
2 or 
5
5, but not both.

For example, 
8
8 and 
15
15 are imperfect integers, while 
20
20 is not.

You are given an integer 
𝑁
N.
Find the minimum possible difference between 
𝑁
N and an imperfect number.

That is, find the minimum possible value of 
∣
𝑁
−
𝑀
∣
∣N−M∣ across all choices of 
𝑀
M that are imperfect numbers, where 
∣
𝑥
∣
∣x∣ denotes the absolute value of 
𝑥
x.

Input Format
The first line of input will contain a single integer 
𝑇
T, denoting the number of test cases.
Each test case consists of a one line of input, containing a single integer 
𝑁
N.
Output Format

For each test case, output on a new line the answer: the minimum possible difference between 
𝑁
N and an imperfect number.

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
Sample 1:
Input
Output
5
1
5
20
9
14

1
0
2
1
0
Explanation:

Test case 
1
1: 
2
2 is an imperfect number, because it's divisible by 
2
2 but not 
5
5.
This is the closest imperfect number to 
1
1, giving a difference of 
∣
1
−
2
∣
=
1
∣1−2∣=1.

Test case 
2
2: 
5
5 is already an imperfect number, so the answer is 
∣
5
−
5
∣
=
0
∣5−5∣=0.

Test case 
3
3: 
20
20 is not an imperfect number because it's divisible by both 
2
2 and 
5
5.
One possible option is to choose 
18
18 as an imperfect number, giving a difference of 
∣
20
−
18
∣
=
2
∣20−18∣=2.
This is the minimum possible difference between 
20
20 and an imperfect number.

Test case 
4
4: 
9
9 is not an imperfect number because it's divisible by neither 
2
2 nor 
5
5.
However, 
8
8 is an imperfect number because it's divisible by 
2
2 but not 
5
5, and 
∣
8
−
9
∣
=
1
∣8−9∣=1.
This is the minimum possible difference.

Test case 
5
5: 
14
14 is already an imperfect number, so the answer is 
∣
14
−
14
∣
=
0
∣14−14∣=0.</a></h2><h4>Difficulty: </h4>