#include <bits/stdc++.h>

using namespace std;

int mySqrt(int x) {
    int left = 1;
    int right = x;
    while(left < right){
        int mid = left + right / 2;
        if(mid * mid == x) {
            return mid;
        } else if(mid * mid < x) {
            left = mid + 1;
        } else if(mid * mid > x) {
            right = mid - 1;
        }
    }
    return -1;
}

int main() {

}