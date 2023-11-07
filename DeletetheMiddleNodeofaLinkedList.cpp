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
    int countOfNodes(ListNode *head)
    {
        int count = 0;
        while (head != NULL)
        {
            head = head->next;
            count++;
        }
        return count;
    }
    ListNode *deleteMiddle(ListNode *head)
    {
        if (head == NULL)
            return NULL;
        if (head->next == NULL)
        {
            delete head;
            return NULL;
        }
        ListNode *copyHead = head;
        int count = countOfNodes(head);
        int mid = count / 2;

        while (mid-- > 1)
            head = head->next;
        head->next = head->next->next;
        return copyHead;
    }
};

int main()
{
    // Solved it on the LeetCode......
}