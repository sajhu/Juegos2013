<?php
/**
 * FurrySkeleton WebApp Framework
 * for quick developement of Bootstrap based PHP apps.
 *
 * Developed by:
 * 	Santiago Rojas - www.santiagorojas.co
 *
 * check for latest updates at https://github.com/sajhu/FurrySkeleton
 */

 // -----------------------------------------------

 // Esta pagina es especial, pues en esta es donde se crea la sesión de usuario
 // por lo tanto, al incluir al core.FurrySkeleton, este intentaría enviarme de nuevo aquí
 // Si no existe una sesión válida
 
 // -----------------------------------------------	

	include_once('core.Settings.php');
	include_once('core.Security.php');

	$estado = 0;
	
	$mensajes = array('',
		'Por favor complete todos los campos',
		'Error al insertar en la base de datos',
		'Usuario creado con éxito');

	// Manage asked redirection after success login
	$url = BASE_URL.'login.php';
	if(isset($_GET['redirectTo']) && $_GET['redirectTo'] != '')
		$url = addslashes(htmlspecialchars(trim($_GET['redirectTo'])));

	// When form is sended
	if(isset($_POST['crear']))
	{
			include_once(LIB_FOLDER.'MySQL.php');
			include_once(LIB_FOLDER.'PasswordHash.php');

		$nombre = post('nombre');
		$apellido = post('apellido');
		$correo = post('correo');
		$sede = post('sede');
		$ciudad = post('ciudad');

		$t_hasher = new PasswordHash(8, TRUE);

		$password = $t_hasher->HashPassword(post('password'));

		$array = array(
			'nombre' => $nombre,
			'apellido' => $apellido,
			'correo' => $correo,
			'sede' => $sede,
			'ciudad' => $ciudad,
			'password' => $password
			);

		//TODO check credentials
		if($nombre =! '' && $password =! '' && $correo != '')
		{

			$DB = new MySQL(DB_NAME, DB_USER, DB_PASSWORD, DB_HOST);


			$DB->Insert('jugadores', $array);
			if($DB->lastError != '')
			{
				$estado = 2;
				$mensajes[$estado] .= $DB->lastError;
			}
			else
			{
				$estado = 3;
				header("Location: " . $url); // Redirect
			}

				
		}
		else
		{
			$estado = 1;
		}

	}

?><!DOCTYPE html>
<html lang="es">
<head>
	
	<!-- start: Meta -->
	<meta charset="utf-8" />
	<title>Crear Cuenta - <?php echo DEFAULT_TITLE;?></title>
	<meta name="description" content="ACME Dashboard Bootstrap Admin Template." />
	<meta name="author" content="Łukasz Holeczek" />
	<meta name="keyword" content="ACME, Dashboard, Bootstrap, Admin, Template, Theme, Responsive, Fluid, Retina" />
	<!-- end: Meta -->
	
	<!-- start: Mobile Specific -->
	<meta name="viewport" content="width=device-width, initial-scale=1" />
	<!-- end: Mobile Specific -->
	
	<!-- start: CSS -->
	<link id="bootstrap-style" href="<?php echo CSS_URL;?>bootstrap.css" rel="stylesheet" />
	<link href="<?php echo CSS_URL;?>bootstrap-responsive.css" rel="stylesheet" />
	<link id="base-style" href="<?php echo CSS_URL;?>style.css" rel="stylesheet" />
	<link id="base-style-responsive" href="<?php echo CSS_URL;?>style-responsive.css" rel="stylesheet" />
	<link href='http://fonts.googleapis.com/css?family=Open+Sans:300italic,400italic,600italic,700italic,800italic,400,300,600,700,800&subset=latin,cyrillic-ext,latin-ext' rel='stylesheet' type='text/css' />
	
	<!-- end: CSS -->
	

	<!-- The HTML5 shim, for IE6-8 support of HTML5 elements -->
	<!--[if lt IE 9]>
	  	<script src="http://html5shim.googlecode.com/svn/trunk/html5.js"></script>
		<link id="ie-style" href="./css/ie.css" rel="stylesheet" />
	<![endif]-->
	
	<!--[if IE 9]>
		<link id="ie9style" href="./css/ie9.css" rel="stylesheet" />
	<![endif]-->
		
	<!-- start: Favicon -->
	<link rel="shortcut icon" href="<?php echo IMAGE_URL;?>favicon.ico" />
	<!-- end: Favicon -->
	
		<style type="text/css">
			body { background: url(<?php echo IMAGE_URL;?>bg-login.jpg) !important; }
		</style>
		
		
	<meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
