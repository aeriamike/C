List Reverse( List L1 )  
{  
    List forward=L1->Next;  
    List reverse;  
    reverse=(struct Node*)malloc(sizeof(struct Node));  
    reverse->Next=NULL;  
    
    
    while(forward){  
    
        struct Node* temp=forward->Next;  
        forward->Next=reverse->Next;  
        reverse->Next=forward;  
        forward=temp;  
    }  
    
    struct Node* after=reverse->Next;  
    struct Node* before=L1;  
    
    while(after){  
        before->Next=after;  
        before=before->Next;  
        after=after->Next;  
    }  
    
    before->Next=NULL;
	  
    return reverse;  
  
}  
