class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {

        sort(tokens.begin(), tokens.end());

        int left = 0;
        int right = tokens.size() - 1;

        int score = 0;
        int maxscore = 0;

        while(left <= right){

            if(power >= tokens[left]){
                power -= tokens[left];
                score++;
                left++;
                maxscore = max(maxscore, score);
            }

            else if(score > 0){
                power += tokens[right];
                score--;
                right--;
            }

            else{
                break;
            }
        }

        return maxscore;
    }
};