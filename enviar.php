<?php
	$nome=$_POST[nome];
	 $email=$_POST[email];
	 $assunto=$_POST[assunto];
	 $mensagem=$_POST[mensagem];
	 
	 mail("leorpr@live.com","$assunto","
	 Nome: $nome
	 Email: $email
	 Assunto: $assunto
	 Mensagem: $mensagem","FROM:$nome<$email>");
	 
	echo "Sua mensagem foi enviada com sucesso.";
	 
?>