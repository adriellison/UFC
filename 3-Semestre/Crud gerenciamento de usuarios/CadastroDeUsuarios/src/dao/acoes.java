package dao;

import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;

import javax.swing.JOptionPane;
import javax.swing.table.DefaultTableModel;

import conexoes.Conexao;

public class acoes {
	private int id;
	private String usuario;
	private String senha;
	
	public acoes(int id_p) {
		
		this.id = id_p;
		
	}


	public acoes(String us, String se) {
		this.usuario = us;
		this.senha = se;
	}

	public acoes(int id_p, String us, String se) {
		this.id = id_p;
		this.usuario = us;
		this.senha = se;
	}
	
	public void salvar() {
		try {
			Connection con = Conexao.cria_conexao();
			String sql = "insert into dados(usuario, senha) values(?, ?)";
			
			PreparedStatement stmt = con.prepareStatement(sql);
			
			stmt.setString(1, usuario);
			stmt.setString(2, senha);
			
			stmt .execute();
			
			stmt.close();
			con.close();
			JOptionPane.showMessageDialog(null, "Usuario cadastrado com sucesso!");
			
			
		} catch (SQLException e1) {
			// TODO Auto-generated catch block
			e1.printStackTrace();
		}
	}
	
	public void atualizar() {
		try {
			Connection con = Conexao.cria_conexao();
			
			String sql = "update dados set usuario=?, senha=? where id=?";
			
			PreparedStatement stmt = con.prepareStatement(sql);
			
			stmt.setString(1, usuario);
			stmt.setString(2, senha);
			stmt.setInt(3, id);
			
			stmt.execute();
			
			stmt.close();
			con.close();
			JOptionPane.showMessageDialog(null, "Atualizado com sucesso");
			
		} catch (SQLException e1) {
			// TODO Auto-generated catch block
			e1.printStackTrace();
		}
	}

	
	public void excluir() {
		try {
			Connection con = Conexao.cria_conexao();
			
			String sql = "delete from dados where id=?";
			
			PreparedStatement stmt = con.prepareStatement(sql);
			
			stmt.setInt(1, id);
			
			stmt.execute();
			
			stmt.close();
			con.close();
			JOptionPane.showMessageDialog(null, "Excluido com sucesso");
			
			
		} catch (SQLException e1) {
			// TODO Auto-generated catch block
			e1.printStackTrace();
		}
	}
	
}