public interface Service {
    void request();
}

public class Adaptee {

    public void performAction() {
        ...
    }
}

public class Adapter implements Service {
    Adaptee adaptee = new Adaptee();

    public void request() {
        adaptee.performAction();
    }
}

public class Client {
    Service adapter = new Adapter();

    private void doSomething() {
        ...
        adapter.request()
        ...
    }
    ...
}