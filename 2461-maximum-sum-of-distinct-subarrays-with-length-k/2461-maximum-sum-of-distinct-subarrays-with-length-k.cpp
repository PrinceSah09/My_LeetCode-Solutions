
#define ll long long
#define umii unordered_map<int, int>

    class Solution
    {
        public:
            long long maximumSubarraySum(vector<int> &nums, int k)
            {
                ll i = 0;
                unordered_map<ll, ll> mp;
                ll sum = 0;
                while (i < k - 1)
                {
                    mp[nums[i]]++;
                    sum += nums[i];
                    i++;
                }
                ll j = 0;
                ll ans = LLONG_MIN;
                while (i < nums.size())
                {
                    mp[nums[i]]++;
                    sum += nums[i];
                    if (mp.size() == k)
                    {
                        ans = max(ans, sum);
                    }
                    sum -= nums[j];
                    if (mp[nums[j]] == 1) mp.erase(nums[j]);
                    else mp[nums[j]]--;
                    j++;
                    i++;
                }
                if (ans == LLONG_MIN) return 0;
                return ans;
            }
    };

// class Solution
// {
//     public:

//        	//[1,5,4,2,9,9,9], k = 3

//        	// => 
//     bool get(vector<int> &nums, int start ,int count){
//         while(count--){
//             if(nums[start] == nums[start+1])return false;

//             start++;
//         }
//         return true;
//     }

//     long long maximumSubarraySum(vector<int> &nums, int k)
//     {
//         long long maxi = INT_MIN; 
//         int prince = k;
//         int n = nums.size();
//         for (int i = 0; i < n - k; i++)
//         {
//             int l = i;
//             long long sum = 0;
//             int count = 0;
//             if(get(nums,i,prince)){
//               while (count != k)
//                 {
//                     sum += nums[l++];
//                     count++;
//                 }
//                  maxi = max(sum, maxi); 
//             }

//         }
//         return maxi;
//     }
// };