int pelindrome(int a)
{int p=0;
for(int i=a;i!=0;i=i/10){
  int r= i%10;

  p=p*10 +r;
}
  if(a==p)
    {return 1;}
  else
    {return 0;}
}
int prime(int x){
    int p=0;
for(int i=2;i<=sqrt(x);i++){
  if(x%i==0)
  { p=1;
  break;}
  }
  if(p==1){return 1;}
  else {return 0;}
}
int armstrong(int x){
    int p=0,t=0;
for(int i=x;i!=0;i/=10){
   t=t+1;
  }
for(int i=x;i!=0;i/=10){
    int r =i%10;
    p+= pow(r,t) ;
  }
  if (p==x){return 1;}
  else {return 0;}
}
int perfect(int x){
int sum=0,t=0;
for(int i=1;i!=x;i++){
   if(x%i==0){
     sum+=i;
   };

  }

  if (sum==x){return 1;}
  else {return 0;}
}
int strong(int x){
int  sum=0,t, j;
for(int a=x;a!=0;a=a/10){
  t=a%10;
  j=1;
  for(int i=1;i<=t;i++){
    j=j*i;

   }
  sum+=j;}
 if(sum==x)return 1;
  else{
    return 0;}
}
