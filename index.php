<?php
  include_once('core.FurrySkeleton.php');

  if(isset($_GET['escogerJuego']))
  {
    if($DB->Select('juegos', array('nombre' => get('escogerJuego'))))
    {
    	$update = $DB->Update('jugadores', array('juego' => get('escogerJuego')), array('id' => USER_ID));
    	if($update)
      {
        setSession('juego', get('escogerJuego'));
        header('Location:  jugar.php');
      }
    }
  }

  printPage('Juegos 2013', 'inicio.inc');

?>