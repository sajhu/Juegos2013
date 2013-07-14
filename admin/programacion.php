<?php
	include('core.FurrySkeleton.php');
	definePrivileges(ADMIN_ROLE);
	printPage('Programación Torneo', STATIC_FOLDER. 'programacion.inc');
?>
