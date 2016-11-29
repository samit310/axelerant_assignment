<?php

/**
 * @file
 * Incluse file for page_json/%/%node page callback
 *
 * @author Samit K <contact@samitkhulve.com>
 */

/**
 * Page callback for page_json/%/%node
 * @param String $siteapikey
 * @param Object $page_node
 */
function page_json($siteapikey, $page_node) {

  //Convert Basic page node object to json & return
  $page_json_repre = json_encode($page_node);

  return $page_json_repre;
}
