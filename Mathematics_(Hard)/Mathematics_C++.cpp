#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

/*
Title: Mathematics
Difficulty: Hard
*/

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int target, op_index, ans = -1, start_index, num, is_found = 0, index = 0; cin >> target;
    cin.ignore();
    string s, expression, num_str; getline(cin, s);
    stringstream ss(s);
    while(ss >> expression){
        start_index = 0;
        vector<int> nums;
        vector<char> ops;
        expression = expression.substr(1);
        for(int i = 0; i < expression.size(); i++){
            if(!isdigit(expression[i])){
                if(i + 1 != expression.size()) ops.push_back(expression[i]);
                num_str = expression.substr(start_index, i - start_index);
                num = stoi(num_str);
                nums.push_back(num);
                start_index = i + 1;
            }
        }
        for(int i = 0; i < ops.size(); i++){
            if(ops[i] == '*' || ops[i] == '/'){
                nums[i] = (ops[i] == '*' ? nums[i] * nums[i + 1] : nums[i] / nums[i + 1]);
                ops.erase(ops.begin() + i);
                nums.erase(nums.begin() + i + 1);
                i--;
            }
        }
        for(int i = 0; i < ops.size(); i++){
            nums[i] = (ops[i] == '+' ? nums[i] + nums[i + 1] : nums[i] - nums[i + 1]);
            ops.erase(ops.begin() + i);
            nums.erase(nums.begin() + i + 1);
            i--;
        }
        if(!is_found && target == nums[0]) is_found = 1, ans = index;
        index++;
    }
    cout << (is_found ? "index " + to_string(ans) : "none") << "\n";
}
