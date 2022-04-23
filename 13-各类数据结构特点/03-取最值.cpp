#include <iostream>
/*一双链表非空，由head指针指出,结点结构为{1link, data,rlink},请根据据域data值最大的那个结点（最大值结点只有一个)移动到链表最前边的算法，要求不得申请新结点空间。*/
typedef struct DLNode
{
    int data;
    struct DLNode *llink;
    struct DLNode *rlink;
} DLNode;

int main()
{

    return 0;
}

void maxFirst(DLNode *head)
{
    DLNode *p = head->rlink,
           *q = p;
    int max = p->data;
    //找最值:
    while (p != NULL)
    {
        if (max < p->data)
        {
            max = p->data;
            q = p;
        }
        p = p->rlink;
    }
    //"删除”:
    DLNode *l = q->llink, *r = q->rlink;
    l->rlink = r;
    if (r != NULL)
        r->llink = l;
    //插入:
    q->llink = head;
    q->rlink = head->rlink;
    head->rlink = q;
    q->rlink->llink = q;
}