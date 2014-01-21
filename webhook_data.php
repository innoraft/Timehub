<?php

$filename = "c:\webhook.txt";
$fullPostData = file_get_contents('php://input');
$payload = json_decode($fullPostData);
file_put_contents($filename,$payload);
