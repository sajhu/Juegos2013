<?php
	include('core.FurrySkeleton.php');
	definePrivileges(CLIENTE_ROLE);
	printPage(DEFAULT_TITLE, STATIC_FOLDER. 'resumen.php');
?>
