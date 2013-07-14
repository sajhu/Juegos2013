<?php
	include('core.FurrySkeleton.php');
	definePrivileges(CLIENTE_ROLE);
	printPage('Clientes - Activar ERP', STATIC_FOLDER. 'clientes.php');
?>
