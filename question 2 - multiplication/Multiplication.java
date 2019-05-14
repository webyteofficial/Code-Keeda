class MonkMultiplication
 {
    public static void main(String[] args)
    {
    	Scanner sc=new Scanner(System.in);
        String num1 = sc.nextLine();
        String tempnum1 = num1;
        String num2 = sc.nextLine();
        String tempnum2 = num2;
        if(num1.charAt(0) == '-' && num2.charAt(0)!='-')
        {
            num1 = num1.substring(0);
        }
        else if(num1.charAt(0) != '-' && num2.charAt(0) == '-')
        {
            num2 = num2.substring(0);
        }
        else if(num1.charAt(0) == '-' && num2.charAt(0) == '-')
        {
            num1 = num1.substring(0);
            num2 = num2.substring(0);
        }
        String s1 = new StringBuffer(num1).reverse();
        String s2 = new StringBuffer(num2).reverse();

        int[] m = new int[s1.length()+s2.length()];
        for (int i = 0; i < s1.length(); i++)
        {
            for (int j = 0; j < s2.length(); j++)
            {


            }
        }
        String product = new String();
        for (int i = 0; i < m.length; i++)
        {
            int digit = m[i]%100;
            int carry = m[i]/100;
            if(i+1<m.length)
            {
                m[i+1] = m[i+1] + carry;
            }


        }
        while(product.length()>1 && product.charAt(0) == '0')
        {
            product = product.substring(1);
        }
        if(tempnum1.charAt(0) == '-' && tempnum2.charAt(0)!='-')
        {
            product = new StringBuffer(product).insert(0,'-').toString();
        }
        else if(tempnum1.charAt(0) != '-' && tempnum2.charAt(0) == '-')
        {
            product = new StringBuffer(product).insert(0,'-').toString();
        }
        else if(tempnum1.charAt(0) == '-' && tempnum2.charAt(0) == '-')
        {
            product = product;
        }
        System.out.println("Product of the two numbers is :"+"\n"+product);
    }
}
