#include <iostream>
#include <vector>
using namespace std;

void sumOfsubseq(vector<int> inp, int sum, int s=0, int ind=0, vector<int> res= {}){
    if(ind == inp.size()){
        if(s == sum){
            for(auto i : res) cout<< i << " ";
            cout << endl;
        }
        
        return;
    }
    res.push_back(inp[ind]);
    s = s + inp[ind];
    sumOfsubseq(inp, sum, s, ind+1, res);

    s = s - inp[ind];
    res.pop_back();
    sumOfsubseq(inp, sum, s, ind+1, res);
}



int main(){
    vector<int> vc = {2,1,1,3,2};
    int sum = 4;
    sumOfsubseq(vc, sum);
}