			<div class="row-fluid hideInIE8">	
				<div class="box span12">
					<div class="box-header">
						<h2><i class="halflings-icon fire"></i><span class="break"></span>Listado de Clientes</h2>
						<div class="box-icon">
							<a href="#" class="btn-minimize"><i class="halflings-icon chevron-up"></i></a>
							<a href="#" class="btn-close"><i class="halflings-icon remove"></i></a>
						</div>
					</div>
					<div class="box-content">
						
						<table class="table table-condensed table-striped table-hover">
							<thead>
								<tr>
									<th>ID</th>
									<th>Nombre</th>
									<th># Activos</th>
									<th style="width: 100px;" colspan="2">Opciones</th>

								</tr>
							</thead>
							<tbody>
<?php
	for($i = 0; $i<10; $i++)
	{
?>
								<tr>
									<td style="align: center;"><?php echo ($i+1);?></td>
									<td>Bancolombia</td>
									<td>98</td>
									<td><a href="" title="Ver este Cliente" data-rel="tooltip"><i class="fa-icon-eye-open"></i></a></td>
									<td><a href="<?php echo ACTUAL_URL;?>?deleteClient=" title="Eliminar este cliente" data-rel="tooltip"><i class=" fa-icon-remove"></i></a></td>
								</tr>
<?php
	}
?>

							</tbody>
						</table>

						<div class="clearfix"></div>
					</div>	
				</div><!--/span-->
				
			</div><!--/row-->		


			