import ...

public class GUIDriver {
    ...

    // Helper function to click the button named "cool"
    public void clickCoolButton() {
        button("cool").click();
    }

    ...

    // Helper function to get buttons with a given name attached.
    //
    // In the creation of JComponents we should use .setName(name) to allow us 
    // to identify them this way.
    /unchecked/
        private JButtonDriver(String name) {
        return new JButtonDriver(this, JButton.class, ComponentDriver.named(name));
    }
}