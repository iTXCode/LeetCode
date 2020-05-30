class Solution {
  public:
    int repeatedNTimes(vector<int>& A) {
      unordered_map<int,int> map;

      for(const auto& e:A){
        ++map[e];

      }

      for(const auto& e:map){
        if(e.second==A.size()/2){
          return e.first;

        }

      }
      return 0;

    }

};
