# AlgorithmProjects


# Algorithm 1:  String Run Encoding 

The String Run Encoding problem involves compressing a string to ensure that it takes less 
space. A "run" is a substring of repeated characters, for example "aaaa". Run-length encoding 
means replacing all similar characters with a single copy of the character and a count of how 
many times it appears. For example, "aaaa" is replaced with "4a", because there are 4 copies 
of the letter 'a'. In our run-length encoding problem, all runs are encoded, and the input 
string is limited to lower-case letter and space characters. 
 
String run encoding problem  
input: a string 𝑆 of 𝑛 characters, where each character is a lower-case letter or space 
output: a string 𝐶 where each run of 𝑘 repetitions of the character 𝑥 is replaced with the 
string "𝑘𝑥" 
Sample inputs and outputs: 
• "ddd" becomes "3d" 
• "heloooooooo there" becomes "hel8o there" 
• "choosemeeky and tuition-free" becomes "ch2osem2eky and tuition-fr2e" 


# Algorithm 2:  Finding Target Substrings 

Assume that you are given two arrays of items. The first array is a single concatenation of all 
cities in California. The second array contains names of some real or imaginary cities, that 
are present in in the first array. 
Sample: 
Input: Array_A = [ “hemetoaklandrialtofullertonmarcolongchinofresnovallejoclovissimithousand”] 
  Array_B = [ ‘clovis’, ‘vallejo’, ‘rialto’, ‘marco’] 
 
Output:  Output_order =[ 12, 27, 47, 54] 
       Output_array =[ ‘rialto’, ‘marco’, ‘vallejo’, ‘clovis’] 
 
 
Your output should be an array containing starting indices of the target words in array one. 
In the example above, rialto is the first word, and can be found at index array_A[12]. All 
words are in small letters.  


# Algorithm 3:  Merging Techniques  

You are provided with grades of students from various sections of CPSC 120. The grading 
system allows the use of negative points.  The grades appear to be sorted: the first item in 
each array is the least element in the respective array. You decide to merge the various lists 
into a single sorted array.  Sample input arrays and the desired output are presented below: 
Sample input: 
all_lists  =[ [2, 5, 9, 21], 
         [-1, 0, 2], 
         [-10, 81, 121] 
         [4, 6, 12, 20, 150] ] 
 
Sample output: 
[ -10, -1, 0, 2, 2, 4, 5, 6, 9, 12, 20, 21, 81, 121, 150] 
 
There are different ways of merging these lists. Given that the first element of each array is 
the smallest integer, you can build a list of smallest items. Pick the smallest out of the list of 
all smallest items. This will become the first item of the merged sorted list. You may then 
proceed to check all items in parent array. Another method of achieving this is through the 
use of Heap Sort. A Min heap can be used to store the smallest elements at any point in your 
algorithm. 



