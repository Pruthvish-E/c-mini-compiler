import java.io.*;
import java.util.*;

class Assembly_Code
{
	public static void main(String args[])throws IOException
	{
		BufferedReader br=new BufferedReader(new InputStreamReader(new FileInputStream("optimized4.txt")));     // Read Input file
		PrintWriter pw=new PrintWriter(new FileOutputStream(new File("assembly.txt")),true);                 // Prepare Output file
		
		//Vector L = new Vector();
		 ArrayList<String> Exp = new ArrayList<String>(); 
		String s;
		//Boolean flag=false;
	
		while((s=br.readLine())!=null)
		{		// Evaluate Right-Hand Side of Expression
			
			Exp.add(s);
			
		}

		//String t = Exp.get(0);
		//System.out.println("See: "+t.substring(0)); //Print the line count		
		// for (int i = 0;i<Exp.size() ;i++ ) {
		// 	if(Exp.get(i).indexOf("=")==-1){pw.println(Exp.get(i)); continue;};
		// 	if(Exp.get(i).charAt(0)!='t') {pw.println(Exp.get(i)); continue;};
		// 	String lhs = Exp.get(i).substring(0,Exp.get(i).indexOf("="));

		// 	String rhs;
		// 	Boolean c = false;
		// 	for(int j = i+1;j<Exp.size();j++)
		// 	{
		// 		rhs = Exp.get(j).substring(Exp.get(j).indexOf("=")+1);
		// 		if(rhs.indexOf(lhs) != -1)
		// 		{
		// 			c = true;
		// 			break;
		// 		}
		// 	}
		// 	if(c)
		// 	{
		// 		pw.println(Exp.get(i));
		// 	}

		// }
		int sp_count = 0;
		ArrayList<String> variables = new ArrayList<String>(); 

		for(int i =0;i<Exp.size();i++)
		{
			String c = Exp.get(i);
			if(c.indexOf("ifFalse") == -1)
			{
				if(c.indexOf("goto") != -1)
				{
					String[] branch = c.split(" ");
					pw.print("b ");
					pw.print(branch[1]);
					pw.println("");


				}
				else if(c.indexOf("param") !=-1)
				{
					String[] para = c.split(" ");
					pw.print("sw ");
					pw.print(para[1]);
					pw.print(" , sp(");
					pw.print(sp_count++);
					pw.println(")");
					variables.add(para[1]);
				}
				else if(c.indexOf("call")!=-1)
				{
					pw.println("sw pc , fp");
					pw.print("call ");
					pw.print(c.substring(c.indexOf("(")+1,c.indexOf(",")));
					pw.print(" ");
					pw.println(c.substring(c.indexOf(","),c.indexOf(")")));
					sp_count = sp_count-Integer.parseInt(c.substring(c.indexOf(", ")+2,c.indexOf(")")));
						
				}
				else if(c.indexOf("=") !=-1)
				{
					String[] expression = c.split(" ");
					if(expression.length==3)
					{
						variables.add(expression[0]);
						pw.print("sw ");
						pw.print(expression[0]);
						pw.print(" , ");
						if(expression[2].indexOf('t') == -1) {pw.print("");pw.println(expression[2]);}
						else
						{
							pw.print("R");
							pw.println(expression[2].substring(expression[2].indexOf('t')+1));
						}
						
					}
					else
					{
						String r = "R";
						variables.add("temp");
						String a = r.concat(expression[0].substring(expression[0].indexOf('t')+1));
						String arg1 = expression[2];
						String opr = expression[3];
						String arg2 = expression[4];
						
						if(arg1.indexOf('t') != -1)
						{
							arg1 = r.concat(arg1.substring(arg1.indexOf('t')+1));
							
						}
						if(arg2.indexOf('t') != -1)
						{
							arg2 = r.concat(arg2.substring(arg2.indexOf('t')+1));
							
						}


						if(opr.indexOf(">") !=-1)
						{
							pw.print("gt temp , ");
							pw.print(arg1);
							pw.print(" , ");
							pw.println(arg2);
							pw.print("lw temp , ");
							pw.println(a);

						}
						if(opr.indexOf("<") !=-1)
						{
							pw.print("lt temp , ");
							pw.print(arg1);
							pw.print(" , ");
							pw.println(arg2);
							pw.print("lw temp , ");
							pw.println(a);

						}
						if(opr.indexOf("+") !=-1)
						{
							pw.print("add temp , ");
							pw.print(arg1);
							pw.print(" , ");
							pw.println(arg2);
							pw.print("lw temp , ");
							pw.println(a);

						}
						if(opr.indexOf("-") !=-1)
						{
							pw.print("sub temp , ");
							pw.print(arg1);
							pw.print(" , ");
							pw.println(arg2);
							pw.print("lw temp , ");
							pw.println(a);

						}
						if(opr.indexOf("*") !=-1)
						{
							pw.print("mul temp , ");
							pw.print(arg1);
							pw.print(" , ");
							pw.println(arg2);
							pw.print("lw temp , ");
							pw.println(a);

						}
						if(opr.indexOf("/") !=-1)
						{
							pw.print("div temp , ");
							pw.print(arg1);
							pw.print(" , ");
							pw.println(arg2);
							pw.print("lw temp , ");
							pw.println(a);

						}
						

					}


				}
				else if(c.indexOf("return") !=-1)
				{
					String[] expression = c.split(" ");
					pw.print("sw R");
					//if(expression.indexOf("t")!=-1)
					pw.print(expression[1].substring(expression[1].indexOf("t")+1));
					pw.print(" , ");
					pw.println("fr");
					pw.println("lw fp , pc");
				}
				else
				{
					pw.println(c);
				}

						
			}
			else
			{
				String[] loops = c.split(" ");
				pw.print("beq ");
				pw.print("R");
				pw.print(loops[1].substring(1));
				pw.print(", 0 , ");
				pw.print(loops[3]);
				pw.println("");
			}
				}

			pw.print("\n\n.WORD ");	
			ArrayList<String> variables2 = new ArrayList<String>(); 
			boolean check = false;
			for(int i = 0;i<variables.size();i++)
			{
				check = false;
				for (int j = 0;j<variables2.size();j++ ) {
					if(variables.get(i).equals(variables2.get(j))== true)
					{
						check = true;
						break;
					}
				}
				if(!check){
				pw.print(variables.get(i));
				variables2.add(variables.get(i));
				if(i+1<variables.size())
				pw.print(" , ");}
			}
			pw.println("");

		System.out.println("Done with assembly code generation");	

		}






	}

