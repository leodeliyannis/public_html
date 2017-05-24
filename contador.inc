<?php
	$arquivo = "contador/contador.txt";   //arquivo que contém o contador
	if(file_exists($arquivo))	//se exsite o arquivo, lê o valor atual e o incrementa
	{
		$fd = fopen($arquivo,"r");
		$valor_atual = chop(fgets($fd));	//remove os espaços e quebras de linha
		fclose($fd);
		$valor_atual++;
		$ponteiro = fopen($arquivo, "w");
	}
	else
	{
		$valor_atual = 1;
		$ponteiro = fopen($arquivo, "x");
	}
	//grava o novo valor no arquivo
	fwrite($ponteiro, $valor_atual);
	fclose($ponteiro);
	echo $valor_atual;
?>