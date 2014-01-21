<?php

$filename = "c:\webhook.txt";

try { 
  $payload = json_decode($_REQUEST['payload']);
}
catch(Exception $e) {
    //log the error
    file_put_contents($filename, $e . ' ' . $payload, FILE_APPEND);
}

