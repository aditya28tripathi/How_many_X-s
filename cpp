// User function Template for C++

class Solution {
  public:
    int countX(int L, int R, int X) {
        // code here
    int cnt = 0;
        for(int i = L+1; i < R; i++)
        {
            int j = i;
            while(j)
            {
                int temp = j%10;
                if(temp == X)
                {
                    cnt++;
                }
                j = j/10;
            }
        }
        return cnt;
  
    }
};
