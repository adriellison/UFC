package conexoes;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.SQLException;

public class Conexao {

	public static Connection cria_conexao() throws SQLException{
		
		try {
			
			Class.forName("com.mysql.jdbc.Driver");
			
			return DriverManager.getConnection("jdbc:mysql://localhost/users_data", "root", "admin");
			
		} catch (ClassNotFoundException e) {
			
			throw new SQLException(e.getException());
		}
	}
}
