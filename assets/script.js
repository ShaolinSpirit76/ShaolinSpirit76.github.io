// Scroll to top
AOS.init();

var btn = $('.buttonScroll');

$(window).scroll(function() {
  if ($(window).scrollTop() > 300) {
    btn.addClass('show');
  } else {
    btn.removeClass('show');
  }
});

btn.on('click', function(e) {
  e.preventDefault();
  $('html, body').animate({
    scrollTop: 0
  }, '300');
});



// Gestion des ancres

$(document).ready(function() {
  $(".clickOC").click(function() {
    $('html, body').animate({
      scrollTop: $("#certifOC").offset().top
    }, 2000);
  });
});
$(document).ready(function() {
  $(".clickproScol").click(function() {
    $('html, body').animate({
      scrollTop: $("#competences").offset().top
    }, 2000);
  });
});
$(document).ready(function() {
  $(".clickInfo").click(function() {
    $('html, body').animate({
      scrollTop: $("#experience").offset().top
    }, 2000);
  });
});
$(document).ready(function() {
  $(".clickAutre").click(function() {
    $('html, body').animate({
      scrollTop: $("#Autre").offset().top
    }, 2000);
  });
});
$(document).ready(function() {
  $(".clickEnseignement").click(function() {
    $('html, body').animate({
      scrollTop: $("#Enseignement").offset().top
    }, 2000);
  });
});
$(document).ready(function() {
  $(".clickTop").click(function() {
    $('html, body').animate({
      scrollTop: $("#presentation").offset().top
    }, 2000);
  });
});
$(document).ready(function() {
  $(".clickTop1").click(function() {
    $('html, body').animate({
      scrollTop: $("#menu1").offset().top
    }, 2000);
  });
});
$(document).ready(function() {
  $(".clickContact").click(function() {
    $('html, body').animate({
      scrollTop: $("#image7").offset().top
    }, 2000);
  });
});



// Div cachées à l'ouverture de la page d'accueil

$("#certifOC").hide();
$("#competences").hide();
$("#experience").hide();
$("#diplomes").hide();
$("#ParcoursScolaire").hide();
$("#creations").hide();
$("#loisirs").hide();


// Retour à l'accueil : afficher comme à l'ouverture de la page

$(".home").click(function() {
  $("#head").show();
  $("#certifOC").hide();
  $("#competences").hide();
  $("#experience").hide();
  $("#diplomes").hide();
  $("#creations").hide();
  $("#ParcoursScolaire").hide();
  $("#loisirs").hide();
});


// Afficher les compétences

$(".OC").click(function() {
  $("#head").hide();
  $("#experience").hide();
  $("#diplomes").hide();
  $("#ParcoursScolaire").hide();
  $("#creations").hide();
  $("#loisirs").hide();
  $("#competences").hide();
  $("#certifOC").show();
});

// Afficher les compétences

$(".cpt").click(function() {
  $("#head").hide();
  $("#certifOC").hide();
  $("#experience").hide();
  $("#diplomes").hide();
  $("#ParcoursScolaire").hide();
  $("#creations").hide();
  $("#loisirs").hide();
  $("#competences").show();
});

// Afficher l'expérience

$(".exp").click(function() {
  $("#head").hide();
  $("#certifOC").hide();
  $("#competences").hide();
  $("#diplomes").hide();
  $("#ParcoursScolaire").hide();
  $("#creations").hide();
  $("#loisirs").hide();
  $("#experience").show();
});

// Afficher l'expérience dans l'informatique
$(".informatique").click(function() {
  $("#head").hide();
  $("#certifOC").hide();
  $("#competences").hide();
  $("#diplomes").hide();
  $("#ParcoursScolaire").hide();
  $("#creations").hide();
  $("#loisirs").hide();
  $("#experience").show();
});

// Afficher l'expérience Autre
$(".autre").click(function() {
  $("#head").hide();
  $("#certifOC").hide();
  $("#competences").hide();
  $("#diplomes").hide();
  $("#ParcoursScolaire").hide();
  $("#creations").hide();
  $("#loisirs").hide();
  $("#experience").show();
});

// Afficher l'expérience dans l'enseignement
$(".enseignement").click(function() {
  $("#head").hide();
  $("#certifOC").hide();
  $("#competences").hide();
  $("#diplomes").hide();
  $("#ParcoursScolaire").hide();
  $("#creations").hide();
  $("#loisirs").hide();
  $("#experience").show();
});

// Afficher les Diplômes
$(".dpl").click(function() {
  $("#head").hide();
  $("#certifOC").hide();
  $("#competences").hide();
  $("#experience").hide();
  $("#ParcoursScolaire").hide();
  $("#creations").hide();
  $("#loisirs").hide();
  $("#diplomes").show();
});

// Afficher le parcours scolaire
$(".pscol").click(function() {
  $("#head").hide();
  $("#certifOC").hide();
  $("#competences").hide();
  $("#experience").hide();
  $("#diplomes").hide();
  $("#creations").hide();
  $("#loisirs").hide();
  $("#ParcoursScolaire").show();
});

// Afficher les créations
$(".crt").click(function() {
  $("#head").hide();
  $("#certifOC").hide();
  $("#competences").hide();
  $("#experience").hide();
  $("#diplomes").hide();
  $("#ParcoursScolaire").hide();
  $("#loisirs").hide();
  $("#creations").show();
});

// Afficher les loisirs
$(".lsr").click(function() {
  $("#head").hide();
  $("#certifOC").hide();
  $("#competences").hide();
  $("#experience").hide();
  $("#diplomes").hide();
  $("#ParcoursScolaire").hide();
  $("#creations").hide();
  $("#loisirs").show();
});
