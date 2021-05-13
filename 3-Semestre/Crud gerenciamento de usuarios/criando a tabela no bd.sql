Create database users_data;
use users_data;
create table dados(id int auto_increment not null primary key, usuario varchar(45) not null, senha varchar(45) not null);
insert into dados(usuario, senha) values("admin", "admin");
select * from dados;