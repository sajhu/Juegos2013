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
		'Credenciales proporcionadas invalidas.');

	// Manage asked redirection after success login
	$url = BASE_URL;
	if(isset($_GET['redirectTo']) && $_GET['redirectTo'] != '')
		$url = addslashes(htmlspecialchars(trim($_GET['redirectTo'])));

	// When form is sended
	if(isset($_POST['login']))
	{

			include_once(LIB_FOLDER.'MySQL.php');
			include_once(LIB_FOLDER.'PasswordHash.php');

		$username = post('username');
		$password = $_POST['password']; // should no be sanitized as it will be only hashed and compared to stored value of user

		$DB = new MySQL(DB_NAME, DB_USER, DB_PASSWORD, DB_HOST);

		$t_hasher = new PasswordHash(8, TRUE);

		$user = $DB->Select('jugadores', array('correo' => $username));

		if(!$user && $DB->lastError != '')
		{
			$estado = 1; // no se encontró usuario por ese correo
		}
		//TODO check credentials
		else if($t_hasher->CheckPassword($password, $user['password']))
		{
			session_start();
				setSession('id', $user['id']);
				setSession('user', $username);
				setSession('juego', $user['juego']);
				setSession('hash', $user['password']);
				setSession('CREATED', time());
				setSession('LAST_ACTIVITY', time());

			header("Location: " . $url); // Redirect
		}
		else
		{
			$estado = 1; //el password no coincide, se expide el mismo error
		}

	}

?><!DOCTYPE html>
<html lang="es">
<head>
	
	<!-- start: Meta -->
	<meta charset="utf-8" />
	<title>Login - <?php echo DEFAULT_TITLE;?></title>
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
			body { background: url(<?php echo IMAGE_URL;?>bg-futbol.jpg) !important; }
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
						<a href="<?php echo BASE_URL;?>contact.html"><i class=" icon-envelope"></i></a>
					</div>
					<h1 style="margin-left: 30px;">Bienvenido a los Juegos 2013!</h1>


					<div style="text-align:center;">
						<span id="signinButton">
						  <span
						    class="g-signin"
						    data-callback="signinCallback"
						    data-clientid="578923594429.apps.googleusercontent.com"
						    data-cookiepolicy="single_host_origin"
						    data-requestvisibleactions="http://schemas.google.com/AddActivity"
						    data-scope="https://www.googleapis.com/auth/plus.login"
						    data-width="wide">
						  </span>
						</span>
					</div>
					<form class="form-horizontal" action="<?php echo ACTUAL_URL?>?redirectTo=<?php echo $url;?>" method="post" >
						<fieldset class="login-box-content">
							
							<div class="input-prepend" title="Username">
								<span class="add-on"><i class=" icon-user"></i></span>
								<input class="" name="username" id="username" type="text" placeholder="Usuario" />
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
		echo '							<div class="alert alert-error" style="margin: 30px;">
								<i class=" fa-icon-warning-sign"></i> '.$mensajes[$estado].'
							</div>';
	}
?>
							<br><br><br>

							<a href="crear.php">¡Aún no tengo cuenta!</a>

							<br><br>

							<a href="admin">Admin Panel</a>	

							<div class="button-login">	
								<button type="submit" name="login" class="btn btn-large">Entrar</button>
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
