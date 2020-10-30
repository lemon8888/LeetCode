//栈
typedef struct stack {
    char* top;
    char* base;
} stack;
void push(stack* a, char *s) {
    *(a->top) = *s;
    a->top++;
}
void pop(stack* a, char* data) {
    *data = *--(a->top);
}
int  isValid(char * s) {
    int len = strlen(s);
    if(len == 0) {
        return true;
    }
    if(len % 2 != 0) {
        return false;
    }
    stack *a = (stack*)malloc(sizeof(stack));
    a->base = (char*)malloc(sizeof(char) * (len + 1));
    a->top = a->base;
    char * data = (char*)malloc(sizeof(char));

    while(*s != '\0') {
        if(')' == *s) {
            if(a->top == a->base) {
                return false;
            } else {
                pop(a, data);
                if(*data != '(') {
                    a->top++;
                    return false;
                } else {
                    *s++;
                }
            }
        } else if('}' == *s) {
            if(a->top == a->base) {
                return false;
            } else {
                pop(a, data);
                if(*data != '{') {
                    a->top++;
                    return false;
                } else {
                    *s++;
                }
            }
        } else if(']' == *s) {
            if(a->top == a->base) {
                return false;
            } else {
                pop(a, data);
                if(*data != '[') {
                    a->top++;
                    return false;
                } else {
                    *s++;
                }
            }
        } else {
            push(a, s);
            *s++;
        }
    }
    if(a->top == a->base) {
        return true;
    } else {
        return false;
    }
}
