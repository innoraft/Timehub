<?php

$filename = "c:\webhook.txt";
$payload = json_decode($_REQUEST['payload']);
file_put_contents($filename, $e . ' ' . $payload, FILE_APPEND);
