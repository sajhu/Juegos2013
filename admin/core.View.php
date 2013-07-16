<?php

	/**
	 * Prints the page
	 * @param $title the title to display in the page header
	 */
	function printPage($titleN = DEFAULT_TITLE, $includeN, $optionsN)
	{
		global $title;
		$title = $titleN;

		global $include;
		$include = $includeN;		

		global $options;
		$options = $optionsN;		
	
		include_once(STATIC_FOLDER. 'template.inc');
	}



	/**
	 * Prints an error message badge
	 * @param $errorMessage String - the error message to be displayed, can contain HTML inside
	 * @param $total boolean - wether to display the message in an entire page and die (true) or just the badge (false)
	 */
	function printError($errorMessage, $total = FALSE)
	{
		if(!$total)
			echo '
			<div class="alert alert-block alert-error">
			  <button type="button" class="close" data-dismiss="alert">&times;</button>
			  <h4>¡Error!</h4>
			  <p>'.$errorMessage.'</p>
			</div>
			<a href="#" class="btn btn-large text-center" onclick="history.back();">Volver</a>

			';
	}

?>