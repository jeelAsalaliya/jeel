import sqlite3
cn=sqlite3.connect("db1.db")

print("database open successfully")

cn.execute(''' create table developer
	(id int primary key,
	 name text not null,
	 age int,
	 salary real);''')
print("table created successfully")
cn.close()
