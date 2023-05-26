// Initialize and add the map
function initMap() {
  // The location of Min Kao
  const MinKao = { lat: 35.9587091, lng: -83.9246177 };
  // The map, centered at Min Kao
  const map = new google.maps.Map(document.getElementById("map"), {
    zoom: 4,
    center: MinKao,
  });
  // The marker, positioned at Min Kao
  const marker = new google.maps.Marker({
    position: MinKao,
    map: map,
  });
}
