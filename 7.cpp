class Solution{
public:
    vector<int> findTwoElement(vector<int> arr, int n) {
        // code here
        int xorall=0;
        for(int i=0;i<n;i++){
            xorall=xorall^(i+1);
            xorall=xorall^arr[i];
        }
        int first=0;
        while((xorall&1)==0){
            xorall=xorall>>1;
            first++;
        }
        int one=0,zero=0;
        for(int i=0;i<n;i++){
            if(((i+1)>>first)&1==1)one=one^(i+1);
            else zero=zero^(i+1);
            if((arr[i]>>first)&1==1)one=one^arr[i];
            else zero=zero^arr[i];
        }
        for(int i=0;i<n;i++){
            if(arr[i]==one)return{one,zero};
        
        }
        return{zero,one};
    }
};