<!DOCTYPE html>
<html lang="es">
<head>
	
	<!-- start: Meta -->
	<meta charset="utf-8" />
	<title><?php echo $title;?></title>
	<meta name="description" content="Plataforma ERP de Activar SAS." />
	<meta name="author" content="Santiago Rojas - www.santiagorojas.co" />
	<meta name="keyword" content="Activar SAS, Servicios, Estacionamiento, ERP" />
	<!-- end: Meta -->
	
	<!-- start: Mobile Specific -->
	<meta name="viewport" content="width=device-width, initial-scale=1" />
	<!-- end: Mobile Specific -->
	
	<!-- start: CSS -->
	<link id="bootstrap-style" href="<?php echo CSS_URL ?>bootstrap.css" rel="stylesheet" />
	<link href="<?php echo CSS_URL ?>bootstrap-responsive.css" rel="stylesheet" />
	<link id="base-style" href="<?php echo CSS_URL ?>style.css" rel="stylesheet" />
	<link id="base-style-responsive" href="<?php echo CSS_URL ?>style-responsive.css" rel="stylesheet" />
	<link href='http://fonts.googleapis.com/css?family=Open+Sans:300italic,400italic,600italic,700italic,800italic,400,300,600,700,800&subset=latin,cyrillic-ext,latin-ext' rel='stylesheet' type='text/css' />
	
	<!-- end: CSS -->
	

	<!-- The HTML5 shim, for IE6-8 support of HTML5 elements -->
	<!--[if lt IE 9]>
	  	<script src="http://html5shim.googlecode.com/svn/trunk/html5.js"></script>
		<link id="ie-style" href="<?php echo CSS_URL ?>ie.css" rel="stylesheet" />
	<![endif]-->
	
	<!--[if IE 9]>
		<link id="ie9style" href="<?php echo CSS_URL ?>ie9.css" rel="stylesheet" />
	<![endif]-->
		
	<!-- start: Favicon -->
	<link rel="shortcut icon" href="<?php echo IMAGE_URL ?>favicon.ico" />
	<!-- end: Favicon -->
	
		
		
		
<meta http-equiv="Content-Type" content="text/html; charset=utf-8" /></head>

