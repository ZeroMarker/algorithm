#include<iostream>
#include<vector>

class Solution {
public:
    vector<int> answer;
    vector<int> printListFromTailToHead(ListNode* head) {
        if(head != nullptr) {
            if(head -> next != nullptr) {
                answer = printListFromTailToHead(head -> next);
            }
            answer.push_back(head -> val);
        }
        return answer;
    }
}
