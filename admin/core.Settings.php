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
// --- Configurations File
// --------------------------------------------
 
	// ---------------------------------------------------------------------------------
	// Change this seetings as desired, as long as you know what they mean
	// IMPORTANT: parts marked * like this * MUST be set.
	// ---------------------------------------------------------------------------------
// --------------------------------------------

	// Default page <title>
	define('DEFAULT_TITLE', 'Admin Juegos 2013');


// --------------------------------------------

	// Global local folders
	define('DS', DIRECTORY_SEPARATOR);
	define('MAIN_FOLDER', dirname(__FILE__) . DS);

	define('MODEL_FOLDER', MAIN_FOLDER.		'model'		.DS);
	define('LIB_FOLDER', MODEL_FOLDER.		'lib'		.DS);

	define('STATIC_FOLDER', MAIN_FOLDER.	'static'	.DS);

	define('JS_FOLDER', STATIC_FOLDER.		'js' 		.DS);
	define('CSS_FOLDER', STATIC_FOLDER.		'css' 		.DS);


	// --------------- 			^				^
	// In this section, local and remote atributes must refer to the same folder
	// --------------- 			v				v

	// Global remote folders
	define('ACTUAL_URL', $_SERVER['PHP_SELF']); // Don't edit this one

	define('BASE_PAGE', 					'http://localhost');

	define('BASE_URL', 						'/Juegos2013/admin/'); // everything after example.com
	define('JS_URL', BASE_URL. 				'static/js/'	);
	define('CSS_URL', BASE_URL. 			'static/css/'	);
	define('IMAGE_URL', BASE_URL. 			'static/img/'	);

	define('UPLOAD_URL', BASE_URL. 			'uploads/'		);


	// Special pages
	define('LOGIN_PAGE', 					'login.php');



// --------------------------------------------

	// * User Roles *
	// Add or change the names and levels of the roles as you which, this is an example
	define('ADMIN_ROLE', 					10);
	define('ASISTENTE_ROLE',				8);
	define('CELADOR_ROLE', 					6);
	define('ADMINREPRESENTANTE_ROLE', 		3);
	define('REPRESENTANTE_ROLE', 			2);




	// Session Times in seconds - Use -1 to disable the feature
	define('SESSION_REGENERATE_TIME', 		300); // Will regenerate Session id for seccurity issues, should be short
	define('SESSION_EXPIRE_TIME', 			900); // After this time without using the application a re-login will be forced


// --------------------------------------------

	// * Database connections *
	define('DB_NAME',						'juegos2013');
	define('DB_USER',						'root');
	define('DB_PASSWORD',					'coovxpexrask');
	define('DB_HOST',						'localhost'); 


// --------------------------------------------

	// Set PHP error reportings
	error_reporting(E_ALL);
?>