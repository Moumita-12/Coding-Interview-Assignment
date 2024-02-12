bool cmp(vector<int> v1, vector<int> v2){
        
        return v1[1]>v2[1];

    }
    

int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
    
    int totalUnits = 0, i = 0;
    sort(boxTypes.begin(), boxTypes.end(), cmp);
    
    while (truckSize>0 && i<boxTypes.size()){
        
        if(boxTypes[i][0] <= truckSize){
            totalUnits += boxTypes[i][0] * boxTypes[i][1];
            truckSize -= boxTypes[i][0];
        }
        
        else{
            
            int canTake = truckSize;
            truckSize -= canTake;
            totalUnits += canTake * boxTypes[i][1];
        }
        
        i++;
    }

    return totalUnits;

}

// Time : O(n)
// Space : O(1)
