#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void merge(vector<int>& A, int m, vector<int>& B, int n){
        int idx = m + n - 1;
        int i = m - 1;
        int j = n - 1;

        //Compare from back and place bigger element
        while (i >= 0 && j >= 0){
            if (A[i] >= B[j]) {
                A[idx--] = A[i--];
            } else {
                A[idx--] = B[j--];
            }
        }

        //If B still has elements
        while (j >= 0){
            A[idx--] = B[j--];
        }
    }
};

int main(){
    Solution obj;

    vector<int> A = {1, 2, 3, 0, 0, 0};
    int m = 3;

    vector<int> B = {2, 5, 6};
    int n = 3;

    obj.merge(A, m, B, n);

    //Print merged array
    for (int num : A) {
        cout << num << " ";
    }

    return 0;
}