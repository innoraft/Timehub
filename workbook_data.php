<?php

$values = json_decode($_POST['payload']);
watchdog("integrate_module", print_r( $values));