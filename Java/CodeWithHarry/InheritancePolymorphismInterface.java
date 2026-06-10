
interface engine {
    void startEngine();

    void stopEngine();
}

interface hybridEngine extends engine {
    void enableBattery();
}

interface turboBoost extends engine {
    void enableTurbo();
}

interface advanceEngine extends hybridEngine, turboBoost {
    void showTelemetry();
}

interface team {
    void description();
}

class RedBull implements advanceEngine, team {
    public void startEngine() {
        System.out.println("Honda Engine is starting!");
    }

    public void stopEngine() {
        System.out.println("Apply braking to stop the car immedietly.");
    }

    public void enableBattery() {
        System.out.println("Use up the battery.");
    }

    public void enableTurbo() {
        System.out.println("DRS enabled, turbo mode on");
    }

    public void showTelemetry() {
        System.out.println("Speed 317Km/hr Temp is also good, Flat out, flat out!!!");
    }

    public void description() {
        System.out.println(
                "This week we have a strong car to compete with and with GP and Max, we can nail this race with great strategies");
    }
}

public class InheritancePolymorphismInterface {
    public static void main(String[] args) {

        team t;
        t = new RedBull();

        RedBull r = new RedBull();
        r.startEngine();
        r.enableBattery();
        r.enableTurbo();
        r.showTelemetry();
        t.description();
        r.stopEngine();

    }
}
