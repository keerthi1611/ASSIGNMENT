import java.io.*;
import java.lang.*;
import java.util.*;
public class string_count {
	public static void main(String[] args)
	{
		Scanner sc =new Scanner(System.in);
		int i,j;

		String S="";
		S+=sc.nextLine();
		
		String a[]=S.split(" ");
		char ch[]=new char[40];
		String r[]=new String[50];
		for(i=0;i<a.length;i++)
		{
		    
		int l=a[i].length();
			for(j=l-1;j>=0;j--)
			{
			    ch[i]=a[i].charAt(j);
			   
				
				System.out.print(ch[i]);
			}
				System.out.print(" ");
		}
		
	}
	}
