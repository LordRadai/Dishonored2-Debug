1615 unique cvars

### aas_subdivisionSize

- **Value:** `64`
- **Description:** the size of subdivisions to use for debug drawing

### achievements_Verbose

- **Value:** `0`
- **Description:** debug spam for achievements

### ai_debugCam

- **Value:** `0`
- **Description:** enable debug camera

### ai_debugScript

- **Value:** `-1`
- **Description:** displays script calls for the specified monster entity number

### ai_showObstacleAvoidance

- **Value:** `0`
- **Description:** draws obstacle avoidance information. 2,4 = draw obstacles for player, 3,4 = top-down view

### ai_stuckDistanceFraction

- **Value:** `0.9`
- **Description:** —

### aigui_scale

- **Value:** `0.25`
- **Description:** scale for AI GUI text

### aigui_titleSafe

- **Value:** `0.0`
- **Description:** title safe ratio region

### anim_allowWeakRefs

- **Value:** `1`
- **Description:** 1 = allow weak references to .md6anim resources, 0 = force strong references for all .md6anims

### anim_forceReload

- **Value:** `0`
- **Description:** if != 0, then anims will always be reloaded from text if available.

### anim_showLoads

- **Value:** `0`
- **Description:** 1 = show debug info while loading animations

### arkFlashHeight

- **Value:** `1080.0`
- **Description:** Height of the flash for the HUD.

### arkFlashWidth

- **Value:** `1920.0`
- **Description:** Width of the flash for the HUD.

### arkMetrics_EnablePlaytest

- **Value:** `0`
- **Description:** Enable sending or not playtest metrics

### arkMetrics_enabled

- **Value:** `1`
- **Description:** enable/disable arkmetrics system

### arkMetrics_log

- **Value:** `0`
- **Description:** log arkmetrics on console

### arkMetrics_serverAddress

- **Value:** `frlyobuildsvc.arkane-studios.lan`
- **Description:** address used to send metrics

### ark_DbgServer_Port

- **Value:** `5674`
- **Description:** The TCP port to communicate to send remote commands.

### ark_HLSL_EnableInterpolatorCompression

- **Value:** `1`
- **Description:** Enables shader interpolators compression.

### ark_HLSL_EnableInterpolatorPacking

- **Value:** `1`
- **Description:** Enables packing shader interpolators into tight FLOAT4/UINT4 vectors.

### ark_adrenalineFullForever

- **Value:** `0`
- **Description:** Set to true and adrenaline will be full forever

### ark_ai_activator_component_debug

- **Value:** `0`
- **Description:** If true, prints component activator BT task debug info

### ark_ai_animUnsync_maxPlayrateDelta

- **Value:** `0.3`
- **Description:** —

### ark_ai_animUnsync_midnightBufferDuration

- **Value:** `0.3`
- **Description:** —

### ark_ai_animUnsync_minPlayrateDelta

- **Value:** `0.2`
- **Description:** —

### ark_ai_attention_setting_use_legacy

- **Value:** `0`
- **Description:** If true, use deprecated attention setting vars (m_maxAttentionLevel/m_yield), else use the new ones( m_attentionGain_discrete/m_attentionGain_continuous )

### ark_ai_avoidance_display_edge

- **Value:** `-1`
- **Description:** Display edge with this index

### ark_ai_bloodbriar_show_versus_dist

- **Value:** `0`
- **Description:** Visually display grab distance

### ark_ai_bt_task_debug_all

- **Value:** `0`
- **Description:** If true, all bt tasks debug log will be activated

### ark_ai_bt_unittesting

- **Value:** `0`
- **Description:** if true we are unit testing the class. This allow the BT to not have an entity

### ark_ai_combat_position_update_delta

- **Value:** `0.05`
- **Description:** How much should the wanted position/tolerance move to update the navigation request in combat

### ark_ai_control_npc_as_a_player_view_offset_fact

- **Value:** `0.05`
- **Description:** Changes how fast the camera can be offset.

### ark_ai_control_npc_as_a_player_view_sensitivity

- **Value:** `0.02`
- **Description:** Changes how fast the camera can be rotated.

### ark_ai_control_npc_control_look_at

- **Value:** `0`
- **Description:** If true right stick controls look at direction instead of orientation.

### ark_ai_debug_fleeposition

- **Value:** `0`
- **Description:** If true and debug_arkCpntFleeManager, displays debug for flee

### ark_ai_doors_forbid_close_anims

- **Value:** `0`
- **Description:** Set to 1 to always forbid open&close animation (so NPC always play open animations)

### ark_ai_doors_forbid_openclose_anims

- **Value:** `0`
- **Description:** Set to 1 to always forbid open&close animation (so NPC always play open animations)

### ark_ai_dsm_cleanup_freq

- **Value:** `0.5f`
- **Description:** frequency with which the influence is cleaned up by NPCs

### ark_ai_dsm_cleanup_offsetz

- **Value:** `1.7f`
- **Description:** Vertical offset substracted from view position in order to compute cleanup origin

### ark_ai_dsm_cleanup_square_size

- **Value:** `2`
- **Description:** 'radius' of the square around the NPC where influence is always cleaned up, in cells

### ark_ai_dsm_evaluator_debug

- **Value:** `0`
- **Description:** Draws DSM evaluation.

### ark_ai_dsm_evaluator_debug_invalids

- **Value:** `0`
- **Description:** Do not display invalid cells.

### ark_ai_dsm_evaluator_debug_next

- **Value:** `0`
- **Description:** Select the next evaluator.

### ark_ai_dsm_evaluator_debug_prev

- **Value:** `0`
- **Description:** Select the prev evaluator.

### ark_ai_dsm_evaluator_debug_tag

- **Value:** ``
- **Description:** In case several DSM evaluators are executed on the same NPC at the same time, this will draw information for the one with this tag.

### ark_ai_dsm_flee_neighbor_max_z

- **Value:** `0.5f`
- **Description:** max Z between two cell to be considered as flee position

### ark_ai_enable_spineBend

- **Value:** `1`
- **Description:** If true spine bend is enabled

### ark_ai_hound_show_versus_dist

- **Value:** `0`
- **Description:** Visually display grab distance

### ark_ai_hound_skull_immobility_speed

- **Value:** `0.1`
- **Description:** Below this speed, the skull will be considered immobile.

### ark_ai_hound_skull_max_drop_angular_speed

- **Value:** `1`
- **Description:** Speed set on the gravehound's skull angular velocity when dropped.

### ark_ai_hound_skull_max_drop_linear_speed

- **Value:** `1`
- **Description:** Speed set on the gravehound's skull linear velocity when dropped.

### ark_ai_log_traversal

- **Value:** `0`
- **Description:** if true print traversal log for all entities

### ark_ai_log_traversal_selected

- **Value:** `0`
- **Description:** if true print traversal log on the debug entity only

### ark_ai_navigation_show_current_face

- **Value:** `0`
- **Description:** Set to 1 to display the current navmesh face.

### ark_ai_navigation_show_state

- **Value:** `1`
- **Description:** Set to 0 to disable navigation's base state

### ark_ai_navigation_show_state_text

- **Value:** `1`
- **Description:** Set to 0 to disable navigation's base state text

### ark_ai_navigation_show_traversal_info

- **Value:** `0`
- **Description:** Set to 1 to display traversal info.

### ark_ai_navigation_show_user_edge_info

- **Value:** `1`
- **Description:** Set to 1 to display user edge info.

### ark_ai_pathfind_show_moved_goal

- **Value:** `0`
- **Description:** Set to 1 to show HUD info when goal is moved

### ark_ai_pathfind_show_snap_to_navmesh

- **Value:** `0`
- **Description:** Set to 1 to show special snap-to-navmesh information in debug display

### ark_ai_player_exposed_delay

- **Value:** `5.0`
- **Description:** Delay in seconds for which we consider the player exposed after having busted him once

### ark_ai_reflex_log

- **Value:** `0`
- **Description:** If 1, logs the midnight scenes played by AI reflexes.

### ark_ai_search_spot_dynamic_poscheck_periodicity

- **Value:** `1.f`
- **Description:** position change is check at this rate (in sec)

### ark_ai_search_spot_dynamic_poscheck_tolerance

- **Value:** `0.5f`
- **Description:** if position has changed more than this, reposition on smart object layer

### ark_ai_skill_spikes_debug

- **Value:** `0`
- **Description:** If set to true, display debug infos about the spikes skill.

### ark_ai_skill_spikes_trigger

- **Value:** `0`
- **Description:** If set to true, will trigger a spikes spell on selected NPC.

### ark_ai_skill_summon_bloodbriar_debug

- **Value:** `0`
- **Description:** If set to true, display debug infos about the blood briar summon skill.

### ark_ai_skill_summon_bloodbriar_debug_force_target_player

- **Value:** `0`
- **Description:** If set to true, the player will be considered as the main target.

### ark_ai_skill_summon_bloodbriar_despawn

- **Value:** `0`
- **Description:** If set to true, will despawn a blood briar.

### ark_ai_skill_summon_bloodbriar_spawn

- **Value:** `0`
- **Description:** If set to true, will spawn a blood briar.

### ark_ai_skill_supportspell_debug

- **Value:** `0`
- **Description:** If set to true, display debug infos about the support spell skill.

### ark_ai_skill_supportspell_force_target_all

- **Value:** `0`
- **Description:** If set to true, will always send the support spell to all witches around.

### ark_ai_skill_supportspell_trigger

- **Value:** `0`
- **Description:** If set to true, will trigger a support spell on selected NPC.

### ark_ai_skill_teleport_enable

- **Value:** `1`
- **Description:** If set to true, witch teleport is enabled.

### ark_ai_skill_teleport_force_dodge_dir

- **Value:** `ARK_SKILL_TELEPORT_DIR_LEFT_OR_RIGHT`
- **Description:** Set the dodge direction.

### ark_ai_skill_teleport_force_engage_space

- **Value:** `AI_ENGAGE_SPACE_MELEE`
- **Description:** Force the engage space.

### ark_ai_skill_teleport_freeze_state

- **Value:** `INACTIVE`
- **Description:** Set the state to freeze.

### ark_ai_sound_debug_duration

- **Value:** `5.f`
- **Description:** time (in s.) for which a sound debug is displayed

### ark_ai_sound_debug_propagation_check_ratio

- **Value:** `0.3f`
- **Description:** if debug_arkCpntAISensor_Audio is true, checks that the ratio (ai sound propagation dist)/(real sound propagation dist) is under this value

### ark_ai_task_debuglog_show

- **Value:** `0`
- **Description:** If true, displays debug display log from arkBTTask_Action_DebugLog

### ark_ai_task_lookat_debug

- **Value:** `0`
- **Description:** If true, displays debug overlays for look at action

### ark_ai_walloflight_warn_frequency_check

- **Value:** `1.0f`
- **Description:** The frequency to check for the NPC to warn that a WoL has been hacked/is malfunctioning

### ark_anim_foot_curve_compression_min_gradient

- **Value:** `0.5`
- **Description:** Output animation meta data log info

### ark_attachment_root_joint

- **Value:** `center_root_jnt`
- **Description:** Sets the root joint for attachment validation

### ark_autosave_in_journal

- **Value:** `1`
- **Description:** If true, current game will be auto-saved when closing the journal menu

### ark_bendTimeLastsForever

- **Value:** `0`
- **Description:** Set to true and bend time will never stop

### ark_blackMarket_dumpItemShelves

- **Value:** `0`
- **Description:** If true, print the item shelves shortcut

### ark_blackMarket_unlockAll

- **Value:** `0`
- **Description:** If true, every item in blackMarket is unlocked

### ark_bloodthirsty_enableNoTarget

- **Value:** `0`
- **Description:** Allow to player bloodthirsty without target (debugging purpose)

### ark_bloodthirsty_grappleSlowdown

- **Value:** `0.5`
- **Description:** Slowdown applied to bloodthirsty double kill when the player is grappling

### ark_bt_tasktest_deferred_counter

- **Value:** `5`
- **Description:** If ==0 bt action will exit immediately when running arkBTTest cmd

### ark_buddha_npc

- **Value:** `0`
- **Description:** If 1, enables buddha on all NPCs

### ark_buddha_player

- **Value:** `0`
- **Description:** If 1, enables buddha mode on the player

### ark_buildingMap

- **Value:** `0`
- **Description:** true when building a map

### ark_camera_blackmarket_enableDebugDraw

- **Value:** `0`
- **Description:** Enable debug draw

### ark_camera_blackmarket_sideOffset

- **Value:** `1.25`
- **Description:** Side offset applied to the player in blackmarket item section

### ark_chaos_override

- **Value:** `-1`
- **Description:** Override the chaos level.

### ark_close_combat_debug_lifetime

- **Value:** `1.0f`
- **Description:** Duration of close combat debug draws (in seconds).

### ark_darkVisionForeShadowMoveTolerance

- **Value:** `0.2`
- **Description:** How far the fore shadow position can move from its displyed position before it is despawned and respawned at its real position

### ark_darkVisionForeShadowUseLastKnownPos

- **Value:** `1`
- **Description:** Set to true and dark vision fore shadow upgrade will use last known position instead of search target

### ark_darkVisionLastsForever

- **Value:** `0`
- **Description:** Set to true and dark vision will never stop

### ark_darkVisionSoundDrawDebug

- **Value:** `0`
- **Description:** Display sound debug draw if true

### ark_darkVisionSoundPropagationVelocity

- **Value:** `340`
- **Description:** Sound propagation velocity

### ark_darkVisionUseActualGoalPostion

- **Value:** `0`
- **Description:** If true, use the actual goal position and take tolerance radius into account

### ark_darkVisionUseFullPath

- **Value:** `0`
- **Description:** Set to true and dark vision path will be complete with full patrol

### ark_dbg_cis

- **Value:** `0`
- **Description:** Enabled while CIS is active

### ark_dbg_infinite_coins

- **Value:** `0`
- **Description:** Infinite coins

### ark_dbg_player_instigator

- **Value:** `0`
- **Description:** If true, enable debugging of PlayerInstigator flagged bodies.

### ark_dbg_showMdntPoolsGauge

- **Value:** `0`
- **Description:** Enable Midnight Pool gauge display

### ark_debugAiCharacters

- **Value:** `0`
- **Description:** 1 = display characters

### ark_debugAiCharactersAngularVelocity

- **Value:** `0`
- **Description:** 1 = display characters angular velocity

### ark_debugAiCharactersCharacterId

- **Value:** `0`
- **Description:** 1 = display characters IDs

### ark_debugAiCharactersDesiredVelocity

- **Value:** `0`
- **Description:** 1 = display characters desired velocity

### ark_debugAiCharactersForwardDirection

- **Value:** `1`
- **Description:** 1 = display characters forward direction

### ark_debugAiCharactersLinearVelocity

- **Value:** `0`
- **Description:** 1 = display characters linear velocity

### ark_debugAiCharactersPath

- **Value:** `1`
- **Description:** 1 = display characters path

### ark_debugAiCharactersPathState

- **Value:** `0`
- **Description:** 1 = display characters path state

### ark_debugAiCharactersPosAndRadius

- **Value:** `1`
- **Description:** 1 = display characters position and radius

### ark_debugAiNavmeshClusters

- **Value:** `0`
- **Description:** 1 = display navmesh clusters

### ark_debugAiNavmeshEdgeLabels

- **Value:** `0`
- **Description:** 1 = display navmesh edge labels

### ark_debugAiNavmeshEdgeNormals

- **Value:** `0`
- **Description:** 1 = display navmesh edge normals

### ark_debugAiNavmeshEdges

- **Value:** `1`
- **Description:** 1 = display navmesh edges

### ark_debugAiNavmeshFaceLabels

- **Value:** `0`
- **Description:** 1 = display navmesh face labels

### ark_debugAiNavmeshFaceMaterials

- **Value:** `1`
- **Description:** 1 = display navmesh face materials

### ark_debugAiNavmeshFaceNormals

- **Value:** `0`
- **Description:** 1 = display navmesh face normals

### ark_debugAiNavmeshGeometry

- **Value:** `0`
- **Description:** 1 = display navmesh geometry

### ark_debugAiNavmeshGeometryWithTransparency

- **Value:** `1`
- **Description:** 1 = display navmesh geometry with transparency

### ark_debugAiNavmeshUserEdges

- **Value:** `1`
- **Description:** 1 = display navmesh user edges

### ark_debugAiNavmeshVertexLabels

- **Value:** `0`
- **Description:** 1 = display navmesh vertex labels

### ark_debugAiNavmeshVertexNormals

- **Value:** `0`
- **Description:** 1 = display navmesh vertex normals

### ark_debugAiNavvolume

- **Value:** `0`
- **Description:** 1 = display navvolume geometry

### ark_debugAiPathRequest

- **Value:** `0`
- **Description:** 1 = display path request

### ark_debugAiSensor

- **Value:** `0`
- **Description:** 1 = display sensors

### ark_debugPhysicsBoundingRadiuses

- **Value:** `0`
- **Description:** 1 = display bounding radiuses

### ark_debugPhysicsContactPoint

- **Value:** `0`
- **Description:** 1 = display contact points

### ark_debugPhysicsMotionTrails

- **Value:** `0`
- **Description:** 1 = display motion trails

### ark_debugPhysicsShapes

- **Value:** `0`
- **Description:** 1 = display shapes

### ark_debug_51187_enable_crash_on_invalid_stance

- **Value:** `0`
- **Description:** Enable checks for bug 51187 tracking

### ark_debug_anim_display_generated_data_log

- **Value:** `1`
- **Description:** Output animation meta data log info

### ark_decoy_debug_blink

- **Value:** `1`
- **Description:** Set to 1 to show decoy bink debug informations

### ark_decoy_debug_flee_path

- **Value:** `1`
- **Description:** Set to 1 to show the decoy flee path

### ark_decoy_debug_floodfill_graph

- **Value:** `0`
- **Description:** Set to 1 to show the graph generated with the havok floodfill

### ark_decoy_debug_navmesh_faces

- **Value:** `0`
- **Description:** Set to 1 to show the faces traversed by havok floodfill

### ark_decoy_debug_player_danger

- **Value:** `0`
- **Description:** Set to 1 to the player danger used for decoy flee

### ark_difficulty_current

- **Value:** `0`
- **Description:** Current difficulty index

### ark_difficulty_level_override

- **Value:** `-1`
- **Description:** to override difficulty level.

### ark_drawAllComponentsInfo

- **Value:** `0`
- **Description:** toggle all components info display

### ark_enableLookAtArm

- **Value:** `0`
- **Description:** —

### ark_enable_vprint

- **Value:** `1`
- **Description:** Authorize to have messages in console and on screen

### ark_fieldOfView

- **Value:** `80`
- **Description:** horizontal field of view in degree, (this value is silently modified by the system to fit aspect ratio)

### ark_fs_check_io_mutex

- **Value:** `0`
- **Description:** Run-time check that the IO mutex has been acquired before any IO operation

### ark_fs_distantStoragePath

- **Value:** `\\vault04\build-center\generated_shared`
- **Description:** Distant storage path used to share resources

### ark_fs_pk5_filelist

- **Value:** `pk5FileList.xml`
- **Description:** File listing pk5 files present in the base folder

### ark_fs_resourceCache

- **Value:** `voidResourceCache`
- **Description:** Location of generated data (content hash based binary files)

### ark_fs_syncDistantOnLoad

- **Value:** `0`
- **Description:** Will update distant share with local loaded files

### ark_fs_verbosityOnLoad

- **Value:** `0`
- **Description:** Will log opened file from each file container

### ark_gamelogic_debugswitch

- **Value:** `0`
- **Description:** if true, we display gamelogic switch debug information

### ark_god_npc

- **Value:** `0`
- **Description:** If 1, enables god mode on all NPCs

### ark_god_player

- **Value:** `0`
- **Description:** If 1, enables god mode on the player

### ark_groundAlignerToleranceDownwards

- **Value:** `2.0`
- **Description:** How far below alignment joint the world palpating ray will end

### ark_groundAlignerToleranceUpwards

- **Value:** `1.5`
- **Description:** How far above alignment joint the world palpating ray will start

### ark_havok_display_radius

- **Value:** `-1.f`
- **Description:** Havok geometry outside this radius won't be rendered. Set to -1 to ignore.

### ark_hotSteamForever

- **Value:** `0`
- **Description:** Set to true and hot steam will be raised forever

### ark_hud_enable_keyhole

- **Value:** `1`
- **Description:** Enable HUD keyhole

### ark_input_set_gamepad_preset

- **Value:** `0`
- **Description:** The selected gamepad configuration

### ark_input_set_gamepad_psvita

- **Value:** `0`
- **Description:** If true, PSVita binding is enabled

### ark_inventory_mana_potion_autouse

- **Value:** `1`
- **Description:** If true will automatically use a mana potion when trying to cast a power without enough mana.

### ark_killcam_chance_setting

- **Value:** `1`
- **Description:** Set the killcam appearance chance.

### ark_kiscule_logInstance

- **Value:** `0`
- **Description:** If 1, Kiscule Instances will log everything

### ark_kiscule_logManager

- **Value:** `1`
- **Description:** If 1, Kiscule Manager will log everything

### ark_kiscule_logRuntimeTypeChecks

- **Value:** `0`
- **Description:** If 1, Kiscule will log all its runtime check verification (WINDOWS/DEBUG only)

### ark_kiscule_rayTraceDebugDraw

- **Value:** `0`
- **Description:** Use debug draw in rayTrace

### ark_langDeclMinimalRegister

- **Value:** `english`
- **Description:** Register only the specified lang

### ark_loco_curvature_measurer_samples_count

- **Value:** `20`
- **Description:** Number of velocity samples that will be considered to measure move curvature

### ark_loco_idle_min_angle_for_in_place_rotation

- **Value:** `0.005f`
- **Description:** Minimum deviation angle from requested orientation which will trigger in-place reorient

### ark_loco_max_yaw_for_straight_movement

- **Value:** `0.75f`
- **Description:** Defines above which angle in radian between velocity and orientation movement is no longer straight

### ark_loco_null_angular_velocity_tol

- **Value:** `0.01f`
- **Description:** Defines below which length an angular velocity is considered zero

### ark_loco_null_linear_velocity_tol

- **Value:** `0.01f`
- **Description:** Defines below which length a linear velocity is considered zero

### ark_lookatPool

- **Value:** `32`
- **Description:** look at average

### ark_mainMenuMap

- **Value:** `campaign/menu/menu_p`
- **Description:** loads a default map if no -map arg is passed

### ark_missionPlus_forceEnable

- **Value:** `0`
- **Description:** If true, enable missionPlus without BNET account.

### ark_missionPlus_unlockAll

- **Value:** `0`
- **Description:** If true, unlock all mission in MissionPlus mode.

### ark_nav_avoidance_angular_subdiv_for_default_space

- **Value:** `32`
- **Description:** How many edges are used to model a full circle in avoidance's initial valid ORCA space.

### ark_nav_cutter_validate

- **Value:** `0`
- **Description:** If true, enable navmesh cutter validations

### ark_nav_navmesh_display_offset

- **Value:** `0.1f`
- **Description:** Vertical offset for navmesh debug display

### ark_nav_pathfollow_display_offset

- **Value:** `0.1f`
- **Description:** Small vertical offset for path follow debug display added to the Navmesh's display offset

### ark_nav_pathfollow_display_traversal_filter

- **Value:** `0`
- **Description:** Display traversal filters for avoidance boundaries.

### ark_nav_pathfollow_display_traversed_edges

- **Value:** `0`
- **Description:** Display edges traversed by path.

### ark_nav_pathfollow_display_traversed_edges_face

- **Value:** `0`
- **Description:** Display face associated to edge traversed by path.

### ark_nav_pathfollow_display_traversed_edges_index

- **Value:** `-1`
- **Description:** Display edge traversed by path with this index.

### ark_noShadowWalkWhenBusted

- **Value:** `0`
- **Description:** Set to false to enable shadow walking when busted.

### ark_phantasmalLinksExtensToInfinity

- **Value:** `0`
- **Description:** Set to true and phantasmal links will never be removed due to distance between plugs

### ark_phantasmalLinksLastForever

- **Value:** `0`
- **Description:** Set to true and phantasmal links will never be removed due to time

### ark_phantasmalTimerAfterDeath

- **Value:** `2.0`
- **Description:** How long a plug stay active after death ( or aslepp )

### ark_phys_ContactEventWarmupNbFrames

- **Value:** `100`
- **Description:** Nb Trames before starting considering contact events

### ark_phys_ContactMinImpulseForEvent

- **Value:** `0.01`
- **Description:** Min contact impulse to trigger contact on contact system.

### ark_phys_debugServerPort

- **Value:** `25001`
- **Description:** The havok server debug port

### ark_physics_impulser_ignore_delay

- **Value:** `10.f`
- **Description:** Time in seconds since last impulse for considering the LastImpulserId not relevant anymore

### ark_physics_query_separation_draw

- **Value:** `0`
- **Description:** Show global debug info for separation queries

### ark_physics_query_separation_draw_iter

- **Value:** `-1`
- **Description:** Show detailed debug info for specific iteration during separation queries

### ark_physics_query_separation_draw_substeps

- **Value:** `0`
- **Description:** Show iterations debug info for separation queries

### ark_playerBobAmount

- **Value:** `1.0`
- **Description:** bob amount.

### ark_playerClimbMode

- **Value:** `0`
- **Description:** Climb mode: 0 = relative, 1 = absolute.

### ark_playerFlightAirVolumetricMass

- **Value:** `1.0`
- **Description:** The air volumetric mass, used when player flies

### ark_playerFlightAirfoilForceMax

- **Value:** `500.0`
- **Description:** The maximum force that can be applied by airfoil dynamics

### ark_playerFlightAirfoilTimeStepMax

- **Value:** `0.0033`
- **Description:** The maximum time step taken by airfoil dynamics integrator

### ark_playerForceVersus

- **Value:** `0`
- **Description:** force versus.

### ark_playerSmallFallCooldown

- **Value:** `0.5`
- **Description:** Cooldown between two consecutives small falls.

### ark_playerSmoothedLoco

- **Value:** `1`
- **Description:** smoothed locomotion.

### ark_player_assassination_force_carry

- **Value:** `0`
- **Description:** To force carrying the corpse after each assassination.

### ark_player_assassination_retargeting_code_driven

- **Value:** `1`
- **Description:** If true, the retargeting of assassinations and fatalities on the floor is code driven.

### ark_player_autoaim_model_mouse

