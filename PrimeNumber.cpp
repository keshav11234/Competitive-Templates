// We can check whether the number is prime or not by just looping from 1 to under-root(n), if there is no divisor then the number is prime or else not prime
// how to find square root of a function
// If n is not a prime number then n=a*b, where both a and b couldn't be less than sqrt(n). So one factor either a or b should be less than sqrt(n) there looping upto sqrt(n) is essential.

bool primeCheck( int n){
  if(n==1) return true;
  for(int i=2; i< sqrt(n); i++){
    if(n%i==0) return false;  
  }
  return true;
}
