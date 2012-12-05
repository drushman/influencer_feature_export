<?php
/**
 * @file
 * campus_blocks_setting.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function campus_blocks_setting_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Site copyright';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'campus_copyright_menu';
  $fe_block_boxes->body = '<div class="influ_copyright">
	<p class="copyright">Copyright &copy; 2009 - 2012. Paradise Community Church. All rights reserved.</p>
	<p class="copy_link"><a href="/disclaimer">Disclaimer </a>| <a href="/privacy_policy">Privacy Policy</a></p>
</div>';

  $export['campus_copyright_menu'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Dropdown menu in navigation';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'campus_dropdown_menu';
  $fe_block_boxes->body = '<div class="ddm_give">
	<div class="ddm_give_title">
		Give</div>
	<div class="ddm_give_money">
		<a class="active button" href="ddm_place_money">Give money</a></div>
	<div class="ddm_give_time">
		<a class="button" href="ddm_place_time">Give time</a></div>
</div>
<div class="ddm_place">
	<div class="ddm_place_title">
		Global</div>
	<div class="ddm_place_money" id="ddm_place_money">
		<ul>
			<li class="item-title">
				Australia
				<ul>
					<li>
						Paradise</li>
					<li>
						Adelaide City</li>
					<li>
						Adelaide North</li>
					<li>
						Perth</li>
				</ul>
			</li>
			<li class="item-title">
				USA
				<ul>
					<li>
						Atlanta</li>
				</ul>
			</li>
			<li class="item-title">
				Sourth Africa
				<ul>
					<li>
						Coming soon</li>
				</ul>
			</li>
			<li class="item-title">
				Papua New Guinea
				<ul>
					<li>
						Coming soon</li>
				</ul>
			</li>
		</ul>
	</div>
	<div class="ddm_place_time" id="ddm_place_time">
		<ul>
			<li class="item-title">
				Australia
				<ul>
					<li>
						Paradise</li>
					<li>
						Adelaide City</li>
					<li>
						Perth</li>
				</ul>
			</li>
			<li class="item-title">
				USA
				<ul>
					<li>
						Atlanta</li>
				</ul>
			</li>
			<li class="item-title">
				Sourth Africa
				<ul>
					<li>
						Coming soon</li>
				</ul>
			</li>
			<li class="item-title">
				Papua New Guinea
				<ul>
					<li>
						Coming soon</li>
				</ul>
			</li>
		</ul>
	</div>
</div>
';

  $export['campus_dropdown_menu'] = $fe_block_boxes;

  return $export;
}
