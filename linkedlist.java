package datastruc;
public class Node
{
	int data;
	Node next;
	Node(int a)
	{
		data=a;
		next=null;
	}
	public static void main(String args[])
	{
	Node head=new Node(10);
	Node first=new Node(20);
	Node second=new Node(30);
	head.next=first;
	first.next=second;
	second.next=null;
	Node temp=head;
	while(temp!=null)
	{
		System.out.println(temp.data);
		temp=temp.next;
	}
	}
}
