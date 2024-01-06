string encode(string src)
{     
  //Your code here 
  string sum="";
  int count=1;
  for(int i=0;i<src.length()-1;i++){
      if(src[i]==src[i+1])count++;
      else {
          sum+=src[i]+to_string(count);
          count=1;
      }
  }
  sum+=src[src.length()-1]+to_string(count);
  return sum;
}   