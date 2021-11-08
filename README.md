# my_mastermind

The main challenge in this project was to generate the random array of distinct digits.
I have done it by using two functions generateKey() and checkFormat() in the do-while loop. So the generateKey()
function generates the key until the checkFormat() returns true where it checks that every element of the char
array is unique and is digit. 
The other challenge was to calculate the number of well placed and misplaced pieces. The number of misplaced
pieces is equal to the amount of key[i]==input[j] matches where i!=j, while the number
of well placed pieces is equal to the number of key[i]==input[j] matches where i==j.
