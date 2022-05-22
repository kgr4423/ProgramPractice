import java.io.*;

public class OldAverage{
  public static void main(String[] args) {
    System.out.println("だれかの名前を入力してください：");
    BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
    try{
      String name1 = reader.readLine();
      System.out.println("それでは" + name1 + "さんの年齢を入力してください：");
      String line = reader.readLine();
      int age1 = Integer.parseInt(line);
      System.out.println("別のだれかの名前を入力してください：");
      String name2 = reader.readLine();
      System.out.println("それでは" + name2 + "さんの年齢を入力してください：");
      line = reader.readLine();
      int age2 = Integer.parseInt(line);
      System.out.println(name1 + "さんと" + name2 + "さんの年齢の平均は" + (age1+age2)/2.0 + "歳です");
    }catch(IOException e){
      System.out.println(e);
    }catch(NumberFormatException e){
      System.out.println("年齢が正しくありません");
    }
  }
}
