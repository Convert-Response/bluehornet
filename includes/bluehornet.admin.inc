<?php
/**
* @file
* Blue Hornet Settings Page
*/
function bluehornet_admin_settings() {

  $form['cid'] = array(
    '#type' => 'textfield',
    '#title' => t('CID'),
    '#description' => t("Blue Hornet CID."),
    '#default_value' => variable_get('cid'),
    '#required' => TRUE,
  );
  $form['group'] = array(
    '#type' => 'textfield',
    '#title' => t('Group ID # (grp)'),
    '#description' => t("Blue Hornet Group Numbers. Seperate by commas."),
    '#default_value' => variable_get('group'),
    '#required' => TRUE,
  );
  $form['submission_url'] = array(
    '#type' => 'textfield',
    '#title' => t('URL'),
    '#description' => t("Blue Hornet Submission URL."),
    '#default_value' => variable_get('submission_url'),
    '#required' => TRUE,
  );
  
  
  $form['#submit'][] = 'bluehornet_settings_submit';
  
  return system_settings_form($form);
}
/**
* Blue Hornet Settings Submission
*/

function bluehornet_settings_submit() {
  drupal_set_message("Winning");
}
