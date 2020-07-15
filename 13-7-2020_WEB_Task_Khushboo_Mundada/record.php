<?php 
$con = mysqli_connect('localhost','root',"",'stud-record');
if(!$con) {
	echo "<h3>Connection error</h3>".mysqli_connect_error();
}
else {
	echo "<h3>Database Connection Successful</h3>";
}
if(isset($_POST['submit'])) {
	$stud_id = $_POST['stud_id'];
	$query = "SELECT *FROM `records` WHERE `stud_id`='$stud_id'";
	$run = mysqli_query($con,$query);
	$row = mysqli_num_rows($run);
	if($row == 1) {
		echo "<h1>Details are :</h1>";
		$user_row = mysqli_fetch_assoc($run);
		print_r($user_row);
	}
	else {
		echo "<h2>Id not found...</h2>";
		//echo "<h2>Try another student id !</h2>";
	}
}
?>