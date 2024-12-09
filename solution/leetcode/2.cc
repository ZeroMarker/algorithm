/// Add Two Numbers
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head = new ListNode(0); // 创建哑节点作为结果链表的头节点
        ListNode* current = head; // 当前节点指针
        int carry = 0; // 进位

        while (l1 != nullptr || l2 != nullptr || carry != 0) {
            int x = (l1 != nullptr) ? l1->val : 0;
            int y = (l2 != nullptr) ? l2->val : 0;
            int sum = x + y + carry; // 计算当前位的和以及进位

            carry = sum / 10; // 更新进位
            current->next = new ListNode(sum % 10); // 创建新节点，存储当前位的和

            current = current->next; // 移动当前节点指针
            if (l1 != nullptr) l1 = l1->next; // 移动l1指针
            if (l2 != nullptr) l2 = l2->next; // 移动l2指针
        }

        ListNode* result = head->next; // 实际的链表从哑节点的下一个节点开始
        delete head; // 删除哑节点
        return result; // 返回结果链表的头节点
    }
};
