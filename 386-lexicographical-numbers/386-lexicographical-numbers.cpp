class Trie {
public:
    vector<Trie*> v;
    bool isEnd;
    int data;
    Trie(){
        v=vector<Trie*>(10,nullptr);
        isEnd=false;
        data=-1;
    }
};
class Solution {
    vector<int> ans;
    void insert(Trie* node,int a){
        Trie* root=node;
        string s=to_string(a);
        for(int i=0;i<s.size();i++){
            if(root->v[s[i]-'0']==nullptr)
                root->v[s[i]-'0']=new Trie();
            root=root->v[s[i]-'0'];
        }
        root->isEnd=true;
        root->data=a;
    }
    void print(Trie* root){
        if(root->isEnd)
            ans.push_back(root->data);
        for(int i=0;i<10;i++){
            if(root->v[i]) print(root->v[i]);
        }
    }
public:
    vector<int> lexicalOrder(int n) {
        Trie* root=new Trie();
        for(int i=1;i<=n;i++){
            insert(root,i);
        }
        print(root);
        return ans;
    }
};