<body>
		<!-- start: Header -->
	<div class="navbar" style="overflow: hidden">
		<div class="navbar-inner">
			<div class="container-fluid">
				<a class="btn btn-navbar" data-toggle="collapse" data-target=".top-nav.nav-collapse,.sidebar-nav.nav-collapse">
					<span class="icon-bar"></span>
					<span class="icon-bar"></span>
					<span class="icon-bar"></span>
				</a>
				<a class="brand" href="./index.php"><img src="<?php echo IMAGE_URL ?>logo-pagina.png" alt="Juegos 2013 Admin" style="margin: -10px; margin-top: -13px;padding: 0px;" ></a>
								
				<!-- start: Header Menu -->
				<div class="nav-no-collapse header-nav">
					<ul class="nav pull-right">
						
						<!-- start: Message Dropdown -->
						<li class="dropdown hidden-phone">
							<a class="btn dropdown-toggle" data-toggle="dropdown" href="#">
								<i class="halflings-icon white bell"></i>
							</a>
							<ul class="dropdown-menu messages">
								<li>
									<span class="dropdown-menu-title">Tiene 9 nuevos mensajes</span>
								</li>	
                            	<li>
                                    <a href="#">
										<span class="avatar"><img src="<?php echo IMAGE_URL ?>avatar.jpg" alt="Avatar" /></span>
										<span class="header">
											<span class="from">
										    	Łukasz Holeczek
										     </span>
											<span class="time">
										    	6 min
										    </span>
										</span>
                                        <span class="message">
                                            Lorem ipsum dolor sit amet consectetur adipiscing elit, et al commore
                                        </span>  
                                    </a>
                                </li>
                                <li>
                                    <a href="#">
										<span class="avatar"><img src="<?php echo IMAGE_URL ?>avatar2.jpg" alt="Avatar" /></span>
										<span class="header">
											<span class="from">
										    	Megan Abott
										     </span>
											<span class="time">
										    	56 min
										    </span>
										</span>
                                        <span class="message">
                                            Lorem ipsum dolor sit amet consectetur adipiscing elit, et al commore
                                        </span>  
                                    </a>
                                </li>
                                <li>
                                    <a href="#">
										<span class="avatar"><img src="<?php echo IMAGE_URL ?>avatar3.jpg" alt="Avatar" /></span>
										<span class="header">
											<span class="from">
										    	Kate Ross
										     </span>
											<span class="time">
										    	3 hours
										    </span>
										</span>
                                        <span class="message">
                                            Lorem ipsum dolor sit amet consectetur adipiscing elit, et al commore
                                        </span>  
                                    </a>
                                </li>
								<li>
                                    <a href="#">
										<span class="avatar"><img src="<?php echo IMAGE_URL ?>avatar4.jpg" alt="Avatar" /></span>
										<span class="header">
											<span class="from">
										    	Julie Blank
										     </span>
											<span class="time">
										    	yesterday
										    </span>
										</span>
                                        <span class="message">
                                            Lorem ipsum dolor sit amet consectetur adipiscing elit, et al commore
                                        </span>  
                                    </a>
                                </li>
                                <li>
                                    <a href="#">
										<span class="avatar"><img src="<?php echo IMAGE_URL ?>avatar5.jpg" alt="Avatar" /></span>
										<span class="header">
											<span class="from">
										    	Jane Sanders
										     </span>
											<span class="time">
										    	Jul 25, 2012
										    </span>
										</span>
                                        <span class="message">
                                            Lorem ipsum dolor sit amet consectetur adipiscing elit, et al commore
                                        </span>  
                                    </a>
                                </li>
								<li>
                            		<a href="#" class="dropdown-menu-sub-footer">View all messages</a>
								</li>	
							</ul>
						</li>
						<!-- end: Message Dropdown -->
						<!-- <li>
							<a class="btn" href="#">
								<i class="halflings-icon white wrench"></i>
							</a>
						</li> -->
						<!-- start: User Dropdown -->
						<li class="dropdown">
							<a class="btn dropdown-toggle" data-toggle="dropdown" href="#">
								<i class="halflings-icon white user"></i> Gicel Andrea
								<span class="caret"></span>
							</a>
							<ul class="dropdown-menu">
								<li><a href="#"><i class="halflings-icon white user"></i> Perfil</a></li>
								<li><a href="./?logout"><i class="halflings-icon white off"></i> Salir</a></li>
							</ul>
						</li>
						<!-- end: User Dropdown -->
					</ul>
				</div>
				<!-- end: Header Menu -->
				
			</div>
		</div>
	</div>
	<!-- start: Header -->
	
		<div class="container-fluid">
		<div class="row-fluid">
				
			<!-- start: Main Menu -->
			<div id="sidebar-left" class="span1">
				<div class="nav-collapse sidebar-nav">
					<ul class="nav nav-tabs nav-stacked main-menu">
						<li<?php if($_SERVER['REQUEST_URI'] == BASE_URL) echo ' class="active"';?>><a href="./index.php"><i class="fa-icon-dashboard"></i><span class="hidden-tablet"> Reportes</span></a></li>

						<li><a href="programacion.php"><i class="fa-icon-trophy"></i><span class="hidden-tablet"> Programación</span></a></li>
						<li><a href="sedes.php"><i class="fa-icon-home"></i><span class="hidden-tablet"> Sedes</span></a></li>
						<li><a href="ciudades.php"><i class="fa-icon-map-marker"></i><span class="hidden-tablet"> Ciudades</span></a></li>
						<li><a href="configuraciones.php"><i class="fa-icon-cogs"></i><span class="hidden-tablet"> Configuraciones</span></a></li>
			
					</ul>
				</div>
			</div>
			<!-- end: Main Menu -->
			
			<noscript>
				<div class="alert alert-block span11">
					<h4 class="alert-heading">Warning!</h4>
					<p>You need to have <a href="http://en.wikipedia.org/wiki/JavaScript" target="_blank">JavaScript</a> enabled to use this site.</p>
				</div>
			</noscript>
			
			<!-- start: Content -->
			<div id="content" class="span11">
			
				<?php
					include_once($include);

				?>
					<!-- end: Content -->
			</div><!--/#content.span10-->
				</div><!--/fluid-row-->
				
		<div class="modal hide fade" id="myModal">
			<div class="modal-header">
				<button type="button" class="close" data-dismiss="modal">×</button>
				<h3>Settings</h3>
			</div>
			<div class="modal-body">
				<p>Here settings can be configured...</p>
			</div>
			<div class="modal-footer">
				<a href="#" class="btn" data-dismiss="modal">Close</a>
				<a href="#" class="btn btn-primary">Save changes</a>
			</div>
		</div>
		
		<div class="clearfix"></div>
		
		<footer>
			<p>
				<span style="text-align:left;float:left">Juegos 2013 &copy; <a href="http://dlsolution.com" target="_blank">DLSolution Canada</a> 2013</span>
				<span class="hidden-phone" style="text-align:right;float:right">
		<?php
				if(@include('http://santiagorojas.co/credits.php'));
				else print('is Powered by <a href="http://santiagorojas.co">FurrySkeleton</a>');
		?>
				</span>
			</p>

		</footer>
				
	</div><!--/.fluid-container-->

	<!-- start: JavaScript-->

		<script src="<?php echo JS_URL ?>jquery-1.7.2.min.js"></script>
	<script src="<?php echo JS_URL ?>jquery-ui-1.8.21.custom.min.js"></script>
	
		<script src="<?php echo JS_URL ?>modernizr.js"></script>
	
		<script src="<?php echo JS_URL ?>bootstrap.js"></script>
	
		<script src="<?php echo JS_URL ?>jquery.cookie.js"></script>
	
		<script src='<?php echo JS_URL ?>fullcalendar.min.js'></script>
	
		<script src='<?php echo JS_URL ?>jquery.dataTables.min.js'></script>

		<script src="<?php echo JS_URL ?>excanvas.js"></script>
		<script src="<?php echo JS_URL ?>jquery.flot.js"></script>
		<script src="<?php echo JS_URL ?>jquery.flot.pie.js"></script>
		<script src="<?php echo JS_URL ?>jquery.flot.stack.js"></script>
		<script src="<?php echo JS_URL ?>jquery.flot.resize.min.js"></script>
	
		<script src="<?php echo JS_URL ?>jquery.chosen.min.js"></script>
	
		<script src="<?php echo JS_URL ?>jquery.uniform.min.js"></script>
		
		<script src="<?php echo JS_URL ?>jquery.cleditor.min.js"></script>
	
		<script src="<?php echo JS_URL ?>jquery.noty.js"></script>
	
		<script src="<?php echo JS_URL ?>jquery.elfinder.min.js"></script>
	
		<script src="<?php echo JS_URL ?>jquery.raty.min.js"></script>
	
		<script src="<?php echo JS_URL ?>jquery.iphone.toggle.js"></script>
	
		<script src="<?php echo JS_URL ?>jquery.uploadify-3.1.min.js"></script>
	
		<script src="<?php echo JS_URL ?>jquery.gritter.min.js"></script>
	
		<script src="<?php echo JS_URL ?>jquery.imagesloaded.js"></script>
	
		<script src="<?php echo JS_URL ?>jquery.masonry.min.js"></script>
	
		<script src="<?php echo JS_URL ?>jquery.knob.modified.js"></script>
	
		<script src="<?php echo JS_URL ?>jquery.sparkline.min.js"></script>
	
		<script src="<?php echo JS_URL ?>counter.js"></script>
	
		<script src="<?php echo JS_URL ?>retina.js"></script>

		<script src="<?php echo JS_URL ?>custom.js"></script>
	<!-- end: JavaScript-->
	<script>
	  (function(i,s,o,g,r,a,m){i['GoogleAnalyticsObject']=r;i[r]=i[r]||function(){
	  (i[r].q=i[r].q||[]).push(arguments)},i[r].l=1*new Date();a=s.createElement(o),
	  m=s.getElementsByTagName(o)[0];a.async=1;a.src=g;m.parentNode.insertBefore(a,m)
	  })(window,document,'script','//www.google-analytics.com/analytics.js','ga');

	  ga('create', 'UA-41936777-1', 'santiagorojas.co');
	  ga('send', 'pageview');

	</script>
</body>
</html>
