<!DOCTYPE html>
<html lang="es">
<head>
<meta http-equiv="content-type" content="text/html; charset=UTF-8">
      <meta charset="utf-8">
      <title><?php echo DEFAULT_TITLE; ?></title>
      <!-- don't forget to paste your page title! -->
      <meta name="viewport" content="width=device-width, initial-scale=1.0">
      <meta name="description" content="">
      <meta name="author" content="">
      <!-- Le styles -->
      <!-- bootstrap framework styles -->
      <link href="<?php echo CSS_URL;?>bootstrap.css" rel="stylesheet">
      <!-- fancybox lightbox clone plugin styles -->
      <link href="<?php echo CSS_URL;?>fancybox.css" rel="stylesheet">
      <!-- icomoon icons font  -->
      <link href="<?php echo CSS_URL;?>icomoon.css" rel="stylesheet">
        <link href='http://fonts.googleapis.com/css?family=Open+Sans:300italic,400italic,600italic,700italic,800italic,400,300,600,700,800&subset=latin,cyrillic-ext,latin-ext' rel='stylesheet' type='text/css' />

      <!-- sequence slider styles -->
      <!--[if lt IE 8]>
      <link rel="stylesheet" type="text/css" media="screen" href="css/sequencejs_ie.css" />
      <![endif]-->
      <link rel="stylesheet" type="text/css" media="screen" href="<?php echo CSS_URL;?>sequencejs.css">
      <!-- main template styles -->
      <link href="<?php echo CSS_URL;?>styles.css" rel="stylesheet">
      <!-- place for your custom styles -->
      <link href="<?php echo CSS_URL;?>mystyle.css" rel="stylesheet">
      <!-- Le HTML5 shim, for IE6-8 support of HTML5 elements -->
      <!--[if lt IE 9]>
      <script src="http://html5shim.googlecode.com/svn/trunk/html5.js"></script>
      <![endif]-->
   <script style="" src="<?php echo JS_URL;?>commonutilstats.js" charset="UTF-8" type="text/javascript"></script><script src="<?php echo JS_URL;?>AuthenticationService.Authenticate" charset="UTF-8" type="text/javascript"></script></head>
   <body class="">
      <img class="bgwidth" src="<?php echo IMAGE_URL;?>bg-futbol.jpg" id="bg_main" alt="">
      <!--recommended image dimentions 1200x800px with weight under 120kb 
         !note! don't use very light images. It can damage readability of the white text -->
      <div class="container" style="background-color: rgba(0,0,0,0.4)">
         <!-- Main navigation -->
         <div class="row">
            <div class="span12">
               <div class="navbar">
                  <div class="navbar-inner">
                     <div class="container">
                        <a class="btn btn-navbar" data-toggle="collapse" data-target=".nav-collapse"> <span class="icon-bar"></span> <span class="icon-bar"></span> <span class="icon-bar"></span> </a>
                        <a class="brand" href="<?php echo BASE_URL;?>">Juegos 2013</a>
                        <div class="nav-collapse">
                           <ul class="nav">
                              <li class="active">
                                 <a href="<?php echo BASE_URL;?>">Inicio</a>
                              </li>
                              <li><a href="jugar.php">Jugar</a></li>

                              <li>
                                 <a href="cuenta.php">Mi Cuenta (<?php echo USER_DISPLAY_NAME;?>)</a>
                              </li>
                              <li>
                                 <a href="?logout">Salir</a>
                              </li>
                              <li><a href="ayuda.php">Ayuda</a></li>
                           </ul>
                           <!-- social navigation area -->
                           <ul class="nav pull-right">
                              <li><a data-original-title="Facebook" href="#" rel="tooltip" data-placement="bottom"><span class="icomoon-facebook"></span></a></li>
                              <li><a data-original-title="Twitter" href="#" rel="tooltip" data-placement="bottom"><span class="icomoon-twitter"></span></a></li>
                              <li><a data-original-title="Google +" href="#" rel="tooltip" data-placement="bottom"><span class="icomoon-google-plus"></span></a></li>
                              <li><a data-original-title="Vimeo" href="#" rel="tooltip" data-placement="bottom"><span class="icomoon-vimeo"></span></a></li>
                              <li><a data-original-title="Flickr" href="#" rel="tooltip" data-placement="bottom"><span class="icomoon-flickr"></span></a></li>
                              <li><a data-original-title="Feed" href="#" rel="tooltip" data-placement="bottom"><span class="icomoon-feed"></span></a></li>
                              <li><a data-original-title="Dribble" href="#" rel="tooltip" data-placement="bottom"><span class="icomoon-dribbble"></span></a></li>
                           </ul>
                        </div>
                     </div>
                  </div>
               </div>
            </div>
         </div>
         <!-- /Main navigation -->
       <?php

       include(STATIC_FOLDER.$include);

       ?>
         <section class="main">
            <!-- main footer -->
            <footer class="main">
               <div class="row">
                  <div class="span8">
                     <!-- footer main nav -->
                     <nav>
                        <ul>
                              <li class="active"><a href="<?php echo BASE_URL;?>">Inicio</a></li>
                              <li><a href="jugar.php">Jugar</a></li>
                              <li><a href="cuenta.php">Mi Cuenta</a></li>
                              <li><a href="?logout">Salir</a></li>
                              <li><a href="ayuda.php">Ayuda</a></li>
                        </ul>
                     </nav>
                  </div>
                  <div class="span4 text-right">
                     <small>Copyright © <a href="http://dlsolution.com">DLSolution Canada</a> 2013<br>Powered by <a href="http://furryskeleton.santiagorojas.co">FurrySkeleton</a></small>
                  </div>
               </div>
            </footer>
         </section>
      </div>
      <!-- /container --><!-- Le javascript
         ================================================== -->
      <!-- Placed at the end of the document so the pages load faster -->
      <div class="fit-vids-style">­<style>               .fluid-width-video-wrapper {                 width: 100%;                              position: relative;                       padding: 0;                            }                                                                                   .fluid-width-video-wrapper iframe,        .fluid-width-video-wrapper object,        .fluid-width-video-wrapper embed {           position: absolute;                       top: 0;                                   left: 0;                                  width: 100%;                              height: 100%;                          }                                       </style></div><div class="fit-vids-style">­<style>               .fluid-width-video-wrapper {                 width: 100%;                              position: relative;                       padding: 0;                            }                                                                                   .fluid-width-video-wrapper iframe,        .fluid-width-video-wrapper object,        .fluid-width-video-wrapper embed {           position: absolute;                       top: 0;                                   left: 0;                                  width: 100%;                              height: 100%;                          }                                       </style></div><script src="<?php echo JS_URL;?>jquery.js"></script>
      <!-- Bootstrap Framework script -->
      <script src="<?php echo JS_URL;?>bootstrap.js"></script>
      <script> $(function() { $('.carousel').carousel() }); </script>
      <script type="text/javascript">
         $("[rel=tooltip]").tooltip();
      </script>
      <!-- plugin for background images -->
      <script src="<?php echo JS_URL;?>bg_image.js"></script>
      <!-- Fancybox plugin -->
      <script type="text/javascript" src="<?php echo JS_URL;?>fancybox.js"></script>
      <script type="text/javascript">
         $(document).ready(function() {
          /*
          *   Examples - images
          */
         
          $("a#example1").fancybox({
            'padding'       : '0',
            'transitionIn'  : 'fade',
            'transitionOut' : 'fade',
            'overlayColor' : '#000',
            'showNavArrows' : false,
            'titlePosition'   : 'outside',
            'overlayOpacity' : 0.7,
            'width'   : 960,
            'height' : 540
         
          });
         
          $("a#example2").fancybox({
            'overlayShow' : false,
            'transitionIn'  : 'elastic',
            'transitionOut' : 'elastic'
          });
         
          $("a#example3").fancybox({
            'transitionIn'  : 'none',
            'transitionOut' : 'none'  
          });
         
          $("a#example4").fancybox({
            'opacity'   : true,
            'overlayShow' : false,
            'transitionIn'  : 'elastic',
            'transitionOut' : 'none'
          });
         
          $("a#example5").fancybox();
         
          $("a#example6").fancybox({
            'titlePosition'   : 'outside',
            'overlayColor'    : '#000',
            'overlayOpacity'  : 0.9
          });
         
          $("a#example7").fancybox({
            'titlePosition' : 'inside'
          });
         
          $("a#example8").fancybox({
            'titlePosition' : 'over'
          });
         
          $("a[rel=example_group]").fancybox({
            'padding'       : '0',
            'transitionIn'  : 'fade',
            'transitionOut' : 'fade',
            'overlayColor' : '#000',
            'showNavArrows' : true,
            'titlePosition'   : 'outside',
            'overlayOpacity' : 0.7
         
          });
         
          /*
          *   Examples - various
          */
         
          $("#various1").fancybox({
            'titlePosition'   : 'inside',
            'transitionIn'    : 'none',
            'transitionOut'   : 'none'
          });
         
          $("#various2").fancybox();
         
          $("#various3").fancybox({
            'width'       : '75%',
            'height'      : '75%',
            'autoScale'     : false,
            'transitionIn'    : 'none',
            'transitionOut'   : 'none',
            'type'        : 'iframe'
          });
         
          $("#various4").fancybox({
            'padding'     : 0,
            'autoScale'     : false,
            'transitionIn'    : 'none',
            'transitionOut'   : 'none'
          });
         });
      </script><!-- plugin for twitter display -> http://tweet.seaofclouds.com/ -->
      <!-- I am using envato twitter acount as the demo. Don't forget paste yours -->
      <script type="text/javascript" src="<?php echo JS_URL;?>tweet.js"></script>
      <script type="text/javascript">
         //settings for the sidebar twitter area
         jQuery(function($){
           $(".twitter").tweet({
             join_text: "auto",
             username: "envato", //!paste here your twitter username!
             count: 3,
             auto_join_text_default: " we said, ",
             auto_join_text_ed: " we ",
             auto_join_text_ing: " we were ",
             auto_join_text_reply: " we replied ",
             auto_join_text_url: " we were checking out ",
             loading_text: "loading tweets..."
           });
         });
         
      </script>
      <!-- Plugin for responsive video -> http://fitvidsjs.com/ -->
      <script src="<?php echo JS_URL;?>fitvids.js"></script>
      <script>
         $(".container").fitVids();
         $(".container").fitVids({ customSelector: "iframe[src^='http://socialcam.com']"});  
      </script>
      <!-- Script for goolge maps on contact page -->
      <script src="<?php echo JS_URL;?>js" type="text/javascript"></script><script src="<?php echo JS_URL;?>main.js" type="text/javascript"></script>
      <script src="<?php echo JS_URL;?>gmaps.js"></script>
      <script type="text/javascript">
         $(function(){
           $('#map').gmap3({
             marker:{
               address: "Haltern am See, Weseler Str. 151" //place Your address here
             },
             map:{
               options:{
                 zoom: 14
               }
             }
           });
         });
      </script>
      <!-- Sequence slider plugin -->
      <script type="text/javascript" src="<?php echo JS_URL;?>sequence.js"></script>
      <script type="text/javascript"> 
         /mobile/i.test(navigator.userAgent) && !location.hash && setTimeout(function () {
           if (!pageYOffset) window.scrollTo(0, 1);
         }, 1000);
         
         $(document).ready(function(){
          var options = {
            autoPlay: true,
            nextButton: true,
            prevButton: true,
            animateStartingFrameIn: true,
            autoPlayDelay: 3000,
            transitionThreshold: 500
          };
         
          var sequence = $("#sequence").sequence(options).data("sequence");
         
          sequence.afterLoaded = function(){
            $("#nav").fadeIn(100);
            $("#nav li:nth-child("+(sequence.settings.startingFrameID)+") img").addClass("active");
          }
         
          sequence.beforeNextFrameAnimatesIn = function(){
            $("#nav li:not(:nth-child("+(sequence.nextFrameID)+")) img").removeClass("active");
            $("#nav li:nth-child("+(sequence.nextFrameID)+") img").addClass("active");
          }
          
          $("#nav li").click(function(){
            if(!sequence.active){
              $(this).children("img").removeClass("active").children("img").addClass("active");
              sequence.nextFrameID = $(this).index()+1;
              sequence.goTo(sequence.nextFrameID);
            }
          });
         });
      </script>
   
<div id="fancybox-tmp"></div><div id="fancybox-loading"><div></div></div><div id="fancybox-overlay"></div><div id="fancybox-wrap"><div id="fancybox-outer"><div class="fancybox-bg" id="fancybox-bg-n"></div><div class="fancybox-bg" id="fancybox-bg-ne"></div><div class="fancybox-bg" id="fancybox-bg-e"></div><div class="fancybox-bg" id="fancybox-bg-se"></div><div class="fancybox-bg" id="fancybox-bg-s"></div><div class="fancybox-bg" id="fancybox-bg-sw"></div><div class="fancybox-bg" id="fancybox-bg-w"></div><div class="fancybox-bg" id="fancybox-bg-nw"></div><div id="fancybox-content"></div><a id="fancybox-close"></a><div id="fancybox-title"></div><a href="javascript:;" id="fancybox-left"><span class="fancy-ico" id="fancybox-left-ico"></span></a><a href="javascript:;" id="fancybox-right"><span class="fancy-ico" id="fancybox-right-ico"></span></a></div></div></body></html>