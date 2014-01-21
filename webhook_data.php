<?php

$filename = "c:\webhook.txt";
$payload = json_decode($_POST['payload.json']);
file_put_contents($filename,$payload);
