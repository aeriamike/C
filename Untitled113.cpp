Polynomial Add( Polynomial a, Polynomial b )  
{  
    Polynomial c;  
    c=(Polynomial)malloc(sizeof(struct Node));  
    c->Next=NULL;  
    a=a->Next;  
    b=b->Next;  
    Polynomial temp=c;  
    while(a&&b){  
        if(a->Exponent>b->Exponent){  
            temp->Next=a;  
            a=a->Next;  
            temp->Next->Next=NULL;  
            temp=temp->Next;  
  
        }  
        else if(b->Exponent > a->Exponent){  
            temp->Next=b;  
            b=b->Next;  
            temp->Next->Next=NULL;  
            temp=temp->Next;  
        }  
        else{  
            Polynomial t;  
            t=(Polynomial)malloc(sizeof(struct Node)); 
 
            t->Coefficient=a->Coefficient+b->Coefficient;  

            t->Exponent=a->Exponent;  
            t->Next=NULL;  

            if(t->Coefficient!=0){  
                temp->Next=t;  
                temp=temp->Next;  
            }  
            a=a->Next;  
            b=b->Next;  
        }  
    }  
    while(a==1){  
        temp->Next=a;  
        temp=temp->Next;  
        a=a->Next;  
    }  
    while(b==1){  
        temp->Next=b;  
        temp=temp->Next;  
        b=b->Next;  
    }  
    temp->Next=NULL;  
    return c;  
} 
