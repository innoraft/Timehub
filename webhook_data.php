<?php

$filename = "c:\webhook.txt";
$payload = json_decode(file_get_contents('php://input'), TRUE);
file_put_contents($filename,$payload, FILE_APPEND);
