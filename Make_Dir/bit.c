
int setBit(int n, int k) 
{ 
    return (n | (1 << (k - 1))); 
} 
  
// Function to clear the kth bit of n 
int clearBit(int n, int k) 
{ 
    return (n & (~(1 << (k - 1)))); 
} 
  
// Function to toggle the kth bit of n 
int toggleBit(int n, int k) 
{ 
    return (n ^ (1 << (k - 1))); 
} 

//Function to query
int query(int n,int k)
{
    return(n & (1<<(k-1)));
}
