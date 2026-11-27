class Solution {
    public int compress(char[] chars) {
        int i=0;
        int write=0;
        while(i<chars.length){
            char ch=chars[i];
            int count =0;


        
        while(i<chars.length && ch==chars[i]){
            count++;
            i++;
        }
        chars[write]=ch;
        write++;
        if(count>1){
            String s=Integer.toString(count);
            for(int j=0;j<s.length();j++){
                chars [write]=s.charAt(j);
                write++;

            }
        }
        }
        return write;

    }
}