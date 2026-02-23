public class OOPSBannerUC4 {
    public static void main(String[] args) {
        // Full stylized letters for OOPS
        String[] O = {
            "  *****  ",
            " *     * ",
            " *     * ",
            " *     * ",
            "  *****  "
        };
        
        String[] P = {
            " *****  ",
            " *    * ",
            " *****  ",
            " *      ",
            " *      "
        };
        
        String[] S = {
            " ***** ",
            " *     ",
            " ***** ",
            "     * ",
            " ***** "
        };
        
        // Combine letters for "OOPS"
        String[][] banner = {O, O, P, S};
        
        // Loop to print each line of the banner
        for (int i = 0; i < 5; i++) { // max height of letters
            for (int j = 0; j < banner.length; j++) {
                System.out.print(banner[j][i] + "  ");
            }
            System.out.println();
        }
    }
}