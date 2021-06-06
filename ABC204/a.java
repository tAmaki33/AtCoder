import java.util.*;

class Main
{
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);

    int x = Integer.parseInt(sc.next());
    int y = Integer.parseInt(sc.next());

    
    if(x == y) {
      System.out.println(x);
    } else {
      int res;
      if(x==0 && y==1) {
        res = 2;
      } else if(x==0 && y==2) {
        res = 1;
      } else if(x==1 && y==0) {
        res = 2;
      } else if(x==1 && y==2) {
        res = 0;
      } else if(x==1 && y==0) {
        res = 2;
      } else if(x==2 && y==0) {
        res = 1;
      } else {
        res = 0;
      }
      System.out.println(res);
    }
  }
}