- **Value:** `0`
- **Description:** 0: off - 1: snap - 2: friction

### ark_player_autoaim_model_pad

- **Value:** `1`
- **Description:** 0: off - 1: snap - 2: friction

### ark_player_autoaim_strength_mouse

- **Value:** `1.0f`
- **Description:** the strength of the auto aim. The more it is the more it attract the crosshair from far

### ark_player_autoaim_strength_pad

- **Value:** `1.0f`
- **Description:** the strength of the auto aim. The more it is the more it attract the crosshair from far

### ark_player_camera_umbra_extrapol_velocity_limit

- **Value:** `8.0`
- **Description:** Maximal extrapolation velocity for umbra camera fixup (m/s)

### ark_player_camera_umbra_tolerance

- **Value:** `0.0`
- **Description:** Additional radius for umbra camera fixup ( added to base UMBRA_SMALLEST_HOLE \* sqrt(3.0) )

### ark_player_follow_waves

- **Value:** `1`
- **Description:** If true the player will follow waves when swimming at the surface.

### ark_player_new_blink

- **Value:** `1`
- **Description:** If true, use the new blink sensor.

### ark_player_override

- **Value:** `0`
- **Description:** Override the default player.

### ark_player_shortcut_force_toggle_mode

- **Value:** `0`
- **Description:** If true will force the toggle mode.

### ark_player_shortcut_kb_display_duration

- **Value:** `0.3`
- **Description:** Keyboard shortcuts display duration when using the mouse wheel

### ark_player_statistics_show_add

- **Value:** `0`
- **Description:** If true will printf info every time a stat is added.

### ark_player_statistics_show_endresult

- **Value:** `0`
- **Description:** If true will printf info at end result screen.

### ark_possessionDoNotHideHost

- **Value:** `0`
- **Description:** Set to true will maintain host's visibility.

### ark_possessionEjectVerticalTolerance

- **Value:** `0.55`
- **Description:** Changes the allowed correction length when ejection position in inside collisions

### ark_possessionLastsForever

- **Value:** `0`
- **Description:** Set to true and host will be yours forever, mouahahahaha!

### ark_retargeting_separationVectorOffsetMin

- **Value:** `0.5`
- **Description:** Minimum offset needed to force separation vector compute when retargeting is finished.

### ark_retargeting_separationVectorResultMaxOffset

- **Value:** `0.15`
- **Description:** Maximum offset of the separation vector result to trigger the teleportation.

### ark_rule_version_upgrade_diagnostic

- **Value:** `0`
- **Description:** If 1, print upgrading rule handlers.

### ark_rulhandler_allocator

- **Value:** `1`
- **Description:** If true, use the custome ruleHandler allocator.

### ark_rumble_enable

- **Value:** `1`
- **Description:** If true, enable rumble on pad

### ark_rumble_impulse_duration

- **Value:** `0.1`
- **Description:** The impulse duration for a rumble (in second)

### ark_safeZoneMaxIterationMove

- **Value:** `0.5`
- **Description:** Maximum move length between tow iterations of separation vector computing

### ark_safeZoneRepositioningTolerance

- **Value:** `0.05`
- **Description:** Distance below which the target is considered reached

### ark_savedAudioLanguage

- **Value:** `65535`
- **Description:** When 65535, uses the system language; english otherwise

### ark_savedTextLanguage

- **Value:** `65535`
- **Description:** Set the desired text language

### ark_shadow_grapple_cast_mode

- **Value:** `0`
- **Description:** Shadow Grapple snap-targeting mode (0 = no snap, 1 = hold to snap, 2 = press again to snap).

### ark_shadow_grapple_snapping_enabled

- **Value:** `1`
- **Description:** Shadow Grapple snapping.

### ark_shadow_walk_hiding_enabled

- **Value:** `0`
- **Description:** Enables hiding to walls when shadowwalking.

### ark_showSkel

- **Value:** `0`
- **Description:** draw the skeleton of current debugged entity

### ark_showSkelAxisAlpha

- **Value:** `0.2f`
- **Description:** alpha used to display joint axis of the anim only skeleton

### ark_showSkelAxisScale

- **Value:** `1.0f`
- **Description:** scale used to draw joint axis of the skeleton

### ark_showSkelButNotCpnt

- **Value:** `0`
- **Description:** draw skeleton but not the debug info of the component

### ark_showSkelFaceFxJoints

- **Value:** `0`
- **Description:** draw the face fx joints

### ark_showSkelHelperJoints

- **Value:** `0`
- **Description:** draw the helper joints

### ark_showSkelJointContaining

- **Value:** ``
- **Description:** draw only joints with name containing this substring

### ark_showSkelJointMod

- **Value:** `0`
- **Description:** draw joint mod on the skeleton

### ark_showSkelJointModOnly

- **Value:** `0`
- **Description:** draw only joints with joint mod on the skeleton

### ark_showSkelTextAlpha

- **Value:** `0.8f`
- **Description:** alpha used to display joint names of the anim only skeleton

### ark_showSkelTextScale

- **Value:** `1.0f`
- **Description:** scale used to draw joint names of the skeleton

### ark_show_ui

- **Value:** `1`
- **Description:** false = disable UI, true = enable UI

### ark_speech_combinatory_policy

- **Value:** `1`
- **Description:** Define the speech assets loading policy : 0 - Legacy, 1 - common for barks and fall back allowed, 2 - Strict decl matching, no fall back

### ark_speech_debugdisplay

- **Value:** `0`
- **Description:** If true, always show the lines of a speaking NPC even if debug_arkCpntSpeech is not on

### ark_speech_debugdisplay_depth_test

- **Value:** `1`
- **Description:** If true, test depth on speech text

### ark_speech_tts_silent

- **Value:** `0`
- **Description:** If true, TTS speech will not be played

### ark_speech_usecorvo

- **Value:** `0`
- **Description:** If true, use Corvo's lines

### ark_talk_save_delay

- **Value:** `-1.0`
- **Description:** Delay added when saving during a talk situation.

### ark_throw_debugDraw

- **Value:** `0`
- **Description:** Enable throw debugDraw

### ark_throw_enable_aim

- **Value:** `1`
- **Description:** if true we use aiming correction when throwing an object

### ark_throw_shifting_aabbScale

- **Value:** `1.1`
- **Description:** Aabb scale applied for shifting

### ark_throw_shifting_maximalDistance

- **Value:** `10.0`
- **Description:** Maximal check distance for shifting, ignore potential collision farther

### ark_throw_shifting_minimalLineOfSightLength

- **Value:** `0.5`
- **Description:** Minimal line of sight length for shifting evaluation

### ark_throw_shifting_removeAngularVelocity

- **Value:** `0`
- **Description:** Remove angular velocity if we have to shift the throwable

### ark_timeshift_skipportal

- **Value:** `0`
- **Description:** Skip portal rendering

### ark_ui_crosshair_opacity

- **Value:** `1.0`
- **Description:** Crosshair opacity: 0.0 = fully transparent (invisible) => 1.0 = fully opaque

### ark_ui_crosshair_style

- **Value:** `2`
- **Description:** Crosshair style: 0 = off, 1 = simple (dot), 2 = normal

### ark_ui_locator_debugdraw

- **Value:** `0`
- **Description:** If true, display locator debug draw

### ark_ui_locator_update

- **Value:** `1`
- **Description:** If false, the locator isn't updated

### ark_ui_offset_debugdraw

- **Value:** `0`
- **Description:** If true, display offset debug draw

### ark_ui_show_awareness_markers

- **Value:** `1`
- **Description:** If true will show awareness markers.

### ark_ui_show_contextual_icons

- **Value:** `1`
- **Description:** If true will show contextual icons (assassinate, choke...)

### ark_ui_show_firelock_markers

- **Value:** `1`
- **Description:** If true, will show markers when using the crossbow's fire lock feature (aka "The Dealer" upgrade).

### ark_ui_show_grenade_cooking_gauge

- **Value:** `1`
- **Description:** If true will show grenade cooking gauge.

### ark_ui_show_grenade_markers

- **Value:** `1`
- **Description:** If true will show grenade markers.

### ark_ui_show_heart_markers

- **Value:** `1`
- **Description:** If true, will show runes & bone charms markers while using the Heart

### ark_ui_show_information_messages

