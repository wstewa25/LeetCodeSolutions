//997. Find the Town Judge Java Solutions
//https://leetcode.com/problems/find-the-town-judge/

//Counter solution
class Solution {
    public int findJudge(int n, int[][] trust) {
        int trustedBy;
        int trusts;
        for (int i = 1; i <= n; i++) { //loop through each person
            trustedBy = 0;
            trusts = 0;
            for (int j = 0; j < trust.length; j++) { //find out how many people trust them, and how many people they trust
                if (trust[j][0] == i) {
                    trusts +=1;
                }
                if (trust[j][1] == i) {
                    trustedBy+=1;
                }
            }
            if (trustedBy == n-1 && trusts == 0) { //if their stats match the judge, return them because they are the judge
                return i;
            }
        }
        return -1; //return -1 if the judge was not found.
    }
}


//Elimination Solution
class Solution2 {
    public int findJudge(int n, int[][] trust) {
        int arr[] = new int[n + 1]; // Create an array the size of the number of citizens + 1
        for(int i = 0; i < trust.length; i++){  // EX: 0 0 0 0 0 
            arr[trust[i][0]]--; //Go through each citizen, if they trust anyone decrement their index by 1
            arr[trust[i][1]]++; //Go through each citizen, if they are trusted by someone else increment their index by 1
        } //EX: 0 2 3 4 1
        for(int i = 1; i < arr.length; i++){ //Loop through the array we created and manipulated
            if(arr[i] == n - 1) return i; //if any of the indexes equal the number of citizens (excluding the judge) they are the judge, return them
        }
        return -1;//If the judge was not found, return -1
    }
}