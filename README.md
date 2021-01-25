# Affine Cipher
In affine cipher each letter in an alphabet is mapped to its numeric equivalent, encrypted using a simple mathematical function, and converted back to a letter. Letter A is given number 0 and letter Z is given number 26. Each letter is encrypted with the function (5x + 8) mod 26. The decryption function is 21(y − 8) mod 26. 
- Example :

![Affine Cipher ](https://i.imgur.com/wYPN82V.png)

# Caesar Cipher
Caesar cipher is one of the simplest and most widely known encryption techniques. It is a
type of substitution cipher in which each letter in the plaintext is replaced by a letter at
some fixed number of positions down the alphabet. For example, with a right shift of 3, A
would be replaced by D, B would become E, X becomes A, and so on. User should enter
the number of shifts he wants.
- Example :

![Caesar Cipher ](https://i.imgur.com/plgsyO2.png)

# Encrypt and Decrypt program input would be like :
## Example 1 :
What do you like to do today?<br>
1- Encrypt and decrypt msg using caesar Algorithm <br>
2- Encrypt and decrypt msg using Affine Algorithm <br>
3- End <br>
**Input** :<br>
1<br>  
Enter Msg to encrypt and decrypt : ABCDefghijkLMNopqrstuvWX yz<br>
Enter the Shift amount: 3<br>
**Output** :<br>
Cipher : DEFGhijklmnOPQrstuvwxyZA bc<br>
Decipher: ABCDefghijkLMNopqrstuvWX yz

## Example 2 :
What do you like to do today?<br>
1- Encrypt and decrypt msg using caesar Algorithm<br>
2- Encrypt and decrypt msg using Affine Algorithm<br>
3- End<br>
**Input**:<br>
2<br>
Enter Msg to encrypt and decrypt : ABCDefghijkLMNopqrstuvWX yz<br>
**Output** :<br>
Cipher: INSXchmrwbgLQVafkpuzejOT yd<br>
Decipher : ABCDefghijkLMNopqrstuvWX yz<br>
