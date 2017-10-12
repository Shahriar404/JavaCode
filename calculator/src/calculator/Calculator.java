package calculator;

import java.util.Scanner;

public class Calculator {

	private static Scanner S;

	public static void main(String[] args) {
		S = new Scanner(System.in);
		Calc C=new Calc();
		double a,b;
		double result=0;
		char op;
		boolean t=true;
		while(true)
		{
			t=true;
			System.out.println("Operation type: ");
			op=S.next().charAt(0);
			System.out.println("Enter two numbers: ");
			a=S.nextDouble();
			b=S.nextDouble();
			switch(op)
			{
			case '+':result=C.add(a,b);
			         break;
			case '-':result=C.sub(a, b);
			         break;
			case '*':result=C.mul(a, b);
			         break;
			case '/':result=C.div(a, b);
			         break;
			case '^':result=C.pow(a, b);
			         break;
			default :t=false;
			}
			if(t)
				System.out.println("Result: "+result+"\n");
			else 
				System.out.println("Unvalid Operator Type.");
		}

	}

}
