import java.io.*;
import java.util.*;

class optimize_new
{
	public static void main(String args[])throws IOException
	{
		BufferedReader br=new BufferedReader(new InputStreamReader(new FileInputStream("limit_registers.txt")));     // Read Input file
		PrintWriter pw=new PrintWriter(new FileOutputStream(new File("optimized1.txt")),true);                 // Prepare Output file

		Vector<String> L = new Vector();
    int opt  = 0;
		String s;
		Boolean flag=false;
		int linecount=0;            //Intializing linecount as zero
		Map<String, Integer> upTable = new Hashtable();
        Map<String, String> d = new Hashtable();
        Map<String, Integer> d1 = new Hashtable();
		while((s=br.readLine())!=null)
		{
			linecount++;
			flag=false;
			String r=s.substring(s.indexOf("=")+1);		// Evaluate Right-Hand Side of Expression
			String tokens[] = s.split(" ");
			if(s.indexOf("=") != -1) {
                    upTable.put(tokens[0],linecount);
                    if(d.get(r)!=null && upTable.get(d.get(r))<=d1.get(r)){
                        String vars[] = r.split(" ");
                        flag = true;
                        for(String s1 : vars){
                            if(s1.matches("[a-zA-Z][a-zA-Z0-9_]*") && upTable.get(s1)>d1.get(r)){
                                flag = false;
                            }
                        }
                        if(flag) {pw.println(tokens[0]+" = "+d.get(r));opt++;}
                    }
                    if(s.indexOf("=") != -1) {
                        d.put(r, tokens[0]);
                        d1.put(r, linecount);
                    }
			}
            if(!flag)
            {
                pw.println(s);
            }
        }
	   File f1=new File("limit_registers.txt"); //Creation of File Descriptor for input file
    	linecount=0;            //Intializing linecount as zero
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



      
    System.out.println("Number of lines optimized after Common_SubExpression_Elimination:"+opt); //Print the line count
	   
  }
}
