#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    ListNode *oddEvenList(ListNode *head)
    {
        if (!head || !head->next)
        {
            return head;
        }

        ListNode *odd_head = new ListNode(0);
        ListNode *even_head = new ListNode(0);
        ListNode *odd = odd_head, *even = even_head;
        bool is_odd = true;

        while (head)
        {
            if (is_odd)
            {
                odd->next = head;
                odd = odd->next;
            }
            else
            {
                even->next = head;
                even = even->next;
            }

            head = head->next;
            is_odd = !is_odd;
        }

        even->next = nullptr;
        odd->next = even_head->next;

        return odd_head->next;
    }
};

int main()
{
    // Solved it on the LeetCode......
}