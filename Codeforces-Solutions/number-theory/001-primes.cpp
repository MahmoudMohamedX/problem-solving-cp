
// problem link  --> https://codeforces.com/contest/735/problem/D
// problem solution --> https://codeforces.com/contest/735/submission/374138488
// rate - 1600

 Note 
////////////////////////////////////////////////////////////////////////////////////
If n is prime → answer is 1.
If n is even → can be written as sum of two even/prime-related parts → answer is 2.

If n is odd:
- check if (n - 2) is prime → then answer is 2
- otherwise answer is 3

Idea uses properties of prime numbers and representation of integers as sums of primes.
////////////////////////////////////////////////////////////////////////////////////
