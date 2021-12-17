// I am going to use Eucledian Algorithm here i.e.. if "a" and "b" have gcd "x", then assume b>a, then b-a and a also have same gcd x


// Recursive GCD

int gcd(int a, int b){
  if(a==0||b==0){
    return a==0?b:a;
  }
  if(a>b) return gcd(a-b, b);
  else return gcd(b-a, a);
}


// Iterative

int gcd(int a , int b){
    while(a!=0&&b!=0){
      if(a>b){
        a=a-b;
      }
      else b=b-a;
    }
    if(a==0||b==0){
        return a==0?b:a;
    }
    
}
