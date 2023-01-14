int addition(int p,int q){
  int add = p+q;
  return add;
}
int main(){
  int p;
  int q;
  cin>>p;
  cin>>q;
  int ans = addition(p,q);
  cout<<("Sum is: ")<<ans;
}
