public class Solution {
    public string LongestCommonPrefix(string[] strs){
            string prefix = strs[0]; //prefix is equal to the first word
            if (strs.Length < 1)  //if that word is empty, return nothing since it wouldn't matter anyway
                return "";
            foreach (string str in strs){ //for each string in the array
                if (prefix.Equals(str)) { } //skip the first word because we don't care about it 
                else {
                    if (prefix.Length > str.Length) { //If the first word is longer than the one we are comparing it to, cut it down to size
                        prefix = prefix.Substring(0, str.Length);
                    }
                    if (!prefix.Equals(str)) { //If the word we are comparing prefix to is not the same, loop
                        for (int i = 0; i < prefix.Length; i++) {
                            if (!prefix[i].Equals(str[i])) { //Loop until you find a letter that is not common, and then cut prefix down to the matching letters
                                prefix = prefix.Substring(0, i);
                            }   
                        }
                    }
                }
                
            }
            return prefix; //return result
        }
}