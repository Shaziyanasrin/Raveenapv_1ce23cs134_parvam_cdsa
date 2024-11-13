#include<stdio.h>
#include<stdlib.h>
#define MAX 5
struct stack{
    int items[MAX];
    int top;

};
void initstack(struct stack *s){
s->top=-1;
}
int isfull(struct stack *s){
    return s->top==MAX-1;
}
int isempty(struct stack *s){
    return s->top==-1;
}
void push(struct stack *s,int value){
    if(isfull(s)){
        printf("stack is full and cant push %d\n",value);
    }else{
        s->top++;
        s->items[s->top]=value;
        printf("pushed %d onto the stack\n",value);
    }
}
void pop(struct stack *s){
    if(isempty(s)){
        printf("stack is empty and cant pop\n");
        return -1;
    }else{
        int poppedvalue=s->items[s->top];
        s->top--;
        printf("poped %d from the stack",poppedvalue);
        return poppedvalue;
    }
}
void displaystack(struct stack *s){
    if(isempty(s)){
        printf("stack is empty\n");
    }else{
        printf("stack elements: \n");
        for(int i=0;i<=s->top;i++){
            printf("%d ",s->items[i]);
        }
        printf("\n");
    }
}
int main(){
    struct stack stack;
    initstack(&stack);
    push(&stack, 10);
    push(&stack, 20);
    push(&stack, 30);
     push(&stack, 40);
      push(&stack, 50);
    displaystack(&stack);
    pop(&stack);
    pop(&stack);
    pop(&stack);
    pop(&stack);
    pop(&stack);
    pop(&stack);
    displaystack(&stack);
    return 0;
}

