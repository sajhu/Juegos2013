<?php
	$ciudades = $options['ciudades'];
	$editado = $options['editado'];
	$error = $options['error'];
	$mensaje = $options['mensaje'];
?>

			<div class="row-fluid">	

				<div class="box span7 offset3" ontablet="span12" ondesktop="span7 offset3">
					<div class="box-header">
						<h2><i class="halflings-icon tasks"></i><span class="break"></span> Ciudades</h2>
						<div class="box-icon">
							<a href="#" class="btn-minimize"><i class="halflings-icon chevron-up"></i></a>
							<a href="#" class="btn-close"><i class="halflings-icon remove"></i></a>
						</div>
					</div>
					<div class="box-content" style="min-height: 224px; float: center;">
						
						<div class="content">
									<fieldset class="">
<?php
	if($editado || $error != '')
	{
	?>
		<div class="alert alert-success">
		  <?=$mensaje.$error;?>
		</div>

		<script>
			window.setTimeout(function() {
			$(".alert").fadeTo(500, 0).slideUp(500, function(){
				$(this).remove(); 
			});
		}, 7000);
		</script>
	<?php
	}
?>
				
			<form name="borrarSeleccionada"  method="post" action="<?=$_SERVER['PHP_SELF'];?>">
				<table class="table table-striped">
					<tr>
						<th style="text-align:center;" width="100px">Seleccionar</th>
						<th>Nombre</th>
					</tr>
<?php

	if($ciudades === true || !$ciudades)
	{
		echo "<tr><td></td><td>No existe ninguna ciudad en el momento</td></tr>";	
	}
	else {
		for($i = 0; $i < sizeof($ciudades); $i++)
		{

		echo "
					<tr>
						<td style=\"text-align:center;\">
							<input type=\"radio\" name=\"borrarCiudad\" id=\"sede".($i)."\" value=\"".$ciudades[$i]['id']."\">
						</td>
						<td><label for=\"sede".($i)."\">".$ciudades[$i]['nombre']."</label></td>
					</tr>";
		}		
	}

?>
					

				</table>
				<br />
<?php
if($editado)
{
?>

<div class="alert alert-success">
  <?=$mensaje;?>
</div>

<script>
	window.setTimeout(function() {
    $(".alert").fadeTo(500, 0).slideUp(500, function(){
        $(this).remove(); 
    });
}, 3000);
</script>
<?php
	}
?>
			<div class="form-actions text-center">
		
				<button type="submit" class="btn btn-warning" >
						Borrar Seleccionada
				</button> 

			</div>
			
			</form>
		</fieldset>
		<fieldset class="">
			<legend>Agregar Nueva</legend>
			
			<form name="agregarNueva" class="form-inline text-center" method="post" action="<?=$_SERVER['PHP_SELF'];?>">
				  <input type="text" name="nuevaCiudad" class="input-xlarge" placeholder="Nueva Sede">
			
					<button type="submit" class="btn btn-success" >
						Guardar
					</button> 
			</form>
				
		
		</fieldset>
	</div>

						
						</div>
					</div>
					
				</div><!--/span-->

					
				</div><!--/span-->
			</div><!--/row-->
