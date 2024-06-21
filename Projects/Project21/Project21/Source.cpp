
//struct elem
//{
//	int key;
//	elem *next;
//} *start = NULL;
//
//elem e;
//
//
//
//void add_e(int n)
//{
//	elem *p = start;
//	start = new elem;
//	start -> key = n;
//}
//
//void add_before_last(int next)
//{
//	
//	q = p;
//	while(p -> next){
//
//	}
//}
//
//int main()
//{
//	int *q = new elem;
//
//
//	elem key;
//
//	elem start;
//
//
//	system("pause");
//	return 0;
//}

//struct elem
//{
//	int key;	// просто существует переменная в elem.key, и зовут её никак
//	elem *next;	// тоже самое, существует некст внутри елема, нафига, а главное зачем?
//}	*start = NULL;	// пустая клеточка вот она [пусто]
//
//void add_b(int n)	// создаём функцию, создаём переменную н;
//{
//	elem *p = start;	// говорю ему ало э, создаём фантомную переменную под название p, это фантомное p = [пусто]
//
//	start = new elem;	// [пусто] = [new elem]???
//
//	start -> key = n;	// [пусто] -> пустая key = пустой n:
//
//	start -> next = 
//}

//void add_e()
//{
//	n = new node; // 'n' is "node"
//	/*n = new node;*/
//	n -> data = 1; // in "node", 'n' is 1
//
//
//	t = n; // "[t]->" as 'n'
//	h = h; // "[h]->" as 'n'
//
//	// like:
//	//
//	//	[n] - - - 
//	//			 |
//	//			\./
//	//		  [  1   ]
//	//		  [ next ]---->
//	//		 /.\   /.\
//	//		  |		|
//	//	[t]----		|
//	//	[h]==========
//	//
//	//
//	//
//	//
//	//
//	//
//	//
//	//
//	//
//
//	n = new node;
//	// like:
//	//
//	//	[n] - - - 
//	//			 |
//	//			\./
//	//		  [  NULL   ]
//	//		  [ next	]---->
//	//
//	//
//	//
//	//
//	//
//	n -> data = 2;
//	// like:
//	//
//	//	[n] - - - 
//	//			 |
//	//			\./
//	//		  [  2   ]
//	//		  [ next ]---->
//	//
//	// but honestly its looks like:
//	//
//	//	[n] - - -		[n] - - - 
//	//			 |				 |
//	//			\./				\./
//	//		  [  1   ]		[  2   ]
//	//		  [ next ]----> [ next ]---->
//	//		 /.\   /.\
//	//		  |		|
//	//	[t]----		|
//	//	[h]==========
//
//
//	t -> next = n;
//
//	//					[n] - - - 
//	//							 |
//	//							\./
//	//		  [  1   ]		[  2   ]
//	//		  [ next ]----> [ next ]---->
//	//		 /.\   
//	//		  |	
//	//	[t]----	
//	//
//
//	t = t -> next;
//
//	//					[n] - - -. 
//	//							 |
//	//							\./
//	//		  [  1   ]		[  2   ]
//	//		  [ next ]----> [ next ]---->
//	//						 /.\   
//	//						  |	
//	//					[t]----	
//	//
//
//	n = new node;
//	//	[n] - - - 
//	//			 |
//	//			\./
//	//		  [  NULL   ]
//	//		  [ next	]---->
//	n -> data = 3;
//	//	[n] - - - 
//	//			 |
//	//			\./
//	//		  [  3   ]
//	//		  [ next ]---->
//	// now its:
//	//										[n] - - -
//	//												 |				
//	//												\./
//	//		  [  1   ]		[  2   ]			[  3   ]
//	//		  [ next ]----> [ next ]---->		[ next ]---->
//	//		 /.\			   /.\
//	//		  |					|
//	//	[n]----					|
//	//				[t]==========
//	//
//	t -> next = n;
//
//
//
//
//	//								[n] - - -
//	//										 |				
//	//										\./
//	//		  [  1   ]		[  2   ]	 [  3   ]
//	//		  [ next ]----> [ next ]---->[ next ]---->
//	//		 /\					/\
//	//		  |					|
//	//	[n]----					|
//	//				[t]==========
//
//	n = new node;
//	//
//	//
//	//
//	//
//	//
//	//													[n] - - -
//	//															 |				
//	//															\./
//	//		  [  1   ]		[  2   ]	 [  3   ]			[  null   ]
//	//		  [ next ]----> [ next ]---->[ next ]---->		[ next	  ]---->
//	//		 /\					/\
//	//		  |					|
//	//	[n]----					|
//	//				[t]==========
//	//
//	//
//	//
//	//
//	//
//	//
//	n -> data = 4;
//	//
//	//
//	//
//	//
//	//
//	//													[n] - - -
//	//															 |				
//	//															\./
//	//		  [  1   ]		[  2   ]	 [  3   ]			[  4   ]
//	//		  [ next ]----> [ next ]---->[ next ]---->		[ next ]---->
//	//		 /\					/\
//	//		  |					|
//	//	[n]----					|
//	//				[t]==========
//	//
//	//
//	//
//	//
//	//
//	//
//	t = t -> next;
//	//
//	//
//	//
//	//
//	//
//	//													[n] - - -
//	//															 |				
//	//															\./
//	//		  [  1   ]		[  2   ]	 [  3   ]			[  4   ]
//	//		  [ next ]----> [ next ]---->[ next ]---->		[ next ]---->
//	//		 /\					/\
//	//		  |					|
//	//	[n]----					|
//	//				[t]==========
//	//
//	//
//	//
//	//
//	//
//	//
//	t -> next = n;
//	n -> next = NULL;
//
//
//
//
//}


