<?php
session_start();
include('data.php');
if(isset($_POST['submit']))
{
    $username=$_POST['username'];
    $Id=$_POST['user_id'];
    
    $query ="SELECT * FROM `student` WHERE `username`='$username' AND `user_id`='$Id'";
    $run = mysqli_query($con,$query);
    $row =mysqli_num_rows($run);

    if($row ==1)
    {
        
        echo "Details <br>" ;
        $user_row =mysqli_fetch_assoc($run);
        echo"Welcome ".$user_row['username'],"<br>";
        echo"College:".$user_row['college'],"<br>";
        echo"Branch:".$user_row['branch'],"<br>";
        echo"CGPA:".$user_row['cgpa'];
    }
    else
    {
        echo "Invalid Student";
    }
}
?>