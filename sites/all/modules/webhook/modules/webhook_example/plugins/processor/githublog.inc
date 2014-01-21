<?php

/**
 * @file
 * Webhook Processor to log github actions.
 */

$plugin = array(
  'title' => t('Github Logger'),
  'handler' => array(
    'class' => 'Webhook_Example_Plugins_Processor_GithubLog',
  ),
);
