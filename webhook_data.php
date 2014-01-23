<?php

$filename = "c:\webhook.txt";
$payload = json_decode($_GET['payload']);
file_put_contents($filename,  var_dump($payload));
