# CSE503-Project1
C++ Project to create an autocomplete search.

Assignment Description:

Dictionary.txt is provided to you to construct the Trie. Each line contains a valid search query. Your task
is to insert these queries into your Trie. Implement trie classes for part 1.

Following the creation of the Trie classes, we need to create a program titled search.cpp that takes the
classes and allows users to input a search and output suggestions. 

It should be similar output to:
$> Please type search queries:
$> binary sea
$> Your options are:
$> binary search
$> binary search tree
$> binary search tree java

//Part 3 is not included in the project. Couldn't figure out the recommendation search aspect.
Part 3 is to implement a recommendation search. 
When you search a term that is not in the Trie,
recommend the top 3 most similar entries in the Trie:
$> Please type search queries:
$> cakr
$> Do you mean:
$> cake
$> cat
$> crack
