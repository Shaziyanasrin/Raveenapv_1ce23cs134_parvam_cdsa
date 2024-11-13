#include<stdio.h>
typedef struct{
    int data[5];
    int front;
    int rear;
} queue;
void initqueue(queue *q)
{
    q->front= -1;
    q->rear = -1;
}

int isempty(queue *q){
    return q->front == -1;
}

int isfull(queue *q){
    return q->rear == 4;
}
void enqueue(queue *q,int value){
    if(isfull(q)){
        printf("queue overflow!\n");
        return;
    }
    if(isempty(q)){
        q->front=0;
    }
        q->data[++q->rear]=value;
    }
    int dequeue(queue *q){
        if(isempty(q)){
            printf("queue underflow!!\n");
            return -1;
        }
        int value=q->data[q->front];
        if(q->front == q->rear){
            q->front = -1;
            q->rear = -1;
        }else{
            q->front++;
        }
        return value;
    }
    int peek(queue *q){
        if(isempty(q)){
            printf("queue is empty!\n");
            return -1;
        }
        return q->data[q->front];
    }
    void printqueue(queue *q)
    {
        if(isempty(q))
        {
            printf("queue is empty!\n");
            return;
        }
            printf("queue :");
            for(int i = q->front; i <= q->rear;i++){
                printf("%d",q->data[i]);
            }
            printf("\n");
        }
        int main(){
            queue q;
            initqueue(&q);
            enqueue(&q, 1);
            enqueue(&q, 2);
            enqueue(&q, 3);
            printqueue(&q);
            printf("dequeued:%d\n",dequeue(&q));
            printqueue(&q);
            printf("front:%d\n",peek(&q));
            enqueue(&q, 4);
            enqueue(&q, 5);
            enqueue(&q, 6);
            printqueue(&q);
            return 0;

        }

