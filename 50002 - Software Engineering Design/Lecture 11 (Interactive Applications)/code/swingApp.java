import javax.swing.*;

// For layouts
import java.awt.*;    

public class swingApp {
    private static final int HEIGHT = 400, WIDTH = 300;
    public static void main(String[] args) {
        new swingApp().display();
    }

    private void display() {
        // Code to display components goes here

        // Create a new window as a JFrame
        JFrame frame = new JFrame("window title here");
        
        // Basic window setup
        frame.setSize(WIDTH, HEIGHT);
        frame.setVisible(true);
        frame.setDefaultCloseOperation(WindowConstants.EXIT_ON_CLOSE);
        
        // Create Components
        JLabel label = new JLabel("here is the label text");
        JTextArea text = new JTextArea("This is a really large text box, it can even have scroll bars");
        
        String words[] = {"this", "word", "that", "word"};
        JList list = new JList<String>(words);

        // Create Layouts (FlowLayout is the default used by JPanels)
        FlowLayout sideBySide = new FlowLayout();

        // set the layout of the frame
        frame.setLayout(sideBySide);

        // add components (layout manages how they appear in the frame)
        frame.add(label);
        frame.add(text);
        frame.add(list);
    }
}