//node *n; //	[n]->
//node *t; //	[t]->
//node *h; //	[h]->


//void add_before_last(int n)
//{
//	//for(int i = 0; i < 4; i++){
//	//	
//
//
//	//	/*key = new node;
//
//	//	n = new node;*/
//	//}
//	node *p = new node;
//	node *q = new node;
//	q = p;
//	while(p -> next){
//		q = p;
//		p = p->next;
//	}
//	node *p1 = new node;
//
//	cin >> n;
//	p1 -> key = n;
//
//	p1 -> next = p;
//	q -> next = p1;
//
//	/*while(p -> next)*/
//	
//}

//void add_e()
//{
//	node *p1;
//
//	start = new node; // in space [start] = NULL
//	start -> key = 1; // connect [start] to node [key] which = 1
//	
//	//p1 = start;			// 
//	//p1 -> next = start;	
//
//	start = new node; // in space [start] = empty
//
//	start -> key = 2; // connect [start] to node [key] which = 2
//
//	p1 -> next = start; // [p1]->[next] == start	//next1.node1 // can i use, p1 = new node; p1 -> key = 1; p1 = p1 -> next; ?
//	p1 = p1 -> next;	// from node1[p1]->[next]	//next2.node2
//
//
//	start = new node; // in space [start] = nothing
//	start -> key = 3; // connect [start] to node [key] which = 1
//
//	p1 -> next = start; // p1 in node3
//
//	start = new node;	// in space [start] = no data
//	p1 = p1 -> next;	// p1 = whatever.p1 -> next
//
//	start -> key = 4;	//from space to key which = 4
//
//	p1 -> next = start;
//	p1 -> next = NULL; // from wherever.p1 go to next, which next equvival NOTHING
//
//}

#include <iostream>

using namespace std;

struct node
{
	int key;
	node *next; //	[data]
				//	[next]->
}	*start = NULL;

void logic()
{
	start = new node; // new node
	start -> key = 1; // node = 1

	start = new node; // new node
	start -> key = 2; // node = 2 

	start = new node; // new node
	start -> key = 3; // node = 3


	start = new node;	// new node
	start -> key = NULL;// node empty

	node *p1;			// we create p1
	p1 = start;			// start = NULL, it is in node NULL, so the same way have p1
	p1 -> next = start;	// p1 -> next, where is 'start' right now


	start = new node;	// new node
	start -> key = 4;	// new node is 4
	p1 = p1 -> next;	// p1 in node 3, we use p1 -> next for go to node 4

	start -> next = NULL; // probably done

}

int main()
{
	logic();
	/*add_before_last(n);*/


	system("pause");
	return 0;
}