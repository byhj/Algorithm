/*
What is the way to resolve this problem?
Following is one way:

        int mid = low + ((high - low) / 2); 
Probably faster, and arguably as clear is (works only in Java, refer this):

        int mid = (low + high) >>> 1; 
In C and C++ (where you don’t have the >>> operator), you can do this:

        mid = ((unsigned int)low + (unsigned int)high)) >> 1 
The similar problem appears in Merge Sort as well.

*/
