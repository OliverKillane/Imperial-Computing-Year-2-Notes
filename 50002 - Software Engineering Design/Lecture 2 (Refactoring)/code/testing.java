import org.junit.Test;

public class ObjectNameTest {

    // Code here is re-run before each test.
    private final Object somobject = new Object();

    @Test
    public void LongSentenceDescribingTest() {

        // Test Contents

        // Asserts
        assertEquals(expected, actual);
        assertTrue(expression);
        assertNull(expression);
        fail("Just fail the test");

        // AssertThat recommended where possible
        assertThat(a, is(b));
    }

    ...
}