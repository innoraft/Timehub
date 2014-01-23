<?php

$filename = "c:\webhook.txt";
$payload = json_encode($_POST['payload']);
file_put_contents($filename, $payload);
