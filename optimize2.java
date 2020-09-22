import java.io.*;
import java.util.*;

class Symbol_Table_Cleanup
{
	public static void main(String args[])throws IOException
	{
		BufferedReader br=new BufferedReader(new InputStreamReader(new FileInputStream("optimized1.txt")));     // Read Input file
		BufferedReader br2=new BufferedReader(new InputStreamReader(new FileInputStream("optimized1.txt")));     // Read Input file
		
		PrintWriter pw=new PrintWriter(new FileOutputStream(new File("optimized2.txt")),true);                 // Prepare Output file
		
		
		int[] lastused_register = new int[32];
		for(int i =0;i<32;i++)
		{
			lastused_register[i] = 0;
		}		
		//Vector L = new Vector();
		ArrayList<String> Exp = new ArrayList<String>(); 
		String s;
		String temp,temp1;
		
		//Boolean flag=false;
		//Vector<Vector<Integer>> list = new Vector<Vector<Integer>>(100);
		int lineno = 0;
		while((s=br.readLine())!=null)
		{		// Evaluate Right-Hand Side of Expression
			if(s.indexOf("return") != -1)
			{
				s = s.substring(s.indexOf("t")+1);
				String[] expression = s.split(" ");
				String v = expression[1].substring(expression[1].indexOf("t")+1);
				int valuetemp = Integer.parseInt(v);
		        lastused_register[valuetemp]++;	
				continue;
			}
			lineno++;
			Exp.add(s);
			temp = s;
			while(temp.indexOf("t") != -1){
		    temp = temp.substring(temp.indexOf("t")+1);
		    temp1 = temp;
		    if(temp.indexOf(" ") != -1)
		    temp1 = temp.substring(0,temp.indexOf(" "));
		    
		    if(temp1.indexOf("o") == -1){
		    int valuetemp = Integer.parseInt(temp1);
		   // System.out.println(valuetemp);
		    //multimap.put(valuetemp,lineno);
		    //mMap.put(valuetemp, lineno);
		    lastused_register[valuetemp]++;
		    }  

		}
			
		}

		int lineno2 = 0;
		while((s=br2.readLine())!=null)
		{		// Evaluate Right-Hand Side of Expression
			//lineno2++;

			//Exp.add(s);
			temp = s;
			String before ;
			if(temp.indexOf("t") == -1 || temp.indexOf("return")!=-1 )
			{
				pw.println(s);
			}
			else{
			if(temp.indexOf("t") != -1){
				//before = temp.substring(0,temp.indexOf("t")+1);  	
			    //pw.print(before);
			    temp = temp.substring(temp.indexOf("t")+1);
			    temp1 = temp;
			    if(temp.indexOf(" ") != -1){
			    temp1 = temp.substring(0,temp.indexOf(" "));
			    temp = temp.substring(temp.indexOf(" "));}
			    else
			    {
			    	temp = "";
			    }
			    if(temp1.indexOf("o") == -1){
			    int valuetemp = Integer.parseInt(temp1);
			    
			   // System.out.println(valuetemp);
			    //multimap.put(valuetemp,lineno);
			    //mMap.put(valuetemp, lineno);
			    if(lastused_register[valuetemp]>1)
			    {
						pw.println(s);		    	
			    }
			    }
			    else
			    {
			    	pw.println(s);
			    }  

		}
		 //endwhile2
	}
		}

/////////////////////////////////////////////



	  File f1=new File("optimized1.txt"); //Creation of File Descriptor for input file
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
      
      f1=new File("optimized2.txt"); //Creation of File Descriptor for input file
       linecount=0;            //Intializing linecount as zero
      fr=new FileReader(f1);  //Creation of File Reader object
       br3 = new BufferedReader(fr);    //Creation of File Reader object
                   
      while((s1=br3.readLine())!=null)    //Reading Content from the file line by line
      {
         linecount++;               //For each line increment linecount by one 
            
      }
      fr.close();
      int after = linecount;
      


      System.out.println("Number of lines optimized after Symbol_Table_Cleanup:"+(before - after)); //Print the line count
	}
}
