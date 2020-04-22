class Solution {
  public:
    vector<string> uncommonFromSentences(string A, string B) {

      unordered_map<string,int> m;
      vector<string> v;
      A+=' ';
      A += B;

      int start=0;
      int last=0;
      do{
        last=A.find(' ',start);
        string word=A.substr(start,last-start);
        ++m[word];
        start=last+1;

      }while(last != -1);

      for(const auto& e:m){
        if(e.second==1){
          v.push_back(e.first);

        }

      }
      return v;

    }

};
