package janelas;

import java.awt.EventQueue;

import javax.swing.JFrame;
import javax.swing.JPanel;
import javax.swing.border.EmptyBorder;
import javax.swing.JLabel;
import javax.swing.JOptionPane;
import javax.swing.JTextField;
import java.awt.Color;
import javax.swing.border.TitledBorder;

import conexoes.Conexao;
import dao.acoes;

import javax.swing.JButton;
import java.awt.event.ActionListener;
import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.awt.event.ActionEvent;
import javax.swing.border.EtchedBorder;
import java.awt.SystemColor;
import java.awt.Font;
import javax.swing.SwingConstants;
import javax.swing.JScrollPane;
import javax.swing.JTable;
import javax.swing.table.DefaultTableModel;
import javax.swing.JMenuBar;
import javax.swing.JMenu;
import javax.swing.JMenuItem;
import javax.swing.KeyStroke;
import java.awt.event.KeyEvent;
import java.awt.event.InputEvent;

public class Tela_de_Cadastro extends JFrame {

	private JPanel contentPane;
	private JTextField tfId;
	private JTextField tfUsuario;
	private JTextField tfSenha;
	private JTextField tfBusca;
	private JTable tbDados;

	/**
	 * Launch the application.
	 */
	public static void main(String[] args) {
		EventQueue.invokeLater(new Runnable() {
			public void run() {
				try {
					Tela_de_Cadastro frame = new Tela_de_Cadastro();
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
	public Tela_de_Cadastro() {
		setTitle("Gerenciamento de usu\u00E1rios");
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		setBounds(100, 100, 500, 600);
		
		JMenuBar menuBar = new JMenuBar();
		menuBar.setBackground(new Color(147, 112, 219));
		setJMenuBar(menuBar);
		
		JMenu mnNewMenu = new JMenu("A\u00E7\u00F5es");
		mnNewMenu.setForeground(Color.WHITE);
		mnNewMenu.setBackground(new Color(147, 112, 219));
		menuBar.add(mnNewMenu);
		
		JMenuItem mntmNewMenuItem = new JMenuItem("Salvar");
		mntmNewMenuItem.setBackground(Color.WHITE);
		mntmNewMenuItem.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				
				if(tfUsuario.getText().equals("") || tfSenha.getText().equals("")) {
					JOptionPane.showMessageDialog(null, "Usuario/senha não informados");
				}else {
					
					acoes ac = new acoes(tfUsuario.getText(), tfSenha.getText());
					ac.salvar();
					
					tfUsuario.setText("");
					tfSenha.setText("");
					
				}
				
			}
		});
		mntmNewMenuItem.setAccelerator(KeyStroke.getKeyStroke(KeyEvent.VK_S, InputEvent.CTRL_MASK));
		mnNewMenu.add(mntmNewMenuItem);
		
		JMenuItem mntmNewMenuItem_1 = new JMenuItem("Editar");
		mntmNewMenuItem_1.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				
				if(tfId.getText().equals("")) {
					JOptionPane.showMessageDialog(null, "Informe o Id");
				}else {
					
					acoes ac = new acoes(Integer.parseInt(tfId.getText()), tfUsuario.getText(), tfSenha.getText());
					ac.atualizar();
					
				}
				
			}
		});
		mntmNewMenuItem_1.setAccelerator(KeyStroke.getKeyStroke(KeyEvent.VK_E, InputEvent.CTRL_MASK));
		mnNewMenu.add(mntmNewMenuItem_1);
		
