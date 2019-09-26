#include<stdio.h>  
#include<stdlib.h>  
#include<malloc.h> 
typedef struct node  
{  
    float coe;    
    int pow;     
    struct node *next;  
}poNode;      

typedef poNode* poly;  

poly createpoly()     
{  
    poNode *p, *q, *head = (poNode *)malloc(sizeof(poNode));     
    head->next = NULL;  
    float coe;  
    int pow;  
    while (scanf("%f %d", &coe, &pow) && coe)    
    {  
        if (head->next)  
        {  
            p = head;  
            while (p->next && pow < p->next->pow)  
                p = p->next;  
            if (p->next)  
            {  
                if (pow == p->next->pow)  
                {  
                    p->next->coe += coe;  
                     
                    if (p->next->coe > -0.000001 && p->next->coe < 0.000001)  
                    {  
                        q = p->next;  
                        p->next = q->next;  
                        free(q);  
                    }  
                }  
                else  
                {  
                    q = (poNode*)malloc(sizeof(poNode));  
                    q->coe = coe;  
                    q->pow = pow;  
                    q->next = p->next;  
                    p->next = q;  
                }  
            }  
            else  
            {  
                p->next = (poNode*)malloc(sizeof(poNode));  
                p = p->next;  
                p->coe = coe;  
                p->pow = pow;  
                p->next = NULL;  
            }  
        }  
        else  
        {  
            head->next = (poNode*)malloc(sizeof(poNode));  
            head->next->coe = coe;  
            head->next->pow = pow;  
            head->next->next = NULL;  
        }  
    }  
    return head;  
}  
 
poly multiply(poly poly, float coe, int pow)  
{  
    poNode *p, *q, *Poly = (poNode*)malloc(sizeof(poNode));  
    p = Poly;  
    q = poly->next;  
    while (q)  
    {  
        p->next = (poNode*)malloc(sizeof(poNode));  
        p = p->next;  
        p->coe = (q->coe*coe);  
        p->pow = (q->pow + pow);  
        q = q->next;  
    }  
    p->next = NULL;  
    return Poly;  
}  
void add(poly poly1, poly poly2)   
{  
    poNode *p, *q, *r;  
    r = poly1;  
    p = poly1->next;   
    q = poly2->next;  
    poly2->next = NULL;  
    while (p && q)  
    {  
        if (p->pow > q->pow)  
        {  
            r->next = p;  
            p = p->next;  
            r = r->next;  
        }  
        else if (p->pow < q->pow)  
        {  
            r->next = q;  
            q = q->next;  
            r = r->next;  
        }  
        else  
        {  
            poNode *t;  
            p->coe += q->coe;  
            if (!(p->coe > -0.000001 && p->coe < 0.000001)) 
            {  
                r->next = p;  
                r = r->next;  
                p = p->next;  
            }  
            else  
            {  
                t = p;  
                p = p->next;  
                free(t);  
            }  
            t = q;  
            q = q->next;  
            free(t);  
        }  
    }  
    if (p)  
        r->next = p;  
    if (q)  
        r->next = q;  
}  
 
poly polySubtract(poly poly1, poly poly2)  
{  
     
    poly poly = (poNode*)malloc(sizeof(poNode));  
    poNode *p, *q;  
    p = poly;  
    q = poly2->next;  
    while (q)  
    {  
        p->next = (poNode*)malloc(sizeof(poNode));  
        p = p->next;  
        p->coe = -(q->coe); 
        p->pow = q->pow;  
        q = q->next;  
    }  
    p->next = NULL;  
    add(poly, poly1);   
    return poly;  
}  
  
