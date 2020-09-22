import java.io.*;
import java.util.*;
import javax.script.ScriptEngineManager;
import javax.script.ScriptEngine;
import javax.script.ScriptException;

class Constant_FOLDING
{
	public static void main(String args[])throws IOException,ScriptException 
	{
		BufferedReader br=new BufferedReader(new InputStreamReader(new FileInputStream("optimized2.txt")));     // Read Input file
		PrintWriter pw=new PrintWriter(new FileOutputStream(new File("optimized3.txt")),true);                 // Prepare Output file
		
		Vector L = new Vector();
		ArrayList<String> Exp = new ArrayList<String>(); 
		String s;
		Boolean flag=false;
		
		ScriptEngineManager mgr = new ScriptEngineManager();
    	ScriptEngine engine = mgr.getEngineByName("JavaScript");
    	
       


		while((s=br.readLine())!=null)
		{
			flag=false;
			String r=s.substring(s.indexOf("=")+1);
			String lhs = s.substring(0,s.indexOf("=")+1);		
			String rhs = " ";
		   try {
     	 rhs = rhs+String.valueOf(engine.eval(r));

    } catch (Exception e) {
      rhs = r;
    }
				
		pw.println(lhs+rhs);
					}

		





	  

      System.out.println("Done with Constant Folding"); //Print the line count
	}
}
