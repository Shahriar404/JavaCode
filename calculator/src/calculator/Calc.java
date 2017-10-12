package calculator;

public class Calc {
	public double add(double x,double y)
    {
  	  	return x+y;
    }
    public double sub(double x, double y)
    {
  	  	return x-y;
    }
    public double mul(double x,double y)
    {
  	  	return x*y;
    }
    public double div(double x,double y)
    {
  	  	return x/y;
    }
    public double pow(double x,double y)
    {
    	double k;
    	k=x;
  	  	for(int i=0;i<y-1;i++)
  	  		x*=k;
  	  	return x;
    }
}
