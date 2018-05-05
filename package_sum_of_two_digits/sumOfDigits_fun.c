// 設定初始值
int ans=0;
// function
int sumOfDigits(int x){
    if(x == 0){
        int ans_ = ans;
        ans = 0;
        return ans_;
    }
    else{
        // x除以10的餘數相加即為所求
        ans = ans + x % 10;
        x /= 10;
        return sumOfDigits(x);
    }
}