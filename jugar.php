<?php
  include_once('core.FurrySkeleton.php');


  $jugador = $DB->Select('jugadores', array('id' => USER_ID));

  $idJuego = $jugador['juego'];

  printPage('Jugar | Juegos 2013', 'jugar.inc');

?>