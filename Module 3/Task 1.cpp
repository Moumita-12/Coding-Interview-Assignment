string restoreString(string s, vector<int>& indices) {

        string shuffled_string = s;
        for(int i =0; i<indices.size() ; i++){
            shuffled_string[indices[i]] = s[i];
        }

        return shuffled_string;
        
  }

//Time complexiety = O(n)
//Space complexiety = O(1)
