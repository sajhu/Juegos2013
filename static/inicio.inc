  <section class="main">
            <h2>Selecciona tu Juego <small>en el que quieres participar</small> </h2>
            <div class="row">
               <!-- latest work area -->

<?php

  $DB = new MySQL(DB_NAME, DB_USER, DB_PASSWORD, DB_HOST);

  $juegos = $DB->Select('juegos');
  if($DB->records == 1)
    $juegos = array($juegos);

  foreach($juegos as $juego)
  {
    ?>

               <div class="span3">
                  <!-- portfolio item -->
                  <a href="<?php echo ACTUAL_URL;?>?escogerJuego=<?php echo $juego['id'];?>" class="hover_image  block">
                     <img src="<?php echo $juego['imagen'];?>" alt="">
                     <span class="icomoon-arrow-right icon_hover"></span>
                     <span class="mask"></span>
                     <div class="desc" style="text-align: center;">
                        <h5><?php echo $juego['nombre'];?></h5>
                     </div>
                  </a>
               </div>

<?php
  }
?>



            </div>
         </section>