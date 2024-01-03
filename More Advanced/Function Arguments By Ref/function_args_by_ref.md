Assuming you now understand pointers and functions, you are aware that function arguments are passed by value, by which means they are copied in and out of functions. But what if we pass pointers to values instead of the values themselves? 
This will allow us to give functions control over the variables and structures of the parent functions and not just a copy of them, thus directly reading and writing the original object.

Let's say we want to write a function which increments a number by one, called addone. This will not work:

```c	
void addone(int n) {
	// n is a local variable which only esists within the function scope
	n++; // Therefore incrementing it has no effect
}

int n;
printf("Before: %d\n", n);
addone(n);
printf("After: %d\n", n);
```

However, this will work:

```c	
void addone(int *n) {
	// n is a pointer here which pooint to a memory-address outside the function scope
	(*n)++; // This will effectively increment the value of n

}

int n;
printf("Before: %d\n", n);
addone(&n);
printf("After: %d\n", n);
```

The difference is that the second version of addone receives a pointer to the variable n as an argument, and then it can manipulate it, because it knows where it is in the memory.

Notice that when calling the addone function, we must pass a reference to the variable n, and not the variable itself - this is done so that the function knows the address of the variable, and won't just receive a copy of the variable itself.

# Pointers to structures

Let's say we want to create a function which moves a point forward in both x and y directions, called move. Instead of sending two pointers, we can now send only one pointer to the function of the point structure:

```c
void move(point * p) {
	(*p).x++;
	(*p).y++;
}
```

However, if we wish to dereference a structure and access one of it's internal members, we have a shorthand syntax for that, because this operation is widely used in data structures. 
We can rewrite this function using the following syntax:

```c
void move(point * p) {
	p->x++;
	p->y++;
}
```
