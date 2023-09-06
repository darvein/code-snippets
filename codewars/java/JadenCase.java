public class JadenCase {

  public String toJadenCase(String phrase) {
    if (phrase == "" || phrase == null)
      return null; 

    String newPhrase = "";
    String[] splited = phrase.split("\\s+");
    for (int i=0; i < splited.length; i++)
      newPhrase += splited[i].substring(0, 1).toUpperCase() 
        + splited[i].substring(1)
        + " ";

    // i dont like this line
    newPhrase = newPhrase.substring(0, newPhrase.length()-1);
    return newPhrase;
  }
}

class Main {
  public static void main(String[] args) {
    //String in = "How can mirrors be real if our eyes aren't real";
    String in = "Most Trees Are Blue";
    JadenCase j = new JadenCase();
    System.out.println(j.toJadenCase(in));
  }
}
