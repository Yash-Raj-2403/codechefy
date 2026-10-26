<h2><a href="https://www.codechef.com/DSAMONDAY026/problems/BACVA">Bank Account Validator

You are given an account number represented by a positive integer 
𝐴
A.
An account number is considered valid if the sum of all its digits is divisible by 
10
10. Otherwise, it is considered invalid.

For example, for the account number 
12340
12340, the sum of its digits is:

1
+
2
+
3
+
4
+
0
=
10
1+2+3+4+0=10

Since 
10
10 is divisible by 
10
10, the account number is valid.

For each account number, determine whether it is valid.

Input Format
The first line contains an integer 
𝑇
T — the number of test cases.
Each of the next 
𝑇
T lines contains an integer 
𝐴
A — the account number.
Output Format

For each test case, print Valid if the account number is valid, or Invalid otherwise, on a separate line.

Constraints
1
≤
𝑇
≤
1000
1≤T≤1000
1
≤
𝐴
≤
10
18
1≤A≤10
18
Sample 1:
Input
Output
3
12340
987654321
1111111111
Valid
Invalid
Valid
Explanation:

For the first account number, the digit sum is 
10
10, which is divisible by 
10
10. Therefore, it is Valid.

For the second account number, the digit sum is 
45
45, which is not divisible by 
10
10. Therefore, it is Invalid.

For the third account number, the digit sum is 
10
10, which is divisible by 
10
10. Therefore, it is Valid.</a></h2><h4>Difficulty: </h4>