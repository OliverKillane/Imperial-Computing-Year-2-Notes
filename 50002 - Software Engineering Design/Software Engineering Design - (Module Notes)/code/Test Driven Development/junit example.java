package testingPackage;

import org.junit.Test;

public class SomeObjectNameTests {

    // Code to run before each test:
    private final someTestObject = new someTestObject();

    ...

    @Test
    public void allowsBehaviourToRunCorrectly() {
        ...

        // Check result using 
        assertThat(someResult, is(5));
    }

    ...
}