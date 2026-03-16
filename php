<?php
$ribda_details = [
    "name" => "Ribda",
    "district" => "Rajkot",
    "taluka" => "Lodhika",
    "pincode" => 360311,
    "notable_for" => "Educational institutions and transit connectivity"
];

echo "<h2>Welcome to " . $ribda_details['name'] . "</h2>";
echo "<ul>";
echo "<li>District: " . $ribda_details['district'] . "</li>";
echo "<li>Pincode: " . $ribda_details['pincode'] . "</li>";
echo "<li>Note: " . $ribda_details['notable_for'] . "</li>";
echo "</ul>";
?>
