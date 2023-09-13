// @AsherLucRen
// Estabelecimento da conexão com o banco de dados
// ==========================================================
#include <stdio.h>
#include "sqlite3.h"

// ==========================================================
// Cria conexão com banco de dados
// ==========================================================
int conectarAoBanco(sqlite3 *db, char *zErrMsg, int rc)
{
	rc = sqlite3_open("test.db", &db);

	if (rc) 
	{
		fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(db));
		return(0);
	}
	else 
	{
		fprintf(stderr, "Opened database successfully\n");
	}

	sqlite3_close(db);

	return 0;
}


int main(int argc, char* argv[])
{
	// Você pode chamar o método para criar a conexão
	// ou criar manualmente sua conexão

	sqlite3 *db;		// Ponteiro para memória onde está o banco de dados
	char *zErrMsg = 0;	// ?
	int rc;				// 
	
	conectarAoBanco(db, zErrMsg, rc);
	
}