		JMenuItem mntmNewMenuItem_3 = new JMenuItem("Excluir");
		mntmNewMenuItem_3.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				
				if(tfId.getText().equals("")) {
					JOptionPane.showMessageDialog(null, "Informe o Id");
				}else {
					acoes ac = new acoes(Integer.parseInt(tfId.getText()));
					ac.excluir();
					
					tfId.setText("");
					tfUsuario.setText("");
					tfSenha.setText("");
				}
				
			}
		});
		mntmNewMenuItem_3.setAccelerator(KeyStroke.getKeyStroke(KeyEvent.VK_DELETE, InputEvent.CTRL_MASK));
		mnNewMenu.add(mntmNewMenuItem_3);
		
		JMenuItem mntmNewMenuItem_2 = new JMenuItem("Sair");
		mntmNewMenuItem_2.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				
				System.exit(0);

				
			}
		});
		mnNewMenu.add(mntmNewMenuItem_2);
		contentPane = new JPanel();
		contentPane.setBackground(Color.BLACK);
		contentPane.setBorder(new EmptyBorder(5, 5, 5, 5));
		setContentPane(contentPane);
		contentPane.setLayout(null);
		
		JLabel lblNewLabel = new JLabel("id");
		lblNewLabel.setHorizontalAlignment(SwingConstants.RIGHT);
		lblNewLabel.setFont(new Font("Ubuntu", Font.PLAIN, 24));
		lblNewLabel.setForeground(SystemColor.textHighlight);
		lblNewLabel.setBounds(95, 70, 98, 17);
		contentPane.add(lblNewLabel);
		
		JLabel lblNewLabel_1 = new JLabel("Usu\u00E1rio");
		lblNewLabel_1.setHorizontalAlignment(SwingConstants.RIGHT);
		lblNewLabel_1.setFont(new Font("Ubuntu", Font.PLAIN, 24));
		lblNewLabel_1.setForeground(SystemColor.textHighlight);
		lblNewLabel_1.setBounds(95, 98, 98, 20);
		contentPane.add(lblNewLabel_1);
		
		JLabel lblNewLabel_2 = new JLabel("Senha");
		lblNewLabel_2.setHorizontalAlignment(SwingConstants.RIGHT);
		lblNewLabel_2.setFont(new Font("Ubuntu", Font.PLAIN, 24));
		lblNewLabel_2.setForeground(SystemColor.textHighlight);
		lblNewLabel_2.setBounds(95, 129, 98, 20);
		contentPane.add(lblNewLabel_2);
		
		tfId = new JTextField();
		tfId.setFont(new Font("Ubuntu", Font.PLAIN, 16));
		tfId.setBackground(Color.WHITE);
		tfId.setEditable(false);
		tfId.setBounds(200, 70, 150, 20);
		contentPane.add(tfId);
		tfId.setColumns(10);
		
		tfUsuario = new JTextField();
		tfUsuario.setFont(new Font("Ubuntu", Font.PLAIN, 16));
		tfUsuario.setBounds(200, 99, 150, 20);
		contentPane.add(tfUsuario);
		tfUsuario.setColumns(10);
		
		tfSenha = new JTextField();
		tfSenha.setFont(new Font("Ubuntu", Font.PLAIN, 16));
		tfSenha.setBounds(200, 130, 150, 20);
		contentPane.add(tfSenha);
		tfSenha.setColumns(10);
		
		JPanel panel_1 = new JPanel();
		panel_1.setBackground(new Color(147, 112, 219));
		panel_1.setBorder(new TitledBorder(new EtchedBorder(EtchedBorder.LOWERED, new Color(255, 255, 255), new Color(222, 222, 222)), "Busca para edi\u00E7\u00E3o", TitledBorder.LEADING, TitledBorder.TOP, null, new Color(0, 0, 0)));
		panel_1.setBounds(34, 231, 416, 91);
		contentPane.add(panel_1);
		panel_1.setLayout(null);
		
		tfBusca = new JTextField();
		tfBusca.setHorizontalAlignment(SwingConstants.CENTER);
		tfBusca.setBounds(60, 42, 150, 30);
		panel_1.add(tfBusca);
		tfBusca.setColumns(10);
		
		JButton btnAbrir = new JButton("Procurar");
		btnAbrir.setForeground(Color.WHITE);
		btnAbrir.setBackground(SystemColor.textHighlight);
		btnAbrir.setFont(new Font("Ubuntu", Font.PLAIN, 20));
		btnAbrir.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				if(tfBusca.getText().equals("")) {
					JOptionPane.showMessageDialog(null, "Informe o ID");
				}else {
					
					try {
						Connection con = Conexao.cria_conexao();
						
						String sql = "select * from dados where id like ?";
						
						PreparedStatement stmt = con.prepareStatement(sql);
						
						stmt.setString(1, "%"+tfBusca.getText());
						
						ResultSet rs = stmt.executeQuery();
						
						while(rs.next()) {
							
							tfId.setText(rs.getString("id"));
							tfUsuario.setText(rs.getString("usuario"));
							tfSenha.setText(rs.getString("senha"));
							
						}
						
						rs.close();
						con.close();
						
					} catch (SQLException e1) {
						// TODO Auto-generated catch block
						e1.printStackTrace();
					}
				}
				
			}
		});
		
		btnAbrir.setBounds(220, 42, 150, 30);
		panel_1.add(btnAbrir);
		
		JLabel lblNewLabel_3 = new JLabel("Digite o ID da busca:");
		lblNewLabel_3.setFont(new Font("Ubuntu", Font.PLAIN, 14));
		lblNewLabel_3.setBounds(60, 21, 150, 24);
		panel_1.add(lblNewLabel_3);
		
		JLabel lblTitle = new JLabel("Gerenciamento de usu\u00E1rios");
		lblTitle.setHorizontalAlignment(SwingConstants.CENTER);
		lblTitle.setForeground(SystemColor.textHighlight);
		lblTitle.setFont(new Font("Ubuntu", Font.PLAIN, 36));
		lblTitle.setBounds(10, 19, 464, 40);
		contentPane.add(lblTitle);
		
		JPanel panel_2 = new JPanel();
		panel_2.setBackground(new Color(147, 112, 219));
		panel_2.setBorder(new TitledBorder(null, "Listagem", TitledBorder.LEADING, TitledBorder.TOP, null, null));
		panel_2.setBounds(34, 333, 416, 195);
		contentPane.add(panel_2);
		panel_2.setLayout(null);
		
		JButton btnListarDados = new JButton("Listar");
		btnListarDados.setForeground(Color.WHITE);
		btnListarDados.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				
				try {
					Connection con = Conexao.cria_conexao();
					
					String sql = "Select * from dados order by usuario asc";
					
					PreparedStatement stmt = con.prepareStatement(sql);
					
					ResultSet rs = stmt.executeQuery();
					
					DefaultTableModel modelo = (DefaultTableModel) tbDados.getModel();
					
					modelo.setNumRows(0);
					
					while(rs.next()) {
						modelo.addRow(new Object[]{rs.getString("id"), rs.getString("Usuario"), rs.getString("senha")});
					}
					
					rs.close();
					con.close();
					
					
				} catch (SQLException e1) {
					// TODO Auto-generated catch block
					e1.printStackTrace();
				}
			}
		});
		btnListarDados.setBackground(SystemColor.textHighlight);
		btnListarDados.setBounds(131, 24, 150, 30);
		panel_2.add(btnListarDados);
		btnListarDados.setFont(new Font("Ubuntu", Font.PLAIN, 20));
		
		JScrollPane scrollPane = new JScrollPane();
		scrollPane.setBounds(48, 65, 319, 119);
		panel_2.add(scrollPane);
		
		tbDados = new JTable();
		tbDados.setModel(new DefaultTableModel(
			new Object[][] {
				{null, null, null},
			},
			new String[] {
				"Id", "Usu\u00E1rio", "Senha"
			}
		) {
			boolean[] columnEditables = new boolean[] {
				false, false, false
			};
			public boolean isCellEditable(int row, int column) {
				return columnEditables[column];
			}
		});
		scrollPane.setViewportView(tbDados);
		
		JPanel panel = new JPanel();
		panel.setBackground(new Color(147, 112, 219));
		panel.setBorder(new TitledBorder(null, "A\u00E7\u00F5es", TitledBorder.LEADING, TitledBorder.TOP, null, null));
		panel.setBounds(34, 160, 416, 60);
		contentPane.add(panel);
		panel.setLayout(null);
		
		JButton btnSalvar = new JButton("Salvar");
		btnSalvar.setBounds(14, 19, 120, 30);
		panel.add(btnSalvar);
		btnSalvar.setBackground(Color.GREEN);
		btnSalvar.setFont(new Font("Ubuntu", Font.PLAIN, 20));
		
		JButton btnNewButton = new JButton("Editar");
		btnNewButton.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				
				if(tfId.getText().equals("")) {
					JOptionPane.showMessageDialog(null, "Informe o Id");
				}else {
					try {
						Connection con = Conexao.cria_conexao();
						
						String sql = "update dados set usuario=?, senha=? where id=?";
						
						PreparedStatement stmt = con.prepareStatement(sql);
						
						stmt.setString(1, tfUsuario.getText());
						stmt.setString(2, tfSenha.getText());
						stmt.setString(3, tfId.getText());
						
						stmt.execute();
						
						stmt.close();
						con.close();
						JOptionPane.showMessageDialog(null, "Atualizado com sucesso");
						
					} catch (SQLException e1) {
						// TODO Auto-generated catch block
						e1.printStackTrace();
					}
				}

				
			}
		});
		btnNewButton.setBackground(Color.WHITE);
		btnNewButton.setFont(new Font("Ubuntu", Font.PLAIN, 20));
		btnNewButton.setBounds(148, 19, 120, 30);
		panel.add(btnNewButton);
		
		JButton btnNewButton_1 = new JButton("Excluir");
		btnNewButton_1.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				
				if(tfId.getText().equals("")) {
					JOptionPane.showMessageDialog(null, "Informe o Id");
				}else {
					try {
						Connection con = Conexao.cria_conexao();
						
						String sql = "delete from dados where id=?";
						
						PreparedStatement stmt = con.prepareStatement(sql);
						
						stmt.setString(1, tfId.getText());
						
						stmt.execute();
						
						stmt.close();
						con.close();
						JOptionPane.showMessageDialog(null, "Excluido com sucesso");
						
						tfId.setText("");
						tfUsuario.setText("");
						tfSenha.setText("");
						
					} catch (SQLException e1) {
						// TODO Auto-generated catch block
						e1.printStackTrace();
					}
				}
				
			}
		});
		btnNewButton_1.setBackground(Color.RED);
		btnNewButton_1.setFont(new Font("Ubuntu", Font.PLAIN, 20));
		btnNewButton_1.setBounds(282, 19, 120, 30);
		panel.add(btnNewButton_1);
		btnSalvar.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				
				if(tfUsuario.getText().equals("") || tfSenha.getText().equals("")) {
					JOptionPane.showMessageDialog(null, "Usuario/senha não informados");
				}else {
					try {
						Connection con = Conexao.cria_conexao();
						String sql = "insert into dados(usuario, senha) values(?, ?)";
						
						PreparedStatement stmt = con.prepareStatement(sql);
						
						stmt.setString(1, tfUsuario.getText());
						stmt.setString(2, tfSenha.getText());
						
						stmt .execute();
						
						stmt.close();
						con.close();
						JOptionPane.showMessageDialog(null, "Usuario cadastrado com sucesso!");
						
						tfUsuario.setText("");
						tfSenha.setText("");
						
					} catch (SQLException e1) {
						// TODO Auto-generated catch block
						e1.printStackTrace();
					}
				}
				
			}
		});
		
		
	}
}
