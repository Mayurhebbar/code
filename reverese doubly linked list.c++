void reverse(Node **head_ref)
{
      Node *p=*head_ref,*q=NULL;
      if(p==NULL)
      return;
      if(p->next==NULL)
      return;
  while(p!=NULL)
  {
      p->prev=p->next;
      p->next=q;
      q=p;
      p=p->prev;
  }
  *head_ref=q;
}
