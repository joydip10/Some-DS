
public class node {
	node next;
	int data;
	public node(int data){
		this.data = data;
	}

}

public class linkedlist {
	node head;
	
	public void append(int data) {
		if (head == null){
			head = new node(data);
			return;
		}
		node current = head;
		while(current.next!= null){
			current = current.next;
		}
		current.next = new node(data);
	}
	
	public void prepend(int data){
		node newHead = new node(data);
		newHead.next = head;
		head = newHead;
	}
	public void deleteWithValue(int data) {
		if (head == null)
			return;
		if(head.data == data) {
			head = head.next;
			return;
		}
		
		node current = head;
		while(current.next != null) {
			if(current.next.data == data) {
				current.next = current.next.next;
				return;
			}
			current =  current.next;
		}
	}
}
