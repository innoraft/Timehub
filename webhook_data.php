<?php

$filename = "c:\webhook.txt";
//$fullPostData = file_get_contents('php://input');
$payload = json_decode($_GET['payload']);
file_put_contents($filename,$payload);
