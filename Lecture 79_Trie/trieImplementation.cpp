#include <bits/stdc++.h>
using namespace std;

class TrieNode
{
public:
    char data;
    TrieNode *children[26];
    bool isTerminalNode;

    TrieNode(char data)
    {
        this->data = data;

        for (int i = 0; i < 26; i++)
        {
            children[i] = NULL;
        }

        isTerminalNode = false;
    }
};

class Trie
{
public:
    TrieNode *root;

    Trie()
    {
        root = new TrieNode('\0');
    }

    void insertUtil(TrieNode *root, string word)
    {
        // base condition
        if (word.length() == 0)
        {
            root->isTerminalNode = true;
            return;
        }

        int index = word[0] - 'A';
        TrieNode *child;

        // either present
        if (root->children[index] != NULL)
        {
            child = root->children[index];
        }
        else
        {
            // character is absent
            child = new TrieNode(word[0]);
            root->children[index] = child;
        }

        // Recursion will solve remaing
        insertUtil(child, word.substr(1));
    }

    void insertWord(string word)
    {
        insertUtil(root, word);
    }

    // Search a word in Trie;

    bool searchUtil(TrieNode *root, string word)
    {
        // Base condition
        if (word.length() == 0)
        {
            return root->isTerminalNode;
        }

        int index = word[0] - 'A';
        TrieNode *child;

        // present
        if (root->children[index] != NULL)
        {
            child = root->children[index];
        }
        else
        {
            return false;
        }

        return searchUtil(child, word.substr(1));
    }

    bool searchWord(string word)
    {
        return searchUtil(root, word);
    }

    // Remove from trie;

    void removeUtil(TrieNode* root, string word){
        if(word.length() == 0){
            root->isTerminalNode = false;
            return;
        }

        int index = word[0] - 'A';
        TrieNode *child;

        if(root -> children[index] != NULL){
            child = root->children[index];
        }
        else{
            return;
        }

        removeUtil(child, word.substr(1));
    }

    void removeWord(string word){
        if(!searchWord(word)){
            cout << "Can't Remove.. Element Not Present\n";
        }

        removeUtil(root, word);
    }
};

int main()
{
    Trie *t = new Trie();

    // t->insertWord("abcd");
    t->insertWord("PRATHAM");
    t->insertWord("MANDY");
    t->insertWord("KARTYA");

    cout << "Word Attendance:- " << t->searchWord("KARTYA") << endl;

    t->removeWord("KARTYA");
    cout << "Word Remove \n";

    cout << "Word Attendance:- " << t->searchWord("KARTYA") << endl;

    return 0;
}