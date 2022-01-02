import ...

public class GUITest {

    GUIDriver driver;

    @Before
    public void runApplication() {
        new GUI();
        driver = new GUIDriver();
    }

    @After
    public void StopApplication(){
        driver.closeApp();
    }

    @Test
    public void Test...

    ...
}
