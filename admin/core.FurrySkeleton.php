<?php
/**
 * ActivarSAS ERP
 * aplicacion para www.activarsas.com Copyright (C) Activar SAS
 *
 * Developed by:
 * 	Santiago Rojas - www.santiagorojas.co
 *  Sergio Hernandez Charpak 
 *
 * basado en el FrameWork FurrySkeleteton - https://github.com/sajhu/FurrySkeleton
 */


// --------------------------------------------
// --- Includes
// --------------------------------------------

include_once('core.Settings.php');
include_once(LIB_FOLDER.	'MySQL.php');
include_once(LIB_FOLDER.	'functions.php');
include_once(MAIN_FOLDER.	'core.Security.php');
include_once(MAIN_FOLDER.	'core.View.php');

// --------------------------------------------
// --- Inicio del ORM Propel (Manejo Base de Datos)
// --------------------------------------------

	global $DB;
	$DB = new MySQL(DB_NAME, DB_USER, DB_PASSWORD, DB_HOST);

// --------------------------------------------
// --- Constructor
// --------------------------------------------

	// Checking for a correct session
	handdleSession();

	//$DB = new MySQL(DB_NAME, DB_USER, DB_PASSWORD, DB_HOST);

// --------------------------------------------
// --- Session Globals - **** PLEASE EDIT HERE ***
// --------------------------------------------


	// --- Setting up the user role (please acomodate this to your database-specific names)
		define("USER_ID", getSession('id'));
		#$userVars = $DB->Select('USERS', array('id' => USER_ID));
				
		define('USER_ROLE', ADMIN_ROLE);  #Needs to be set to the actual user's role, for example: $userVars['role']
		define('USER_DISPLAY_NAME', getSession('admin'));


// --------------------------------------------
// --- Main Methods
// --------------------------------------------

	/**
	* Defines user role privileges needed to excecute the actual page
	* if the privilege check fails will print an error page and exit
	* @param $role int - needed role as defined in mod.Settings.php file
	* @param $only boolean - TRUE means only that role is allowed, FALSE for that and higher roles
	*/
	function definePrivileges($role, $only = FALSE)
	{
		if(($only && USER_ROLE != $role) || (!$only &&  USER_ROLE < $role))
			header('HTTP/1.0 403 Forbidden');
	}

	/**
	* Helps to checks user role privileges before executing a method or action
	* @param $role int - needed role as defined in mod.Settings.php file
	* @param $only boolean - TRUE means only that role is allowed, FALSE for that and higher roles
	*/
	function checkPrivileges($role, $only = FALSE)
	{
		if(($only && USER_ROLE != $role) || (!$only &&  USER_ROLE < $role))
			return false;
		else
			return true;
	}	

?>