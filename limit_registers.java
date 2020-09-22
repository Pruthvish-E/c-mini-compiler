import java.io.*;
import java.util.*;
// import org.apache.commons.collections.map.MultiValueMap;
// import org.apache.commons.collections.MultiMap;

class Limit_Registers
{
	public static void main(String args[])throws IOException
	{
		BufferedReader br=new BufferedReader(new InputStreamReader(new FileInputStream("icg.txt")));
		BufferedReader br2=new BufferedReader(new InputStreamReader(new FileInputStream("icg.txt")));     // Read Input file
		PrintWriter pw=new PrintWriter(new FileOutputStream(new File("limit_registers.txt")),true);       

		          // Prepare Output file
		//MultiMap mMap = new MultiValueMap();

		//int [100] = {0};
		int[] lastused_register = new int[100];
		for(int i =0;i<100;i++)
		{
			lastused_register[i] = -1;
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
		    lastused_register[valuetemp] = lineno;
		    }  

		}
			
		}

		int lineno2 = 0;
		while((s=br2.readLine())!=null)
		{		// Evaluate Right-Hand Side of Expression
			lineno2++;

			//Exp.add(s);
			temp = s;
			String before ;
			if(temp.indexOf("t") == -1 || temp.indexOf("return")!=-1 )
			{
				pw.println(s);
			}
			else{
			while(temp.indexOf("t") != -1){
				before = temp.substring(0,temp.indexOf("t")+1);  	
			    pw.print(before);
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
			    if(valuetemp>31)
			    {
						for(int i =0;i<32;i++)
						{ 
							
							if(lastused_register[i]<lineno2 || lastused_register[i] == -1)
							{
								pw.print(Integer.toString(i));
								lastused_register[i] = lineno2;
								break;
							}
						}		    	
			    }
			    else
			    {
			    	pw.print(Integer.toString(valuetemp));

			    }


			    }
			    else
			    {
			    	pw.print("o");
			    }  

		}
		pw.print(temp);
		pw.println();
		 //endwhile2
	}
		}


		// for(int i =0;i<32;i++)
		// { 
		// 	System.out.print(i);
		// 	System.out.print(" : ");
		// 	System.out.println(lastused_register[i]);
		// }

		System.out.println("Done Removing redundant registers");

		}





	}

