//  kth largest element in the array
//-----------------------------------------------------------------------------------------------------------------
//  This is the solved code using Quicksort algorithm which has time complexiety of O(nlog n) and minimum space complexiety like O(log n)
// I have used it beacause it  performs better than sorting the entire array making partition by pivot . So I think this sorting algorithm is best fit for this problem among other sorting algorithm.

 int partition(vector<int>& nums, int low, int high) {
    
    int pivot = nums[high];
    int i = (low - 1);

    for (int j = low; j < high; j++) {
        if (nums[j] <= pivot) {

        i++;
        swap(nums[i], nums[j]);
        }
    }
    
    swap(nums[i + 1], nums[high]);
    return (i + 1);
  }

    int quickSort(vector<int>& nums,int k, int low, int high) {

        int point = nums.size()-k;

        int pi = partition(nums, low, high);

        if(pi == point){
            return nums[point];
        }

        else if(pi > point){
            return quickSort(nums, k, low, pi - 1);
        } 
        else{
            return quickSort(nums, k, pi + 1, high);
        }
    }
    

    int findKthLargest(vector<int>& nums, int k) {

              int left = 0;
              int right =nums.size()-1;
              return quickSort(nums, k, left, right);
      }



