 int strStr(string h, string n) {

         if(h.size()<n.size()){
            return -1;
        }

    for(int i=0,j=0;i<h.size()-n.size()+1;i++){
           
         if(h[i] == n[j]){
              int i1=i;
              int j=0;
              
              while(j<n.size() && h[i1]==n[j]){
          
                  i1++;
                  j++;

            }

        if(j == n.size()){
            return i;    
        }
    }
    
    }
           return -1;
       
    }
