import javax.swing.*;

// For layouts
import java.awt.*;
import java.awt.event.ActionListener;    
import java.awt.event.ActionEvent;    

public class buttonSwing {
    private static final int HEIGHT = 400, WIDTH = 300;

    public static void main(String[] args) {
        new buttonSwing().display();
    }

    private void display() {
        // Code to display components goes here

        // Create a new window as a JFrame
        JFrame frame = new JFrame("window title here");

        // add button
        JTextField text = new JTextField("Text field");
        
        JButton add = new JButton("Clear");

        add.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                text.setText("");
            }
        });

        // Create Layouts (FlowLayout is the default used by JPanels)
        BorderLayout layout = new BorderLayout();

        // set the layout of the frame
        frame.setLayout(layout);

        frame.add(text, BorderLayout.CENTER);
        frame.add(add, BorderLayout.PAGE_END);

        // Basic window setup
        frame.setSize(WIDTH, HEIGHT);
        frame.setVisible(true);
        frame.setDefaultCloseOperation(WindowConstants.EXIT_ON_CLOSE);
    }
}