- **Value:** `1`
- **Description:** If true, will show information messages (max ammo, door doesn't open on this side, bone charm/rune nearby...): 0 = off, 1 = on

### ark_ui_show_interactions

- **Value:** `1`
- **Description:** If true will show interaction window (all interactions, except contextual icons like assassinate, choke, ...)

### ark_ui_show_location_discovery

- **Value:** `1`
- **Description:** If true will show a banner each time a location is discovered: 0 = off, 1 = on

### ark_ui_show_master_hud

- **Value:** `2`
- **Description:** Display health/mana/breath span meters: 0 = off, 1 = fade-out when inactive, 2 = always

### ark_ui_show_notifications

- **Value:** `1`
- **Description:** If true, will show notifications about mission cues, mission items, travel log & bone charms/runes picked up

### ark_ui_show_objective_markers

- **Value:** `1`
- **Description:** If true, will show objective markers

### ark_ui_show_objective_notifications

- **Value:** `1`
- **Description:** If true, will show the objective notifications.

### ark_ui_show_pickup_log

- **Value:** `1`
- **Description:** If true, will show pickup logs

### ark_ui_show_shortcuts

- **Value:** `1`
- **Description:** If true, will show the shortcuts UI.

### ark_ui_show_snap_reaction_gauge

- **Value:** `1`
- **Description:** If true, will show a replenishment gauge after the "Snap Reaction" enhancement has been triggered.

### ark_ui_show_target_notifications

- **Value:** `1`
- **Description:** If true, will show target portraits in objective notifications.

### ark_ui_show_tutorial_messages

- **Value:** `1`
- **Description:** If true, will show tutorial notifications and one liners. If false, we do not display them but they are added in the pause menu.

### ark_ui_simulate_missing_chunk

- **Value:** `0`
- **Description:** enable simulation of missing chunk

### ark_ui_view_all_powers_in_journal

- **Value:** `0`
- **Description:** If true, we display all powers in the journal.

### ark_useStdOut

- **Value:** `0`
- **Description:** outputs logs to stdout

### ark_useStdOutMinSeverity

- **Value:** `2`
- **Description:** The minimum severity to output in the stdout

### ark_use_new_locomotion

- **Value:** `1`
- **Description:** Use new version of locomotion anim tree node

### ark_vision_max_checks

- **Value:** `150`
- **Description:** Max checks per frame

### ark_vision_notify_reach_limit

- **Value:** `0`
- **Description:** Notify if the linecheck limit is reached

### ark_weapon_melee_debug_lifetime

- **Value:** `1.0f`
- **Description:** Duration of weapon melee debug draws (in seconds).

### ark_windblast_debugDrawAllTargets

- **Value:** `0`
- **Description:** Enable windblast debugDraw of all potential targets

### ark_windblast_debugDrawDeflection

- **Value:** `1`
- **Description:** Enable windblast debugDraw of deflection upgrade

### ark_windblast_debugDrawTrajectory

- **Value:** `0`
- **Description:** Enable windblast debugDraw of blast trajectory

### ark_windblast_maxNpcForSevering

- **Value:** `4`
- **Description:** Max npc for severing, for performance smmothing

### ark_windblast_maxThrowHitNpc

- **Value:** `8`
- **Description:** Max npc for throw hit

### ark_windblast_minImpulseForPhysicEntities

- **Value:** `0.2`
- **Description:** Minimal impulse applied physics entities

### ark_windblast_thicknessCoef

- **Value:** `2`
- **Description:** Thickness coefficent of the wave, based on its displacement per second ( aka speed ^^ )

### ark_wol_debugEyeState

- **Value:** `0`
- **Description:** Enable eye state debug draw

### arkcrashreport_durango_fallback_ip

- **Value:** `192.168.0.103`
- **Description:** fallback ip address of the ArkCrashReport server

### arkcrashreport_host

- **Value:** `frlyobuildsvc.arkane-studios.lan`
- **Description:** host address of the ArkCrashReport server

### arkcrashreport_port

- **Value:** `5675`
- **Description:** port for ArkCrashReport server

### arkcrashreport_timeout

- **Value:** `30`
- **Description:** Timeout (in seconds) when sending & receiving data to/from the Crash Report Daemon

### bgl_debug

- **Value:** `0`
- **Description:** Set to 1 for console spew

### bgl_preallocateOversized

- **Value:** `0`
- **Description:** if true preallocate all oversized assets

### binkVolumeLinearFloat

- **Value:** `0.40f`
- **Description:** Bink track volume percentage

### bink_debug

- **Value:** `0`
- **Description:** dump information

### bink_ioK

- **Value:** `128`
- **Description:** larger buffers for less seeks during load

### bink_ioMegs

- **Value:** `24`
- **Description:** larger buffers for less seeks during load

### bnet_Environment

- **Value:** `-1`
- **Description:** BNET environment ( -1 = AUTO, 0 = Integration , 1 = CERT , 2 = Production )

### build_candidateDiscNumber

- **Value:** ``
- **Description:** forge candidate disc number

### build_candidateName

- **Value:** ``
- **Description:** forge candidate build name

### build_discLayoutName

- **Value:** ``
- **Description:** forge disc layout build name

### build_packageMapSet

- **Value:** ``
- **Description:** forge package map set

### build_packageName

- **Value:** ``
- **Description:** forge package build name

### build_packageRelevantChangelists

- **Value:** `unknown`
- **Description:** package relevant Perforce changelists

### build_packageRequestor

- **Value:** ``
- **Description:** forge package build requestor

### build_packageSource

- **Value:** `developer`
- **Description:** forge package build type

### build_packageURL

- **Value:** ``
- **Description:** forge package build url

### cam_freecam_movespeed

- **Value:** `2.0f`
- **Description:** freecam linear move speed

### cam_freecam_movespeedz

- **Value:** `3.0f`
- **Description:** freecam linear move speed when going up/down

### cam_freecam_runspeed

- **Value:** `4.0f`
- **Description:** freecam linear move speed when run button is down

### cam_freecam_runspeedz

- **Value:** `3.0f`
- **Description:** freecam linear move speed running up/down

### cam_freecam_turnspeed

- **Value:** `300.0f`
- **Description:** freecam angular move speed (in deg/s)

### cas_allowPayloadMigration

- **Value:** `1`
- **Description:** Allow remote payloads to migrate to the local depot in a background thread.

### cas_debug

- **Value:** `0`
- **Description:** debug level

### cas_localDepot

- **Value:** `generated/cas2`
- **Description:** local drive / path for content addressable storage cache

### cas_remoteDepot

- **Value:** `//megatexture/megatextures/cas2`
- **Description:** local drive / path for content addressable storage cache

### com_FPSAcceptable

- **Value:** `55`
- **Description:** Minimum acceptable frame rate

### com_FPSTargeted

- **Value:** `60`
- **Description:** Frame rate targeted

### com_StutteringMeasureHigh

- **Value:** `70`
- **Description:** Stuttering measurement high scale

### com_StutteringMeasureLow

- **Value:** `17`
- **Description:** Stuttering measurement low scale

### com_allowConsole

- **Value:** `0`
- **Description:** allow toggling console with the tilde key

### com_assertOutOfDebugger

- **Value:** `0`
- **Description:** Assert while not running under the debugger, off by default

### com_assertShowDialog

- **Value:** `0`
- **Description:** Show a popup to break/ignore once/ignore always an assert, off by default

### com_captureFrames

- **Value:** `0`
- **Description:** 1 to capture each frame and output it

### com_capturePath

- **Value:** ``
- **Description:** optional outpath for screenshots, this path is appended to screeenshots/

### com_captureRawFrames

- **Value:** `0`
- **Description:** 1 to capture each raw frame and output it

### com_captureSamples

- **Value:** `1`
- **Description:** set to number of samples for screenshots

### com_captureSounds

- **Value:** `0`
- **Description:** set to 1 to start capture, 2 while capturing, 0 when disabled

### com_captureTGA

- **Value:** `0`
- **Description:** format for capture screenshots, 0 = JPG, 1 = TGA

### com_crashHandler_enable

- **Value:** `0`
- **Description:** Enable the crash exception handler.

### com_crashProcessOnError

- **Value:** `0`
- **Description:** Always crashes the process on a com_error.

### com_debugHUD

- **Value:** `0`
- **Description:** 1 = show debug HUD

### com_debugHUD_refresh_period

- **Value:** `0.1`
- **Description:** debug HUD Refresh period

### com_debugSnapShotInterpolation

- **Value:** `0`
- **Description:** —

### com_deviceZeroOverride

- **Value:** `-1`
- **Description:** change input routing for device 0 to poll a different device

### com_disableFrameSpinning

- **Value:** `0`
- **Description:** —

### com_drawPresentables

- **Value:** `0`
- **Description:** 0 = off, 1 = draw all presentables we know about.

### com_drawThreadSpeeds

- **Value:** `0`
- **Description:** 1 = dynamic draw, 2 = static draw, 3 = dynamic draw until stall

### com_editorActive

- **Value:** `0`
- **Description:** 1 when an editor has focus

### com_enableCompression

- **Value:** `1`
- **Description:** —

### com_exitAfterTests

- **Value:** `0`
- **Description:** if set, exits game after regression tests complete

### com_exitProcessOnError

- **Value:** `0`
- **Description:** Exits the process on a com_error.

### com_fixedTic

- **Value:** `0`
- **Description:** run a single game frame per render frame

### com_forceAllMapLayersToLoad

- **Value:** `0`
- **Description:** —

### com_frameStampPrints

- **Value:** `0`
- **Description:** print frame number on each console print

### com_gameDLLPath

- **Value:** ``
- **Description:** path for game DLL to pull from

### com_gaugeHeartbeat

- **Value:** `1000`
- **Description:** time between subsequent gauge pushes across the wire.

### com_headless

- **Value:** `0`
- **Description:** run without graphics

### com_hitchThresholdMS

- **Value:** `33`
- **Description:** sets com_drawThreadSpeeds to 2 if a frame takes longer than this time in milliseconds

### com_hotReloadBitmaps

- **Value:** `1`
- **Description:** enable hot reload for images (tga, png)

### com_hotReloadEnabled

- **Value:** `0`
- **Description:** enable hot reload for images & models

### com_hotReloadParticleModels

- **Value:** `1`
- **Description:** enable hot reload for particle models (pmodel)

### com_hotReloadStaticModels

- **Value:** `1`
- **Description:** enable hot reload for static models (bmodel)

### com_keyFirstRepeat

- **Value:** `500`
- **Description:** The time (in ms) before the pressed key starts repeating in the console.

### com_keyRepeat

- **Value:** `50`
- **Description:** The time (in ms) before the pressed key next repeat iteration in the console.

### com_loadScreenUserConfirmationDisabled

- **Value:** `0`
- **Description:** If true the loading screens will close as soon as loading are finished

### com_logFile

- **Value:** `0`
- **Description:** 1 = buffer log, 2 = flush after each print

### com_logFileName

- **Value:** `qconsole.log`
- **Description:** name of log file, if empty, qconsole.log will be used

### com_memStampPrints

- **Value:** `0`
- **Description:** print total memory usage on each console print

### com_newLoadScreen

- **Value:** `0`
- **Description:** Enable new load screen code

### com_pid

- **Value:** `0`
- **Description:** process id

### com_prod_regression

- **Value:** `0`
- **Description:** Regression tests require certain functionality in production builds.

### com_production

- **Value:** `0`
- **Description:** Used to enable and/or inhibit specific behaviour during production building mode. All demo and retail builds are built with this on.

### com_profileLevelLoad

- **Value:** `0`
- **Description:** —

### com_releaseInputsOnMapLoading

- **Value:** `0`
- **Description:** when true loading a map, the application releases all inputs

### com_requireNonProductionSignIn

- **Value:** `1`
- **Description:** If true, will require sign in, even on non production builds.

### com_safemode

- **Value:** `0`
- **Description:** deletes the video.cfg & rageConfig.cfg and reverts video settings to game default

### com_sendSnapshots

- **Value:** `1`
- **Description:** For debugging, will not send snapshots when false.

### com_showFPS

- **Value:** `0`
- **Description:** show frames rendered per second

### com_showGPU

- **Value:** `0`
- **Description:** show memory info from GPU

### com_showLoadingScreen

- **Value:** `1`
- **Description:** enable loading screens

### com_showMapLoadStatus

- **Value:** `0`
- **Description:** show level load pacifier text

### com_showMemoryUsage

- **Value:** `0`
- **Description:** show memory usage. 0 = disabled, 1 = basic, 2 = with heap details.

### com_showMonologueVideos

- **Value:** `1`
- **Description:** enable monologues video at level start

### com_showPos

- **Value:** `0`
- **Description:** show camera position

### com_showSlowFPS

- **Value:** `0`
- **Description:** enable big annoying message about too low FPS

### com_skipGameRenderView

- **Value:** `0`
- **Description:** skip generating the GUIs

### com_skipInputRouting

- **Value:** `0`
- **Description:** —

### com_skipNotifyLines

- **Value:** `0`
- **Description:** skip notification on top of the game view.

### com_skipSignInManager

- **Value:** `0`
- **Description:** —

### com_sleepGame

- **Value:** `0`
- **Description:** sleep for this many milliseconds between frames to simulate long game frames.

### com_speeds

- **Value:** `0`
- **Description:** show engine timings. 1 = print on console, 2 = print on screen, 3 = also show graph

### com_statsFile

- **Value:** `stats.txt`
- **Description:** logfile name

### com_threadNamePrints

- **Value:** `0`
- **Description:** print thread name with each console print

### com_threadSpeedScale

- **Value:** `10.0`
- **Description:** Time to screen scale

### com_timeScaler

- **Value:** `2`
- **Description:** scales the time

### com_timeStampPrints

- **Value:** `0`
- **Description:** print time with each console print, 1 = sec, 2 = msec, 3 = MM:SS:sss

### com_timer

- **Value:** `0`
- **Description:** replaces FPS with a seconds counter, set to -1 to start, set to 0 to turn off

### com_useEntitiesFiles

- **Value:** `1`
- **Description:** if set use .entities files instead of .map files for production and buildgame loads

### com_useExpandedEntityDefs

- **Value:** `1`
- **Description:** if set use entity defs with expanded inheritance for production and buildgame loads

### com_useMapHeap

- **Value:** `1`
- **Description:** Use a separate heap for all transient data that is cleared on map-restart

### com_usePersistentHeap

- **Value:** `1`
- **Description:** Use a separate heap for all static data loaded for a map that persists through a map-restart.

### com_warnAsError

- **Value:** `0`
- **Description:** Enable to promote Warnings as Errors

### com_warningReport

- **Value:** `1`
- **Description:** enable the warning report showed in the console

### com_writeMissingDeclFiles

- **Value:** ``
- **Description:** write out any missing decls for a specific decl type, using the default decl (hit tab to display supported decl types)

### con_fontSize

- **Value:** `8`
- **Description:** Use con_fontName at this many pixels wide per char

### con_fraction

- **Value:** `-1.f`
- **Description:** override console fraction, -1.f means no override

### con_logThreadSpeeds

- **Value:** `0`
- **Description:** log the thread speeds for offline graphing

### con_noPrint

- **Value:** `1`
- **Description:** print on the console but not onscreen when console is pulled up

### con_notifyTime

- **Value:** `3`
- **Description:** time messages are displayed onscreen when console is pulled up

### con_opacity

- **Value:** `1`
- **Description:** console background opacity

### con_speed

- **Value:** `3`
- **Description:** speed at which the console moves up and down

### cpnt_fx_skip_oceantriggers

- **Value:** `0`
- **Description:** arkCpntFX_OceanTrigger: skip samplings

### cpnt_poolsize_arkCpntAIAdvancedSevering

- **Value:** `0`
- **Description:** size of the pool for arkCpntAIAdvancedSeveringFactory when the game start

### cpnt_poolsize_arkCpntAIAlarmSmartObject

- **Value:** `0`
- **Description:** size of the pool for arkCpntAIAlarmSmartObjectFactory when the game start

### cpnt_poolsize_arkCpntAIAttentionSource

- **Value:** `0`
- **Description:** size of the pool for arkCpntAIAttentionSourceFactory when the game start

### cpnt_poolsize_arkCpntAIAwarenessHUDDisplay

- **Value:** `0`
- **Description:** size of the pool for arkCpntAIAwarenessHUDDisplayFactory when the game start

### cpnt_poolsize_arkCpntAIBarks_Device

- **Value:** `0`
- **Description:** size of the pool for arkCpntAIBarks_DeviceFactory when the game start

### cpnt_poolsize_arkCpntAIBarks_NPC

- **Value:** `0`
- **Description:** size of the pool for arkCpntAIBarks_NPCFactory when the game start

### cpnt_poolsize_arkCpntAIBarks_Player

- **Value:** `0`
- **Description:** size of the pool for arkCpntAIBarks_PlayerFactory when the game start

### cpnt_poolsize_arkCpntAIBasicSmartObject

- **Value:** `0`
- **Description:** size of the pool for arkCpntAIBasicSmartObjectFactory when the game start

### cpnt_poolsize_arkCpntAIBloodBriarSkills

- **Value:** `0`
- **Description:** size of the pool for arkCpntAIBloodBriarSkillsFactory when the game start

### cpnt_poolsize_arkCpntAIBreannaSkills

- **Value:** `0`
- **Description:** size of the pool for arkCpntAIBreannaSkillsFactory when the game start

### cpnt_poolsize_arkCpntAICharacterDescription

- **Value:** `0`
- **Description:** size of the pool for arkCpntAICharacterDescriptionFactory when the game start

### cpnt_poolsize_arkCpntAICombatAttack

- **Value:** `0`
- **Description:** size of the pool for arkCpntAICombatAttackFactory when the game start

### cpnt_poolsize_arkCpntAICombatJumpDisablingBox

- **Value:** `0`
- **Description:** size of the pool for arkCpntAICombatJumpDisablingBoxFactory when the game start

### cpnt_poolsize_arkCpntAICombatLeaderSkills

- **Value:** `0`
- **Description:** size of the pool for arkCpntAICombatLeaderSkillsFactory when the game start

### cpnt_poolsize_arkCpntAICombatMeleeSpace

- **Value:** `0`
- **Description:** size of the pool for arkCpntAICombatMeleeSpaceFactory when the game start

### cpnt_poolsize_arkCpntAICombatRangedSpace

- **Value:** `0`
- **Description:** size of the pool for arkCpntAICombatRangedSpaceFactory when the game start

### cpnt_poolsize_arkCpntAIControlAsAPlayer

- **Value:** `0`
- **Description:** size of the pool for arkCpntAIControlAsAPlayerFactory when the game start

### cpnt_poolsize_arkCpntAICrewCollector_Area

- **Value:** `0`
- **Description:** size of the pool for arkCpntAICrewCollector_AreaFactory when the game start

### cpnt_poolsize_arkCpntAICrewCollector_Combat

- **Value:** `0`
- **Description:** size of the pool for arkCpntAICrewCollector_CombatFactory when the game start

### cpnt_poolsize_arkCpntAICrewCollector_Herd

- **Value:** `0`
- **Description:** size of the pool for arkCpntAICrewCollector_HerdFactory when the game start

### cpnt_poolsize_arkCpntAICrewCollector_Notification

- **Value:** `0`
- **Description:** size of the pool for arkCpntAICrewCollector_NotificationFactory when the game start

### cpnt_poolsize_arkCpntAICrewCollector_Search

- **Value:** `0`
- **Description:** size of the pool for arkCpntAICrewCollector_SearchFactory when the game start

### cpnt_poolsize_arkCpntAICrewCoordinationBB

- **Value:** `0`
- **Description:** size of the pool for arkCpntAICrewCoordinationBBFactory when the game start

### cpnt_poolsize_arkCpntAICrewCore

- **Value:** `0`
- **Description:** size of the pool for arkCpntAICrewCoreFactory when the game start

### cpnt_poolsize_arkCpntAICrewDecision

- **Value:** `0`
- **Description:** size of the pool for arkCpntAICrewDecisionFactory when the game start

### cpnt_poolsize_arkCpntAICrewDispatch

- **Value:** `0`
- **Description:** size of the pool for arkCpntAICrewDispatchFactory when the game start

### cpnt_poolsize_arkCpntAICrewKnowledgeBB

- **Value:** `0`
- **Description:** size of the pool for arkCpntAICrewKnowledgeBBFactory when the game start

### cpnt_poolsize_arkCpntAICrewLink

- **Value:** `0`
- **Description:** size of the pool for arkCpntAICrewLinkFactory when the game start

### cpnt_poolsize_arkCpntAICrewMember

- **Value:** `0`
- **Description:** size of the pool for arkCpntAICrewMemberFactory when the game start

### cpnt_poolsize_arkCpntAICrewModule_CombatAlarm

- **Value:** `0`
- **Description:** size of the pool for arkCpntAICrewModule_CombatAlarmFactory when the game start

### cpnt_poolsize_arkCpntAICrewModule_CombatChase

- **Value:** `0`
- **Description:** size of the pool for arkCpntAICrewModule_CombatChaseFactory when the game start

### cpnt_poolsize_arkCpntAICrewModule_CombatFake

- **Value:** `0`
- **Description:** size of the pool for arkCpntAICrewModule_CombatFakeFactory when the game start

### cpnt_poolsize_arkCpntAICrewModule_CombatFlank

- **Value:** `0`
- **Description:** size of the pool for arkCpntAICrewModule_CombatFlankFactory when the game start

### cpnt_poolsize_arkCpntAICrewModule_CombatMelee

- **Value:** `0`
- **Description:** size of the pool for arkCpntAICrewModule_CombatMeleeFactory when the game start

### cpnt_poolsize_arkCpntAICrewModule_CombatRanged

- **Value:** `0`
- **Description:** size of the pool for arkCpntAICrewModule_CombatRangedFactory when the game start

### cpnt_poolsize_arkCpntAICrewModule_CombatTether

- **Value:** `0`
- **Description:** size of the pool for arkCpntAICrewModule_CombatTetherFactory when the game start

### cpnt_poolsize_arkCpntAICrewModule_Search

- **Value:** `0`
- **Description:** size of the pool for arkCpntAICrewModule_SearchFactory when the game start

### cpnt_poolsize_arkCpntAICrewModule_Spot_Hideout

- **Value:** `0`
- **Description:** size of the pool for arkCpntAICrewModule_Spot_HideoutFactory when the game start

### cpnt_poolsize_arkCpntAICrewModule_Spot_Link

- **Value:** `0`
- **Description:** size of the pool for arkCpntAICrewModule_Spot_LinkFactory when the game start

### cpnt_poolsize_arkCpntAICrewSpot_BTOverride

- **Value:** `0`
- **Description:** size of the pool for arkCpntAICrewSpot_BTOverrideFactory when the game start

### cpnt_poolsize_arkCpntAICrewSpot_Bait

- **Value:** `0`
- **Description:** size of the pool for arkCpntAICrewSpot_BaitFactory when the game start

### cpnt_poolsize_arkCpntAICrewSpot_Combat

- **Value:** `0`
- **Description:** size of the pool for arkCpntAICrewSpot_CombatFactory when the game start

### cpnt_poolsize_arkCpntAIDangerZone

- **Value:** `0`
- **Description:** size of the pool for arkCpntAIDangerZoneFactory when the game start

### cpnt_poolsize_arkCpntAIDecision

- **Value:** `0`
- **Description:** size of the pool for arkCpntAIDecisionFactory when the game start

### cpnt_poolsize_arkCpntAIDecisionCivilian

- **Value:** `0`
- **Description:** size of the pool for arkCpntAIDecisionCivilianFactory when the game start

### cpnt_poolsize_arkCpntAIDelilahSkills

- **Value:** `0`
- **Description:** size of the pool for arkCpntAIDelilahSkillsFactory when the game start

### cpnt_poolsize_arkCpntAIDistraction

- **Value:** `0`
- **Description:** size of the pool for arkCpntAIDistractionFactory when the game start

### cpnt_poolsize_arkCpntAIDistraction_Dynamic

- **Value:** `0`
- **Description:** size of the pool for arkCpntAIDistraction_DynamicFactory when the game start

### cpnt_poolsize_arkCpntAIDistraction_MesmerizedNPC

- **Value:** `0`
- **Description:** size of the pool for arkCpntAIDistraction_MesmerizedNPCFactory when the game start

### cpnt_poolsize_arkCpntAIDistraction_Swarm

- **Value:** `0`
- **Description:** size of the pool for arkCpntAIDistraction_SwarmFactory when the game start

### cpnt_poolsize_arkCpntAIFleeSpot

- **Value:** `0`
- **Description:** size of the pool for arkCpntAIFleeSpotFactory when the game start

### cpnt_poolsize_arkCpntAIForcedDistraction

- **Value:** `0`
- **Description:** size of the pool for arkCpntAIForcedDistractionFactory when the game start

### cpnt_poolsize_arkCpntAIGraveHoundSkills

- **Value:** `0`
- **Description:** size of the pool for arkCpntAIGraveHoundSkillsFactory when the game start

### cpnt_poolsize_arkCpntAIGrenadeSkills

- **Value:** `0`
- **Description:** size of the pool for arkCpntAIGrenadeSkillsFactory when the game start

### cpnt_poolsize_arkCpntAIGrimAlexSkills

- **Value:** `0`
- **Description:** size of the pool for arkCpntAIGrimAlexSkillsFactory when the game start

### cpnt_poolsize_arkCpntAIGunSkills

- **Value:** `0`
- **Description:** size of the pool for arkCpntAIGunSkillsFactory when the game start

### cpnt_poolsize_arkCpntAIHideout

- **Value:** `0`
- **Description:** size of the pool for arkCpntAIHideoutFactory when the game start

### cpnt_poolsize_arkCpntAIHoundSkills

- **Value:** `0`
- **Description:** size of the pool for arkCpntAIHoundSkillsFactory when the game start

### cpnt_poolsize_arkCpntAIHowlerSkills

- **Value:** `0`
- **Description:** size of the pool for arkCpntAIHowlerSkillsFactory when the game start

### cpnt_poolsize_arkCpntAIIdleBreak

- **Value:** `0`
- **Description:** size of the pool for arkCpntAIIdleBreakFactory when the game start

### cpnt_poolsize_arkCpntAIInvestigateSpot

- **Value:** `0`
- **Description:** size of the pool for arkCpntAIInvestigateSpotFactory when the game start

### cpnt_poolsize_arkCpntAIKnowledge

- **Value:** `0`
- **Description:** size of the pool for arkCpntAIKnowledgeFactory when the game start

### cpnt_poolsize_arkCpntAIManager_Cues

- **Value:** `0`
- **Description:** size of the pool for arkCpntAIManager_CuesFactory when the game start

### cpnt_poolsize_arkCpntAIMechanicalSkills

- **Value:** `0`
- **Description:** size of the pool for arkCpntAIMechanicalSkillsFactory when the game start

### cpnt_poolsize_arkCpntAIMesmerizeSpot

- **Value:** `0`
- **Description:** size of the pool for arkCpntAIMesmerizeSpotFactory when the game start

### cpnt_poolsize_arkCpntAIMusicBoxSkills

- **Value:** `0`
- **Description:** size of the pool for arkCpntAIMusicBoxSkillsFactory when the game start

### cpnt_poolsize_arkCpntAINavmeshRoot

- **Value:** `0`
- **Description:** size of the pool for arkCpntAINavmeshRootFactory when the game start

### cpnt_poolsize_arkCpntAINestKeeperSkills

- **Value:** `0`
- **Description:** size of the pool for arkCpntAINestKeeperSkillsFactory when the game start

### cpnt_poolsize_arkCpntAIOverrideInitialBehavior

- **Value:** `0`
- **Description:** size of the pool for arkCpntAIOverrideInitialBehaviorFactory when the game start

### cpnt_poolsize_arkCpntAIPaoloSkills

- **Value:** `0`
- **Description:** size of the pool for arkCpntAIPaoloSkillsFactory when the game start

### cpnt_poolsize_arkCpntAIPhysicsReaction

- **Value:** `0`
- **Description:** size of the pool for arkCpntAIPhysicsReactionFactory when the game start

### cpnt_poolsize_arkCpntAIReasoner_Acknowledgement

- **Value:** `0`
- **Description:** size of the pool for arkCpntAIReasoner_AcknowledgementFactory when the game start

### cpnt_poolsize_arkCpntAIReasoner_Attention

- **Value:** `0`
- **Description:** size of the pool for arkCpntAIReasoner_AttentionFactory when the game start

### cpnt_poolsize_arkCpntAIReasoner_Combat

- **Value:** `0`
- **Description:** size of the pool for arkCpntAIReasoner_CombatFactory when the game start

### cpnt_poolsize_arkCpntAIReasoner_Equipment

- **Value:** `0`
- **Description:** size of the pool for arkCpntAIReasoner_EquipmentFactory when the game start

### cpnt_poolsize_arkCpntAIReasoner_Flee

- **Value:** `0`
- **Description:** size of the pool for arkCpntAIReasoner_FleeFactory when the game start

### cpnt_poolsize_arkCpntAIReasoner_Greetings

- **Value:** `0`
- **Description:** size of the pool for arkCpntAIReasoner_GreetingsFactory when the game start

### cpnt_poolsize_arkCpntAIReasoner_Panic

- **Value:** `0`
- **Description:** size of the pool for arkCpntAIReasoner_PanicFactory when the game start

### cpnt_poolsize_arkCpntAIReasoner_PersonalSpace

- **Value:** `0`
- **Description:** size of the pool for arkCpntAIReasoner_PersonalSpaceFactory when the game start

### cpnt_poolsize_arkCpntAIReasoner_Relationship

- **Value:** `0`
- **Description:** size of the pool for arkCpntAIReasoner_RelationshipFactory when the game start

### cpnt_poolsize_arkCpntAIReasoner_Search

- **Value:** `0`
- **Description:** size of the pool for arkCpntAIReasoner_SearchFactory when the game start

### cpnt_poolsize_arkCpntAIReasoner_Suspicion

- **Value:** `0`
- **Description:** size of the pool for arkCpntAIReasoner_SuspicionFactory when the game start

### cpnt_poolsize_arkCpntAIReasoner_WallOfLight

- **Value:** `0`
- **Description:** size of the pool for arkCpntAIReasoner_WallOfLightFactory when the game start

### cpnt_poolsize_arkCpntAIReasoner_Warn

- **Value:** `0`
- **Description:** size of the pool for arkCpntAIReasoner_WarnFactory when the game start

### cpnt_poolsize_arkCpntAIReflex

- **Value:** `0`
- **Description:** size of the pool for arkCpntAIReflexFactory when the game start

### cpnt_poolsize_arkCpntAISearchSpot

- **Value:** `0`
- **Description:** size of the pool for arkCpntAISearchSpotFactory when the game start

### cpnt_poolsize_arkCpntAISearchSpot_Dynamic

- **Value:** `0`
- **Description:** size of the pool for arkCpntAISearchSpot_DynamicFactory when the game start

### cpnt_poolsize_arkCpntAISearchSpot_MesmerizedNPC

- **Value:** `0`
- **Description:** size of the pool for arkCpntAISearchSpot_MesmerizedNPCFactory when the game start

### cpnt_poolsize_arkCpntAISensor_Audio

- **Value:** `0`
- **Description:** size of the pool for arkCpntAISensor_AudioFactory when the game start

### cpnt_poolsize_arkCpntAISensor_BloodfliesNest

- **Value:** `0`
- **Description:** size of the pool for arkCpntAISensor_BloodfliesNestFactory when the game start

### cpnt_poolsize_arkCpntAISensor_Combat

- **Value:** `0`
- **Description:** size of the pool for arkCpntAISensor_CombatFactory when the game start

### cpnt_poolsize_arkCpntAISensor_Proximity

- **Value:** `0`
- **Description:** size of the pool for arkCpntAISensor_ProximityFactory when the game start

### cpnt_poolsize_arkCpntAISensor_Psychic

- **Value:** `0`
- **Description:** size of the pool for arkCpntAISensor_PsychicFactory when the game start

### cpnt_poolsize_arkCpntAISensor_SmartObject

- **Value:** `0`
- **Description:** size of the pool for arkCpntAISensor_SmartObjectFactory when the game start

### cpnt_poolsize_arkCpntAISensor_Smell

- **Value:** `0`
- **Description:** size of the pool for arkCpntAISensor_SmellFactory when the game start

### cpnt_poolsize_arkCpntAISensor_Spatial

- **Value:** `0`
- **Description:** size of the pool for arkCpntAISensor_SpatialFactory when the game start

### cpnt_poolsize_arkCpntAISensor_Touch

- **Value:** `0`
- **Description:** size of the pool for arkCpntAISensor_TouchFactory when the game start

### cpnt_poolsize_arkCpntAISensor_Vicinity

- **Value:** `0`
- **Description:** size of the pool for arkCpntAISensor_VicinityFactory when the game start

### cpnt_poolsize_arkCpntAISensor_Vision

- **Value:** `0`
- **Description:** size of the pool for arkCpntAISensor_VisionFactory when the game start

### cpnt_poolsize_arkCpntAISensoryDeprivator

- **Value:** `0`
- **Description:** size of the pool for arkCpntAISensoryDeprivatorFactory when the game start

### cpnt_poolsize_arkCpntAIShopkeeperSkills

- **Value:** `0`
- **Description:** size of the pool for arkCpntAIShopkeeperSkillsFactory when the game start

### cpnt_poolsize_arkCpntAIStatistics

- **Value:** `0`
- **Description:** size of the pool for arkCpntAIStatisticsFactory when the game start

### cpnt_poolsize_arkCpntAIStoneShroud

- **Value:** `0`
- **Description:** size of the pool for arkCpntAIStoneShroudFactory when the game start

### cpnt_poolsize_arkCpntAITampering

- **Value:** `0`
- **Description:** size of the pool for arkCpntAITamperingFactory when the game start

### cpnt_poolsize_arkCpntAIVisionAlterableConfig

- **Value:** `0`
- **Description:** size of the pool for arkCpntAIVisionAlterableConfigFactory when the game start

### cpnt_poolsize_arkCpntAIVisionConfig

- **Value:** `0`
- **Description:** size of the pool for arkCpntAIVisionConfigFactory when the game start

### cpnt_poolsize_arkCpntAIVisionManager

- **Value:** `0`
- **Description:** size of the pool for arkCpntAIVisionManagerFactory when the game start

### cpnt_poolsize_arkCpntAIWitchSkills

- **Value:** `0`
- **Description:** size of the pool for arkCpntAIWitchSkillsFactory when the game start

### cpnt_poolsize_arkCpntAIWorldCoordinationBB

- **Value:** `0`
- **Description:** size of the pool for arkCpntAIWorldCoordinationBBFactory when the game start

### cpnt_poolsize_arkCpntActivePowerDevouringSwarm

- **Value:** `0`
- **Description:** size of the pool for arkCpntActivePowerDevouringSwarmFactory when the game start

### cpnt_poolsize_arkCpntAdrenaline

- **Value:** `0`
- **Description:** size of the pool for arkCpntAdrenalineFactory when the game start

### cpnt_poolsize_arkCpntAimAssist

- **Value:** `0`
- **Description:** size of the pool for arkCpntAimAssistFactory when the game start

### cpnt_poolsize_arkCpntAimAt

- **Value:** `0`
- **Description:** size of the pool for arkCpntAimAtFactory when the game start

### cpnt_poolsize_arkCpntAlarmBell

- **Value:** `0`
- **Description:** size of the pool for arkCpntAlarmBellFactory when the game start

### cpnt_poolsize_arkCpntAnimBase

- **Value:** `0`
- **Description:** size of the pool for arkCpntAnimBaseFactory when the game start

### cpnt_poolsize_arkCpntAnimBloodFly

- **Value:** `0`
- **Description:** size of the pool for arkCpntAnimBloodFlyFactory when the game start

### cpnt_poolsize_arkCpntAnimEvolved

- **Value:** `0`
- **Description:** size of the pool for arkCpntAnimEvolvedFactory when the game start

### cpnt_poolsize_arkCpntAnimFish

- **Value:** `0`
- **Description:** size of the pool for arkCpntAnimFishFactory when the game start

### cpnt_poolsize_arkCpntAnimRat

- **Value:** `0`
- **Description:** size of the pool for arkCpntAnimRatFactory when the game start

### cpnt_poolsize_arkCpntArcPylon

- **Value:** `0`
- **Description:** size of the pool for arkCpntArcPylonFactory when the game start

### cpnt_poolsize_arkCpntAreaLocator

- **Value:** `0`
- **Description:** size of the pool for arkCpntAreaLocatorFactory when the game start

### cpnt_poolsize_arkCpntArmor

- **Value:** `0`
- **Description:** size of the pool for arkCpntArmorFactory when the game start

### cpnt_poolsize_arkCpntAssassination

- **Value:** `0`
- **Description:** size of the pool for arkCpntAssassinationFactory when the game start

### cpnt_poolsize_arkCpntAttributes

- **Value:** `0`
- **Description:** size of the pool for arkCpntAttributesFactory when the game start

### cpnt_poolsize_arkCpntAttributesPlayer

- **Value:** `0`
- **Description:** size of the pool for arkCpntAttributesPlayerFactory when the game start

### cpnt_poolsize_arkCpntAudio

- **Value:** `0`
- **Description:** size of the pool for arkCpntAudioFactory when the game start

### cpnt_poolsize_arkCpntAudioListener

- **Value:** `0`
- **Description:** size of the pool for arkCpntAudioListenerFactory when the game start

### cpnt_poolsize_arkCpntAudiocardPlayer

- **Value:** `0`
- **Description:** size of the pool for arkCpntAudiocardPlayerFactory when the game start

### cpnt_poolsize_arkCpntAudiograph

- **Value:** `0`
- **Description:** size of the pool for arkCpntAudiographFactory when the game start

### cpnt_poolsize_arkCpntBallLightning

- **Value:** `0`
- **Description:** size of the pool for arkCpntBallLightningFactory when the game start

### cpnt_poolsize_arkCpntBeingEaten

- **Value:** `0`
- **Description:** size of the pool for arkCpntBeingEatenFactory when the game start

### cpnt_poolsize_arkCpntBlackMarketFavor

- **Value:** `0`
- **Description:** size of the pool for arkCpntBlackMarketFavorFactory when the game start

### cpnt_poolsize_arkCpntBlackMarketInteraction

- **Value:** `0`
- **Description:** size of the pool for arkCpntBlackMarketInteractionFactory when the game start

### cpnt_poolsize_arkCpntBlackMarketManager

- **Value:** `0`
- **Description:** size of the pool for arkCpntBlackMarketManagerFactory when the game start

### cpnt_poolsize_arkCpntBlackMarketUpgrade

- **Value:** `0`
- **Description:** size of the pool for arkCpntBlackMarketUpgradeFactory when the game start

### cpnt_poolsize_arkCpntBlock

- **Value:** `0`
- **Description:** size of the pool for arkCpntBlockFactory when the game start

### cpnt_poolsize_arkCpntBloodFlyAnchor

- **Value:** `0`
- **Description:** size of the pool for arkCpntBloodFlyAnchorFactory when the game start

### cpnt_poolsize_arkCpntBloodFlySwarm

- **Value:** `0`
- **Description:** size of the pool for arkCpntBloodFlySwarmFactory when the game start

### cpnt_poolsize_arkCpntBlowDust

- **Value:** `0`
- **Description:** size of the pool for arkCpntBlowDustFactory when the game start

### cpnt_poolsize_arkCpntBoneCharmCrafting

- **Value:** `0`
- **Description:** size of the pool for arkCpntBoneCharmCraftingFactory when the game start

### cpnt_poolsize_arkCpntBoneCharmInventory

- **Value:** `0`
- **Description:** size of the pool for arkCpntBoneCharmInventoryFactory when the game start

### cpnt_poolsize_arkCpntBreakable

- **Value:** `0`
- **Description:** size of the pool for arkCpntBreakableFactory when the game start

### cpnt_poolsize_arkCpntClimbable

- **Value:** `0`
- **Description:** size of the pool for arkCpntClimbableFactory when the game start

### cpnt_poolsize_arkCpntCloseCombat

- **Value:** `0`
- **Description:** size of the pool for arkCpntCloseCombatFactory when the game start

### cpnt_poolsize_arkCpntCloth

- **Value:** `0`
- **Description:** size of the pool for arkCpntClothFactory when the game start

### cpnt_poolsize_arkCpntConstraint

- **Value:** `0`
- **Description:** size of the pool for arkCpntConstraintFactory when the game start

### cpnt_poolsize_arkCpntContactDamage

- **Value:** `0`
- **Description:** size of the pool for arkCpntContactDamageFactory when the game start

### cpnt_poolsize_arkCpntCorpsePossession

- **Value:** `0`
- **Description:** size of the pool for arkCpntCorpsePossessionFactory when the game start

### cpnt_poolsize_arkCpntCrankable

- **Value:** `0`
- **Description:** size of the pool for arkCpntCrankableFactory when the game start

### cpnt_poolsize_arkCpntCubemapBinder

- **Value:** `0`
- **Description:** size of the pool for arkCpntCubemapBinderFactory when the game start

### cpnt_poolsize_arkCpntCubemapShooter

- **Value:** `0`
- **Description:** size of the pool for arkCpntCubemapShooterFactory when the game start

### cpnt_poolsize_arkCpntDSM

- **Value:** `0`
- **Description:** size of the pool for arkCpntDSMFactory when the game start

### cpnt_poolsize_arkCpntDamageDecal

- **Value:** `0`
- **Description:** size of the pool for arkCpntDamageDecalFactory when the game start

### cpnt_poolsize_arkCpntDamageOverTime

- **Value:** `0`
- **Description:** size of the pool for arkCpntDamageOverTimeFactory when the game start

### cpnt_poolsize_arkCpntDamageZone

- **Value:** `0`
- **Description:** size of the pool for arkCpntDamageZoneFactory when the game start

### cpnt_poolsize_arkCpntDarkVision

- **Value:** `0`
- **Description:** size of the pool for arkCpntDarkVisionFactory when the game start

### cpnt_poolsize_arkCpntDarkVisionProxy

- **Value:** `0`
- **Description:** size of the pool for arkCpntDarkVisionProxyFactory when the game start

### cpnt_poolsize_arkCpntDeadlyShadow

- **Value:** `0`
- **Description:** size of the pool for arkCpntDeadlyShadowFactory when the game start

### cpnt_poolsize_arkCpntDeadlyShadowTargetSensor

- **Value:** `0`
- **Description:** size of the pool for arkCpntDeadlyShadowTargetSensorFactory when the game start

### cpnt_poolsize_arkCpntDecoy

- **Value:** `0`
- **Description:** size of the pool for arkCpntDecoyFactory when the game start

### cpnt_poolsize_arkCpntDelilahSoul

- **Value:** `0`
- **Description:** size of the pool for arkCpntDelilahSoulFactory when the game start

### cpnt_poolsize_arkCpntDoppelgangerNpc

- **Value:** `0`
- **Description:** size of the pool for arkCpntDoppelgangerNpcFactory when the game start

### cpnt_poolsize_arkCpntElectricCabinetController

- **Value:** `0`
- **Description:** size of the pool for arkCpntElectricCabinetControllerFactory when the game start

### cpnt_poolsize_arkCpntEnvironmentalCorpse

- **Value:** `0`
- **Description:** size of the pool for arkCpntEnvironmentalCorpseFactory when the game start

### cpnt_poolsize_arkCpntFX

- **Value:** `0`
- **Description:** size of the pool for arkCpntFXFactory when the game start

### cpnt_poolsize_arkCpntFX_OceanTrigger

- **Value:** `0`
- **Description:** size of the pool for arkCpntFX_OceanTriggerFactory when the game start

### cpnt_poolsize_arkCpntFace

- **Value:** `0`
- **Description:** size of the pool for arkCpntFaceFactory when the game start

### cpnt_poolsize_arkCpntFaction

- **Value:** `0`
- **Description:** size of the pool for arkCpntFactionFactory when the game start

### cpnt_poolsize_arkCpntFishSwarm

- **Value:** `0`
- **Description:** size of the pool for arkCpntFishSwarmFactory when the game start

### cpnt_poolsize_arkCpntFlammable

- **Value:** `0`
- **Description:** size of the pool for arkCpntFlammableFactory when the game start

### cpnt_poolsize_arkCpntFlashSurface

- **Value:** `0`
- **Description:** size of the pool for arkCpntFlashSurfaceFactory when the game start

### cpnt_poolsize_arkCpntFleeManager

- **Value:** `0`
- **Description:** size of the pool for arkCpntFleeManagerFactory when the game start

### cpnt_poolsize_arkCpntFogZone

- **Value:** `0`
- **Description:** size of the pool for arkCpntFogZoneFactory when the game start

### cpnt_poolsize_arkCpntFountain

- **Value:** `0`
- **Description:** size of the pool for arkCpntFountainFactory when the game start

### cpnt_poolsize_arkCpntFreeCamControl

- **Value:** `0`
- **Description:** size of the pool for arkCpntFreeCamControlFactory when the game start

### cpnt_poolsize_arkCpntGameFlowUpdate

- **Value:** `0`
- **Description:** size of the pool for arkCpntGameFlowUpdateFactory when the game start

### cpnt_poolsize_arkCpntGenerator

- **Value:** `0`
- **Description:** size of the pool for arkCpntGeneratorFactory when the game start

### cpnt_poolsize_arkCpntGraveHoundSkull

- **Value:** `0`
- **Description:** size of the pool for arkCpntGraveHoundSkullFactory when the game start

### cpnt_poolsize_arkCpntGrenade

- **Value:** `0`
- **Description:** size of the pool for arkCpntGrenadeFactory when the game start

### cpnt_poolsize_arkCpntGrenadeCooking

- **Value:** `0`
- **Description:** size of the pool for arkCpntGrenadeCookingFactory when the game start

### cpnt_poolsize_arkCpntHackable

- **Value:** `0`
- **Description:** size of the pool for arkCpntHackableFactory when the game start

### cpnt_poolsize_arkCpntHairControl

- **Value:** `0`
- **Description:** size of the pool for arkCpntHairControlFactory when the game start

### cpnt_poolsize_arkCpntHealth

- **Value:** `0`
- **Description:** size of the pool for arkCpntHealthFactory when the game start

### cpnt_poolsize_arkCpntHealthDoor

- **Value:** `0`
- **Description:** size of the pool for arkCpntHealthDoorFactory when the game start

### cpnt_poolsize_arkCpntHealthEvolved

- **Value:** `0`
- **Description:** size of the pool for arkCpntHealthEvolvedFactory when the game start

### cpnt_poolsize_arkCpntHeart

- **Value:** `0`
- **Description:** size of the pool for arkCpntHeartFactory when the game start

### cpnt_poolsize_arkCpntInteractiveMap

- **Value:** `0`
- **Description:** size of the pool for arkCpntInteractiveMapFactory when the game start

### cpnt_poolsize_arkCpntInventory

- **Value:** `0`
- **Description:** size of the pool for arkCpntInventoryFactory when the game start

### cpnt_poolsize_arkCpntItemSpyglass

- **Value:** `0`
- **Description:** size of the pool for arkCpntItemSpyglassFactory when the game start

### cpnt_poolsize_arkCpntKillCamProjectile

- **Value:** `0`
- **Description:** size of the pool for arkCpntKillCamProjectileFactory when the game start

### cpnt_poolsize_arkCpntLODDriver

- **Value:** `0`
- **Description:** size of the pool for arkCpntLODDriverFactory when the game start

### cpnt_poolsize_arkCpntLookAt

- **Value:** `0`
- **Description:** size of the pool for arkCpntLookAtFactory when the game start

### cpnt_poolsize_arkCpntLoot

- **Value:** `0`
- **Description:** size of the pool for arkCpntLootFactory when the game start

### cpnt_poolsize_arkCpntMagicSuppressSound

- **Value:** `0`
- **Description:** size of the pool for arkCpntMagicSuppressSoundFactory when the game start

### cpnt_poolsize_arkCpntMana

- **Value:** `0`
- **Description:** size of the pool for arkCpntManaFactory when the game start

### cpnt_poolsize_arkCpntManagerUpdate

- **Value:** `0`
- **Description:** size of the pool for arkCpntManagerUpdateFactory when the game start

### cpnt_poolsize_arkCpntMesmerize

- **Value:** `0`
- **Description:** size of the pool for arkCpntMesmerizeFactory when the game start

### cpnt_poolsize_arkCpntMesmerizePortal

- **Value:** `0`
- **Description:** size of the pool for arkCpntMesmerizePortalFactory when the game start

### cpnt_poolsize_arkCpntMessageHandler

- **Value:** `0`
- **Description:** size of the pool for arkCpntMessageHandlerFactory when the game start

### cpnt_poolsize_arkCpntMidnightLink

- **Value:** `0`
- **Description:** size of the pool for arkCpntMidnightLinkFactory when the game start

### cpnt_poolsize_arkCpntMidnightPreview

- **Value:** `0`
- **Description:** size of the pool for arkCpntMidnightPreviewFactory when the game start

### cpnt_poolsize_arkCpntMidnightProxy

- **Value:** `0`
- **Description:** size of the pool for arkCpntMidnightProxyFactory when the game start

### cpnt_poolsize_arkCpntMine

- **Value:** `0`
- **Description:** size of the pool for arkCpntMineFactory when the game start

### cpnt_poolsize_arkCpntMissionItem

- **Value:** `0`
- **Description:** size of the pool for arkCpntMissionItemFactory when the game start

### cpnt_poolsize_arkCpntMusicBox

- **Value:** `0`
- **Description:** size of the pool for arkCpntMusicBoxFactory when the game start

### cpnt_poolsize_arkCpntMusicBoxAllegroCone

- **Value:** `0`
- **Description:** size of the pool for arkCpntMusicBoxAllegroConeFactory when the game start

### cpnt_poolsize_arkCpntNPCInteraction

- **Value:** `0`
- **Description:** size of the pool for arkCpntNPCInteractionFactory when the game start

### cpnt_poolsize_arkCpntNPCPossession

- **Value:** `0`
- **Description:** size of the pool for arkCpntNPCPossessionFactory when the game start

### cpnt_poolsize_arkCpntNPCTalk

- **Value:** `0`
- **Description:** size of the pool for arkCpntNPCTalkFactory when the game start

### cpnt_poolsize_arkCpntNavigation

- **Value:** `0`
- **Description:** size of the pool for arkCpntNavigationFactory when the game start

### cpnt_poolsize_arkCpntNavmeshDriver

- **Value:** `0`
- **Description:** size of the pool for arkCpntNavmeshDriverFactory when the game start

### cpnt_poolsize_arkCpntNavmeshToggle

- **Value:** `0`
- **Description:** size of the pool for arkCpntNavmeshToggleFactory when the game start

### cpnt_poolsize_arkCpntNavmeshUserEdges

- **Value:** `0`
- **Description:** size of the pool for arkCpntNavmeshUserEdgesFactory when the game start

### cpnt_poolsize_arkCpntNewGamePlus

- **Value:** `0`
- **Description:** size of the pool for arkCpntNewGamePlusFactory when the game start

### cpnt_poolsize_arkCpntObservable

- **Value:** `0`
- **Description:** size of the pool for arkCpntObservableFactory when the game start

### cpnt_poolsize_arkCpntOdor

- **Value:** `0`
- **Description:** size of the pool for arkCpntOdorFactory when the game start

### cpnt_poolsize_arkCpntOpenable

- **Value:** `0`
- **Description:** size of the pool for arkCpntOpenableFactory when the game start

### cpnt_poolsize_arkCpntPatrolClient

- **Value:** `0`
- **Description:** size of the pool for arkCpntPatrolClientFactory when the game start

### cpnt_poolsize_arkCpntPatrolRoute

- **Value:** `0`
- **Description:** size of the pool for arkCpntPatrolRouteFactory when the game start

### cpnt_poolsize_arkCpntPatrolSquadTree

- **Value:** `0`
- **Description:** size of the pool for arkCpntPatrolSquadTreeFactory when the game start

### cpnt_poolsize_arkCpntPatrolWaypoint

- **Value:** `0`
- **Description:** size of the pool for arkCpntPatrolWaypointFactory when the game start

### cpnt_poolsize_arkCpntPhantasmalNetwork

- **Value:** `0`
- **Description:** size of the pool for arkCpntPhantasmalNetworkFactory when the game start

### cpnt_poolsize_arkCpntPhysicsSystem

- **Value:** `0`
- **Description:** size of the pool for arkCpntPhysicsSystemFactory when the game start

### cpnt_poolsize_arkCpntPhysicsSystemEvolved

- **Value:** `0`
- **Description:** size of the pool for arkCpntPhysicsSystemEvolvedFactory when the game start

### cpnt_poolsize_arkCpntPhysicsWorld

- **Value:** `0`
- **Description:** size of the pool for arkCpntPhysicsWorldFactory when the game start

### cpnt_poolsize_arkCpntPickableHolder

- **Value:** `0`
- **Description:** size of the pool for arkCpntPickableHolderFactory when the game start

### cpnt_poolsize_arkCpntPickable_BoneCharm

- **Value:** `0`
- **Description:** size of the pool for arkCpntPickable_BoneCharmFactory when the game start

### cpnt_poolsize_arkCpntPickable_Simple

- **Value:** `0`
- **Description:** size of the pool for arkCpntPickable_SimpleFactory when the game start

### cpnt_poolsize_arkCpntPlayerBody

- **Value:** `0`
- **Description:** size of the pool for arkCpntPlayerBodyFactory when the game start

### cpnt_poolsize_arkCpntPlayerBreath

- **Value:** `0`
- **Description:** size of the pool for arkCpntPlayerBreathFactory when the game start

### cpnt_poolsize_arkCpntPlayerCamera

- **Value:** `0`
- **Description:** size of the pool for arkCpntPlayerCameraFactory when the game start

### cpnt_poolsize_arkCpntPlayerChaos

- **Value:** `0`
- **Description:** size of the pool for arkCpntPlayerChaosFactory when the game start

### cpnt_poolsize_arkCpntPlayerCombat

- **Value:** `0`
- **Description:** size of the pool for arkCpntPlayerCombatFactory when the game start

### cpnt_poolsize_arkCpntPlayerController

- **Value:** `0`
- **Description:** size of the pool for arkCpntPlayerControllerFactory when the game start

### cpnt_poolsize_arkCpntPlayerCrosshair

- **Value:** `0`
- **Description:** size of the pool for arkCpntPlayerCrosshairFactory when the game start

### cpnt_poolsize_arkCpntPlayerDebugCamControl

- **Value:** `0`
- **Description:** size of the pool for arkCpntPlayerDebugCamControlFactory when the game start

### cpnt_poolsize_arkCpntPlayerDebugCamera

- **Value:** `0`
- **Description:** size of the pool for arkCpntPlayerDebugCameraFactory when the game start

### cpnt_poolsize_arkCpntPlayerFXManager

- **Value:** `0`
- **Description:** size of the pool for arkCpntPlayerFXManagerFactory when the game start

### cpnt_poolsize_arkCpntPlayerInteraction

- **Value:** `0`
- **Description:** size of the pool for arkCpntPlayerInteractionFactory when the game start

### cpnt_poolsize_arkCpntPlayerJournal

- **Value:** `0`
- **Description:** size of the pool for arkCpntPlayerJournalFactory when the game start

### cpnt_poolsize_arkCpntPlayerMenuCamera

- **Value:** `0`
- **Description:** size of the pool for arkCpntPlayerMenuCameraFactory when the game start

### cpnt_poolsize_arkCpntPlayerOutsiderMark

- **Value:** `0`
- **Description:** size of the pool for arkCpntPlayerOutsiderMarkFactory when the game start

### cpnt_poolsize_arkCpntPlayerPhysics

- **Value:** `0`
- **Description:** size of the pool for arkCpntPlayerPhysicsFactory when the game start

### cpnt_poolsize_arkCpntPlayerPhysicsDead

- **Value:** `0`
- **Description:** size of the pool for arkCpntPlayerPhysicsDeadFactory when the game start

### cpnt_poolsize_arkCpntPlayerPowerSystem

- **Value:** `0`
- **Description:** size of the pool for arkCpntPlayerPowerSystemFactory when the game start

### cpnt_poolsize_arkCpntPlayerSensor

- **Value:** `0`
- **Description:** size of the pool for arkCpntPlayerSensorFactory when the game start

### cpnt_poolsize_arkCpntPlayerSensorAimAssist

- **Value:** `0`
- **Description:** size of the pool for arkCpntPlayerSensorAimAssistFactory when the game start

### cpnt_poolsize_arkCpntPlayerSensorAssassination

- **Value:** `0`
- **Description:** size of the pool for arkCpntPlayerSensorAssassinationFactory when the game start

### cpnt_poolsize_arkCpntPlayerSensorAutoCrouch

- **Value:** `0`
- **Description:** size of the pool for arkCpntPlayerSensorAutoCrouchFactory when the game start

### cpnt_poolsize_arkCpntPlayerSensorBase

- **Value:** `0`
- **Description:** size of the pool for arkCpntPlayerSensorBaseFactory when the game start

### cpnt_poolsize_arkCpntPlayerSensorBlink

- **Value:** `0`
- **Description:** size of the pool for arkCpntPlayerSensorBlinkFactory when the game start

### cpnt_poolsize_arkCpntPlayerSensorBlinkSnap

- **Value:** `0`
- **Description:** size of the pool for arkCpntPlayerSensorBlinkSnapFactory when the game start

### cpnt_poolsize_arkCpntPlayerSensorBlinkToMantle

- **Value:** `0`
- **Description:** size of the pool for arkCpntPlayerSensorBlinkToMantleFactory when the game start

### cpnt_poolsize_arkCpntPlayerSensorBloodthirstyFatality

- **Value:** `0`
- **Description:** size of the pool for arkCpntPlayerSensorBloodthirstyFatalityFactory when the game start

### cpnt_poolsize_arkCpntPlayerSensorCatfall

- **Value:** `0`
- **Description:** size of the pool for arkCpntPlayerSensorCatfallFactory when the game start

### cpnt_poolsize_arkCpntPlayerSensorChoke

- **Value:** `0`
- **Description:** size of the pool for arkCpntPlayerSensorChokeFactory when the game start

### cpnt_poolsize_arkCpntPlayerSensorCorpseDrop

- **Value:** `0`
- **Description:** size of the pool for arkCpntPlayerSensorCorpseDropFactory when the game start

### cpnt_poolsize_arkCpntPlayerSensorDevouringSwarm

- **Value:** `0`
- **Description:** size of the pool for arkCpntPlayerSensorDevouringSwarmFactory when the game start

### cpnt_poolsize_arkCpntPlayerSensorDoppelganger

- **Value:** `0`
- **Description:** size of the pool for arkCpntPlayerSensorDoppelgangerFactory when the game start

### cpnt_poolsize_arkCpntPlayerSensorDoppelgangerSwap

- **Value:** `0`
- **Description:** size of the pool for arkCpntPlayerSensorDoppelgangerSwapFactory when the game start

### cpnt_poolsize_arkCpntPlayerSensorDropAssassination

- **Value:** `0`
- **Description:** size of the pool for arkCpntPlayerSensorDropAssassinationFactory when the game start

### cpnt_poolsize_arkCpntPlayerSensorEjectPossessedHost

- **Value:** `0`
- **Description:** size of the pool for arkCpntPlayerSensorEjectPossessedHostFactory when the game start

### cpnt_poolsize_arkCpntPlayerSensorEnemyProximity

- **Value:** `0`
- **Description:** size of the pool for arkCpntPlayerSensorEnemyProximityFactory when the game start

### cpnt_poolsize_arkCpntPlayerSensorGlobalAssassination

- **Value:** `0`
- **Description:** size of the pool for arkCpntPlayerSensorGlobalAssassinationFactory when the game start

### cpnt_poolsize_arkCpntPlayerSensorGrapple

- **Value:** `0`
- **Description:** size of the pool for arkCpntPlayerSensorGrappleFactory when the game start

### cpnt_poolsize_arkCpntPlayerSensorGrappleToMantle

- **Value:** `0`
- **Description:** size of the pool for arkCpntPlayerSensorGrappleToMantleFactory when the game start

### cpnt_poolsize_arkCpntPlayerSensorInteraction

- **Value:** `0`
- **Description:** size of the pool for arkCpntPlayerSensorInteractionFactory when the game start

### cpnt_poolsize_arkCpntPlayerSensorLean

- **Value:** `0`
- **Description:** size of the pool for arkCpntPlayerSensorLeanFactory when the game start

### cpnt_poolsize_arkCpntPlayerSensorLookat

- **Value:** `0`
- **Description:** size of the pool for arkCpntPlayerSensorLookatFactory when the game start

### cpnt_poolsize_arkCpntPlayerSensorMantle

- **Value:** `0`
- **Description:** size of the pool for arkCpntPlayerSensorMantleFactory when the game start

### cpnt_poolsize_arkCpntPlayerSensorMesmerize

- **Value:** `0`
- **Description:** size of the pool for arkCpntPlayerSensorMesmerizeFactory when the game start

### cpnt_poolsize_arkCpntPlayerSensorNavmesh

- **Value:** `0`
- **Description:** size of the pool for arkCpntPlayerSensorNavmeshFactory when the game start

### cpnt_poolsize_arkCpntPlayerSensorPhantasmalLink

- **Value:** `0`
- **Description:** size of the pool for arkCpntPlayerSensorPhantasmalLinkFactory when the game start

### cpnt_poolsize_arkCpntPlayerSensorPlacement

- **Value:** `0`
- **Description:** size of the pool for arkCpntPlayerSensorPlacementFactory when the game start

### cpnt_poolsize_arkCpntPlayerSensorPossession

- **Value:** `0`
- **Description:** size of the pool for arkCpntPlayerSensorPossessionFactory when the game start

### cpnt_poolsize_arkCpntPlayerSensorPowerSnap

- **Value:** `0`
- **Description:** size of the pool for arkCpntPlayerSensorPowerSnapFactory when the game start

### cpnt_poolsize_arkCpntPlayerSensorRangedTarget

- **Value:** `0`
- **Description:** size of the pool for arkCpntPlayerSensorRangedTargetFactory when the game start

### cpnt_poolsize_arkCpntPlayerSensorRuneCharms

- **Value:** `0`
- **Description:** size of the pool for arkCpntPlayerSensorRuneCharmsFactory when the game start

### cpnt_poolsize_arkCpntPlayerSensorSearchTarget

- **Value:** `0`
- **Description:** size of the pool for arkCpntPlayerSensorSearchTargetFactory when the game start

### cpnt_poolsize_arkCpntPlayerSensorTarget

- **Value:** `0`
- **Description:** size of the pool for arkCpntPlayerSensorTargetFactory when the game start

### cpnt_poolsize_arkCpntPlayerSensorThrowHit

- **Value:** `0`
- **Description:** size of the pool for arkCpntPlayerSensorThrowHitFactory when the game start

### cpnt_poolsize_arkCpntPlayerSensorTouch

- **Value:** `0`
- **Description:** size of the pool for arkCpntPlayerSensorTouchFactory when the game start

### cpnt_poolsize_arkCpntPlayerSensorVault

- **Value:** `0`
- **Description:** size of the pool for arkCpntPlayerSensorVaultFactory when the game start

### cpnt_poolsize_arkCpntPlayerSensorWall

- **Value:** `0`
- **Description:** size of the pool for arkCpntPlayerSensorWallFactory when the game start

### cpnt_poolsize_arkCpntPlayerSensorWallCrouch

- **Value:** `0`
- **Description:** size of the pool for arkCpntPlayerSensorWallCrouchFactory when the game start

### cpnt_poolsize_arkCpntPlayerSensorWindowAssassination

- **Value:** `0`
- **Description:** size of the pool for arkCpntPlayerSensorWindowAssassinationFactory when the game start

### cpnt_poolsize_arkCpntPlayerStateMachine

- **Value:** `0`
- **Description:** size of the pool for arkCpntPlayerStateMachineFactory when the game start

### cpnt_poolsize_arkCpntPlayerTutorials

- **Value:** `0`
- **Description:** size of the pool for arkCpntPlayerTutorialsFactory when the game start

### cpnt_poolsize_arkCpntPossession

- **Value:** `0`
- **Description:** size of the pool for arkCpntPossessionFactory when the game start

### cpnt_poolsize_arkCpntPowerBendtime

- **Value:** `0`
- **Description:** size of the pool for arkCpntPowerBendtimeFactory when the game start

### cpnt_poolsize_arkCpntPowerBlink

- **Value:** `0`
- **Description:** size of the pool for arkCpntPowerBlinkFactory when the game start

### cpnt_poolsize_arkCpntPowerDarkVision

- **Value:** `0`
- **Description:** size of the pool for arkCpntPowerDarkVisionFactory when the game start

### cpnt_poolsize_arkCpntPowerDevouringSwarm

- **Value:** `0`
- **Description:** size of the pool for arkCpntPowerDevouringSwarmFactory when the game start

### cpnt_poolsize_arkCpntPowerDoppelganger

- **Value:** `0`
- **Description:** size of the pool for arkCpntPowerDoppelgangerFactory when the game start

### cpnt_poolsize_arkCpntPowerGrapple

- **Value:** `0`
- **Description:** size of the pool for arkCpntPowerGrappleFactory when the game start

### cpnt_poolsize_arkCpntPowerMesmerize

- **Value:** `0`
- **Description:** size of the pool for arkCpntPowerMesmerizeFactory when the game start

### cpnt_poolsize_arkCpntPowerPhantasmalLink

- **Value:** `0`
- **Description:** size of the pool for arkCpntPowerPhantasmalLinkFactory when the game start

### cpnt_poolsize_arkCpntPowerPossession

- **Value:** `0`
- **Description:** size of the pool for arkCpntPowerPossessionFactory when the game start

### cpnt_poolsize_arkCpntPowerShadowWalk

- **Value:** `0`
- **Description:** size of the pool for arkCpntPowerShadowWalkFactory when the game start

### cpnt_poolsize_arkCpntPowerWindblast

- **Value:** `0`
- **Description:** size of the pool for arkCpntPowerWindblastFactory when the game start

### cpnt_poolsize_arkCpntProjectile

- **Value:** `0`
- **Description:** size of the pool for arkCpntProjectileFactory when the game start

### cpnt_poolsize_arkCpntProjectileLauncher

- **Value:** `0`
- **Description:** size of the pool for arkCpntProjectileLauncherFactory when the game start

### cpnt_poolsize_arkCpntRatHoleTrigger

- **Value:** `0`
- **Description:** size of the pool for arkCpntRatHoleTriggerFactory when the game start

### cpnt_poolsize_arkCpntRatSwarm

- **Value:** `0`
- **Description:** size of the pool for arkCpntRatSwarmFactory when the game start

### cpnt_poolsize_arkCpntReferenceFrame

- **Value:** `0`
- **Description:** size of the pool for arkCpntReferenceFrameFactory when the game start

### cpnt_poolsize_arkCpntReferenceFrame_Player

- **Value:** `0`
- **Description:** size of the pool for arkCpntReferenceFrame_PlayerFactory when the game start

### cpnt_poolsize_arkCpntRenderView

- **Value:** `0`
- **Description:** size of the pool for arkCpntRenderViewFactory when the game start

### cpnt_poolsize_arkCpntRetargeting

- **Value:** `0`
- **Description:** size of the pool for arkCpntRetargetingFactory when the game start

### cpnt_poolsize_arkCpntRigidBody

- **Value:** `0`
- **Description:** size of the pool for arkCpntRigidBodyFactory when the game start

### cpnt_poolsize_arkCpntRigidBodyThrowable

- **Value:** `0`
- **Description:** size of the pool for arkCpntRigidBodyThrowableFactory when the game start

### cpnt_poolsize_arkCpntSeverable

- **Value:** `0`
- **Description:** size of the pool for arkCpntSeverableFactory when the game start

### cpnt_poolsize_arkCpntSnoring

- **Value:** `0`
- **Description:** size of the pool for arkCpntSnoringFactory when the game start

### cpnt_poolsize_arkCpntSoundVolumeControl

- **Value:** `0`
- **Description:** size of the pool for arkCpntSoundVolumeControlFactory when the game start

### cpnt_poolsize_arkCpntSpawner

- **Value:** `0`
- **Description:** size of the pool for arkCpntSpawnerFactory when the game start

### cpnt_poolsize_arkCpntSpeech

- **Value:** `0`
- **Description:** size of the pool for arkCpntSpeechFactory when the game start

### cpnt_poolsize_arkCpntStealthEvaluator

- **Value:** `0`
- **Description:** size of the pool for arkCpntStealthEvaluatorFactory when the game start

### cpnt_poolsize_arkCpntStealthModifier

- **Value:** `0`
- **Description:** size of the pool for arkCpntStealthModifierFactory when the game start

### cpnt_poolsize_arkCpntSteamPipeController

- **Value:** `0`
- **Description:** size of the pool for arkCpntSteamPipeControllerFactory when the game start

### cpnt_poolsize_arkCpntStreetSpeaker

- **Value:** `0`
- **Description:** size of the pool for arkCpntStreetSpeakerFactory when the game start

### cpnt_poolsize_arkCpntStunMine

- **Value:** `0`
- **Description:** size of the pool for arkCpntStunMineFactory when the game start

### cpnt_poolsize_arkCpntSwarmAgentPossession

- **Value:** `0`
- **Description:** size of the pool for arkCpntSwarmAgentPossessionFactory when the game start

### cpnt_poolsize_arkCpntSwarmCombat

- **Value:** `0`
- **Description:** size of the pool for arkCpntSwarmCombatFactory when the game start

### cpnt_poolsize_arkCpntSwarmInteraction

- **Value:** `0`
- **Description:** size of the pool for arkCpntSwarmInteractionFactory when the game start

### cpnt_poolsize_arkCpntTimeShiftDevice

- **Value:** `0`
- **Description:** size of the pool for arkCpntTimeShiftDeviceFactory when the game start

### cpnt_poolsize_arkCpntTimersManager

- **Value:** `0`
- **Description:** size of the pool for arkCpntTimersManagerFactory when the game start

### cpnt_poolsize_arkCpntTrigger

- **Value:** `0`
- **Description:** size of the pool for arkCpntTriggerFactory when the game start

### cpnt_poolsize_arkCpntTripwire

- **Value:** `0`
- **Description:** size of the pool for arkCpntTripwireFactory when the game start

### cpnt_poolsize_arkCpntUmbraGate

- **Value:** `0`
- **Description:** size of the pool for arkCpntUmbraGateFactory when the game start

### cpnt_poolsize_arkCpntUsableStatic

- **Value:** `0`
- **Description:** size of the pool for arkCpntUsableStaticFactory when the game start

### cpnt_poolsize_arkCpntUsableWithStateList

- **Value:** `0`
- **Description:** size of the pool for arkCpntUsableWithStateListFactory when the game start

### cpnt_poolsize_arkCpntVersus

- **Value:** `0`
- **Description:** size of the pool for arkCpntVersusFactory when the game start

### cpnt_poolsize_arkCpntVersusGrab

- **Value:** `0`
- **Description:** size of the pool for arkCpntVersusGrabFactory when the game start

### cpnt_poolsize_arkCpntVisualPenetrationCorrector

- **Value:** `0`
- **Description:** size of the pool for arkCpntVisualPenetrationCorrectorFactory when the game start

### cpnt_poolsize_arkCpntVolumetric

- **Value:** `0`
- **Description:** size of the pool for arkCpntVolumetricFactory when the game start

### cpnt_poolsize_arkCpntWallOfLight

- **Value:** `0`
- **Description:** size of the pool for arkCpntWallOfLightFactory when the game start

### cpnt_poolsize_arkCpntWatchTower

- **Value:** `0`
- **Description:** size of the pool for arkCpntWatchTowerFactory when the game start

### cpnt_poolsize_arkCpntWater

- **Value:** `0`
- **Description:** size of the pool for arkCpntWaterFactory when the game start

### cpnt_poolsize_arkCpntWeaponCrossbow

- **Value:** `0`
- **Description:** size of the pool for arkCpntWeaponCrossbowFactory when the game start

### cpnt_poolsize_arkCpntWeaponGun

- **Value:** `0`
- **Description:** size of the pool for arkCpntWeaponGunFactory when the game start

### cpnt_poolsize_arkCpntWeaponGunNPC

- **Value:** `0`
- **Description:** size of the pool for arkCpntWeaponGunNPCFactory when the game start

### cpnt_poolsize_arkCpntWeaponMeleeNPC

- **Value:** `0`
- **Description:** size of the pool for arkCpntWeaponMeleeNPCFactory when the game start

### cpnt_poolsize_arkCpntWeaponMeleePlayer

- **Value:** `0`
- **Description:** size of the pool for arkCpntWeaponMeleePlayerFactory when the game start

### cpnt_poolsize_arkCpntWeaponPlaceable

- **Value:** `0`
- **Description:** size of the pool for arkCpntWeaponPlaceableFactory when the game start

### cpnt_poolsize_arkCpntWeaponThrowable

- **Value:** `0`
- **Description:** size of the pool for arkCpntWeaponThrowableFactory when the game start

### cpnt_poolsize_arkCpntWeaponThrowableNPC

- **Value:** `0`
- **Description:** size of the pool for arkCpntWeaponThrowableNPCFactory when the game start

### cpnt_poolsize_arkCpntWhaleOilDevice

- **Value:** `0`
- **Description:** size of the pool for arkCpntWhaleOilDeviceFactory when the game start

### cpnt_poolsize_arkCpntWhaleOilTank

- **Value:** `0`
- **Description:** size of the pool for arkCpntWhaleOilTankFactory when the game start

### cpnt_poolsize_arkCpntWind

- **Value:** `0`
- **Description:** size of the pool for arkCpntWindFactory when the game start

### cpnt_poolsize_arkCpntWindMill

- **Value:** `0`
- **Description:** size of the pool for arkCpntWindMillFactory when the game start

### cpnt_poolsize_arkCpntWindblast

- **Value:** `0`
- **Description:** size of the pool for arkCpntWindblastFactory when the game start

### demo_overrideLoadingScreen

- **Value:** ``
- **Description:** Name of the loading screen GUI to use when loading a level

### devgui

- **Value:** `0`
- **Description:** 0 = disable DevGUI, 1 = enable DevGUI, 2 = enable DevGUI with key legend

### devgui_currentSyncMeleeAINum

- **Value:** `0`
- **Description:** 0 = disable, 1 - 6, show a different AI and its various sync styles.

### devgui_currentSyncMeleeNum

- **Value:** `0`
- **Description:** 0 = disable, 1 - n, show a different AI sync melee interaction.

### dialog_useNewSaveIndicator

- **Value:** `1`
- **Description:** —

### e_exportOBJ_rotationAngle

- **Value:** `180`
- **Description:** export OBJ, rotation angle around axis

### e_exportOBJ_rotationX

- **Value:** `0`
- **Description:** export OBJ, rotation axis, X component

### e_exportOBJ_rotationY

- **Value:** `0`
- **Description:** export OBJ, rotation axis, Y component

### e_exportOBJ_rotationZ

- **Value:** `1`
- **Description:** export OBJ, rotation axis, Z component

### e_exportOBJ_scale

- **Value:** `100`
- **Description:** export OBJ scale

### envShot_conservation_bias

- **Value:** `0`
- **Description:** balance for power scaling

### fc_checkHdcTimestamps

- **Value:** `0`
- **Description:** If zero, don't clear the hard disk cache when timestamps are dirty

### fc_hardDiskNoSeekOffset

- **Value:** `16`
- **Description:** number of cache lines that can be skipped without seeking

### fc_hardDiskRequestTimeOut

- **Value:** `24`
- **Description:** milliseconds after which a request times out

### fc_maxCacheMemoryMB

- **Value:** `1`
- **Description:** Maximum cache size in megabytes

### fc_opticalDiskNoSeekOffset

- **Value:** `16`
- **Description:** number of cache lines that can be skipped without seeking

### fc_opticalDiskRequestTimeOut

- **Value:** `48`
- **Description:** milliseconds after which a request times out

### fc_opticalDiskSkipOffset

- **Value:** `5`
- **Description:** keep on reading if the next cache line is less than this many lines ahead

### fc_useHdc

- **Value:** `0`
- **Description:** 1 = enable hard hard cache, 2 = force hard disk cache

### fc_verifyCacheReadData

- **Value:** `0`
- **Description:** Compare every cache read with an actual ReadOfs

### forge_hackForceReportFromCA

- **Value:** `0`
- **Description:** force crash reports from CA to be accepted by Forge.

### forge_realm

- **Value:** `production`
- **Description:** Realm for forge network traffic routing.

### forge_site

- **Value:** `dallas.id`
- **Description:** Location for forge network traffic routing.

### fs_arbitraryZipSupport

- **Value:** `1`
- **Description:** default = 1, 0 = will not load zip files

### fs_atomicFileWrite

- **Value:** `1`
- **Description:** Return idFile_AtomicWrite instead of idFile_Permanent on OpenFileWrite

### fs_basepath

- **Value:** ``
- **Description:** (Read Only) Location for game files

### fs_benchmarkSeekMicroseconds

- **Value:** `20000`
- **Description:** If benchmark < this, assume HD

### fs_cachepath

- **Value:** ``
- **Description:** (Read/Write) Location for temporary files

### fs_caseSensitiveOS

- **Value:** `0`
- **Description:** —

### fs_debug

- **Value:** `0`
- **Description:** —

### fs_generatedPath

- **Value:** `generated`
- **Description:** Location of generated data

### fs_installpath

- **Value:** ``
- **Description:** (Read/Write) Location for installed files

### fs_mtpWholeReadThreshold

- **Value:** `524288`
- **Description:** if an mtp file size is less than this threshold, block read the entire thing and return a memory file

### fs_noCheckout

- **Value:** `0`
- **Description:** 1 = chmod local files for writing/deleting instead of checking out

### fs_noOverlappedIO

- **Value:** `0`
- **Description:** default = 0, 1 = uses blocking reads instead of overlapped reads

### fs_readOnly

- **Value:** `0`
- **Description:** default = 0, 1 = will set file system to read only

### fs_reportReads

- **Value:** `0`
- **Description:** Report every filesystem reads

### fs_savepath

- **Value:** ``
- **Description:** (Read/Write) Location for development storage files, overwrites the default savegame path as well for the PC

### fs_shareRetry

- **Value:** `0`
- **Description:** default = 0, 1 = retry opening files when encountering a sharing error

### fs_sourceControlEnable

- **Value:** `0`
- **Description:** enable automatic source control gets for missing files

### fs_sourceControlGetWholeFolders

- **Value:** `0`
- **Description:** update the entire folder on a source control get, only gets files with the same extension, currently excludes tgas

### g_aiIncomingDamageScale

- **Value:** `1.0`
- **Description:** —

### g_allowAutoCvarReset

- **Value:** `1`
- **Description:** Allow the CVar reset between two map loading

### g_arkRemoteDbgMgrAutoConnectLocal

- **Value:** `0`
- **Description:** True to make idStudio auto connect to localhost.

### g_bendTimeFactorInLerpDuration

- **Value:** `0.001`
- **Description:** the 0 to 1 lerp duration of bendTimeFactor renderparm, used to control bendtime colorGrading

### g_bendTimeFactorOutLerpDuration

- **Value:** `0.957`
- **Description:** the 1 to 0 lerp duration of bendTimeFactor renderparm, used to control bendtime colorGrading

### g_bloodEffects

- **Value:** `1`
- **Description:** show blood splats, sprays and gibs

### g_damageSave

- **Value:** `0`
- **Description:** reduces damage taken based on percentage of health vs maxhealth

### g_damageScale

- **Value:** `1`
- **Description:** scale final damage on player by this factor

### g_debugCounts

- **Value:** `0`
- **Description:** print debug information about entity counts and calls to expensive functions

### g_debugEventQueue

- **Value:** `0`
- **Description:** prints a message if event queue num exceeds this amount

### g_debugFootStepEffect

- **Value:** `0`
- **Description:** print debug information about footstep impact effects

### g_debugImpactEffect

- **Value:** `0`
- **Description:** print debug information about projectile impact effects

### g_debugLayers

- **Value:** `0`
- **Description:** print information about layer changes during play

### g_debugLines

- **Value:** `0`
- **Description:** 1 = show debug points as lines

### g_debugManagedObjectRegistration

- **Value:** `0`
- **Description:** Turn on printf debuging for managed objects register and unregister

### g_debugMover

- **Value:** `0`
- **Description:** print debug information about movers moving

### g_debugPlayer

- **Value:** `-1`
- **Description:** Player for debug commands like noclip. If -1, it will use the local player

### g_debugRenderForceDepthTest

- **Value:** `0`
- **Description:** if true, then debug render geometry will always depth test

### g_debugScript

- **Value:** `0`
- **Description:** print debug information about threads being created and destroyed

### g_debugTriggers

- **Value:** `0`
- **Description:** print 'x activated by y' when a trigger activates something

### g_debugWeapon

- **Value:** `0`
- **Description:** print debug information about weapon states, also draws lines when monsters are alerted and shows melee range

### g_disasm

- **Value:** `0`
- **Description:** disassemble script into base/script/disasm.txt on the local drive when script is compiled

### g_dragDamping

- **Value:** `0.5`
- **Description:** set the damping force for g_dragEntity (0 makes object 'snap' to the cursor, 1 makes it more springy)

### g_dragEntity

- **Value:** `0`
- **Description:** allows dragging physics objects around by placing the crosshair over them and holding the fire button

### g_dragShowSelection

- **Value:** `0`
- **Description:** draw the bounding box of the selected entity

### g_drawBob

- **Value:** `0`
- **Description:** draw a graph of view bob ( angle and offset )

### g_drawCrouch

- **Value:** `0`
- **Description:** draw a graph of crouch correction

### g_drawDPSFromPlayer

- **Value:** `0`
- **Description:** Draw the damage per second inflicted by the player

### g_drawDPSFromPlayerHeight

- **Value:** `100`
- **Description:** How far above each entity's origin to draw the DPS text

### g_drawDPSFromPlayerScale

- **Value:** `0.5`
- **Description:** How large to draw the DPS text

### g_drawSway

- **Value:** `0`
- **Description:** draw a graph of hands sway

### g_dumpActiveEntities

- **Value:** `0`
- **Description:** Dump the names of the active entities to the console

### g_dumpSpawnedEntities

- **Value:** `0`
- **Description:** Dump the names of spawned entities to the console

### g_editEntityCloneDist

- **Value:** `2`
- **Description:** how far from the camera the newly cloned entity is placed, default = 2

### g_editEntityGridSize

- **Value:** `0`
- **Description:** snap to grid for entity dragging, default = 0

### g_editEntityMode

- **Value:** `0`
- **Description:** 0 = off 1 = lights 2 = sounds 3 = articulated figures 4 = particle systems 5 = monsters 6 = entity names 7 = entity models 8 = fx 9 = entity properties

### g_editEntityMouseDrag

- **Value:** `0`
- **Description:** 0 = use bound keys + LMB to drag entity around, 1 = use LMB + drag to move entities

### g_enableDamageRecording

- **Value:** `0`
- **Description:** Enable recording of damage for DPS debugging

### g_eventTimeThreshold

- **Value:** `1`
- **Description:** only show times for events that exceed this

### g_explodeOriginEnts

- **Value:** `0`
- **Description:** spread out all entities at world origin

### g_fixMouseSensibility

- **Value:** `1`
- **Description:** fix mouse sensibility

### g_freeCam

- **Value:** `1`
- **Description:** enable free camera

### g_freezeTime

- **Value:** `0`
- **Description:** 1 = stop all game time and go into free camera mode

### g_gameFixedDt

- **Value:** `0`
- **Description:** Set game delta time fixed

### g_invertLookYAxis

- **Value:** `0`
- **Description:** inverts the gamepad look Y axis

### g_invertMouseYAxis

- **Value:** `0`
- **Description:** inverts the mouse Y axis

### g_kickAmplitude

- **Value:** `1`
- **Description:** scale how far a damage kick to the view angles moves

### g_kickTime

- **Value:** `1`
- **Description:** scale how long a damage kick to the view angles lasts

### g_knockback

- **Value:** `-1`
- **Description:** If -1, use knockback value from damage decl. If > -1, this cvar will override the damage decl's knockback value.

### g_leanToggle

- **Value:** `1`
- **Description:** lean toggle mode.

### g_limitPhysicStepVariation

- **Value:** `0`
- **Description:** Limit the physics step variation to 1 step per frame

### g_loadAllLayers

- **Value:** `0`
- **Description:** 1 = loads all entities in all layers

### g_lookStickSensitivityX

- **Value:** `1.0f`
- **Description:** look stick X sensitivity ratio

### g_lookStickSensitivityY

- **Value:** `1.0f`
- **Description:** look stick Y sensitivity ratio

### g_maxPlayerMeleeWeapons

- **Value:** `1`
- **Description:** maximum number of melee weapons the player is allowed to carry at one time

### g_maxPlayerWeapons

- **Value:** `4`
- **Description:** maximum number of weapons the player is allowed to carry at one time

### g_minLoadMapTimeMs

- **Value:** `0`
- **Description:** To test loading screen

### g_mouseClamp

- **Value:** `360.0f`
- **Description:** clamper for mouse movements normalization

### g_mouseSensitivity

- **Value:** `1.0f`
- **Description:** mouse sensitivity ratio

### g_mouseSmooth

- **Value:** `1`
- **Description:** number of samples blended for mouse viewing

### g_onlineDebug

- **Value:** `0`
- **Description:** Print online debug text.

### g_physicsStepTolerance

- **Value:** `0.2`
- **Description:** Tolerance to avoid always changing the number of physics substeps to catch up with the real time

### g_playerDebugCameraDistance

- **Value:** `3.0`
- **Description:** Distance to the player. Best increment is abs(0.1).

### g_playerDebugCameraPitchAngle

- **Value:** `10.0f`
- **Description:** Player debug camPitch angle (in degree) from behind the player.

### g_playerDebugCameraYawAngle

- **Value:** `0.0`
- **Description:** Yaw angle from behind the player in degree.

### g_playerHealthRegenDelay

- **Value:** `5`
- **Description:** seconds we wait after last damage to give health back to player

### g_playerHealthRegenInterval

- **Value:** `0.5`
- **Description:** once regenerating health how often to increment

### g_playerHealthRegenRate

- **Value:** `0`
- **Description:** once regenerating health, how much we give per second

### g_playerIncomingDamageScale

- **Value:** `1.0`
- **Description:** —

### g_playerShieldRegenDelay

- **Value:** `5`
- **Description:** seconds we wait after last damage to give shield back to player

### g_playerShieldRegenInterval

- **Value:** `0.5`
- **Description:** once regenerating shield how often to increment

### g_playerShieldRegenRate

- **Value:** `0`
- **Description:** once regenerating shield, how much we give per second

### g_pvsLocationMemory

- **Value:** `0`
- **Description:** used to store a position that will be checked against the players PVS. Set to 'current' to tag your current pos, or 'clear' to clear.

### g_recordDamageSecs

- **Value:** `2`
- **Description:** How many seconds of damage should be recorded

### g_runFrames

- **Value:** `0`
- **Description:** you can set g_runFrames while g_stopTime is set to have the game run that many frames, then stop again

### g_showActiveEntities

- **Value:** `0`
- **Description:** draws boxes around thinking entities. dormant entities (outside of pvs) are drawn yellow. non-dormant are green.

### g_showAllPlayerInfo

- **Value:** `0`
- **Description:** shows player information for All players.

### g_showCategoryWarnings

- **Value:** `0`
- **Description:** show debugManager category warnings

### g_showCloth

- **Value:** `0`
- **Description:** shows cloth springs and points. 1 = show points, 2 = show springs, 3 = show collisions, 4 = show all

### g_showCollisionNoSkipEntity

- **Value:** `0`
- **Description:** if set to 1, g_showcollisionModels will not skip any entity (including current)

### g_showDoorBounds

- **Value:** `0`
- **Description:** draws door bounds

### g_showEditEntityDepthTested

- **Value:** `0`
- **Description:** draws the debug bounds in edit mode with depth testing

### g_showEditEntityInfo

- **Value:** `0`
- **Description:** draws debug info when editing entities with g_editEntityMode > 0

### g_showEditEntityLocalAxes

- **Value:** `0`
- **Description:** draws the local axes of the selected entity instead of world axes

### g_showEditLayerNames

- **Value:** `0`
- **Description:** draws the layer names when g_editEntityMode is enabled

### g_showEntityInfo

- **Value:** `0`
- **Description:** draws boxes around all entities. cyan for actors, orange for triggers, green for solid, grey for everything else. also prints the entity name and number in the box

### g_showEventTimes

- **Value:** `0`
- **Description:** 1 = show execution times for game events

### g_showGameDeclHeapWarnings

- **Value:** `0`
- **Description:** Issues warnings for game decls that are allocated on the global heap

### g_showGuis

- **Value:** `1`
- **Description:** enables drawing of GUI elements other then HUD

### g_showHud

- **Value:** `1`
- **Description:** enables drawing of HUD elements

### g_showLightEntities

- **Value:** `0`
- **Description:** includes light entities when editing sounds ( g_editEntityMode == 2 )

### g_showPlayerInfo

- **Value:** `1`
- **Description:** enables drawing of Player Information elements in the HUD (e.g. name and health).

### g_showPlayerShadow

- **Value:** `0`
- **Description:** enables shadow of player model

### g_showPoiInfo

- **Value:** `1`
- **Description:** enables drawing of Poi Information elements in the HUD (e.g. leader, base, flag).

### g_showSpread

- **Value:** `0`
- **Description:** draws a debug circle to show the spread on the weapon

### g_showStatics

- **Value:** `0`
- **Description:** draws boxes around func/static entities.

### g_showTargets

- **Value:** `0`
- **Description:** draws entities and their targets. hidden entities are drawn gray.

### g_showThinks

- **Value:** `0`
- **Description:** show entity thinks

### g_showTriggers

- **Value:** `0`
- **Description:** draws trigger entities (orange) and thier targets (green). disabled triggers are drawn grey.

### g_showXPGainInfo

- **Value:** `0`
- **Description:** If true, shows info about XP gain for clients.

### g_skipCloth

- **Value:** `0`
- **Description:** skips cloth simulation

### g_skipMessageBox

- **Value:** `0`
- **Description:** Message box won't be displayed.

### g_skipViewEffects

- **Value:** `0`
- **Description:** skip damage and other view effects

### g_sleep

- **Value:** `0`
- **Description:** Testing tool to force longer game frames

### g_spread_noSpread

- **Value:** `0`
- **Description:** Toggles Weapon Spread On/Off for debugging

### g_sprintToggle

- **Value:** `1`
- **Description:** sprint toggle mode.

### g_stopTime

- **Value:** `0`
- **Description:** 1 - stops all entity updating, but the player can still run around, 2 - stop all entity updating, including player uses free cam

### g_testDeath

- **Value:** `0`
- **Description:** disable fading and respawning when you die so you can see what happens when you die

### g_testFxAxisSize

- **Value:** `1.0`
- **Description:** Size of the TestFx debug axis

### g_testFxAxisTTL

- **Value:** `2.0`
- **Description:** Time to live of the TestFx debug axis

### g_testFxDeletePreviousInstance

- **Value:** `1`
- **Description:** Delete the previous entity/fx pair

### g_testFxName

- **Value:** ``
- **Description:** fx decl name used for the testFx command in absence of a name parameter

### g_testFxNormalOffset

- **Value:** `0.5`
- **Description:** Offset of fx position along the surface normal

### g_timeEntities

- **Value:** `0`
- **Description:** when non-zero, shows entities whose think functions exceeded the # of milliseconds specified

### g_useGaussianAimSpread

- **Value:** `1`
- **Description:** Player weapons use approximated gaussian spread (0 uses uniform linear spread)

### g_vendorSalePriceScale

- **Value:** `1.0`
- **Description:** —

### g_viewNodalX

- **Value:** `0`
- **Description:** eye distance from the neck in the x direction

### g_viewNodalZ

- **Value:** `0`
- **Description:** eye distance from the neck in the z direction

### g_weaponSpreadScale

- **Value:** `1.0`
- **Description:** Global player weapon spread scale

### g_weaponkick

- **Value:** `1`
- **Description:** apply first person weapon kick

### gamedate

- **Value:** `Dec  3 2018`
- **Description:** —

### gp_manaEnable

- **Value:** `1`
- **Description:** 0 to disable mana usage

### gp_powerCooldownEnable

- **Value:** `1`
- **Description:** 0 to disable power cooldown

### iggy_framerate_warning_enable

- **Value:** `0`
- **Description:** enable iggy framerate warnings

### image_anisotropy

- **Value:** `1`
- **Description:** set the maximum texture anisotropy if available

### image_lodbias

- **Value:** `0`
- **Description:** change lod bias on mipmapped images

### image_magFilter

- **Value:** `LINEAR`
- **Description:** changes texture filtering on mipmapped images

### image_minFilter

- **Value:** `LINEAR`
- **Description:** changes texture filtering on mipmapped images

### image_mipFilter

- **Value:** `LINEAR`
- **Description:** changes texture filtering on mipmapped images

### image_screenshotQuality

- **Value:** `75`
- **Description:** sets the compression quality for jpeg screenshots, 100 is best quality

### image_useCompression

- **Value:** `1`
- **Description:** 0 = force everything to high quality

### image_watermark

- **Value:** ``
- **Description:** places a watermark each image with a watermark

### in_controlInactiveWindow

- **Value:** `0`
- **Description:** allow joystick input to control game instances that don't have win focus

### lang_maskLocalizedStrings

- **Value:** `0`
- **Description:** Masks all localized strings to help debugging. When set will replace strings with an equal length of W's and ending in an X. Note: The masking occurs at string table load time.

### lod_dist_far

- **Value:** `50`
- **Description:** under that distance the entity lod isn't far.

### lod_dist_level0

- **Value:** `3`
- **Description:** under that distance the entity lod level0.

### lod_dist_level1

- **Value:** `6`
- **Description:** under that distance the entity lod level1.

### lod_dist_level2

- **Value:** `12`
- **Description:** under that distance the entity lod level2.

### lod_dist_level3

- **Value:** `20`
- **Description:** under that distance the entity lod level3.

### lod_dist_warmup_framecount

- **Value:** `3`
- **Description:** number of frame to run before going to lod.

### lod_forcevisibledistance

- **Value:** `10`
- **Description:** under that distance the entity is considered visible.

### mdnt_canStartWarnings

- **Value:** `0`
- **Description:** To warn on CanStartMdnt fail cases.

### mdnt_minDistanceForLod

- **Value:** `25`
- **Description:** Indicate the minimum distance to an Entity of Midnight to permit LOD.

### mdnt_multithreaded_start

- **Value:** `1`
- **Description:** Enable the multithread for start and change scene on the Midnight instances.

### mdnt_multithreaded_updates

- **Value:** `1`
- **Description:** Enable the multithread for update on the Midnight instances.

### mem_UseTwoDiffusePools

- **Value:** `1`
- **Description:** Use two diffuse pools for the wastelands

### mem_crashGenerateFullDump

- **Value:** `0`
- **Description:** configure crashreporter to generate full dump. 2 = advanced filtering.

### mem_findStalePointers

- **Value:** `0`
- **Description:** Run the heap pointer checking before resetMapHeap

### mem_guardMapHeap

- **Value:** `0`
- **Description:** Don't destroy map heaps on exit, guard them instead (64 bit build required)

### mem_phyMemBlockSizeM

- **Value:** `190`
- **Description:** Size (in MB) of the physical memory block

### mem_printAllocsOnMapHeapDestroy

- **Value:** `0`
- **Description:** Print out any unfreed allocations on map heap destroy

### mq_channelmax

- **Value:** `0`
- **Description:** highest channel number permitted by server ( 0 = no specific limit )

### mq_enable

- **Value:** `1`
- **Description:** Enables the AMQP traffic

### mq_framemax

- **Value:** `0`
- **Description:** frame size maximum, in bytes - the client can ask for a lower size than the server supports but not larger ( 0 = no specific limit )

### mq_heartbeat

- **Value:** `10`
- **Description:** heartbeat delay, in seconds - the client attempts to negotiate the heartbeat rate with the server on connect ( 0 = no heartbeats )

### mq_host

- **Value:** `mq.build.eden.idsoftware.com`
- **Description:** host address of the AMQP server ... preferrably RabbitMQ

### mq_maxRetries

- **Value:** `9`
- **Description:** Number of attempts AMQP library will make to connect to a server. ( -1=indefinite, 0=no retry )

### mq_port

- **Value:** `5672`
- **Description:** port for AMQP server

### mq_pw

- **Value:** `guest`
- **Description:** credible user password

### mq_retryInterval

- **Value:** `20`
- **Description:** Base interval at which AMQP library tries to reconnect to a server.

### mq_user

- **Value:** `guest`
- **Description:** credible user account

### mq_verbose

- **Value:** `0`
- **Description:** Control AMQP library and client(s) chattiness.

### mq_vhost

- **Value:** `forge`
- **Description:** default vhost for connection

### mtp_server

- **Value:** ``
- **Description:** IP Address of the MTP server

### mtp_writeSize

- **Value:** `1048576`
- **Description:** per write size for mtp writes to server

### multiView_60Hz

- **Value:** `1`
- **Description:** 0 = alternate frame rendering, 1 = render both each frame

### net_LobbyCoalesceTimeInSeconds

- **Value:** `30`
- **Description:** Time in seconds when a lobby will try to coalesce with another lobby when there is only one user.

### net_LobbyRandomCoalesceTimeInSeconds

- **Value:** `3`
- **Description:** Random time to add to net_LobbyCoalesceTimeInSeconds

### net_checkReliableMessageSize

- **Value:** `0`
- **Description:** will check all reliable messages agenst the goal size. 0 == off, 1 == on

### net_dedicatedPort

- **Value:** `27016`
- **Description:** host port number

### net_dedicatedServerMode

- **Value:** `0`
- **Description:** 0 = Connect to master server first, 1 = connect to process server first, 2 = connect directly to instance

### net_forceDrop

- **Value:** `0`
- **Description:** Percentage chance of simulated network packet loss

### net_forceLatency

- **Value:** `0`
- **Description:** Simulate network latency (milliseconds round trip time - applied equally on the receive and on the send)

### net_forceMatchBrowser

- **Value:** `1`
- **Description:** —

### net_forceUpstream

- **Value:** `0`
- **Description:** Force a maximum upstream in kB/s (256kbps <-> 32kB/s)

### net_forceUpstreamQueue

- **Value:** `64`
- **Description:** How much data is queued when enforcing upstream (in kB)

### net_goalReliableMessageSize

- **Value:** `750`
- **Description:** the goal size for reliable message to be under

### net_ip

- **Value:** `localhost`
- **Description:** local IP address

### net_masterServerAddress

- **Value:** `12.145.63.232`
- **Description:** Address of the master server.

### net_maxLoadResourcesTimeInSeconds

- **Value:** `0`
- **Description:** How long, in seconds, clients have to load resources. Used for loose asset builds.

### net_maxRate

- **Value:** `50`
- **Description:** max send rate in kilobytes per second

### net_maxSearchResults

- **Value:** `25`
- **Description:** Max results that are allowed to be returned in a search request

### net_maxSearchResultsToTry

- **Value:** `5`
- **Description:** Max results to try before giving up.

### net_migrateHost

- **Value:** `-1`
- **Description:** Become host of session (0 = party, 1 = game) for testing purposes

### net_numPorts

- **Value:** `8`
- **Description:** Number of ports to try to open or broadcast for non-platform backend mode

### net_offlineTransitionThreshold

- **Value:** `1000`
- **Description:** Time, in milliseconds, to wait before kicking back to the main menu when a profile losses backend connection during an online game

### net_port

- **Value:** `27015`
- **Description:** non platform backend port number

### net_showReliableCompression

- **Value:** `0`
- **Description:** Show reliable compression ratio.

### net_socksPassword

- **Value:** ``
- **Description:** —

### net_socksPort

- **Value:** `1080`
- **Description:** —

### net_socksServer

- **Value:** ``
- **Description:** —

### net_socksUsername

- **Value:** ``
- **Description:** —

### net_testPartyMemberConnectFail

- **Value:** `-1`
- **Description:** Force this party member index to fail to connect to games.

### net_useDedicatedServer

- **Value:** `1`
- **Description:** 0 = Don't use dedicated servers. 1 = Try if this is an official build from the build machine. 2 = Always try

### net_usePlatformBackend

- **Value:** `1`
- **Description:** Depending on the platform this will use the backend rather then direct connection. (Steam on PC, Live on xboxOne, PSN on ps4)

### net_verbose

- **Value:** `0`
- **Description:** Print a bunch of message about the network session

### net_verboseReliable

- **Value:** `0`
- **Description:** Prints the more spammy messages about reliable network msgs

### net_verboseResource

- **Value:** `0`
- **Description:** Prints a bunch of message about network resources

### net_verboseSimulatedTraffic

- **Value:** `0`
- **Description:** Print some stats about simulated traffic (net_force\* cvars)

### net_verifyReliableQueue

- **Value:** `2`
- **Description:** 0: warn only, 1: error, 2: fixup, 3: fixup and verbose, 4: force test

### nmap_height

- **Value:** `48.f`
- **Description:** default height value for normal map generation

### noGoreSku

- **Value:** `0`
- **Description:** define whether to use no gore texture variation for specific sku like japanese

### pc_currentDisc

- **Value:** `1`
- **Description:** test new pc monolithic layout, 1, 2, 3

### player_debugShake

- **Value:** `0`
- **Description:** 1 = display debugging info for camera shakes

### player_debug_instantBlink

- **Value:** `0`
- **Description:** If true, player blinks instantly.

### pm_backSpeedRatio

- **Value:** `0.75`
- **Description:** ratio of player max backward speed to forward speed

### pm_crouchspeed

- **Value:** `2.5`
- **Description:** speed the player can move while crouched

### pm_crouchviewheight

- **Value:** `0.71875`
- **Description:** height of player's view while crouched

### pm_disableFatalFall

- **Value:** `0`
- **Description:** if true - player takes no damage from falls

### pm_doom4BobCycle

- **Value:** `1`
- **Description:** use the Doom4 additive animated bob cycle

### pm_jumpheight

- **Value:** `0.8125`
- **Description:** approximate hieght the player can jump

### pm_maxviewpitch

- **Value:** `89`
- **Description:** amount player's view can look down

### pm_minviewpitch

- **Value:** `-89`
- **Description:** amount player's view can look up (negative values are up)

### pm_noBob

- **Value:** `0`
- **Description:** turns off view bob and weapon sway

### pm_noclipspeed

- **Value:** `400`
- **Description:** speed the player can move while in noclip

### pm_normalviewheight

- **Value:** `1.359375`
- **Description:** height of player's view while standing

### pm_runspeed

- **Value:** `4.375`
- **Description:** speed the player can move while running

### pm_screenParticleOffset

- **Value:** `3.2`
- **Description:** forward offset when placing screen particles

### pm_sprintAngle

- **Value:** `100.0`
- **Description:** the angle the player has to stay in with their forward movement

### pm_sprintBackSpeedRatio

- **Value:** `0.50`
- **Description:** ratio of player max sprint backward speed to forward speed

### pm_sprintChargeTime

- **Value:** `3000`
- **Description:** how many ms to fully recharge sprint

### pm_sprintMaxTime

- **Value:** `8000`
- **Description:** how many ms the player can sprint

### pm_sprintNoInputStopTime

- **Value:** `0`
- **Description:** how long there has to be no input before sprinting stops

### pm_sprintStickDeadZone

- **Value:** `100.0f`
- **Description:** how far the movement stick has to be pressed forward before we allow sprint to kick in max is 120 because full stick max is 127

### pm_sprintStrafe

- **Value:** `1`
- **Description:** allow sprint strafing

### pm_sprintStrafeAndWeaponFire

- **Value:** `0`
- **Description:** allow full weapon use while sprinting and allow strafe sprinting

### pm_sprintspeed

- **Value:** `7.03125`
- **Description:** speed the player can move while sprinting

### pm_stepsize

- **Value:** `0.25`
- **Description:** maximum height the player can step up without jumping

### pm_thirdPerson

- **Value:** `0`
- **Description:** enables third person view

### pm_thirdPersonAngle

- **Value:** `0`
- **Description:** direction of camera from player in 3rd person in degrees (0 = behind player, 180 = in front)

### pm_thirdPersonClip

- **Value:** `1`
- **Description:** clip third person view into world space

### pm_thirdPersonFocusJoint

- **Value:** `head`
- **Description:** focus joint of the third person camera

### pm_thirdPersonHeight

- **Value:** `0`
- **Description:** height of camera from normal view height in 3rd person

### pm_thirdPersonRange

- **Value:** `2.1875`
- **Description:** camera distance from player in 3rd person

### pm_thrusterSprintAngle

- **Value:** `45.0f`
- **Description:** the angle the player has to stay in with their forward movement

### pm_thrusterSprintBackSpeedRatio

- **Value:** `0.50`
- **Description:** ratio of player max sprint backward speed to forward speed for thruster sprint

### pm_thrusterSprintChargeTime

- **Value:** `2500`
- **Description:** how many ms to fully recharge thruster sprint

### pm_thrusterSprintDelayTime

- **Value:** `2500`
- **Description:** how many ms to delay before sprinting is possible again

### pm_thrusterSprintEnable

- **Value:** `0`
- **Description:** enable thruster sprint instead of old sprint

### pm_thrusterSprintMaxTime

- **Value:** `2500`
- **Description:** how many ms the player can thruster sprint

### pm_thrusterSprintRechargeFromEmpty

- **Value:** `1`
- **Description:** if true, the recharge always starts from empty regardless of how much sprint time was actually used

### pm_thrusterSprintStickDeadZone

- **Value:** `100.0f`
- **Description:** how far the movement stick has to be pressed forward before we allow thruster sprint to kick in max is 120 because full stick max is 127

### pm_thrusterSprintStopOnlyWhenDepleted

- **Value:** `0`
- **Description:** if true, thruster sprint cannot be turned off and remains on until fully depleted

### pm_thrusterSprintStrafeAndWeaponFire

- **Value:** `1`
- **Description:** allow full weapon use while thruster sprinting and allow strafe sprinting

### pm_thrustersprintspeed

- **Value:** `900`
- **Description:** speed the player can move while thruster sprinting

### pm_toggleThrusterSprint

- **Value:** `1`
- **Description:** if true will use the toggle thruster sprint on PC

### pm_togglesprint

- **Value:** `0`
- **Description:** if true will use the toggle sprint on PC

### pm_walkspeed

- **Value:** `2.5`
- **Description:** speed the player can move while walking

### profile_securityCheck

- **Value:** `0`
- **Description:** checks to make sure we are on a valid map before we save stats to profile or update achievements

### profile_verbose

- **Value:** `0`
- **Description:** Turns on debug spam for profiles

### r_AAMode

- **Value:** `-1`
- **Description:** Anti-Aliasing mode: -1=Use RenderView Settings; 0=Disabled; 1=FXAA Orbis quality; 2=FXAA 3.11 High Quality (PC)

### r_AntiAliasingPreset

- **Value:** `3`
- **Description:** Anti-Aliasing preset : 0 Disabled 1 FXAA Low 2 FXAA High 3 Temporal AA

### r_BWMode_Blue

- **Value:** `2.0`
- **Description:** Black and White mode skipped color Blue channel

### r_BWMode_Green

- **Value:** `2.0`
- **Description:** Black and White mode skipped color Green channel

### r_BWMode_Red

- **Value:** `10.0`
- **Description:** Black and White mode skipped color Red channel

### r_BlackAndWhiteMode

- **Value:** `0`
- **Description:** Enable/Disable black and white mode

### r_DecalAlphaTestLit

- **Value:** `0.0039`
- **Description:** Alpha threshold when drawing particle surfaces in the back buffer (lit pass)

### r_DefaultAlphaTestDepth

- **Value:** `0.5`
- **Description:** Alpha threshold when drawing opaque arkDefault surface in depth buffer

### r_DefaultAlphaTestLit

- **Value:** `0.5`
- **Description:** Alpha threshold when drawing opaque arkDefault surfaces in the back buffer (lit pass)

### r_DofAsymmetricLens

- **Value:** `1`
- **Description:** enable/disable asymmetric lens

### r_DofAutoCompute

- **Value:** `0`
- **Description:** compute DOF with physic lens parameters

### r_DofAutofocus

- **Value:** `0`
- **Description:** enable/disable DOF auto-focus - (0)off (1)on

### r_DofAutofocusRadius

- **Value:** `8.0`
- **Description:** (in pixel)

### r_DofAutofocusSharpSpeed

- **Value:** `0.4`
- **Description:** (in percent)

### r_DofAutofocusSharpnessMax

- **Value:** `1000.0`
- **Description:** (in meter)

### r_DofAutofocusSharpnessMin

- **Value:** `100.0`
- **Description:** (in meter)

### r_DofAutofocusSpeed

- **Value:** `0.2`
- **Description:** (in percent)

### r_DofCOC

- **Value:** `0.025`
- **Description:** circle of confusion (in millimeter)

### r_DofDebugMode

- **Value:** `0`
- **Description:** enable/disable DOF debug mode - (0)off (1)on

### r_DofDistoCoef

- **Value:** `-0.25`
- **Description:** lens distortion coefficient

### r_DofDistoCubicCoef

- **Value:** `0.45`
- **Description:** cubic distortion value

### r_DofFStop

- **Value:** `4.0`
- **Description:** f-stop (in millimeter)

### r_DofFocalDist

- **Value:** `5.0`
- **Description:** (in meter)

### r_DofFocalLength

- **Value:** `0.35`
- **Description:** focal length (in millimeter)

### r_DofFocusBias

- **Value:** `0.0`
- **Description:** (in meter)

### r_DofFocusRange

- **Value:** `10000.0`
- **Description:** (in meter)

### r_DofFocusRangeFar

- **Value:** `1.0`
- **Description:** (in meter)

### r_DofFocusRangeFarSharp

- **Value:** `1.0`
- **Description:** (in meter)

### r_DofFocusRangeSharp

- **Value:** `10000.0`
- **Description:** (in meter)

### r_DofFringChroma

- **Value:** `0.6`
- **Description:** Bokeh chromatic aberration/fringing

### r_DofFringGain

- **Value:** `1.0`
- **Description:** highlight gain

### r_DofFringThreshold

- **Value:** `0.45`
- **Description:** highlight threshold

### r_DofKernelType

- **Value:** `0`
- **Description:** kernel type

### r_DofSharpenCOef

- **Value:** `0.0`
- **Description:** 0=no sharpen 1=full sharpen

### r_DofStencilEnabled

- **Value:** `1`
- **Description:** DOF stencil optimization on/off (debug purpose only)

### r_DofUseCatsEye

- **Value:** `0`
- **Description:** enable/disable DOF cat's eye - (0)off (1)on

### r_DofUseDisto

- **Value:** `0`
- **Description:** enable/disable DOF lens distortion [barrel] - (0)off (1)on

### r_DofUseFringing

- **Value:** `1`
- **Description:** enable/disable DOF fringing - (0)off (1)on

### r_DofUseNoise

- **Value:** `0`
- **Description:** enable/disable DOF noise - (0)off (1)on

### r_DofUseSharpen

- **Value:** `0`
- **Description:** enable/disable DOF sharpen tricks - (0)off (1)on

### r_DofUseVignette

- **Value:** `0`
- **Description:** enable/disable DOF lens vignetting - (0)off (1)on

### r_DofVignFadeFStop

- **Value:** `22.0`
- **Description:** vignette fade f-stop

### r_DofVignInBorder

- **Value:** `-1.0`
- **Description:** vignette inner border

### r_DofVignOutBorder

- **Value:** `0.5`
- **Description:** vignette outer border

### r_IBL_AreaMax

- **Value:** `2000.0`
- **Description:** Changes the maximum surface area covered by a pixel at which the IBL end getting any rougher.

### r_IBL_AreaMin

- **Value:** `100.0`
- **Description:** Changes the minimum surface area covered by a pixel from which the IBL starts getting rougher.

### r_IBL_DistancePower

- **Value:** `2.0`
- **Description:** Changes the exponent applied to pixel's distance from camera.

### r_IBL_GrazingAnglePower

- **Value:** `2.0`
- **Description:** Changes the exponent on the dot( Normal, View ) area projection factor. A larger exponent will concentrate IBL roughhness toward edges.

### r_IBL_ParallaxCorrection

- **Value:** `1`
- **Description:** Enables or disables IBL parallax correction using virtual planes.

### r_IBL_RoughnessExponentMax

- **Value:** `4.0`
- **Description:** Sets the maximum roughness exponent.

### r_IBL_RoughnessExponentMin

- **Value:** `1.0`
- **Description:** Sets the minimum roughness exponent.

### r_ILBuild_EnableSkyOcclusionFiltering

- **Value:** `1`
- **Description:** Enables or disables the sky occlusion SH filtering when building probes, so it won't matter if you use r_ILProbeUpdate_UseFilteredSkySH later.

### r_ILBuild_EnableSunFiltering

- **Value:** `1`
- **Description:** Enables or disables the Sun SH filtering when building probes, so it won't matter if you use r_ILProbeUpdate_UseFilteredSkySH later.

### r_ILBuild_FilterSHType_Occlusion

- **Value:** `2`
- **Description:** Type of SH filtering to apply to sky occlusion encoding (0=disabled, 1=Lanczos, 2=Hanning, 3=Gaussian)

### r_ILBuild_FilterSHType_StaticLighting

- **Value:** `1`
- **Description:** Type of SH filtering to apply to static indirect lighting encoding (0=disabled, 1=Lanczos, 2=Hanning, 3=Gaussian)

### r_ILBuild_FilterSHType_StaticSun

- **Value:** `1`
- **Description:** Type of SH filtering to apply to static Sun indirect lighting encoding (0=disabled, 1=Lanczos, 2=Hanning, 3=Gaussian)

### r_ILBuild_FilterSHWindowSize_Occlusion

- **Value:** `2.0`
- **Description:** Size of the SH filtering window to apply to sky occlusion

### r_ILBuild_FilterSHWindowSize_StaticLighting

- **Value:** `4.0`
- **Description:** Size of the SH filtering window to apply to static indirect lighting

### r_ILBuild_FilterSHWindowSize_StaticSun

- **Value:** `2.0`
- **Description:** Size of the SH filtering window to apply to static Sun indirect lighting

### r_ILBuild_FilteringMinWeightSky

- **Value:** `0.01`
- **Description:** Specifies the minimum ambient sky weight used to perform the harmonic mean used to filter out sky in transitions between indoor and outdoor (the lowest the value, the more biased toward indoor probes and smoother result will be)

### r_ILBuild_FilteringMinWeightSun

- **Value:** `0.01`
- **Description:** Specifies the minimum irradiance Sun weight used to perform the harmonic mean used to filter out Sun in transitions between indoor and outdoor (the lowest the value, the more biased toward indoor probes and smoother result will be)

### r_ILBuild_FloodFillDiscardPixel_Albedo

- **Value:** `0.32`
- **Description:** Specifies the tolerated distance between adjacent pixel colors before the get discarded during flood filling (default=0.32).

### r_ILBuild_FloodFillDiscardPixel_NormalAngleTolerance_Far

- **Value:** `80.0`
- **Description:** Specifies the tolerated angle between adjacent pixel normals before they get discarded by flood filling (default=80 degrees for FAR pixels).

### r_ILBuild_FloodFillDiscardPixel_NormalAngleTolerance_FarDistance

- **Value:** `20.0`
- **Description:** Sets the distance at which the FAR normal angle tolerance is used.

### r_ILBuild_FloodFillDiscardPixel_NormalAngleTolerance_Near

- **Value:** `45.0`
- **Description:** Specifies the tolerated angle between adjacent pixel normals before they get discarded by flood filling (default=45 degrees for NEAR pixels).

### r_ILBuild_FloodFillDiscardPixel_NormalAngleTolerance_NearDistance

- **Value:** `2.0`
- **Description:** Sets the distance at which the NEAR normal angle tolerance is used.

### r_ILBuild_FloodFillDiscardPixel_PixelDistanceThreshold

- **Value:** `50.0`
- **Description:** Specifies the distance at which a pixel gets discarded no matter what.

### r_ILBuild_FloodFillDiscardPixel_SpatialDistanceTolerance

- **Value:** `0.3`
- **Description:** Specifies the tolerated distance between adjacent pixel positions before they get discarded by flood filling (default=0.3 = 30cm for pixels at nominal distance).

### r_ILBuild_FloodFillDiscardPixel_SpatialDistanceToleranceNominalDistance

- **Value:** `1.0`
- **Description:** Sets the nominal distance at which the spatial distance tolerance is computed. A pixel twice the nominal distance will have twice the tolerance.

### r_ILBuild_NeighborProbeRadius

- **Value:** `1.0`
- **Description:** Specifies the radius of the discs representing neighbor probes when we render the neighborhood network.

### r_ILBuild_OccluderMinimumSizeAtRejectDistance

- **Value:** `5.0`
- **Description:** Size of the smallest occluder at the reject distance (default is a 5 meters high door). If the solid angle of an occluder is smaller than the one computed from the size+rejection distance then it's rejected.

### r_ILBuild_OccluderRejectDistance

- **Value:** `40.0`
- **Description:** Distance at which an occluder gets rejected and considered unimportant.

### r_ILBuild_PerceptualAdjacency_MaxDistance

- **Value:** `1.0`
- **Description:** Specifies the maximum distance between 2 faces over which an adjacency cannot be created.

### r_ILBuild_PrincipalPlanes_SearchPlanesCount

- **Value:** `18`
- **Description:** Indicates the original amount of planes to fit. This will be reduced down to a limit of 6 planes.

### r_ILBuild_PrincipalPlanes_SimilarDistanceBinSize

- **Value:** `8.0`
- **Description:** Indicates the size (in meters) of a bin into which similar distances will be summed and averaged. For example, any distance that is larger than 8m (default value) than a bin's average center will require the creation of a new bin.

### r_ILBuild_PrincipalPlanes_SimilarPlaneRejectionThreshold

- **Value:** `0.5`
- **Description:** Indicates the threshold above which the dot product of two plane normals can be considered as similar and the two planes can be merged.

### r_ILBuild_PrincipalPlanes_WeightExponent

- **Value:** `20.0`
- **Description:** Indicates the exponent to which the dot product between pixel and principal plane is raised to indicate sensibility on correct orientation.

### r_ILBuild_PropagateAttenuationDistance

- **Value:** `0.25`
- **Description:** Specifies the attenuation factor per meter when propagating probe influences (e.g. a value of 0.5 means the probe will have half its influence when 1 meter from the source vertex)

### r_ILBuild_Sample_MaxProbeAngleWithNormal

- **Value:** `80.0`
- **Description:** Specifies the maximum angle (in degrees) a probe can stand away from a sample's normal direction to be accepted as a valid indirect probe for the sample (probes that are not in the "visibility cone" are discarded).

### r_ILBuild_SaveDebugILProbes

- **Value:** `0`
- **Description:** Forces saving IL probes to disk in the generated folder for debugging purpose.

### r_ILBuild_VoronoiPlaneSize

- **Value:** `20.0`
- **Description:** Specifies the size of the Voronoi planes to render in probes.

### r_ILBuild_VoronoiSampleRadiusGrowFactor

- **Value:** `1.5`
- **Description:** Specifies the factor to grow the regular samples' radii by so we get larger, more area-covering samples.

### r_ILProbeUpdate_ContributionFactorEmissive

- **Value:** `1.0`
- **Description:** Specifies the contribution factor of emissive materials.

### r_ILProbeUpdate_ContributionFactorMultiBounces

- **Value:** `3.0`
- **Description:** Specifies the contribution factor of multiple-bounce initial static lighting.

### r_ILProbeUpdate_DynamicBufferInterpolationSpeed

- **Value:** `0.99`
- **Description:** Specifies the speed of interpolation of the smoothed buffer of dynamic SH values.

### r_ILProbeUpdate_MaxUpdatesPerFrame

- **Value:** `8`
- **Description:** Specifies the maximum amount of probes that we can update each frame (always clamped to 32 anyway)

### r_ILProbeUpdate_MultiBouncesDebugFlags

- **Value:** `7`
- **Description:** Specifies the multiple-bounce initial static lighting debug flags (Bit 0=Static Lights, Bit 1=Sun, Bit 2=Sky) (example: 7 = static + Sun + sky (default)).

### r_ILWeightAtProbePosition

- **Value:** `10.0`
- **Description:** Sets the weight of a probe at its exact location

### r_ILWeightAtProbeRadius

- **Value:** `0.05`
- **Description:** Sets the weight of a probe when a point is as far as the radius

### r_ILWeightFaceBackward

- **Value:** `-1.0`
- **Description:** Sets the weight of a probe when a normal is facing away from the probe

### r_ILWeightFaceForward

- **Value:** `1.0`
- **Description:** Sets the weight of a probe when a normal is facing the probe

### r_MaterialHotPatchRenderParmsForShaderReloading

- **Value:** `1`
- **Description:** injects renderparms so that shaders can be reloaded on demand and work properly - must be set from command line

### r_MidnightStoryBoardsScale

- **Value:** `0.15`
- **Description:** midnight storyboards in-game placeholder size (in percent of screen size)

### r_OIT

- **Value:** `1`
- **Description:** Order Independent Transparency

### r_SSSBlurQuality

- **Value:** `0`
- **Description:** SSS - Blur Quality 0 - original 92 Taps, 1 = 46 Taps, 2 = 23 Taps, 3 = 16 Taps

### r_SsaoType

- **Value:** `1`
- **Description:** (0)SSAO (1)DWAO

### r_TAAAmount

- **Value:** `10`
- **Description:** set the sharpness of TXAA

### r_addAllMips

- **Value:** `0`
- **Description:** Enables all mips (use with caution, e.g. for HD screenshots

### r_alwaysTweakW

- **Value:** `1.0`
- **Description:** renderParm to tweak a value [DEBUG ONLY]

### r_alwaysTweakX

- **Value:** `1.0`
- **Description:** renderParm to tweak a value [DEBUG ONLY]

### r_alwaysTweakY

- **Value:** `1.0`
- **Description:** renderParm to tweak a value [DEBUG ONLY]

### r_alwaysTweakZ

- **Value:** `1.0`
- **Description:** renderParm to tweak a value [DEBUG ONLY]

### r_animProgressState

- **Value:** `2`
- **Description:** selects the anim progress state to draw with r_showskel, 0 = draw anim only, 1 = draw post ik & facefx, 2 = draw ready to render

### r_areaLights_FactorDiffuse

- **Value:** `3.0`
- **Description:** Diffuse factor to apply to area lights globally.

### r_areaLights_FactorSpecular

- **Value:** `0.08`
- **Description:** Specular factor to apply to area lights globally.

### r_areaLights_ShadowMax

- **Value:** `0.1`
- **Description:** Shadow higher bound to consider as completely in light.

### r_areaLights_ShadowMin

- **Value:** `0.0`
- **Description:** Shadow lower bound to consider as completely in shadow.

### r_atmGodRaysDepthSharpness

- **Value:** `0.00001`
- **Description:** bilateral blur radius for godRays

### r_bilateralDepthRange

- **Value:** `10.0`
- **Description:** bilateral blur radius for light-scattering

### r_bilateralSharpnessFar

- **Value:** `0.01`
- **Description:** bilateral blur radius for light-scattering

### r_bilateralSharpnessNear

- **Value:** `0.1`
- **Description:** bilateral blur radius for light-scattering

### r_brightness

- **Value:** `1.0`
- **Description:** changes gamma correction

### r_calibrateGamma

- **Value:** `0`
- **Description:** if > 0 draw a swatch at a specific luminance for calibrating gamma

### r_calibrateGammaLum

- **Value:** `0`
- **Description:** luminance to display for calibrating gamma [0,255]

### r_calibrateGammaMode

- **Value:** `0`
- **Description:** 0=measure total luminance, 1=measure red, 2=measure green, 3=measure blue

### r_currentMaterial

- **Value:** ``
- **Description:** current material name from r_showSurfaceInfo

### r_d3dAdapter

- **Value:** `-1`
- **Description:** d3d adapter to use at init

### r_d3dAdapterId

- **Value:** ``
- **Description:** ID of d3d adapter used at init

### r_debugContext

- **Value:** `0`
- **Description:** d3d debug context

### r_debugDarkVisionLayers

- **Value:** `0`
- **Description:** 0 no-darkVision - 1 show device - 2 show living - 4 show pickup - 8 show pulsar (bitfield behavior)

### r_debugDecals

- **Value:** `0`
- **Description:** 1 - To display the decal axis. 2 - To see the axis and obb.

### r_debugHitTraceModels

- **Value:** `0`
- **Description:** +/-1: draws hit test spheres on test, +/-2: draws every frame, < 0 for depth test

### r_debugLineDepthTest

- **Value:** `0`
- **Description:** perform depth test on debug lines

### r_debugPolyDepthTest

- **Value:** `0`
- **Description:** perform depth test on debug polys

### r_debugPolygonFilled

- **Value:** `1`
- **Description:** draw a filled polygon

### r_debugProbes

- **Value:** `0`
- **Description:** Displays environment probes as spheres in the level. 0=Don't render, 1=Render reflection direction, 2=Render normal direction, 3=Render SH Irradiance, 4=Render SH Radiance, 5=Environment distance, 6=Render SH Occlusion, 7=Render Static SH (Layer A), 8=Render Static SH (Layer B), 9=Render Dynamic Lights SH, 10=Render Dynamic Sun SH

### r_debugProbesInfluence0

- **Value:** `-1`
- **Description:** Enables probe influence debugging for a specific probe.

### r_debugProbesInfluence1

- **Value:** `-1`
- **Description:** Enables probe influence debugging for a specific probe.

### r_debugProbesInfluenceBinary

- **Value:** `0`
- **Description:** Shows the influence as on or off for a probe (shows white as soon as the influence is not 0).

### r_debugProbesInfluenceDefaultTetrahedrons

- **Value:** `0`
- **Description:** If 1, shows the vertices who's been assigned the default tetrahedron of a cell instead of a specific tetrahedron (okay for open cells, wrong for closed cells!).

### r_debugProbesInfluenceDistance

- **Value:** `0`
- **Description:** If 1, shows the probe's distance from the origin vertex rather than the influence.

### r_depthBiasClamp

- **Value:** `1000.0f`
- **Description:** Depth bias clamp

### r_depthTestCollisionSpheres

- **Value:** `0`
- **Description:** 1 = use depth test to render collision spheres

### r_disableAFRManualManagement

- **Value:** `0`
- **Description:** Disable Alternate Frame Rendering manual app-level management

### r_displayMidnightStoryBoards

- **Value:** `0`
- **Description:** display midnight storyboards in-game

### r_displayRefresh

- **Value:** `0`
- **Description:** optional display refresh rate option for vid mode

### r_dofAlphaDepthEnabled

- **Value:** `1`
- **Description:** DOF alpha primitives in depth buffer on/off (debug purpose only)

### r_dofAlphaEnabled

- **Value:** `1`
- **Description:** pre-DOF alpha primitives on/off (debug purpose only)

### r_dofBlurCoef

- **Value:** `1.0`
- **Description:** —

### r_dofOpaqueEnabled

- **Value:** `1`
- **Description:** DOF opaque primitives on/off (debug purpose only)

### r_dofShowFocusDist

- **Value:** `0`
- **Description:** DOF show focus distance on/off (debug purpose only)

### r_downsampleQuality

- **Value:** `1`
- **Description:** Downsample quality 0=full-res (not supported yet) 1=half-res 2=quarter-res

### r_downsampleQualityPreset

- **Value:** `1`
- **Description:** Fog blur radius preset : 0 Low 1 High

### r_drawLoadedImages

- **Value:** `0`
- **Description:** Draw loaded images scaled on the screen

### r_drawLoadedImagesScale

- **Value:** `64`
- **Description:** Shrink factor for r_drawLoadedImages

### r_enableLazyShaderCompilation

- **Value:** `0`
- **Description:** enable late shader compilation on first Bind

### r_envBlendPowerFilterSize

- **Value:** `1`
- **Description:** Radius of specular power bleeding filter

### r_finishEveryDraw

- **Value:** `0`
- **Description:** Flush GPU after each draw call

### r_fixObjMaterialPath

- **Value:** `0`
- **Description:** temp hack fix for material paths being jumbled up for objs coming out of modo

### r_fogBlurGaussian

- **Value:** `0`
- **Description:** use cheaper Gaussian blur for fog

### r_fogBlurRadius

- **Value:** `6.0`
- **Description:** bilateral blur radius

### r_fogNearestThreshold

- **Value:** `0.0002`
- **Description:** use cheaper Gaussian blur for fog

### r_fogNearestUpscale

- **Value:** `1`
- **Description:** use cheaper Gaussian blur for fog

### r_forceAspectRatio

- **Value:** `0`
- **Description:** 1.777 for 16:9, 1.6 for 16:10, 1.333 for 4:3, 0 to disable

### r_forceFirstMipMap

- **Value:** `0`
- **Description:** force every texture sampler mipmap to 0

### r_forceInstantAutoExposureConvergence

- **Value:** `0`
- **Description:** Forces auto-exposure to converge instantly (used for HQScreenShots)

### r_forceLoadBinarySpecialization

- **Value:** `0`
- **Description:** —

### r_frameSpinningFPSOffsetAt100

- **Value:** `20.0`
- **Description:** framespinning computing offset At 100 fps when based on resolution scaling targeted fps

### r_frameSpinningFPSOffsetAt30

- **Value:** `10.0`
- **Description:** framespinning computing offset At 30 fps when based on resolution scaling targeted fps

### r_freeTriangleCPUData

- **Value:** `0`
- **Description:** dump the CPU data after building vertex buffers

### r_freezeTextureStreaming

- **Value:** `0`
- **Description:** Freeze texture streaming, for debug purpose

### r_fullscreen

- **Value:** `1`
- **Description:** 0 = windowed, 1 = full screen, 2 = borderless

### r_gamma

- **Value:** `2.2`
- **Description:** Changes gamma correction

### r_gpuCullingDebug

- **Value:** `0`
- **Description:** —

### r_gpuCullingIndexBufferSize

- **Value:** `20`
- **Description:** Size of the GPU culling index buffer, in MB

### r_guiDebug

- **Value:** `0`
- **Description:** Provides debug output in idRenderModelGui code

### r_hairAlphaTestAlpha

- **Value:** `0.5`
- **Description:** Alpha threshold when drawing alpha surfaces in the alpha depth buffer

### r_hairAlphaTestLit

- **Value:** `0.05`
- **Description:** Alpha threshold when drawing alpha surfaces in the back buffer (lit pass)

### r_hairAlphaTestOpaque

- **Value:** `0.8`
- **Description:** Alpha threshold when drawing alpha surfaces in the opaque depth buffer

### r_hairLuminanceHack

- **Value:** `0.7`
- **Description:** Work around to fix albedo bug

### r_hbao

- **Value:** `0`
- **Description:** NVIDIA HBAO+

### r_hdrBufferFormat

- **Value:** `0`
- **Description:** 0 = R11G11B10, 1 = RGBA_FLOAT16

### r_imagesMaxMipmapsNbr

- **Value:** `7`
- **Description:** loads and generates only this nbr of mipmaps

### r_imagesMipmapsCheckUpload

- **Value:** `0`
- **Description:** Check existence of local mipmaps and generate all binary files to force upload

### r_imagesMipmapsStreamingEnable

- **Value:** `1`
- **Description:** enable texture streaming, use it on command-line

### r_initialMonitor

- **Value:** `0`
- **Description:** The initial monitor used to initialize the render system

### r_insideBodyDitheringEndDistance

- **Value:** `30`
- **Description:** dithering end distance (m)

### r_insideBodyDitheringSpeed

- **Value:** `40`
- **Description:** dithering speed (m/s)

### r_insideBodyDitheringStartDistance

- **Value:** `1`
- **Description:** dithering start distance (m)

### r_jitter

- **Value:** `0`
- **Description:** randomly subpixel jitter the projection matrix

### r_jitterXFactor

- **Value:** `1.0`
- **Description:** jitter X factor for HQ scrennshot supersampling

### r_jitterYFactor

- **Value:** `1.0`
- **Description:** jitter Y factor for HQ scrennshot supersampling

### r_journalEnable

- **Value:** `1`
- **Description:** If false, we cannot open the journal.

### r_lockView

- **Value:** `0`
- **Description:** lock the current view

### r_lodZoomMultiplicator

- **Value:** `1.0f`
- **Description:** Zoom multiplicator for static LODs

### r_logFile

- **Value:** `0`
- **Description:** number of frames to emit render logs

### r_logLevel

- **Value:** `2`
- **Description:** 1 = blocks only, 2 = everything

### r_looseOptionHash

- **Value:** `0`
- **Description:** —

### r_looseRenderProg

- **Value:** ``
- **Description:** —

### r_maxDynamicDecals

- **Value:** `32`
- **Description:** Maximum number of dynamic decals

### r_maxDynamicDecalsPreset

- **Value:** `3`
- **Description:** Decals details preset : 0 Very Low 1 Low 2 Medium 3 High 4 Very High 5 Ultra

### r_maxFramesBeforeTextureUnload

- **Value:** `60`
- **Description:** Number of frames before unrendered textures can be trashed

### r_maxShadowMapExtraResolution

- **Value:** `2048`
- **Description:** max shadow map resolution for spot with 'extra resolution' quality option

### r_maxShadowMapResolution

- **Value:** `1024`
- **Description:** max shadow map resolution

### r_mergeModelSurfaces

- **Value:** `0`
- **Description:** combine model surfaces with the same material

### r_minShadowMapResolution

- **Value:** `128`
- **Description:** min shadow map resolution

### r_mode

- **Value:** `-1`
- **Description:** Select the resolution and monitor to use in fullscreen or borderless mode (hit TAB to view available modes)

### r_modelsQualityPreset

- **Value:** `3`
- **Description:** Models quality preset : 0 Very Low 1 Low 2 Medium 3 High 4 Very High 5 Ultra

### r_multiSamples

- **Value:** `0`
- **Description:** number of anti-aliasing samples (0 = no multi-sampled FBO)

### r_oceanAsyncMaxWaves

- **Value:** `2`
- **Description:** —

### r_oceanGeometricDetails

- **Value:** `4096.0f`
- **Description:** geometric details

### r_oceanQualityPreset

- **Value:** `3`
- **Description:** Ocean quality preset : 0 Very Low 1 Low 2 Medium 3 High 4 Very High 5 Ultra

### r_oceanTileSize

- **Value:** `10.0f`
- **Description:** side size of an ocean patch

### r_oceanUseAsync

- **Value:** `1`
- **Description:** —

### r_oitAdditiveAlphaStrength

- **Value:** `1.0`
- **Description:** OIT - subtract Luminance for additive surfaces

### r_oitAdditiveColorResistance

- **Value:** `12.0`
- **Description:** OIT - Color resistance. Increase if low-coverage foreground transparent are affecting background transparent color.

### r_oitAdditiveOpacity

- **Value:** `0.2`
- **Description:** OIT - Opacity factor for additive surfaces

### r_oitAdditiveOrderingStrength

- **Value:** `3.0`
- **Description:** OIT - Ordering strength for additive surfaces - Increase if background is showing through foreground too much.

### r_oitAdditiveParticleColorStrength

- **Value:** `0.0`
- **Description:** OIT - Tweak particle color strength

### r_oitColorResistance

- **Value:** `3.0`
- **Description:** OIT - Color resistance. Increase if low-coverage foreground transparent are affecting background transparent color.

### r_oitDepthRange

- **Value:** `50.0`
- **Description:** OIT - Depth range over which significant ordering discrimination is required. Decrease if high-opacity surfaces seem too transparent, Increase if distant transparent are blending together too much.

### r_oitOrderingStrength

- **Value:** `3.0`
- **Description:** OIT - Ordering strength. Increase if background is showing through foreground too much.

### r_oitParticleAlphaStrength

- **Value:** `1.0`
- **Description:** OIT - subtract Luminance for additive surfaces

### r_oitParticleColorStrength

- **Value:** `12.0`
- **Description:** OIT - Tweak particle color strength

### r_oitWeightFactor

- **Value:** `0.5`
- **Description:** OIT - Weight Factor

### r_overrideGloss

- **Value:** `0`
- **Description:** Replaces gloss maps by a custom value (only works in idStudio!)

### r_overrideGlossValue

- **Value:** `1.0`
- **Description:** The override value for gloss maps

### r_overrideMetal

- **Value:** `0`
- **Description:** Replaces metal maps by a custom value (only works in idStudio!)

### r_overrideMetalValue

- **Value:** `1.0`
- **Description:** The override value for metal maps

### r_parallelHQDXTEncode

- **Value:** `1`
- **Description:** Use parallel jobs for very slow HQ DXT encoding

### r_parallelRenderProgSpecialization

- **Value:** `1`
- **Description:** Allow renderprogs to get specialized in parallel during shadercache preload.

### r_particleAlphaTestDepth

- **Value:** `0.035`
- **Description:** Alpha threshold when drawing particle surfaces in the alpha depth buffer

### r_particleAlphaTestDepthDiv2

- **Value:** `0.035`
- **Description:** Alpha threshold when drawing particle surfaces in the alpha depth buffer

### r_particleAlphaTestLit

- **Value:** `0.01569`
- **Description:** Alpha threshold when drawing particle surfaces in the back buffer (lit pass)

### r_playerDepthHack

- **Value:** `0.0`
- **Description:** player's models depth hack value

### r_postProcessCustomEV

- **Value:** `0.0`
- **Description:** Sets an additional custom Exposure Value (EV) bias on top of environment's EV

### r_postProcessDebugAreaLights

- **Value:** `0`
- **Description:** Shows the area lights currently in the pool.

### r_postProcessDebugBloomSourceMip

- **Value:** `5`
- **Description:** Sets the source mip level for bloom upsampling (default is 5 to upsample from 1/64th screen size)

### r_postProcessDebugBloomTargetMip

- **Value:** `3`
- **Description:** Sets the target mip level for bloom upsampling (default is 3 to upsample up to 1/8th screen size)

### r_postProcessDebugColorCube

- **Value:** `0`
- **Description:** Shows currently applied color-cube

### r_postProcessDebugExposure

- **Value:** `0`
- **Description:** Reads back the exposure settings to the CPU (VERY EXPENSIVE!)

### r_postProcessDebugHistogram

- **Value:** `0`
- **Description:** Shows the luminance histogram for auto-exposure debugging.

### r_postProcessDebugIBLCubeMaps

- **Value:** `0`
- **Description:** Shows the IBL cube maps array for debugging.

### r_postProcessDebugIBLCubeMapsMode

- **Value:** `0`
- **Description:** 0 = State A, 1 = State B, 2 = Both states

### r_postProcessDebugLuminance

- **Value:** `-1.0`
- **Description:** Shows the debug luminance level in the image as a colored checker board (only works with debug histogram visible).

### r_postProcessDebugSHProbes

- **Value:** `0`
- **Description:** Shows the SH probes array for debugging.

### r_postProcessDebugSkyTables

- **Value:** `0`
- **Description:** Shows the various pre-computed sky tables.

### r_postProcessDebugToneMappingCurve

- **Value:** `0`
- **Description:** Shows the tone mapping curve applied to luminances.

### r_postProcessEmbedColorGrading

- **Value:** `0`
- **Description:** Embeds color-cube in the image and disables post-processes

### r_postProcessExposureUseToneMappingWhiteLevel

- **Value:** `0`
- **Description:** If true, the auto-exposure window will use the tone mapping's white level as its maximum virtual adaptable luminance range instead of the default physical [0,1] range. The net effect is that the exposure window will grow as it's now capable of adapting a much larger luminance range.

### r_preloadShaderCache

- **Value:** ``
- **Description:** —

### r_prt_beamrenderer_budget

- **Value:** `1`
- **Description:** arkBeamRenderer vertex budget ratio

### r_prt_particletrailrenderer_budget

- **Value:** `1`
- **Description:** arkParticleTrailRenderer vertex budget ratio

### r_prt_trailrenderer_budget

- **Value:** `1`
- **Description:** arkTrailRenderer vertex budget ratio

### r_reachedFrame50

- **Value:** `1`
- **Description:** frame 50 have been reached

### r_reloadShaderPostCommand

- **Value:** `xbdeploy.exe" audition Dishonored2_1.0.1.0_x64__1ex513fd4qj2w /v`
- **Description:** Command to run after the shader permutation is generated.

### r_renderDocLogFilePath

- **Value:** `\capture\renderDoc`
- **Description:** Enable RenderDoc log file path

### r_renderDocTriggerCapture

- **Value:** `0`
- **Description:** Trigger nb frame RenderDoc capture

### r_renderQualityPresets

- **Value:** `-1`
- **Description:** swap through rendering quality options (low, medium, high, ultra)

### r_schedulerNoBackground

- **Value:** `0`
- **Description:** background workers are disabled, all tasks are considered 'foreground' and required for the frame finish

### r_schedulerThreadingMode

- **Value:** `2`
- **Description:** 0: single threaded (one worker enabled), 1: cpu-only tasks multithreaded, 2: fully multithreaded (cpu & gpu tasks - available only if deferred contexts are enabled !)

### r_schedulerUseDeferredCtx

- **Value:** `1`
- **Description:** scheduler context pool is deferred. -1: auto (depends on driver caps), 0: always disabled, 1: always enabled

### r_shaderCompilationLevel

- **Value:** `0`
- **Description:** 0=default 1=debug 2=production 3=retail

### r_shaderForceCompilation

- **Value:** `0`
- **Description:** 0=disabled 1=force shader generation

### r_shaderLimits_renderOpaque_dynamicModels_PSLockThreshold

- **Value:** `-1`
- **Description:** —

### r_shaderLimits_renderOpaque_dynamicModels_VSLockThreshold

- **Value:** `-1`
- **Description:** —

### r_shaderLimits_renderOpaque_dynamicModels_numLateAlloc

- **Value:** `16`
- **Description:** —

### r_shaderLimits_renderOpaque_dynamicModels_numPS

- **Value:** `-1`
- **Description:** —

### r_shaderLimits_renderOpaque_dynamicModels_numVS

- **Value:** `3`
- **Description:** —

### r_shaderLimits_renderOpaque_world_PSLockThreshold

- **Value:** `-1`
- **Description:** —

### r_shaderLimits_renderOpaque_world_VSLockThreshold

- **Value:** `-1`
- **Description:** —

### r_shaderLimits_renderOpaque_world_numLateAlloc

- **Value:** `0`
- **Description:** —

### r_shaderLimits_renderOpaque_world_numPS

- **Value:** `-1`
- **Description:** —

### r_shaderLimits_renderOpaque_world_numVS

- **Value:** `-1`
- **Description:** —

### r_shadowAtlasSliceCnt

- **Value:** `8`
- **Description:** Number of slices in the shadow map atlas( used for omni & spot shadows )

### r_shadowAtlasSliceHeight

- **Value:** `2048`
- **Description:** Dimensions of one slice of the shadow map atlas( used for omni & spot shadows )

### r_shadowAtlasSliceWidth

- **Value:** `2048`
- **Description:** Dimensions of one slice of the shadow map atlas( used for omni & spot shadows )

### r_shadowCacheSliceCnt

- **Value:** `12`
- **Description:** Number of slices in the shadow map cache( used for omni & spot shadows )

### r_shadowCacheSliceHeight

- **Value:** `2048`
- **Description:** Dimensions of one slice of the shadow map cache( used for omni & spot shadows )

### r_shadowCacheSliceWidth

- **Value:** `2048`
- **Description:** Dimensions of one slice of the shadow map cache( used for omni & spot shadows )

### r_shadowCascadeFars

- **Value:** `4 12 30 75`
- **Description:** cascaded shadow slices fars, args are dist0 dist1 dist2 dist3

### r_shadowCullDistance

- **Value:** `25.0f`
- **Description:** Max distance to display shadow for models

### r_shadowParallelPartialDynaUpdate

- **Value:** `1`
- **Description:** enable skip dynamic update on far slice to save performances

### r_shadowParallelPartialSliceUpdate

- **Value:** `1`
- **Description:** enable time slicing on cascade update except for slice 0 to save performances

### r_shadowParallelResolutionDividerLevel

- **Value:** `0`
- **Description:** the shadow resolution divider factor - 0: keep highest quality, 1: div by 2, 2: div by 4

### r_shadowParallelSliceCnt

- **Value:** `4`
- **Description:** current parallel shadow slice count

### r_shadowParallelSliceSize

- **Value:** `2048`
- **Description:** Dimensions of one slice of directional shadow buffer

### r_shadowQualityPreset

- **Value:** `3`
- **Description:** Shadow quality preset : 0 Very Low 1 Low 2 Medium 3 High 4 Very High 5 Ultra

### r_shadowSpotAndOmniLowResolutionDividerEnabled

- **Value:** `0`
- **Description:** the shadow resolution divider factor - 0: keep highest quality, 1: div by 2

### r_shadowSpotAndOmniPartialUpdateDynaSqrDistanceThreshold

- **Value:** `144.f`
- **Description:** enable update of dynamic if light shadow is closer than this squared distance even if the priority threshold (r_shadowSpotAndOmniPartialUpdateDynaThreshold) is not reached

### r_shadowSpotAndOmniPartialUpdateDynaThreshold

- **Value:** `0.5f`
- **Description:** enable update of dynamic only if light shadow priority (screen cover) is above the threshold, to save performances

### r_shadows32Bits

- **Value:** `1`
- **Description:** Enable 32 bits precision for shadow maps

### r_shadowsBloodflies

- **Value:** `1`
- **Description:** Enables shadows for bloodflies

### r_shadowsRats

- **Value:** `1`
- **Description:** Enables shadows for rats

### r_showAlphaDebug

- **Value:** `0`
- **Description:** draw alpha object in debug mode

### r_showBounds

- **Value:** `0`
- **Description:** draws bounds of committed models: 1 : rendermodels, 2 : surfaces

### r_showBounds_depthtest

- **Value:** `1`
- **Description:** draws bounds depth test

### r_showCommits

- **Value:** `0`
- **Description:** report model and light commits and ref counts

### r_showCullLight

- **Value:** `0`
- **Description:** show cull-light pass (1-lighting 2-scattering

### r_showCullLightDepthMinMax

- **Value:** `0`
- **Description:** show cull-light depth Min/Max pass

### r_showDebugLighting

- **Value:** `0`
- **Description:** Lighting debug flags: 1=ambient, 2=diffuse, 4=specular, 8=emissive, 16=scattering (example: ambient + emissive = 9) (only works in idStudio!)

### r_showDeltaStats

- **Value:** `0`
- **Description:** report render stat deltas

### r_showDiffuseLightingOnly

- **Value:** `0`
- **Description:** Shows diffuse lighting only (only works in idStudio!)

### r_showDrawColor

- **Value:** `1 1 1 0.4`
- **Description:** specifies the draw color for "showTris" mode 4

### r_showEmissiveLightingOnly

- **Value:** `0`
- **Description:** Shows emissive lighting only (only works in idStudio!)

### r_showFakeWireframe

- **Value:** `0`
- **Description:** Shows a fake wireframe on static meshes (1=black wire, 2=white wire 3=Black faces & colored wire

### r_showGlossOnly

- **Value:** `0`
- **Description:** Shows gloss textures (only works in idStudio!)

### r_showGuiOverdraw

- **Value:** `0`
- **Description:** —

### r_showGuiTris

- **Value:** `0`
- **Description:** —

### r_showLights

- **Value:** `0`
- **Description:** 1 = just print volumes numbers, highlighting ones covering the view, 2 = also draw planes of each volume, 3 = also draw edges of each volume

### r_showMetalOnly

- **Value:** `0`
- **Description:** Shows metal textures (only works in idStudio!)

### r_showModels

- **Value:** `0`
- **Description:** 1 = displays the bounding boxes of all view models, 2 = print index numbers

### r_showNoDrawSurfaceInfo

- **Value:** `0`
- **Description:** allow r_showSurfaceInfo to intersect materials that don't draw ( "isdrawn 0" )

### r_showOcclusionQuery

- **Value:** `0`
- **Description:** show occlusion for debug

### r_showPrimitives

- **Value:** `0`
- **Description:** report drawsurf/index/vertex counts

### r_showRenderLog

- **Value:** `0`
- **Description:** report stats

### r_showRenderMemoryStats

- **Value:** `0`
- **Description:** show render memory stats (may be coarse values on some platforms)

### r_showRenderTargets

- **Value:** `0`
- **Description:** —

### r_showRuler

- **Value:** `0`
- **Description:** —

### r_showSpecularLightingOnly

- **Value:** `0`
- **Description:** Shows specular lighting only (only works in idStudio!)

### r_showStats

- **Value:** `0`
- **Description:** report render stats

### r_showStreamingStats

- **Value:** `0`
- **Description:** show streaming stats ( 1 : only when working, 2 : always 3 : VRAM occupancy )

### r_showSurfaceInfo

- **Value:** `0`
- **Description:** show surface material name under crosshair

### r_showTotalSurfaceArea

- **Value:** `0`
- **Description:** print the total surface area of all static surfaces (2=include non-statics too)

### r_showTris

- **Value:** `0`
- **Description:** Enables wireframe rendering of the world. 0 = Disabled, 1 = Only draw visible ones, 2 = Draw all front facing, 3 = Draw all, 4 = Only visible ones with blended lines. Negative values will draw the world in solid color

### r_showVertexColor

- **Value:** `0`
- **Description:** draws all triangles with the solid vertex color

### r_singleGuiSurface

- **Value:** `-1`
- **Description:** suppress all but one surface on gui model

### r_singleSurface

- **Value:** `-1`
- **Description:** suppress all but one surface on each model

### r_skinDecalRes

- **Value:** `1024`
- **Description:** resolution of decal maps on skinned meshes

### r_skipAlbedo

- **Value:** `0`
- **Description:** Replaces albedo by a 50% gray reflectance (only works in idStudio!)

### r_skipAnisoTextureStreaming

- **Value:** `0`
- **Description:** Skip taking in count anisotropy for textures uploads

### r_skipAutoExposure

- **Value:** `0`
- **Description:** Skips image exposure adjustment

### r_skipAutoExposureTemporalAdapatation

- **Value:** `0`
- **Description:** Skips auto-exposure temporal adaptation (used to freeze it for HQScreenShots)

### r_skipBlendedSurfaces

- **Value:** `0`
- **Description:** skip blended surfaces

### r_skipBloom

- **Value:** `0`
- **Description:** Skips bloom post-processing

### r_skipCameraMotionBlur

- **Value:** `0`
- **Description:** If true (set to 1 ), skip completely the Camera Motion Blur

### r_skipColorGrading

- **Value:** `0`
- **Description:** Skips color grading post-process

### r_skipDOF

- **Value:** `0`
- **Description:** DOF on/off

### r_skipDebugTools

- **Value:** `0`
- **Description:** skip debug tools rendering

### r_skipDecalStencil

- **Value:** `0`
- **Description:** —

### r_skipDepthAlpha

- **Value:** `0`
- **Description:** skip to draw alpha in zBuffer

### r_skipDirect

- **Value:** `0`
- **Description:** Disables direct lighting, only indirect is shown (only works in idStudio!)

### r_skipDistortionSurfaces

- **Value:** `0`
- **Description:** skip distortion surfaces

### r_skipDofBck

- **Value:** `0`
- **Description:** DOF back-up (do not use)

### r_skipDynamic

- **Value:** `0`
- **Description:** skip dynamic objects

### r_skipEmissiveGlare

- **Value:** `0`
- **Description:** skip emissive glare processing

### r_skipEmissiveSurfaces

- **Value:** `0`
- **Description:** skip emissive surfaces

### r_skipFog

- **Value:** `0`
- **Description:** skip rendering fog

### r_skipFogBlur

- **Value:** `0`
- **Description:** —

### r_skipFogUnderWater

- **Value:** `0`
- **Description:** Skip fog under-water

### r_skipGodRays

- **Value:** `0`
- **Description:** Skip screen space god-rays

### r_skipGodRaysUnderWater

- **Value:** `0`
- **Description:** Skip god-rays under-water

### r_skipGuis

- **Value:** `0`
- **Description:** skip rendering all guis

### r_skipIBL

- **Value:** `0`
- **Description:** IBL on/off

### r_skipIggy3D

- **Value:** `0`
- **Description:** skip Iggy 3D

### r_skipIggyFullscreen

- **Value:** `0`
- **Description:** skip Iggy full screen

### r_skipInGameGuis

- **Value:** `0`
- **Description:** skip rendering in-game guis

### r_skipIndirect

- **Value:** `0`
- **Description:** Indirect lighting on/off

### r_skipInsideBodyDithering

- **Value:** `0`
- **Description:** skip dithering when camera is inside an object

### r_skipJointHelpers

- **Value:** `0`
- **Description:** skips joint helpers

### r_skipLensFlares

- **Value:** `0`
- **Description:** Skips lens-flares post-process

### r_skipLightScattering

- **Value:** `0`
- **Description:** Skip rendering light-scattering in fog target

### r_skipLightsFromLayerA

- **Value:** `0`
- **Description:** Skip rendering lights from layer A

### r_skipLightsFromLayerB

- **Value:** `0`
- **Description:** Skip rendering lights from layer B

### r_skipMergeMeshes

- **Value:** `0`
- **Description:** skip combining rendermodel surface to reduce the batch count

### r_skipOcean

- **Value:** `0`
- **Description:** skips ocean rendering

### r_skipOceanSSR

- **Value:** `0`
- **Description:** Skips ocean screen-space raytracing

### r_skipOpaqueSurfaces

- **Value:** `0`
- **Description:** skip opaque surfaces

### r_skipOutlines

- **Value:** `0`
- **Description:** skip outlines rendering

### r_skipPostProcess

- **Value:** `0`
- **Description:** skip post processing

### r_skipPostToneMap

- **Value:** `0`
- **Description:** skip post-tonemap surfaces

### r_skipSSAO

- **Value:** `0`
- **Description:** SSAO on/off

### r_skipShadowModelSort

- **Value:** `0`
- **Description:** render unsorted models to the shadow buffer

### r_skipSky

- **Value:** `0`
- **Description:** skip rendering sky

### r_skipStatic

- **Value:** `0`
- **Description:** skip static objects

### r_skipSurfaceCPUCulling

- **Value:** `0`
- **Description:** skip CPU MVP culling of model surfaces

### r_skipTemporalAA

- **Value:** `0`
- **Description:** Skips temporalAA

### r_skipToneMapping

- **Value:** `0`
- **Description:** Skips S-curve tone mapping

### r_skipUnderWaterPostProcesses

- **Value:** `0`
- **Description:** skips unwater fog and godrays post-processes

### r_skipUpdateInView

- **Value:** `0`
- **Description:** skip world update in view call

### r_skipWorldViews

- **Value:** `0`
- **Description:** skip rendering all world views

### r_sleep

- **Value:** `0`
- **Description:** Sleep for this many milliseconds to simulate low frame rates.

### r_slopNormal

- **Value:** `0.0001`
- **Description:** merge normals that dot less than this

### r_slopTexCoord

- **Value:** `0.0001`
- **Description:** merge texture coordinates this far apart

### r_slopVertex

- **Value:** `0.00015`
- **Description:** merge xyz coordinates this far apart

### r_sortOpaque

- **Value:** `1`
- **Description:** Sort opaque

### r_sortShadowsCCW

- **Value:** `1`
- **Description:** Sort shadows CCW/CW.

### r_staticModelTriStrips

- **Value:** `0`
- **Description:** build tristrips for static models

### r_subpixelXoffset

- **Value:** `0.0`
- **Description:** subpixel X offset for HQ screenshot

### r_subpixelYoffset

- **Value:** `0.0`
- **Description:** subpixel Y offset for HQ screenshot

### r_swapChainTripleBufferEnable

- **Value:** `0`
- **Description:** Swap Chain triple buffering enabled

### r_swapInterval

- **Value:** `1`
- **Description:** changes Present syncInterval. 0 = off, 1 = vsync freqMonitor Hz, 2 = vsync freqMonitor / 2 Hz, 3 = vsync freqMonitor / 3 Hz, 4 = vsync freqMonitor / 4 Hz

### r_tessellationAmount

- **Value:** `90`
- **Description:** Tessellation amount

### r_tessellationPhongBlobinness

- **Value:** `0.6`
- **Description:** Phong tessellation blobiness amount

### r_testGamma

- **Value:** `0`
- **Description:** if > 0 draw a grid pattern to test gamma levels

### r_testGammaBias

- **Value:** `0`
- **Description:** if > 0 draw a grid pattern to test gamma levels

### r_textureDetailsPreset

- **Value:** `3`
- **Description:** Texture details preset : 0 Very Low 1 Low 2 Medium 3 High 4 Very High 5 Ultra

### r_textureStreamerMemoryBudgetMB

- **Value:** `-1`
- **Description:** threshold of coarse VRAM texture amount to decide when to unload texture mips (in MBytes !)

### r_textureStreamingMaxTextureSizeKB

- **Value:** `131072`
- **Description:** limits the texture size to be streamed, to avoid stuttering when uploading huge mipmap

### r_textureStreamingPerFrameBudgetKB

- **Value:** `4096`
- **Description:** Texture streaming budget by frame ( in KB )

### r_textureUploadTimesliceMs

- **Value:** `3.f`
- **Description:** max time (in ms) per frame spent in uploading streamed texture into vram, 0 means no limit

### r_throwException

- **Value:** `0`
- **Description:** Throws an exception in the render loop

### r_tightenParallelShadows

- **Value:** `1`
- **Description:** Redistribute cascades based on actual visible Z range

### r_umbraGateVisibilityRatio

- **Value:** `1.0`
- **Description:** Visibility factor for umbra gates

### r_useAnimBlendJobs

- **Value:** `1`
- **Description:** 0 = off, 1 = threaded

### r_useBc3ForBc7

- **Value:** `0`
- **Description:** bc7 is slow to compress, use bc3 to speed up iteration

### r_useCheapLensFlareDistortion

- **Value:** `0`
- **Description:** yeah!

### r_useDistanceFont

- **Value:** `1`
- **Description:** 1 - the game uses distance fonts instead of coverage fonts - Note: This cvar should only be set from command line and toggled at run time

### r_useGPUCulling

- **Value:** `0`
- **Description:** Use GPU culling

### r_useGeneratedRenderprogs

- **Value:** `1`
- **Description:** Use the pre-translated renderprog files for faster loads

### r_useHardwareTextures

- **Value:** `0`
- **Description:** Use hardware textures instead of virtual textures for implicit gui images

### r_useStateCaching

- **Value:** `1`
- **Description:** avoid redundant state changes in GL\_\*() calls

### r_useUniformArrays

- **Value:** `1`
- **Description:** 0: use individual uniforms, 1: use uniform array

### r_validateRenderProgs

- **Value:** `1`
- **Description:** if > 0 validates 360 shaders and points out potential shader patch issues

### r_viewDistPreset

- **Value:** `3`
- **Description:** View distance preset : 0 Very Low 1 Low 2 Medium 3 High 4 Very High 5 Ultra

### r_vramMiscSizeEstimationMB

- **Value:** `2560`
- **Description:** evaluation of VRAM size that will be used for buffers, RT, etc... + fragmentation account, used only at init if r_textureStreamerMemoryBudgetMB was -1

### r_water_ScreenSpaceMaxStepsCount

- **Value:** `64`
- **Description:** max authorized ocean SSR steps number

### r_windowHeight

- **Value:** `0`
- **Description:** window height when running in a window

### r_windowPosX

- **Value:** `0`
- **Description:** window X position when running in a window

### r_windowPosY

- **Value:** `0`
- **Description:** window Y position when running in a window

### r_windowWidth

- **Value:** `0`
- **Description:** window width when running in a window

### r_wireframe

- **Value:** `0`
- **Description:** show wireframe

### r_zfar

- **Value:** `7000`
- **Description:** far Z clip plane distance, 0 = infinity

### r_znear

- **Value:** `0.01`
- **Description:** near Z clip plane distance

### reg_excludeList

- **Value:** ``
- **Description:** optional file for specifying list of tests/paths to skip, which override reg_includeList

### reg_includeList

- **Value:** ``
- **Description:** optional file for specifying list of tests/paths to run

### resource_debugLevel

- **Value:** `0`
- **Description:** Set to 1 for some stats about file I/O, 2 for a dump on every resource

### resource_disableBGL

- **Value:** `0`
- **Description:** disable the background loader, not good for speed

### resource_errorInGame

- **Value:** `0`
- **Description:** 0 - Nothing. 1 - Warning. 2 - Fatal Error - if loaded during gameplay

### resource_errorOnResolveFailure

- **Value:** `1`
- **Description:** 1 = errors on failure to resolve code resources, 0 = just warnings

### resource_ignoreLayers

- **Value:** `0`
- **Description:** ignore layer bits and load all layers during map loads

### resource_outPath

- **Value:** ``
- **Description:** Optional output path for resource files

### resource_printMatchingId

- **Value:** `0`
- **Description:** If non 0, will print the name of the resource that matches this id when idResourceList::GenerateResourceIDForName() is called on it

### resource_showLoads

- **Value:** `0`
- **Description:** 1 = show all loads, 2 = show all finds

### resource_showLocalized

- **Value:** `0`
- **Description:** 1 = show all localized resource names

### resource_warnOnDefault

- **Value:** `1`
- **Description:** 1 = warn if a default resource had to be made as the loading failed

### rs_FPSTargeted

- **Value:** `60.0`
- **Description:** resolution scale target frame rate

### rs_VSyncBased

- **Value:** `1`
- **Description:** resolution scale target frame rate is based on vsync and monitor refreshrate

### rs_acceptableRatio

- **Value:** `0.25`
- **Description:** Tolerance ratio before warning: 0.1 ten percent of adaptive is used

### rs_cpuBoundRaiseFrames

- **Value:** `5`
- **Description:** Raise resolution after this number of frame is cpu bound

### rs_debug

- **Value:** `0`
- **Description:** Resolution scale debug modes. 1 = Alternate between 50%/100% each other frame

### rs_display

- **Value:** `0`
- **Description:** 0 - percentages, 1 - pixels per frame

### rs_dropFPSMargin

- **Value:** `4.0`
- **Description:** fps margin for dropMilliseconds computation

### rs_dropFraction

- **Value:** `0.04`
- **Description:** Drop the resolution in increments of this

### rs_dropMilliseconds

- **Value:** `34.3`
- **Description:** Drop the resolution when GPU time exceeds this

### rs_enable

- **Value:** `3`
- **Description:** Enable dynamic resolution scaling, 0 - off, 1 - horz only, 2 - vert only, 3 - both (horz first, then vert)

### rs_forceFractionX

- **Value:** `0.0`
- **Description:** Force a specific 0.0 to 1.0 horizontal resolution scale

### rs_forceFractionY

- **Value:** `0.0`
- **Description:** Force a specific 0.0 to 1.0 vertical resolution scale

### rs_hwUpscaleType

- **Value:** `0`
- **Description:** 0-7 Type of algorithm used for upsample (see RenderSystem_D3D_Durango) - durango only

### rs_minimumResolutionScale

- **Value:** `0.85`
- **Description:** Never go below this

### rs_oscillate

- **Value:** `0`
- **Description:** oscillate between forceFraction and 1

### rs_oscillateFrequency

- **Value:** `0.5`
- **Description:** oscillation frequency in Hz

### rs_raiseFraction

- **Value:** `0.02`
- **Description:** Raise the resolution in increments of this

### rs_raiseFrames

- **Value:** `5`
- **Description:** Require this many frames below rs_raiseMilliseconds

### rs_raiseMilliseconds

- **Value:** `32.3`
- **Description:** Raise the resolution when GPU time is below this for several frames

### rs_raiseMillisecondsMargin

- **Value:** `1.2`
- **Description:** ms margin for raiseMilliseconds computation

### rs_showResolutionChanges

- **Value:** `0`
- **Description:** 1 = Print whenever the resolution scale changes, 2 = always

### rs_skipUpsample

- **Value:** `0`
- **Description:** Skip upsampling

### rs_useHwUpsample

- **Value:** `0`
- **Description:** —

### s_MasterBus_Gain

- **Value:** `100.0`
- **Description:** Master Bus Gain

### s_Music_Gain

- **Value:** `100.0`
- **Description:** Music Bus Gain

### s_SFX_Gain

- **Value:** `100.0`
- **Description:** Sound Effects Bus Gain

### s_Video_Gain

- **Value:** `100.0`
- **Description:** Video Bus Gain

### s_Voices_Gain

- **Value:** `100.0`
- **Description:** Voices Bus Gain

### s_arkIggySubtitleInitialDisplayLevel

- **Value:** `0`
- **Description:** The display level for subtitles setup at application initialization

### s_arkIggySubtitleInitialDisplayLevelDefault

- **Value:** `0`
- **Description:** The default (on xbox) display level for subtitles setup at application initialization

### s_batchProcessTimeThresholdMS

- **Value:** `10.0f`
- **Description:** s_batchProcessTimeThresholdMS

### s_doNotUseWASAPI

- **Value:** `0`
- **Description:** If true, do not try to instanciate a WASAPI output

### s_enableAudioSuspendIfWindowed

- **Value:** `1`
- **Description:** Enable audio output suspension when focus is lost and is windowed

### s_enableSuspendOutput

- **Value:** `1`
- **Description:** Enable/Disable rendering output suspend

### s_environmentalDetailLevel

- **Value:** `4`
- **Description:** scalable environmental detail level

### s_freezeSoundListener

- **Value:** `0`
- **Description:** Freeze/Unfreeze the current listener position

### s_loadAllBanks

- **Value:** `1`
- **Description:** load all banks instead of per-map banks

### s_minimalLengthSqrForDispersion

- **Value:** `0.0001f`
- **Description:** s_minimalLengthSqrForDispersion

### s_propaRatioAngle0

- **Value:** `0.25`
- **Description:** s_propaRatioAngle0

### s_propaRatioAngle180

- **Value:** `100.0`
- **Description:** s_propaRatioAngle180

### s_propaRatioAngle90

- **Value:** `5.0`
- **Description:** s_propaRatioAngle90

### s_propaRatioForInvalidLength

- **Value:** `1.0`
- **Description:** s_propaRatioForInvalidLength

### s_showAISoundPropagationLifetime

- **Value:** `10`
- **Description:** AI sound propagation debug primitives lifetime (in seconds)

### s_showSoundObjectPhysicalPosition

- **Value:** `0`
- **Description:** Show/Hide sound object physical position

### s_showSoundObjectRadius

- **Value:** `0`
- **Description:** Show/Hide sound object cones+sphere when playing 3D sounds

### s_showSoundObjectRadiusOutOfHearing

- **Value:** `0`
- **Description:** Show/Hide sound object cones+sphere when playing 3D sounds and the sound can't be heard

### s_showSoundPropagation

- **Value:** `0`
- **Description:** Show/Hide sound propagation path and portal traversal points

### s_subtitleForceNewTokenIfPunctuationFoundAfterNthLine

- **Value:** `1`
- **Description:** The line number when the text analyzer breaks texts in a separated subtitle when punctuation found

### s_suspendAudioOnSteamOverlay

- **Value:** `1`
- **Description:** If enabled, suspend audio if steam overlay is displayed.

### s_useHeadphoneMode

- **Value:** `0`
- **Description:** Enable/Disable headphone panning mode - when enabled panning is done on a 180 degrees range instead of 90 degrees when disable (aka for speakers)

### s_useLowQualitySampling

- **Value:** `0`
- **Description:** Audio is sampled at 24kHz instead of 48kHz to gain performances. This value must be set before sound engine initialization.

### saveGame_allowOlderVersions

- **Value:** `0`
- **Description:** allows loading of savegames from previous versions of the game

### saveGame_checksum

- **Value:** `1`
- **Description:** data integrity check

### saveGame_enable

- **Value:** `1`
- **Description:** are savegames enabled

### saveGame_verbose

- **Value:** `0`
- **Description:** debug spam

### savegame_error

- **Value:** `0`
- **Description:** Combination of bits that will simulate and error, see 'savegamePrintErrors'. 0 = no error

### sc_checkWorkspace

- **Value:** `1`
- **Description:** if set, check workspace with directory

### sc_maxVerbosity

- **Value:** `1`
- **Description:** -1 = silent, 0 = errors only, 1 = minimal output, 2 = maximum verbosity from perforce api commands

### sc_serverAddress

- **Value:** `frlyoperf01.arkane-studios.lan:1667`
- **Description:** address used to access perforce server (aka P4PORT)

### sc_username

- **Value:** ``
- **Description:** username used to access perforce server (aka P4USER)

### sc_workspace

- **Value:** `auto`
- **Description:** if set, use the specified workspace, if it exists

### si_forcePlayerRespawn

- **Value:** `0`
- **Description:** for save/load regressions, after loading a savegame, we force the player to respawn which activates the triggers associated with the new spawn spot

### si_minRespawnDelay

- **Value:** `5`
- **Description:** Minimum respawn delay after player death in MP game

### si_multiPlayerTestWeapons

- **Value:** `0`
- **Description:** when true starts with with devmap equipment

### si_nextlayeractive

- **Value:** ``
- **Description:** game play layers to use with map the map command

### si_oneFlagCTF

- **Value:** `0`
- **Description:** If swap teams is enabled and is CTF, it will do one flag

### si_scoreLimit

- **Value:** `0`
- **Description:** Score limit

### si_spawnspot

- **Value:** `player_start`
- **Description:** name of the spawn spot to use with the map command

### si_splitscreen

- **Value:** `0`
- **Description:** force splitscreen

### si_stopWatch

- **Value:** `0`
- **Description:** If swap teams is enabled, do stopwatch as well

### si_swapTeams

- **Value:** `0`
- **Description:** Swap teams and do two rounds

### si_teamCount

- **Value:** `2`
- **Description:** How many teams, 0 for FFA

### si_timeLimit

- **Value:** `0`
- **Description:** Time limit

### smtp_debug

- **Value:** `0`
- **Description:** Show SMTP messages.

### smtp_sendAttachments

- **Value:** `1`
- **Description:** sends attachments on emails, for viewnotes

### stereoRender_guiOffset

- **Value:** `0`
- **Description:** shift guis so they don't appear at infinity in HMDs

### stereoRender_screenSeparation

- **Value:** `0.25`
- **Description:** screen units from center to eyes

### stereoRender_separation

- **Value:** `1.5`
- **Description:** world units from center to eyes

### stereoRender_swapEyes

- **Value:** `0`
- **Description:** swap target buffers for left and right eyes

### swf_connectionNumber

- **Value:** `01`
- **Description:** Test

### swf_loadScreenAlternate

- **Value:** `0`
- **Description:** alternate loadscreen to use

### sys_FreeResourcesOnMapChange

- **Value:** `0`
- **Description:** If true, it will free all resources loaded by map on map change

### sys_cpustring

- **Value:** `detect`
- **Description:** —

### sys_date_format_europa

- **Value:** `0`
- **Description:** if true date is represented as DD-MM-YYYY, Otherwise it uses MM-DD-YYYY

### sys_debugGameInstall

- **Value:** `0`
- **Description:** if 1, allow streaming install from non-retail build

### sys_externLocalization

- **Value:** `0`
- **Description:** if 1, strings and vo can live outside a retail package

### sys_installToHDD

- **Value:** `0`
- **Description:** if 1, allow streaming install to HDD

### sys_langSplit

- **Value:** `1`
- **Description:** if 1, strings can be loaded from several files

### sys_orbisRegisterMatSysAlloc

- **Value:** `1`
- **Description:** default = 1, Register system allocations in orbis Memory Analyser

### sys_orbisRegisterMatVSpace

- **Value:** `1`
- **Description:** default = 1, Register Virtual spaces allocations in orbis Memory Analyser

### sys_showInstallProgress

- **Value:** `0`
- **Description:** if 1, show install progress

### sys_time_format_24h

- **Value:** `0`
- **Description:** if true the time is represented in a 24h base. Otherwise it uses am/pm.

### testBase64Str

- **Value:** `user/shawn/level_transition_b`
- **Description:** sample base64 string used by testBase64

### tlf_TileDim

- **Value:** `16`
- **Description:** give the tile dimension for tiled culling

### umbra_accurateOcclusionThreshold

- **Value:** `70.f`
- **Description:** a query parameter, -1 means automatic

### umbra_distance

- **Value:** `0.f`
- **Description:** camera translation imprecision

### umbra_queryJobNum

- **Value:** `12`
- **Description:** number of umbra jobs to trigger for a visibity query

### umbra_skipOcclusion

- **Value:** `0`
- **Description:** skip tome query

### view_damageBlur

- **Value:** `0`
- **Description:** show blur when taking damage

### view_doubleVision

- **Value:** `0`
- **Description:** show double vision when taking damage

### view_skipShakes

- **Value:** `0`
- **Description:** If true, skip view shakes

### win_allowAltTab

- **Value:** `0`
- **Description:** allow Alt-Tab when fullscreen

### win_allowMultipleInstances

- **Value:** `0`
- **Description:** set on command line to allow multiple instances at the same time

### win_consoleVisibility

- **Value:** `1`
- **Description:** 0 = hidden, 1 = normal, 2 = minimized

### win_crashDmp_enable

- **Value:** `1`
- **Description:** Enable crash dumps in the WinAPI exception handler.

### win_crashDmp_path

- **Value:** ``
- **Description:** Override path to save WinAPI crash minidmps. If empty, save to save path. Must include ending \.

### win_crashHandlerLogToFile

- **Value:** `0`
- **Description:** Outputs Crash Handler events to a file.

### win_floatExceptions

- **Value:** `0`
- **Description:** enable floating point exceptions

### win_notaskkeys

- **Value:** `0`
- **Description:** disable windows task keys

### win_outputDebugString

- **Value:** `1`
- **Description:** enable output to debugger

### win_pauseOnFocusLoss

- **Value:** `1`
- **Description:** Should the game pause itself when it loses focus

### win_readonlyMode

- **Value:** `0`
- **Description:** allow the editor to work as readonly, whether or not there is another instance running

### win_silentCrash

- **Value:** `0`
- **Description:** Crash without showing the Windows crash dialog.

### win_terminateOnCrash

- **Value:** `0`
- **Description:** Immediate terminate process on crash.

### win_viewlog

- **Value:** `0`
- **Description:** —

### win_xpos

- **Value:** `3`
- **Description:** horizontal position of window

### win_ypos

- **Value:** `22`
- **Description:** vertical position of window

### zip_verbosity

- **Value:** `0`
- **Description:** 1 = verbose logging when building zip files

---

### HansoftUser

- **Value:** ``
- **Description:** User name to use for reports for any OS that does not provide one

### OLD_r_oitAdditiveAlphaTest

- **Value:** `1.0`
- **Description:** DEBUG NE PAS ARCHIVER

### OLD_r_oitAdditiveColorResistance

- **Value:** `0.1`
- **Description:** DEBUG NE PAS ARCHIVER

### OLD_r_oitAdditiveOpacityCoef

- **Value:** `0.2`
- **Description:** DEBUG NE PAS ARCHIVER

### OLD_r_oitAdditiveOrderingStrength

- **Value:** `0.7`
- **Description:** DEBUG NE PAS ARCHIVER

### OLD_r_oitColorResistance

- **Value:** `1.0`
- **Description:** DEBUG NE PAS ARCHIVER

### OLD_r_oitDepthRange

- **Value:** `500.0`
- **Description:** DEBUG NE PAS ARCHIVER

### OLD_r_oitOrderingStrength

- **Value:** `1.0`
- **Description:** DEBUG NE PAS ARCHIVER

### OLD_r_oitRangeAdjustement

- **Value:** `0.1`
- **Description:** DEBUG NE PAS ARCHIVER

### OLD_r_oitWeightFactor

- **Value:** `0.1`
- **Description:** DEBUG NE PAS ARCHIVER
