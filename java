public class RibdaVillage {
    private final String name = "Ribda";
    private final String locationType = "Highway Village";
    private final String connectivity = "NH 27 (Rajkot-Gondal Highway)";

    public void displayProfile() {
        System.out.println("Identity Profile for " + name);
        System.out.println("----------------------------");
        System.out.println("Type:         " + locationType);
        System.out.println("Connectivity: " + connectivity);
        System.out.println("Region:       Saurashtra");
    }

    public static void main(String[] args) {
        new RibdaVillage().displayProfile();
    }
}
