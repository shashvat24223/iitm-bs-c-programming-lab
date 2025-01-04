## Smart Lighting System Configuration

You are designing a smart lighting system for a 16-room building. Each room's light can either be ON or OFF. The state of light in each room is represented by the first 16 bits of an integer, $n$. Given the number n, perform the below tasks and print the state of the LED after each step.

Assume room number 1 correspond to the LSB and increases all the way to 16 which correspond to the MSB.

**Tasks**

1. Toggle the lights of every $k$th room of the building from the left.
2. Toggle the lights in the even room numbers.
3. Turn on the lights of the given set of rooms.
4. Turn off the lights of the given set of rooms.
5. Find the number of lights are ON at the end of the process.

**Input Format**

Input consists of four lines.
1. First line consists of positive integer n (as decimal number), whose bits represents the initial lighting configuration.
2. Second line of input consists of the number $k$, where every nth room has to be toggled(1<=k<=16)
3. In the third line consists of the numbers that represent the room number for which the lights has to be turned on and is terminated by -1.
4. In the fourth line consists of the numbers that represent the room number for which the lights has to be turned off and is terminated by -1.

**Output Format**

Output consists of six lines
1. 16 bit representation of the decimal number.
2. 16 bit representation, after toggling every nth light.
3. 16 bit representation, after turning on the given set of lights.
4. 16 bit representation, after turning off the given set of lights.
5. 16 bit representation, after toggling lights in even room numbers.
6. Total number of lights are on at the end of the process.


**Sample I/O**

```
Enter a positive integer: 567
The 16-bit binary representation is:    0000 0010 0011 0111 
Enter the value for k: 5
After toggling every k-th room (k=5):   0100 0000 0010 0111 
After toggling lights in even rooms:    1110 1010 1000 1101 

Numbers to turn on (end with -1): 
1 2 3 4 -1
After turning ON the given lights:      1110 1010 1000 1111 
Numbers to turn off (end with -1): 
9 10 11 12 -1
After turning OFF the given lights:     1110 0000 1000 1111 
Total number of lights ON = 8
```

**Explanation**

1. First line has the 16-bit binary representation of the bits.  
   567<sub>10</sub> -> 0000 0010 0011 0111 <sub>2</sub>  (as 16 bit binary)
2. After toggling every 5th room.  
   ```
   0000 0010 0011 0111 
   0100 0000 0010 0111
   ```
3. After toggling lights in even rooms.
   ```
   0100 0000 0010 0111
   1110 1010 1000 1101
   ```
4. After turning ON lights in room number 1, 2, 3 and 4.
   ```
   1110 1010 1000 1101 
   1110 1010 1000 1111  (1, 3 and 4 are already ON so no change)
   ```
5. After turning OFF lights in room number 9, 10, 11 and 12.
   ```
   1110 1010 1000 1111
   1110 0000 1000 1111 (9 and 11 are already OFF so no change)
   ```
6. The number of bits set in the final represenation in 8.
