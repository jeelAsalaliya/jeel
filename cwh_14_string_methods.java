public class cwh_14_string_methods {
    public static void main(String args[]) {
        String name = "Harry";
        System.out.println(name);
        int value = name.length();
        System.out.println(value);

        String lString = name.toLowerCase();
        System.out.println(lString);
        String uString = name.toUpperCase();
        System.out.println(uString);

        String nonTrimmedString = "    Harry    ";
        System.out.println(nonTrimmedString);
        String TrimmedString = nonTrimmedString.trim();
        System.out.println(TrimmedString);

        System.out.println(name.substring(1));
        System.out.println(name.substring(1, 5));
        System.out.println(name.replace('r', 'p'));
        System.out.println(name.replace("r", "ier"));
        System.out.println(name.startsWith("Har"));
        System.out.println(name.endsWith("d*"));
        System.out.println(name.charAt(4));

        String modifiedName = "Harryrryrry";
        System.out.println(modifiedName.indexOf("rry"));
        System.out.println(modifiedName.indexOf("rry", 4));
        System.out.println(modifiedName.indexOf("rry", 7));

        System.out.println(name.equals("Harry"));
        System.out.println(name.equalsIgnoreCase("HarRy"));
        System.out.println("i am \tdouble quote");
    }
}