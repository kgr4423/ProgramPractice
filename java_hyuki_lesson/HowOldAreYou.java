import java.io.*;

public class HowOldAreYou{
  public static void main(String[] args) {
    System.out.println("���Ȃ��̖��O����͂��Ă�������");
    BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
    try{
      String line = reader.readLine();
      System.out.println(line + "����A����ɂ���");
      System.out.println("�N�����͂��Ă�������");
      line = reader.readLine();
      int age = Integer.parseInt(line);
      System.out.println("����" + age + "�΂Ƃ���ƁA10�N��ɂ�" + (age+10) + "�΂ł��˂�");
    }catch(IOException e){
      System.out.println(e);
    }catch(NumberFormatException e){
      System.out.println("�N�����������܂���");
    }
  }
}