poly polyAdd(poly poly1, poly poly2)  
{  
    poly poly = (poNode*)malloc(sizeof(poNode));    
    poly->next = NULL;  
    poNode *p, *q, *r;  
    r = poly;  
    p = poly1->next;  
    q = poly2->next;  
    while (p&&q)  
    {  
        if (p->pow > q->pow)  
        {  
            r->next = (poNode*)malloc(sizeof(poNode));  
            r = r->next;  
            r->coe = p->coe;  
            r->pow = p->pow;  
            p = p->next;  
        }  
        else if (p->pow < q->pow)  
        {  
            r->next = (poNode*)malloc(sizeof(poNode));  
            r = r->next;  
            r->coe = q->coe;  
            r->pow = q->pow;  
            q = q->next;  
        }  
        else  
        {  
            float m = p->coe + q->coe;  
            if (!(m > -0.000001 && m < 0.000001))  
            {  
                r->next = (poNode*)malloc(sizeof(poNode));  
                r = r->next;  
                r->coe = m;  
                r->pow = p->pow;  
            }  
            q = q->next;  
            p = p->next;  
        }  
    }  
    while (p)  
    {  
        r->next = (poNode*)malloc(sizeof(poNode));  
        r = r->next;  
        r->coe = p->coe;  
        r->pow = p->pow;  
        p = p->next;  
    }  
    while (q)  
    {  
        r->next = (poNode*)malloc(sizeof(poNode));  
        r = r->next;  
        r->coe = q->coe;  
        r->pow = q->pow;  
        q = q->next;  
    }  
    r->next = NULL;  
    return poly;  
}  
poly polyMultiply(poly poly1, poly poly2)    
{  
    poly poly = (poNode*)malloc(sizeof(poNode));     
    poly->next = NULL;  
    poNode *p;  
    p = poly2->next;  
    while (p)  
    {  
        add(poly, multiply(poly1, p->coe, p->pow));  
        p = p->next;  
    }  
    return poly;  
}  
void printPoly(poly poly)  
{  
    if (poly && poly->next)  
    {  
        poNode *p = poly->next;    
        while (p->next)  
        {  
            printf("%gx^%d", p->coe, p->pow);  
            p = p->next;  
            if (p && (p->coe > 0))  
                printf("+");  
        }  
        if (p->pow == 0)  
            printf("%g", p->coe);     
        else  
            printf("%gx^%d", p->coe, p->pow);  
        printf("\n");  
    }  
}  
void polyDestroy(poly poly)   
{  
    if (poly && poly->next)  
    {  
        poNode *p, *q;  
        p = poly;  
        while (p)  
        {  
            q = p->next;  
            free(p);  
            p = q;  
        }  
    }  
    poly = NULL;  
}  

int main()  
{  
    printf("Adding, subtracting, and multiplying two polys through linked list.\n");  
    poly poly1, poly2, poly;  
    
    printf("Creating the first poly.\n"); 
	printf("Please enter a coeficient and power for each line. Type '0 0' to end the input.\n"); 
    poly1 = createpoly();  
    printf("poly #1 is: ");  
    printPoly(poly1);  
    
    printf("Creating the first poly.\n"); 
	printf("Please enter a coeficient and power for each line. Type '0 0' to end the input.\n"); 
    poly2 = createpoly();  
    printf("poly #2 is: ");  
    printPoly(poly2);  
    
    int n;
    printf("Please selection a mathematical operation: addition(1), multiplication(2), or subtraction(3).\n");  
    scanf("%d",&n);  
    switch ( n )  
    {  
    	case 1:
    		printf("The addition result is:\n");  
    		poly = polyAdd(poly1, poly2);  
    		printPoly(poly);  
    		polyDestroy(poly1);  
    		polyDestroy(poly2);  
    		polyDestroy(poly);  
     
    		break;
    	case 2:
    		printf("The multiplication result is:\n");  
    		poly = polyMultiply(poly1, poly2);  
    		printPoly(poly);  
    		polyDestroy(poly1);  
    		polyDestroy(poly2);  
    		polyDestroy(poly);  
    
    		break;
    	case 3:
    		printf("The subtraction result is:\n");  
   			poly = polySubtract(poly1, poly2);  
    		printPoly(poly);
    		polyDestroy(poly1);  
    		polyDestroy(poly2);  
   			polyDestroy(poly);  
  
    		break;
    	default:
    		break;
    		
	}

   
    return 0;  
}  
