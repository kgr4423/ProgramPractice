import java.io.*;

public class OldAverage{
  public static void main(String[] args) {
    System.out.println("���ꂩ�̖��O����͂��Ă��������F");
    BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
    try{
      String name1 = reader.readLine();
      System.out.println("����ł�" + name1 + "����̔N�����͂��Ă��������F");
      String line = reader.readLine();
      int age1 = Integer.parseInt(line);
      System.out.println("�ʂ̂��ꂩ�̖��O����͂��Ă��������F");
      String name2 = reader.readLine();
      System.out.println("����ł�" + name2 + "����̔N�����͂��Ă��������F");
      line = reader.readLine();
      int age2 = Integer.parseInt(line);
      System.out.println(name1 + "�����" + name2 + "����̔N��̕��ς�" + (age1+age2)/2.0 + "�΂ł�");
    }catch(IOException e){
      System.out.println(e);
    }catch(NumberFormatException e){
      System.out.println("�N�����������܂���");
    }
  }
}
