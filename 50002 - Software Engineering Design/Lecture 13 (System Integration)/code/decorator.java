public interface Service {
    void request();
}

public class BasicService implements Service {

    public void request() {
        ...
    }
}

public class Decorator implements Service {
    Service basic = new BasicService();

    public void request() {
        ...
        basic.request();
        ...
    }
}

public class Client {
    Service decor = new Decorator();

    private void doSomething() {
        ...
        decor.request()
        ...
    }
    ...
}