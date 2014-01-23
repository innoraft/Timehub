<?php

$filename = "c:\webhook.txt";
//$fullPostData = file_get_contents('php://input');
//$payload = json_decode($_GET['payload']);
file_put_contents($filename,$payload);
$fullPostData = file_get_contents('php://input');
$data = json_decode($fullPostData);
var_dump($data);
file_put_contents($filename,$data);
