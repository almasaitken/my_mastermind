# my_mastermind

Mastermind is a game composed of 8 pieces of different colors. A secret code is then composed of 4 distinct pieces.

The player has 10 attempts to find the secret code. After each input, the game indicates to the player the number of well placed pieces and the number of misplaced pieces.

Pieces will be '0' '1' '2' '3' '4' '5' '6' '7'.

If the player finds the code, he wins, and the game stops. A misplaced piece is a piece that is present in the secret code butthat is not in a good position.

You must read the player's input from the standard input.

Your program will also receive the following parameters: -c [CODE]: specifies the secret code. If no code is specified, a random code will be generated. -t [ATTEMPTS]: specifies the number of attempts; by default, the playerhas 10 attempts.

The main challenge in this project was to generate the random array of distinct digits.
I have done it by using two functions generateKey() and checkFormat() in the do-while loop. So the generateKey()
function generates the key until the checkFormat() returns true where it checks that every element of the char
array is unique and is digit. 
The other challenge was to calculate the number of well placed and misplaced pieces. The number of misplaced
pieces is equal to the amount of key[i]==input[j] matches where i!=j, while the number
of well placed pieces is equal to the number of key[i]==input[j] matches where i==j.
