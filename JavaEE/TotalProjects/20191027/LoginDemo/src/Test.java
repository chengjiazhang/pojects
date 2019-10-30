import java.util.Vector;

public class Test {


    public static void main(String[] args) {
        Vector v=new Vector();
        Vector line=new Vector();
        line.add(1);
        Vector line1=new Vector();
        line1.add(2);
        line1.add(3);
        Vector line2=new Vector();
        v.add(line);
        v.add(line1);
        v.add(line2);

    Vector v1= (Vector) v.get(1);
    for(int i=0;i<v1.size();i++){
        System.out.println(v1.get(i));
    }

    }
    }

