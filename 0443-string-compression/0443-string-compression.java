class Solution {
    public int compress(char[] chars) {
       

       //i to read original array
       int i =0;
       //ye compressed characters ko array me store karega
       int write =0;
       while(i<chars.length){

        // example chars:['a','a','b','b','b']
        //starting me ch='a'

        char ch=chars[i];
        //intially count =0
        int count =0;
        // same characters ko coun tkarega 
        while(i<chars.length  && chars[i]==ch){
            count++;
            //next index par move
            i++;
        }
        //ab group complete hua 
        //current character ko write position pe add karenge 

        chars[write]=ch;
        //write pointer move to next pointer
        write++;

        //agar characters ek se zydaa baar aaya hai 
        //tabhi uska count store karna hai
        if(count>1){
            //innteger count ko string me convert karna
            String s=Integer.toString(count);
            
            //count ka har digit array me store karenge
            //example :'12' ke ;iye '1' aur'2'

            for(int j=0;j<s.length();j++){

                //current digit ko array me store karenge
                chars[write]=s.charAt(j);
                write++;
            }


        }
        //ab next group ke liye repeat karoo
       }
       return write;


    }
}