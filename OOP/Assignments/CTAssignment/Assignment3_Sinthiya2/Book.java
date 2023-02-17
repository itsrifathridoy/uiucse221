package CTAssignment.Assignment3_Sinthiya2;

import javax.swing.*;
import javax.swing.table.DefaultTableModel;
import java.io.File;
import java.io.FileWriter;
import java.io.IOException;
import java.io.PrintWriter;
import java.util.Scanner;

public class Book {
    public static void main(String[] args) throws Exception {

        JFrame fr = new JFrame();
        JTable table = new JTable();
        JLabel bookID =new JLabel("Book ID");
        bookID.setBounds(20,50,100,50);
        JLabel author =new JLabel("Author");
        author.setBounds(20,100,100,50);
        JLabel publisher =new JLabel("Publisher");
        publisher.setBounds(20,150,100,50);
        JLabel price =new JLabel("Price");
        price.setBounds(20,200,100,50);

        JTextField bookIDText =new JTextField();
        bookIDText.setBounds(100,60,200,30);
        JTextField authorText =new JTextField();
        authorText.setBounds(100,110,200,30);
        JTextField publisherText =new JTextField();
        publisherText.setBounds(100,160,200,30);
        JTextField priceText =new JTextField();
        priceText.setBounds(100,210,200,30);
        JLabel label = new JLabel("No Content in table");
        label.setBounds(450,250,150,50);
        fr.add(label);
        JButton reg = new JButton("Register");
        reg.setBounds(40,300,100,30);
        JButton loadData = new JButton("loadData");
        loadData.setBounds(180,300,100,30);
        reg.addActionListener(e -> {
            try {
                FileWriter writer = new FileWriter("Assignments/CTAssignment/Assignment3_Sinthiya2/database.txt", true);
                PrintWriter print = new PrintWriter(writer);

                print.println(bookIDText.getText() + " " + authorText.getText() + " " + publisherText.getText() + " " + priceText.getText());
                print.close();
                writer.close();
            } catch (IOException ex) {
                ex.printStackTrace();
            }
        });
        loadData.addActionListener(e -> {
            label.setText("");
            try {
                File file = new File("Assignments/CTAssignment/Assignment3_Sinthiya2/database.txt");
                Scanner scan = new Scanner(file);
                DefaultTableModel model = (DefaultTableModel) table.getModel();
                model.setRowCount(0);

                while(scan.hasNext()) {
                    String id = scan.next();
                    String Au = scan.next();
                    String Pu = scan.next();
                    String pr = scan.next();
                    String[] dataRow = new String[]{id, Au, Pu, pr};
                    model.addRow(dataRow);
                }

                scan.close();
                file.exists();
            } catch (Exception var10) {
                var10.printStackTrace();

            }
        });



        Object[][] data ={};
        String []tableHeader = {"bookID","author","publisher","price"};
        DefaultTableModel model = new DefaultTableModel(data,tableHeader);

        table.setModel(model);
        JScrollPane sp = new JScrollPane(table);
        table.setFocusable(false);
        table.setIntercellSpacing(new java.awt.Dimension(0, 0));
        table.setRowHeight(25);
        table.setShowVerticalLines(true);
        table.getTableHeader().setReorderingAllowed(false);
        sp.setViewportView(table);

        sp.setBounds(350,10,300,450);

        fr.add(bookID);
        fr.add(author);
        fr.add(publisher);
        fr.add(price);
        fr.add(bookIDText);
        fr.add(publisherText);
        fr.add(authorText);
        fr.add(priceText);
        fr.add(sp);
        fr.add(reg);
        fr.add(loadData);
        fr.setSize(720,500);

        fr.setLayout(null);
        fr.setVisible(true);
    }
}
