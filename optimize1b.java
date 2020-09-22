import java.io.*;
import java.util.*;

class Common_SubExpression
{
	public static void main(String args[])throws IOException
	{
		BufferedReader br=new BufferedReader(new InputStreamReader(new FileInputStream("icg.txt")));     // Read Input file
		PrintWriter pw=new PrintWriter(new FileOutputStream(new File("optimized1.txt")),true);                 // Prepare Output file
		
		Vector L = new Vector();
		
		String s;
		Boolean flag=false;
	
		while((s=br.readLine())!=null)
		{
			flag=false;
			String r=s.substring(s.indexOf("=")+1);		// Evaluate Right-Hand Side of Expression
			
			for(int i=0;i < L.size();i++)
			{
				if((L.elementAt(i)).equals(r))	
					flag=true; 		// If Expression already present in Vector do nothing 
					
			}
			
			if(!flag)
			{
				L.addElement(r);	// If Expression not present in Vector, Add it inside Vector and Print it to output file
				pw.println(s);
			}
		}
	   File f1=new File("icg.txt"); //Creation of File Descriptor for input file
      int linecount=0;            //Intializing linecount as zero
      FileReader fr=new FileReader(f1);  //Creation of File Reader object
      BufferedReader br2 = new BufferedReader(fr);    //Creation of File Reader object
      String s1;              
      while((s1=br2.readLine())!=null)    //Reading Content from the file line by line
      {
         linecount++;               //For each line increment linecount by one 
            
      }
      fr.close();
      int before = linecount;
      
      f1=new File("optimized1.txt"); //Creation of File Descriptor for input file
       linecount=0;            //Intializing linecount as zero
      fr=new FileReader(f1);  //Creation of File Reader object
       br2 = new BufferedReader(fr);    //Creation of File Reader object
                   
      while((s1=br2.readLine())!=null)    //Reading Content from the file line by line
      {
         linecount++;               //For each line increment linecount by one 
            
      }
      fr.close();
      int after = linecount;
      


      System.out.println("Number of lines optimized after Common_SubExpression_Elimination:"+(before - after)); //Print the line count
	}
}
