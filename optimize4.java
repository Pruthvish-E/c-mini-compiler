import java.io.*;
import java.util.*;

class Dead_Code_Elimination
{
	public static void main(String args[])throws IOException
	{
		BufferedReader br=new BufferedReader(new InputStreamReader(new FileInputStream("optimized3.txt")));     // Read Input file
		BufferedReader br2=new BufferedReader(new InputStreamReader(new FileInputStream("optimized3.txt")));     // Read Input file
		
		PrintWriter pw=new PrintWriter(new FileOutputStream(new File("optimized4.txt")),true);                 // Prepare Output file
		
		
		int[] lastused_register = new int[32];
		for(int i =0;i<32;i++)
		{
			lastused_register[i] = -1;
		}		
		//Vector L = new Vector();
		ArrayList<String> Exp = new ArrayList<String>(); 
		String s;
		String temp,temp1;
		int inloop = 0;
		int inlabel = 0;
		//Boolean flag=false;
		//Vector<Vector<Integer>> list = new Vector<Vector<Integer>>(100);
		int lineno = 0;
		while((s=br.readLine())!=null)
		{		// Evaluate Right-Hand Side of Expression
			if(s.indexOf("L")!=-1 && s.indexOf("goto") == -1)
			{
				inlabel = 1;
				pw.println(s);
				//System.out.println("in");
				continue;
			}
			else if(inlabel == 1)
			{
					inlabel = 0;
					if(s.indexOf("goto")!=-1)
					{
				//		System.out.println("in");
						continue;
					}
				
			}
			if(s.indexOf("ifFalse")!=-1)
			{
				String[] loopcheck = s.split(" ");
				int valuecheck = Integer.parseInt(loopcheck[1].substring(loopcheck[1].indexOf("t")+1));
				if(lastused_register[valuecheck] == 0)
				{
					inloop = 1;
				}
				else pw.println(s);
				continue;

			}
			else if(inloop == 1)
			{
				if(s.indexOf("goto") != -1) inloop = 0;
				continue;
			}
			pw.println(s);
			String rhs = "";
			if(s.indexOf("=")!=-1)
			rhs = s.substring(s.indexOf("=")+2);
			int value = -1;
			try {
		     	 value = Integer.parseInt(rhs);
		    } catch (Exception e) {
		      value = -1;
		    }
			if(s.indexOf("return") != -1)
			{
				 continue;
			}
			lineno++;
			Exp.add(s);
			temp = s;
			if(temp.indexOf("t") != -1){
		    temp = temp.substring(temp.indexOf("t")+1);
		    temp1 = temp;
		    if(temp.indexOf(" ") != -1)
		    temp1 = temp.substring(0,temp.indexOf(" "));
		    
		    if(temp1.indexOf("o") == -1){
		    int valuetemp = Integer.parseInt(temp1);
		   // System.out.println(valuetemp);
		    //multimap.put(valuetemp,lineno);
		    //mMap.put(valuetemp, lineno);

		    lastused_register[valuetemp] = value;
		    }  

		}
			
		}

		

/////////////////////////////////////////////



	  File f1=new File("optimized3.txt"); //Creation of File Descriptor for input file
      int linecount=0;            //Intializing linecount as zero
      FileReader fr=new FileReader(f1);  //Creation of File Reader object
      BufferedReader br3 = new BufferedReader(fr);    //Creation of File Reader object
      String s1;              
      while((s1=br3.readLine())!=null)    //Reading Content from the file line by line
      {
         linecount++;               //For each line increment linecount by one 
            
      }
      fr.close();
      int before = linecount;
      
      f1=new File("optimized4.txt"); //Creation of File Descriptor for input file
       linecount=0;            //Intializing linecount as zero
      fr=new FileReader(f1);  //Creation of File Reader object
       br3 = new BufferedReader(fr);    //Creation of File Reader object
                   
      while((s1=br3.readLine())!=null)    //Reading Content from the file line by line
      {
         linecount++;               //For each line increment linecount by one 
            
      }
      fr.close();
      int after = linecount;
      


      System.out.println("Number of lines optimized after Dead_Code_Elimination:"+(before - after)); //Print the line count
	}
}
