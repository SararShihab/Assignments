
public class GC {
    protected void finalize(){
        System.out.println("Gagbage Collected");
    }
    public static void main(String[] args){
        GC g = new GC();
        g = null;
        System.gc();
    }
}
