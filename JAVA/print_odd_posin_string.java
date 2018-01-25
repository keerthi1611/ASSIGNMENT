import java.io.*;
import java.util.*;
class a{
    public static void main(String[] args)
    {
        Scanner sc=new Scanner(System.in);
        int i,count=0,j;
        StringBuffer sb=new StringBuffer(sc.nextLine());
       String s=sb.toString();
   String S;
       int l=s.length();
       char ch[]=new char[l];
       char res[]=new char[l];
       for(i=0;i<l;i++)
       {
           if(i%2!=0)
           {
               ch[i]=s.charAt(i);
               count++;
               //System.out.print(ch[i]);
           }
       }
       StringBuffer sb1= new StringBuffer();
        StringBuffer sb2=new StringBuffer();
        for(i=0;i<l;i++)
        {
        String str=new String[ch[i]];
     
            
              System.out.print(str+" ");
        }
      
 
       
        
      
       
        
}
}
