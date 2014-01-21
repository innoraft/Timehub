<?php

/**
 * @file
 *   JSON unserializer plugin.
 */

$plugin = array(
  'title' => t('JSON'),
  'handler' => array(
    'class' => 'Webhook_Plugins_Unserializer_Json',
  ),
);
