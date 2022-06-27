<!DOCTYPE html>
<html>
    <head>
        <meta charset="UTF-8">
        <title>Questão-03</title>
    </head>
    <body>
        <?php
        $media = 0;
        $cont = 0;
        $json = file_get_contents("dados.json");           
        $dados = json_decode($json);

        $menor = $dados[0]->valor;
        $maior = $dados[0]->valor;
        
        //verificando o menor valor faturado
        for ($i = 1; $i < 30; $i++) {
            if ($dados[$i]->valor < $menor) {
                $menor = $dados[$i]->valor;
            }
        }
        
        //verificando o maior valor faturado
        for ($i = 1; $i < 30; $i++) {
            if ($dados[$i]->valor > $maior) {
                $maior = $dados[$i]->valor;
            }
        }
        
        //calculando a media
        for ($i = 0; $i < 30; $i++) {
            if ($dados[$i]->valor != 0) {
                $media += $dados[$i]->valor;
                $cont++;
            }
        }
        $media /= $cont;
        $cont2 = 0;
        //verificando quais valores estao acima da media
        for ($i = 0; $i < 30; $i++) {
            if ($dados[$i]->valor > $media) {
                $cont2++;
            }
        }
        ?>
    <center>
        <h2>
            <?php
            //exibindo os resultados
            echo "O menor valor faturado foi: " . $menor;
            echo "<br>";
            echo "O maior valor faturado foi: " . $maior;
            echo '<br>';
            echo "Dias em que o faturamento foi maior que média: " . $cont2;
            ?>
        </h2>
    </center>
</body>
</html>
