//package CTAssignment.Assignment3_Sinthiya;
//
//import javax.swing.*;
//import javax.swing.table.DefaultTableModel;
//import java.io.*;
//import java.util.ArrayList;
//
//public class Main {
//    public static void main(String[] args) throws Exception {
//
//        JFrame fr = new JFrame();
//
//        JLabel bookID =new JLabel("Book ID");
//        bookID.setBounds(20,50,100,50);
//        JLabel author =new JLabel("Author");
//        author.setBounds(20,100,100,50);
//        JLabel publisher =new JLabel("Publisher");
//        publisher.setBounds(20,150,100,50);
//        JLabel price =new JLabel("Price");
//        price.setBounds(20,200,100,50);
//
//        JTextField bookIDText =new JTextField();
//        bookIDText.setBounds(100,60,200,30);
//        JTextField authorText =new JTextField();
//        authorText.setBounds(100,110,200,30);
//        JTextField publisherText =new JTextField();
//        publisherText.setBounds(100,160,200,30);
//        JTextField priceText =new JTextField();
//        priceText.setBounds(100,210,200,30);
//
//        JButton reg = new JButton("Register");
//        reg.setBounds(40,300,100,30);
//        JButton loadData = new JButton("loadData");
//        loadData.setBounds(180,300,100,30);
//
//        ArrayList<BookInfo> books = new ArrayList<>();
//        reg.addActionListener(e -> {
//            try {
//
//                FileOutputStream fileOut = new FileOutputStream("Assignments/CTAssignment/Assignment3_Sinthiya/database.txt");
//                ObjectOutputStream objectOutput = new ObjectOutputStream(fileOut);
//                //books.add(new BookInfo(bookIDText.getText(),authorText.getText(),publisherText.getText(),priceText.getText()));
//                objectOutput.writeObject(new BookInfo(bookIDText.getText(),authorText.getText(),publisherText.getText(),priceText.getText()));
//                fileOut.close();
//                objectOutput.close();
//            } catch (Exception ex) {
//                System.out.println(ex.getMessage());
//            }
//        });
//        loadData.addActionListener(e -> {
//            try {
//                FileInputStream fileIn = new FileInputStream("Assignments/CTAssignment/Assignment3_Sinthiya/database.txt");
//                ObjectInputStream objectIn = new ObjectInputStream(fileIn);
//
//                while (objectIn.available()>0) {
//                     books.add((BookInfo) objectIn.readObject());
//
//                }
//                String []tableHeader = {"bookID","author","publisher","price"};
//
//                if(books.size()==0)
//                {
//                    JLabel label = new JLabel("No Content in table");
//                    label.setBounds(450,250,150,50);
//
//                }
//                String[][] data = books.toArray(new String[books.size()][4]);
//                DefaultTableModel model = new DefaultTableModel(data,tableHeader);
//                JTable table = new JTable();
//                table.setModel(model);
//                JScrollPane sp = new JScrollPane(table);
//                table.setFocusable(false);
//                table.setIntercellSpacing(new java.awt.Dimension(0, 0));
//                table.setRowHeight(25);
//                table.setShowVerticalLines(true);
//                table.getTableHeader().setReorderingAllowed(false);
//                sp.setViewportView(table);
//
//                sp.setBounds(350,10,300,450);
//
//            } catch (Exception ex) {
//                System.out.println(ex);
//            }
//        });
//
//
//
//        Object[][] data ={};
//        String []tableHeader = {"bookID","author","publisher","price"};
//        DefaultTableModel model = new DefaultTableModel(data,tableHeader);
//        JTable table = new JTable();
//        table.setModel(model);
//        JScrollPane sp = new JScrollPane(table);
//        table.setFocusable(false);
//        table.setIntercellSpacing(new java.awt.Dimension(0, 0));
//        table.setRowHeight(25);
//        table.setShowVerticalLines(true);
//        table.getTableHeader().setReorderingAllowed(false);
//        sp.setViewportView(table);
//
//        sp.setBounds(350,10,300,450);
//
//        fr.add(bookID);
//        fr.add(author);
//        fr.add(publisher);
//        fr.add(price);
//        fr.add(bookIDText);
//        fr.add(publisherText);
//        fr.add(authorText);
//        fr.add(priceText);
//        fr.add(sp);
//        fr.add(reg);
//        fr.add(loadData);
//        fr.setSize(720,500);
//
//        fr.setLayout(null);
//        fr.setVisible(true);
//    }
//}
