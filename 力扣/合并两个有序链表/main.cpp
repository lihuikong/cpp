#include<iostream>

//ListNode表示链表中的一个节点
struct ListNode {
    
    //节点存储的值
    int val;
    
    //指向下一个节点的指针
    ListNode *next;

    //三个构造函数
    //创建空节点：不传参数自动设为零并且直接跟空指针
    ListNode() : val(0), next(nullptr) {}
    
    //创建单节点：只指定值，后跟空指针
    //为了给那些数据出来但是还不知道搁哪的节点建立一块地址。
    ListNode(int x) : val(x), next(nullptr) {}

    //插入节点到链表：给入值并且传入指针
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};


//解决方案
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
        //创建哑节点
        ListNode* dummy = new ListNode(0);
        ListNode* current = dummy;

        //当两个链表都不空的时候比较
        while(list1 != nullptr && list2 != nullptr){
            if(list1 -> val <= list2 -> val){
                current -> next = list1;
                list1 = list1 -> next;
            } else {
                current -> next = list2;
                list2 = list2 -> next;
            }
            current = current -> next;
        }
        current -> next = (list1 != nullptr) ? list1 : list2;

        /*如果不把dummy指向的地址放到res中，
        *最后虽然[return dummy -> next;]会销毁dummy指向的地址，
        *但是dummy建立时的val值0会保留，就会有内存泄漏的风险。
        */
        ListNode* res = dummy -> next;
        delete dummy;
        return res;
    }
};