package janelas;

import java.awt.EventQueue;

import javax.swing.JFrame;
import javax.swing.JPanel;
import javax.swing.border.EmptyBorder;

import conexoes.Conexao;

import javax.swing.JLabel;
import javax.swing.JOptionPane;

import java.awt.Color;
import javax.swing.JPasswordField;
import java.awt.Font;
import javax.swing.SwingConstants;
import java.awt.SystemColor;
import javax.swing.ImageIcon;
import javax.swing.JTextField;
import javax.swing.JButton;
import java.awt.event.ActionListener;
import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.awt.event.ActionEvent;

public class Tela_de_acesso extends JFrame {

	private JPanel contentPane;
	private JPasswordField fSenha;
	private JLabel lblUser;
	private JLabel lblNewLabel_2;
	private JTextField  tfUsuario;

	/**
	 * Launch the application.
	 */
	public static void main(String[] args) {
		EventQueue.invokeLater(new Runnable() {
			public void run() {
				try {
					Tela_de_acesso frame = new Tela_de_acesso();
					frame.setVisible(true);
				} catch (Exception e) {
					e.printStackTrace();
				}
			}
		});
	}

	/**
	 * Create the frame.
	 */
	public Tela_de_acesso() {
		setTitle("Login");
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		setBounds(100, 100, 500, 600);
		contentPane = new JPanel();
		contentPane.setBackground(Color.BLACK);
		contentPane.setBorder(new EmptyBorder(5, 5, 5, 5));
		setContentPane(contentPane);
		contentPane.setLayout(null);
		
		JButton btnNewButton = new JButton("acessar");
		btnNewButton.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				
				try {
					Connection con = Conexao.cria_conexao();
					
					String sql = "select * from dados where usuario=? and senha=?";
					
					PreparedStatement stmt = con.prepareStatement(sql);
					
					stmt.setString(1, tfUsuario.getText());
					stmt.setString(2, new String(fSenha.getPassword()));
					
					ResultSet rs = stmt.executeQuery();
					
					if(rs.next()) {
//						JOptionPane.showMessageDialog(null, "Esse usuario existe");
						Tela_de_Cadastro exibir = new Tela_de_Cadastro();
						exibir.setVisible(true);
						
						setVisible(false);
					}else {
						JOptionPane.showMessageDialog(null, "Usuário/Senha incorreto");
					}
					
					stmt.close();
					con.close();

				} catch (SQLException e1) {
					// TODO Auto-generated catch block
					e1.printStackTrace();
				}
			}
		});
		
		JLabel lblTitle = new JLabel("user manager");
		lblTitle.setHorizontalAlignment(SwingConstants.CENTER);
		lblTitle.setFont(new Font("Ubuntu", Font.PLAIN, 36));
		lblTitle.setForeground(SystemColor.textHighlight);
		lblTitle.setBounds(10, 152, 464, 40);
		contentPane.add(lblTitle);
		
		lblUser = new JLabel("Usuário");
		lblUser.setFont(new Font("Ubuntu", Font.PLAIN, 24));
		lblUser.setForeground(SystemColor.textHighlight);
		lblUser.setHorizontalAlignment(SwingConstants.CENTER);
		lblUser.setIcon(new ImageIcon("C:\\Users\\And\\Documents\\eclipse-workspace\\CadastroDeUsuarios\\src\\img\\userIcon.png"));
		lblUser.setBounds(10, 235, 464, 40);
		contentPane.add(lblUser);
		
		tfUsuario = new JTextField();
		tfUsuario.setHorizontalAlignment(SwingConstants.CENTER);
		tfUsuario.setFont(new Font("Ubuntu", Font.PLAIN, 20));
		tfUsuario.setBounds(100, 286, 300, 30);
		contentPane.add(tfUsuario);
		tfUsuario.setColumns(10);
		
		lblNewLabel_2 = new JLabel("Senha");
		lblNewLabel_2.setIcon(new ImageIcon("C:\\Users\\And\\Documents\\eclipse-workspace\\CadastroDeUsuarios\\src\\img\\passwordIcon.png"));
		lblNewLabel_2.setHorizontalAlignment(SwingConstants.CENTER);
		lblNewLabel_2.setForeground(SystemColor.textHighlight);
		lblNewLabel_2.setFont(new Font("Ubuntu", Font.PLAIN, 24));
		lblNewLabel_2.setBounds(10, 327, 464, 40);
		contentPane.add(lblNewLabel_2);
		
		fSenha = new JPasswordField();
		fSenha.setHorizontalAlignment(SwingConstants.CENTER
				);
		fSenha.setToolTipText("");
		fSenha.setFont(new Font("Ubuntu", Font.PLAIN, 20));
		fSenha.setBounds(100, 377, 300, 30);
		contentPane.add(fSenha);
		btnNewButton.setBackground(SystemColor.textHighlight);
		btnNewButton.setFont(new Font("Ubuntu", Font.BOLD, 24));
		btnNewButton.setForeground(Color.WHITE);
		btnNewButton.setBounds(150, 447, 200, 50);
		contentPane.add(btnNewButton);
		
		JLabel lblNewLabel = new JLabel("");
		lblNewLabel.setHorizontalAlignment(SwingConstants.CENTER);
		lblNewLabel.setIcon(new ImageIcon("C:\\Users\\And\\Documents\\eclipse-workspace\\CadastroDeUsuarios\\src\\img\\logoManager.jpg"));
		lblNewLabel.setBounds(10, 11, 464, 153);
		contentPane.add(lblNewLabel);
	}
}