</head>

<body>
		<div class="container-fluid">
		<div class="row-fluid">
					
			<div class="row-fluid">
				<div class="login-box">
					<div class="icons">
						<a href="<?php echo BASE_URL;?>"><i class="icon-home"></i></a>
						<a href="<?php echo BASE_URL;?>ayuda.php"><i class=" icon-envelope"></i></a>
					</div>
					<h1 style="margin-left: 30px;">Crear Cuenta para los Juegos 2013!</h1>



					<form class="form-horizontal" action="<?php echo ACTUAL_URL?>?redirectTo=<?php echo $url;?>" method="post" >
						<fieldset class="login-box-content">
							
							<div class="input-prepend" title="Nombres">
								<span class="add-on"><i class=" icon-user"></i></span>
								<input class="" name="nombre" id="nombre" type="text" placeholder="Nombres" />
							</div>
							<div class="clearfix"></div>
							
							<div class="input-prepend" title="Apellidos">
								<span class="add-on"><i class="icon-book"></i></span>
								<input class="" name="apellido" id="apellido" type="text" placeholder="Apellidos" />
							</div>
							<div class="clearfix"></div>
							
							<div class="input-prepend" title="Correo">
								<span class="add-on"><i class="icon-envelope"></i></span>
								<input class="" name="correo" id="correo" type="text" placeholder="Correo Electrónico" />
							</div>
							<div class="clearfix"></div>
							
							<div class="input-prepend" title="Sede">
								<span class="add-on"><i class=" icon-home"></i></span>
								<input class="" name="sede" id="sede" type="text" placeholder="Sede" />
							</div>
							<div class="clearfix"></div>
							
							<div class="input-prepend" title="Ciudad">
								<span class="add-on"><i class="  icon-globe"></i></span>
								<input class="" name="ciudad" id="ciudad" type="text" placeholder="Ciudad" />
							</div>
							<div class="clearfix"></div>

							<div class="input-prepend" title="Password">
								<span class="add-on"><i class="icon-fire"></i></span>
								<input class="" name="password" id="password" type="password" placeholder="Clave" />
							</div>
							<div class="clearfix"></div>
<?php
	if($estado > 0)
	{
		echo '
							<div class="alert alert-error" style="margin: 30px;">
								<i class=" fa-icon-warning-sign"></i> '.$mensajes[$estado].'
							</div>';
	}
?>


							<div class="button-login">	
								<button type="submit" name="crear" value="crear" class="btn btn-large btn-info">Crear mi Cuenta</button>
							</div>
							<div class="clearfix"></div>
					</form>
						
				</fieldset></div><!--/span-->
			</div><!--/row-->
			
				</div><!--/fluid-row-->
				
				
	</div><!--/.fluid-container-->
	<div id="footer" class="powered">
		<?php
				if(@include('http://santiagorojas.co/credits.php'));
				else print('<p>Powered by <a href="http://santiagorojas.co">FurrySkeleton</a></p>');
		?>
	</div>
	<!-- start: JavaScript-->

		<script src="<?php echo JS_URL;?>jquery-1.7.2.min.js"></script>
	<script src="<?php echo JS_URL;?>jquery-ui-1.8.21.custom.min.js"></script>
	
		<script src="<?php echo JS_URL;?>modernizr.js"></script>
	
		<script src="<?php echo JS_URL;?>bootstrap.js"></script>

	<!-- end: JavaScript-->
	  <!-- Place this asynchronous JavaScript just before your </body> tag -->
    <script type="text/javascript">
      (function() {
       var po = document.createElement('script'); po.type = 'text/javascript'; po.async = true;
       po.src = 'https://apis.google.com/js/client:plusone.js';
       var s = document.getElementsByTagName('script')[0]; s.parentNode.insertBefore(po, s);
     })();
    </script>

</body>
</html>
