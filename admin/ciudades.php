<?php
	include('core.FurrySkeleton.php');
	definePrivileges(ADMIN_ROLE);


	$editado = true;
	$mensaje = "";
	$error = "";

	if(isset($_POST['nuevaCiudad']))
	{
		$nueva = sanitize($_POST['nuevaCiudad']);
		$DB->ExecuteSQL("INSERT INTO `ciudades` (`id`, `nombre`) VALUES (NULL,'{$nueva}')");
		if(!mysql_errno())
			$mensaje = "La sede <strong>" .$nueva. "</strong> ha sido agregada.";
		else {
			$error = mysql_error();
		}
	}
	else if(isset($_POST['borrarCiudad']))
	{
		$borrar = sanitize($_POST['borrarCiudad']);
		$sql = "DELETE FROM `ciudades` WHERE  `id` = '{$borrar}';";
		$DB->ExecuteSQL($sql);
		if(!mysql_errno())
			$mensaje = "La sede ha sido borrada. ";
		else {
			$error = mysql_error();
		}
	}
	else {
		$editado = false;
	}
	$ciudades = $DB->Select('ciudades');
	$numciudades = $DB->records;

	if($numciudades == 1)
		$ciudades = array($ciudades);
	if(!mysql_errno())
		$error = mysql_error();

$opciones = array(
	'mensaje' => $mensaje,
	'ciudades' => $ciudades,
	'editado' => $editado,
	'error' => $error
	);
	printPage('Ciudades - Admin Juegos 2013', STATIC_FOLDER. 'ciudades.inc', $opciones);
?>
