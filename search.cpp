#include<bits/stdc++.h>
#include "Trie.cpp"


trie* search(trie *root,string p){
			for(int i=0;i<p.size();i++){
				int req=(int)p[i];
			if(root->child[req]==NULL){ //If the letter at the node doesn't exist in the trie it returns null
				return NULL;
			}
		else
			root=root->child[req]; //Go to required node
				}
			return root;
		}

int main(){
	MyTrie trieInstance;
	
	fstream newfile;
	trie *root=new trie(); //Creates empty trie


	newfile.open("dictionary.txt",ios::in);  
	if (newfile.is_open()){ //Seeing if file is open
		string dict;
	while(getline(newfile, dict)){ //Reads data from the dictionary txt file and converts it to string. Then inputs it
		trieInstance.insert_in_trie(root, dict);
	}
	newfile.close(); //Closes file
	}
	cout<<"Please type search queries:\n";
	string userInput;
	getline(cin,userInput); //Asking for user input to search
	cout<<"Your options are:\n";
	trie *required_node=search(root,userInput);//Goes to node of input; Gives us the prefix
	
	if(required_node==NULL){
		cout<<"No options available in the dictionary for your searched query.\n"; //Output of text if that word is not in the dictionary.txt file we use for our trie
	}
	else{
	trieInstance.traverse(required_node,userInput); //Sends all words in the trie based on the text inputted previously
	}
	return 0;
}
