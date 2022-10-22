//Trie cpp
#include<bits/stdc++.h>

using namespace std;

struct trie{
		vector<trie *>child;
		bool isleaf;

	trie(){
		child.assign(256,NULL);
		isleaf=false;
	}

};

class MyTrie{
	private:
		trie tree;
	public:
		void insert_in_trie(trie *root,string x){
		for(int i=0;i<x.size();i++){
			int req=(int)x[i];
			if(root->child[req]==NULL){ //Checking if letter is there or not. If not, creates node
			root->child[req]=new trie();
			}
			root=root->child[req]; //Moves required node
			}
		root->isleaf=true; //Traversing whole word gives last node (end of the word). Sets iseleaf true
		}
	
		void traverse(trie *root,string p){
			if(root->isleaf==true){ //If node is at end of word, output
				cout<<p<<"\n";
			}
			for(int i=0;i<256;i++){
				if(root->child[i]!=NULL){ //Sees if letter exists
					p.push_back((char)i); //Push letter in string
					traverse(root->child[i],p); //Go to required node
					p.pop_back(); //Implements backtrack to see other options
					}
				}	
			}
};
