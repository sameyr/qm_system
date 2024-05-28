/*
You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order, and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.

You may assume the two numbers do not contain any leading zero, except the number 0 itself. 

Example 1:
Input: l1 = [2,4,3], l2 = [5,6,4]
Output: [7,0,8]
Explanation: 342 + 465 = 807.
Example 2:

Input: l1 = [0], l2 = [0]
Output: [0]
Example 3:

Input: l1 = [9,9,9,9,9,9,9], l2 = [9,9,9,9]
Output: [8,9,9,9,0,0,0,1]
 
*/
#include <iostream>
#include <list>
#include <vector>

using namespace std;



 // Definition for singly-linked list.
 struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* answer = new ListNode(); // Dummy node to simplify the process
        ListNode* current = answer; // Current pointer to build the new list
        int carry = 0; // Initialize carry

        // Traverse both lists
        while (l1 != nullptr || l2 != nullptr) {
            int num1 = (l1 != nullptr) ? l1->val : 0;
            int num2 = (l2 != nullptr) ? l2->val : 0;
            int sum = num1 + num2 + carry;

            carry = sum / 10; // Calculate new carry
            current->val = sum % 10;

            if (l1 != nullptr) l1 = l1->next; // Move to the next node in l1
            if (l2 != nullptr) l2 = l2->next; // Move to the next node in l2

            if (l1 != nullptr || l2 != nullptr){
                 current->next = new ListNode(); // Create new node with the digit
                current = current->next; // Move to the next node
            }
        }

        // If there's any carry left, create a new node
        if (carry > 0) {
            current->next = new ListNode(carry);
        }

        return answer; // Return the head of the resultant list
    }
};

// Function to create a linked list from a vector of integers
ListNode* createList(const vector<int>& nums) {
    if (nums.empty()) return nullptr;
    ListNode* head = new ListNode(nums[0]);
    ListNode* current = head;
    for (size_t i = 1; i < nums.size(); ++i) {
        current->next = new ListNode(nums[i]);
        current = current->next;
    }
    return head;
}

// Function to print a linked list
void printList(ListNode* head) {
    ListNode* current = head;
    while (current != nullptr) {
            cout << current->val;
        if (current->next != nullptr) {
            cout << " -> ";
        }
        current = current->next;
    }
    cout << endl;
}

int main() {
    // Example: l1 = [2, 4, 3], l2 = [5, 6, 4]
    vector<int> num1 = {2, 4, 3};
    vector<int> num2 = {5, 6, 4};

    ListNode* l1 = createList(num1);
    ListNode* l2 = createList(num2);

    Solution sol;
    ListNode* result = sol.addTwoNumbers(l1, l2);

    cout << "Result: ";
    printList(result);

    // Free the allocated memory (optional, but good practice)
    ListNode* temp;
    while (l1 != nullptr) {
        temp = l1;
        l1 = l1->next;
        delete temp;
    }
    while (l2 != nullptr) {
        temp = l2;
        l2 = l2->next;
        delete temp;
    }
    while (result != nullptr) {
        temp = result;
        result = result->next;
        delete temp;
    }

    return 0;
}