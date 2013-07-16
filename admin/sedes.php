<?php
	include('core.FurrySkeleton.php');
	definePrivileges(ADMIN_ROLE);


	$editado = true;
	$mensaje = "";
	$error = "";

	if(isset($_POST['nuevaSede']))
	{
		$nueva = sanitize($_POST['nuevaSede']);
		$DB->ExecuteSQL("INSERT INTO `sedes` (`id`, `nombre`) VALUES (NULL,'{$nueva}')");
		if(!mysql_errno())
			$mensaje = "La sede <strong>" .$nueva. "</strong> ha sido agregada.";
		else {
			$error = mysql_error();
		}
	}
	else if(isset($_POST['borrarSede']))
	{
		$borrar = sanitize($_POST['borrarSede']);
		$sql = "DELETE FROM `sedes` WHERE  `id` = '{$borrar}';";
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
	$sedes = $DB->Select('sedes');
	$numsedes = $DB->records;

	if($numsedes == 1)
		$sedes = array($sedes);
	if(!mysql_errno())
		$error = mysql_error();

$opciones = array(
	'mensaje' => $mensaje,
	'sedes' => $sedes,
	'editado' => $editado,
	'error' => $error
	);
	printPage('Sedes - Admin Juegos 2013', STATIC_FOLDER. 'sedes.inc', $opciones);
?>
