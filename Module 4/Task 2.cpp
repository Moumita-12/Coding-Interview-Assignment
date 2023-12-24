 int multiply(int a, int b) {
       if(a==0 || b==0) return 0;

       if(a<b) swap(a,b);

       return a+multiply(a,b-1);
   }

// Time complexiety = O(b) 
// space complexiety = O(b)
//actually time and space complexiety depends on the minimum value between a and b , here b is the minimum value between a and b after swapping
