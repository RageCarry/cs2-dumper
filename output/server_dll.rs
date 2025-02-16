// Generated using https://github.com/a2x/cs2-dumper
// 2025-02-16 07:27:14.282532083 UTC

#![allow(non_upper_case_globals, non_camel_case_types, non_snake_case, unused)]

pub mod cs2_dumper {
    pub mod schemas {
        // Module: server.dll
        // Class count: 140
        // Enum count: 0
        pub mod server_dll {
            // Parent: CBaseCombatCharacter
            // Field count: 1
            pub mod CHostageExpresserShim {
                pub const m_pExpresser: usize = 0xAC0; // CAI_Expresser*
            }
            // Parent: CBaseTrigger
            // Field count: 3
            pub mod CTriggerSoundscape {
                pub const m_hSoundscape: usize = 0x960; // CHandle<CEnvSoundscapeTriggerable>
                pub const m_SoundscapeName: usize = 0x968; // CUtlSymbolLarge
                pub const m_spectators: usize = 0x970; // CUtlVector<CHandle<CBasePlayerPawn>>
            }
            // Parent: CBreakableProp
            // Field count: 22
            //
            // Metadata:
            // NetworkVarNames:  ()
            // NetworkVarNames:  ()
            pub mod CDynamicProp {
                pub const m_bCreateNavObstacle: usize = 0xB60; // bool
                pub const m_bNavObstacleUpdatesOverridden: usize = 0xB61; // bool
                pub const m_bUseHitboxesForRenderBox: usize = 0xB62; // bool
                pub const m_bUseAnimGraph: usize = 0xB63; // bool
                pub const m_pOutputAnimBegun: usize = 0xB68; // CEntityIOOutput
                pub const m_pOutputAnimOver: usize = 0xB90; // CEntityIOOutput
                pub const m_pOutputAnimLoopCycleOver: usize = 0xBB8; // CEntityIOOutput
                pub const m_OnAnimReachedStart: usize = 0xBE0; // CEntityIOOutput
                pub const m_OnAnimReachedEnd: usize = 0xC08; // CEntityIOOutput
                pub const m_iszIdleAnim: usize = 0xC30; // CUtlSymbolLarge
                pub const m_nIdleAnimLoopMode: usize = 0xC38; // AnimLoopMode_t
                pub const m_bRandomizeCycle: usize = 0xC3C; // bool
                pub const m_bStartDisabled: usize = 0xC3D; // bool
                pub const m_bFiredStartEndOutput: usize = 0xC3E; // bool
                pub const m_bForceNpcExclude: usize = 0xC3F; // bool
                pub const m_bCreateNonSolid: usize = 0xC40; // bool
                pub const m_bIsOverrideProp: usize = 0xC41; // bool
                pub const m_iInitialGlowState: usize = 0xC44; // int32
                pub const m_nGlowRange: usize = 0xC48; // int32
                pub const m_nGlowRangeMin: usize = 0xC4C; // int32
                pub const m_glowColor: usize = 0xC50; // Color
                pub const m_nGlowTeam: usize = 0xC54; // int32
            }
            // Parent: CCSWeaponBase
            // Field count: 7
            //
            // Metadata:
            // NetworkVarNames: m_bPlayingUninterruptableAct (bool)
            // NetworkVarNames: m_nUninterruptableActivity (PlayerAnimEvent_t)
            pub mod CFists {
                pub const m_bPlayingUninterruptableAct: usize = 0xF70; // bool
                pub const m_nUninterruptableActivity: usize = 0xF74; // PlayerAnimEvent_t
                pub const m_bRestorePrevWep: usize = 0xF78; // bool
                pub const m_hWeaponBeforePrevious: usize = 0xF7C; // CHandle<CBasePlayerWeapon>
                pub const m_hWeaponPrevious: usize = 0xF80; // CHandle<CBasePlayerWeapon>
                pub const m_bDelayedHardPunchIncoming: usize = 0xF84; // bool
                pub const m_bDestroyAfterTaunt: usize = 0xF85; // bool
            }
            // Parent: CBreakable
            // Field count: 0
            pub mod CPushable {
            }
            // Parent: CBaseTrigger
            // Field count: 0
            pub mod CTriggerTripWire {
            }
            // Parent: CBaseTrigger
            // Field count: 1
            pub mod CTriggerMultiple {
                pub const m_OnTrigger: usize = 0x960; // CEntityIOOutput
            }
            // Parent: CFuncBrush
            // Field count: 4
            //
            // Metadata:
            // NetworkVarNames: m_EffectName (string_t)
            pub mod CFuncElectrifiedVolume {
                pub const m_EffectName: usize = 0x7B0; // CUtlSymbolLarge
                pub const m_EffectInterpenetrateName: usize = 0x7B8; // CUtlSymbolLarge
                pub const m_EffectZapName: usize = 0x7C0; // CUtlSymbolLarge
                pub const m_iszEffectSource: usize = 0x7C8; // CUtlSymbolLarge
            }
            // Parent: CWeaponBaseItem
            // Field count: 0
            pub mod CItem_Healthshot {
            }
            // Parent: CBaseTrigger
            // Field count: 1
            pub mod CFogTrigger {
                pub const m_fog: usize = 0x960; // fogparams_t
            }
            // Parent: CBaseTrigger
            // Field count: 0
            pub mod CTriggerHostageReset {
            }
            // Parent: CPointEntity
            // Field count: 0
            pub mod CInfoInstructorHintBombTargetB {
            }
            // Parent: CCSWeaponBase
            // Field count: 0
            pub mod CWeaponSawedoff {
            }
            // Parent: CBaseTrigger
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames: m_flFluidDensity (float)
            pub mod CTriggerBuoyancy {
                pub const m_BuoyancyHelper: usize = 0x960; // CBuoyancyHelper
                pub const m_flFluidDensity: usize = 0x9E0; // float32
            }
            // Parent: CBaseCSGrenadeProjectile
            // Field count: 11
            //
            // Metadata:
            // NetworkVarNames: m_nSmokeEffectTickBegin (int)
            // NetworkVarNames: m_bDidSmokeEffect (bool)
            // NetworkVarNames: m_nRandomSeed (int)
            // NetworkVarNames: m_vSmokeColor (Vector)
            // NetworkVarNames: m_vSmokeDetonationPos (Vector)
            // NetworkVarNames: m_VoxelFrameData (uint8)
            // NetworkVarNames: m_nVoxelFrameDataSize (int)
            // NetworkVarNames: m_nVoxelUpdate (int)
            pub mod CSmokeGrenadeProjectile {
                pub const m_nSmokeEffectTickBegin: usize = 0xB68; // int32
                pub const m_bDidSmokeEffect: usize = 0xB6C; // bool
                pub const m_nRandomSeed: usize = 0xB70; // int32
                pub const m_vSmokeColor: usize = 0xB74; // Vector
                pub const m_vSmokeDetonationPos: usize = 0xB80; // Vector
                pub const m_VoxelFrameData: usize = 0xB90; // CNetworkUtlVectorBase<uint8>
                pub const m_nVoxelFrameDataSize: usize = 0xBA8; // int32
                pub const m_nVoxelUpdate: usize = 0xBAC; // int32
                pub const m_flLastBounce: usize = 0xBB0; // GameTime_t
                pub const m_fllastSimulationTime: usize = 0xBB4; // GameTime_t
                pub const m_bExplodeFromInferno: usize = 0x2E38; // bool
            }
            // Parent: CBot
            // Field count: 11
            pub mod CCSBot {
                pub const m_eyePosition: usize = 0x108; // Vector
                pub const m_name: usize = 0x114; // char[64]
                pub const m_combatRange: usize = 0x154; // float32
                pub const m_isRogue: usize = 0x0; // bool
                pub const m_lastOrigin: usize = 0x650C; // Vector
                pub const m_lastRadioRecievedTimestamp: usize = 0x651C; // float32
                pub const m_lastRadioSentTimestamp: usize = 0x6520; // float32
                pub const m_radioSubject: usize = 0x6524; // CHandle<CCSPlayerPawn>
                pub const m_radioPosition: usize = 0x6528; // Vector
                pub const m_voiceEndTimestamp: usize = 0x6534; // float32
                pub const m_lastValidReactionQueueFrame: usize = 0x6540; // int32
            }
            // Parent: 
            // Field count: 0
            pub mod CItemKevlar {
            }
            // Parent: CBaseTrigger
            // Field count: 14
            pub mod CTriggerHurt {
                pub const m_flOriginalDamage: usize = 0x960; // float32
                pub const m_flDamage: usize = 0x964; // float32
                pub const m_flDamageCap: usize = 0x968; // float32
                pub const m_flLastDmgTime: usize = 0x96C; // GameTime_t
                pub const m_flForgivenessDelay: usize = 0x970; // float32
                pub const m_bitsDamageInflict: usize = 0x974; // DamageTypes_t
                pub const m_damageModel: usize = 0x978; // int32
                pub const m_bNoDmgForce: usize = 0x97C; // bool
                pub const m_vDamageForce: usize = 0x980; // Vector
                pub const m_thinkAlways: usize = 0x98C; // bool
                pub const m_hurtThinkPeriod: usize = 0x990; // float32
                pub const m_OnHurt: usize = 0x998; // CEntityIOOutput
                pub const m_OnHurtPlayer: usize = 0x9C0; // CEntityIOOutput
                pub const m_hurtEntities: usize = 0x9E8; // CUtlVector<CHandle<CBaseEntity>>
            }
            // Parent: CPointEntity
            // Field count: 4
            pub mod CSoundEnt {
                pub const m_iFreeSound: usize = 0x4E0; // int32
                pub const m_iActiveSound: usize = 0x4E4; // int32
                pub const m_cLastActiveSounds: usize = 0x4E8; // int32
                pub const m_SoundPool: usize = 0x4EC; // 
            }
            // Parent: CSprite
            // Field count: 0
            pub mod CSpriteOriented {
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            pub mod CWeaponM4A1 {
            }
            // Parent: CBeam
            // Field count: 5
            pub mod CEnvLaser {
                pub const m_iszLaserTarget: usize = 0x830; // CUtlSymbolLarge
                pub const m_pSprite: usize = 0x838; // 
                pub const m_iszSpriteName: usize = 0x840; // CUtlSymbolLarge
                pub const m_firePosition: usize = 0x848; // Vector
                pub const m_flStartFrame: usize = 0x854; // float32
            }
            // Parent: CSprite
            // Field count: 0
            pub mod CCommentaryViewPosition {
            }
            // Parent: CEconEntity
            // Field count: 8
            //
            // Metadata:
            // MNetworkExcludeByName
            // MNetworkExcludeByName
            // MNetworkIncludeByName
            // MNetworkExcludeByUserGroup
            // MNetworkExcludeByUserGroup
            // MNetworkExcludeByUserGroup
            // MNetworkUserGroupProxy
            // NetworkVarNames: m_nNextPrimaryAttackTick (GameTick_t)
            // NetworkVarNames: m_flNextPrimaryAttackTickRatio (float32)
            // NetworkVarNames: m_nNextSecondaryAttackTick (GameTick_t)
            // NetworkVarNames: m_flNextSecondaryAttackTickRatio (float32)
            // NetworkVarNames: m_iClip1 (int32)
            // NetworkVarNames: m_iClip2 (int32)
            // NetworkVarNames: m_pReserveAmmo (int)
            pub mod CBasePlayerWeapon {
                pub const m_nNextPrimaryAttackTick: usize = 0xD30; // GameTick_t
                pub const m_flNextPrimaryAttackTickRatio: usize = 0xD34; // float32
                pub const m_nNextSecondaryAttackTick: usize = 0xD38; // GameTick_t
                pub const m_flNextSecondaryAttackTickRatio: usize = 0xD3C; // float32
                pub const m_iClip1: usize = 0xD40; // int32
                pub const m_iClip2: usize = 0xD44; // int32
                pub const m_pReserveAmmo: usize = 0xD48; // 
                pub const m_OnPlayerUse: usize = 0xD50; // CEntityIOOutput
            }
            // Parent: CBaseFlex
            // Field count: 0
            pub mod CBaseFlexAlias_funCBaseFlex {
            }
            // Parent: CBaseAnimGraph
            // Field count: 0
            pub mod CHostageCarriableProp {
            }
            // Parent: CBaseModelEntity
            // Field count: 18
            //
            // Metadata:
            // MNetworkOverride
            // MNetworkOverride
            pub mod CFuncRotating {
                pub const m_OnStopped: usize = 0x790; // CEntityIOOutput
                pub const m_OnStarted: usize = 0x7B8; // CEntityIOOutput
                pub const m_OnReachedStart: usize = 0x7E0; // CEntityIOOutput
                pub const m_localRotationVector: usize = 0x808; // RotationVector
                pub const m_flFanFriction: usize = 0x814; // float32
                pub const m_flAttenuation: usize = 0x818; // float32
                pub const m_flVolume: usize = 0x81C; // float32
                pub const m_flTargetSpeed: usize = 0x820; // float32
                pub const m_flMaxSpeed: usize = 0x824; // float32
                pub const m_flBlockDamage: usize = 0x828; // float32
                pub const m_NoiseRunning: usize = 0x830; // CUtlSymbolLarge
                pub const m_bReversed: usize = 0x838; // bool
                pub const m_bAccelDecel: usize = 0x839; // bool
                pub const m_prevLocalAngles: usize = 0x844; // QAngle
                pub const m_angStart: usize = 0x850; // QAngle
                pub const m_bStopAtStartPos: usize = 0x85C; // bool
                pub const m_vecClientOrigin: usize = 0x860; // Vector
                pub const m_vecClientAngles: usize = 0x86C; // QAngle
            }
            // Parent: CBaseGrenade
            // Field count: 16
            //
            // Metadata:
            // NetworkVarNames: m_vInitialPosition (Vector)
            // NetworkVarNames: m_vInitialVelocity (Vector)
            // NetworkVarNames: m_nBounces (int)
            // NetworkVarNames: m_nExplodeEffectIndex (HParticleSystemDefinitionStrong)
            // NetworkVarNames: m_nExplodeEffectTickBegin (int)
            // NetworkVarNames: m_vecExplodeEffectOrigin (Vector)
            pub mod CBaseCSGrenadeProjectile {
                pub const m_vInitialPosition: usize = 0xAE0; // Vector
                pub const m_vInitialVelocity: usize = 0xAEC; // Vector
                pub const m_nBounces: usize = 0xAF8; // int32
                pub const m_nExplodeEffectIndex: usize = 0xB00; // 
                pub const m_nExplodeEffectTickBegin: usize = 0xB08; // int32
                pub const m_vecExplodeEffectOrigin: usize = 0xB0C; // Vector
                pub const m_flSpawnTime: usize = 0xB18; // GameTime_t
                pub const m_unOGSExtraFlags: usize = 0xB1C; // uint8
                pub const m_bDetonationRecorded: usize = 0xB1D; // bool
                pub const m_nItemIndex: usize = 0xB1E; // uint16
                pub const m_vecOriginalSpawnLocation: usize = 0xB20; // Vector
                pub const m_flLastBounceSoundTime: usize = 0xB2C; // GameTime_t
                pub const m_vecGrenadeSpin: usize = 0xB30; // RotationVector
                pub const m_vecLastHitSurfaceNormal: usize = 0xB3C; // Vector
                pub const m_nTicksAtZeroVelocity: usize = 0xB48; // int32
                pub const m_bHasEverHitEnemy: usize = 0xB4C; // bool
            }
            // Parent: CServerOnlyModelEntity
            // Field count: 1
            pub mod CCSPlace {
                pub const m_name: usize = 0x798; // CUtlSymbolLarge
            }
            // Parent: CBaseModelEntity
            // Field count: 10
            //
            // Metadata:
            // NetworkVarNames:  ()
            // NetworkVarNames:  ()
            // NetworkVarNames:  ()
            // NetworkVarNames:  ()
            // NetworkVarNames:  ()
            // NetworkVarNames:  ()
            // NetworkVarNames:  ()
            // NetworkVarNames:  ()
            // NetworkVarNames:  ()
            // NetworkVarNames:  ()
            pub mod CEntityDissolve {
                pub const m_flFadeInStart: usize = 0x790; // float32
                pub const m_flFadeInLength: usize = 0x794; // float32
                pub const m_flFadeOutModelStart: usize = 0x798; // float32
                pub const m_flFadeOutModelLength: usize = 0x79C; // float32
                pub const m_flFadeOutStart: usize = 0x7A0; // float32
                pub const m_flFadeOutLength: usize = 0x7A4; // float32
                pub const m_flStartTime: usize = 0x7A8; // GameTime_t
                pub const m_nDissolveType: usize = 0x7AC; // EntityDisolveType_t
                pub const m_vDissolverOrigin: usize = 0x7B0; // Vector
                pub const m_nMagnitude: usize = 0x7BC; // uint32
            }
            // Parent: CBaseModelEntity
            // Field count: 24
            //
            // Metadata:
            // MNetworkIncludeByUserGroup
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            // MNetworkOverride
            // NetworkVarNames:  ()
            // NetworkVarNames:  ()
            // NetworkVarNames:  ()
            // NetworkVarNames:  ()
            // NetworkVarNames:  ()
            // NetworkVarNames:  ()
            // NetworkVarNames:  ()
            // NetworkVarNames:  ()
            // NetworkVarNames:  ()
            // NetworkVarNames:  ()
            // NetworkVarNames:  ()
            // NetworkVarNames:  ()
            // NetworkVarNames:  ()
            // NetworkVarNames:  ()
            // NetworkVarNames:  ()
            // NetworkVarNames:  ()
            // NetworkVarNames:  ()
            // NetworkVarNames:  ()
            // NetworkVarNames:  ()
            // NetworkVarNames:  ()
            pub mod CBeam {
                pub const m_flFrameRate: usize = 0x790; // float32
                pub const m_flHDRColorScale: usize = 0x794; // float32
                pub const m_flFireTime: usize = 0x798; // GameTime_t
                pub const m_flDamage: usize = 0x79C; // float32
                pub const m_nNumBeamEnts: usize = 0x7A0; // uint8
                pub const m_hBaseMaterial: usize = 0x7A8; // CStrongHandle<InfoForResourceTypeIMaterial2>
                pub const m_nHaloIndex: usize = 0x7B0; // CStrongHandle<InfoForResourceTypeIMaterial2>
                pub const m_nBeamType: usize = 0x7B8; // BeamType_t
                pub const m_nBeamFlags: usize = 0x7BC; // uint32
                pub const m_hAttachEntity: usize = 0x7C0; // CHandle<CBaseEntity>[10]
                pub const m_nAttachIndex: usize = 0x7E8; // 
                pub const m_fWidth: usize = 0x7F4; // float32
                pub const m_fEndWidth: usize = 0x7F8; // float32
                pub const m_fFadeLength: usize = 0x7FC; // float32
                pub const m_fHaloScale: usize = 0x800; // float32
                pub const m_fAmplitude: usize = 0x804; // float32
                pub const m_fStartFrame: usize = 0x808; // float32
                pub const m_fSpeed: usize = 0x80C; // float32
                pub const m_flFrame: usize = 0x810; // float32
                pub const m_nClipStyle: usize = 0x814; // BeamClipStyle_t
                pub const m_bTurnedOff: usize = 0x818; // bool
                pub const m_vecEndPos: usize = 0x81C; // Vector
                pub const m_hEndEntity: usize = 0x828; // CHandle<CBaseEntity>
                pub const m_nDissolveType: usize = 0x82C; // int32
            }
            // Parent: CSceneEntity
            // Field count: 0
            pub mod CSceneEntityAlias_logic_choreographed_scene {
            }
            // Parent: CPointEntity
            // Field count: 4
            pub mod CRagdollMagnet {
                pub const m_bDisabled: usize = 0x4E0; // bool
                pub const m_radius: usize = 0x4E4; // float32
                pub const m_force: usize = 0x4E8; // float32
                pub const m_axis: usize = 0x4EC; // Vector
            }
            // Parent: CBaseModelEntity
            // Field count: 0
            pub mod CFuncBrush {
            }
            // Parent: CCSWeaponBase
            // Field count: 0
            pub mod CMelee {
            }
            // Parent: CBreakable
            // Field count: 14
            pub mod CPhysBox {
                pub const m_damageType: usize = 0x868; // int32
                pub const m_damageToEnableMotion: usize = 0x86C; // int32
                pub const m_flForceToEnableMotion: usize = 0x870; // float32
                pub const m_angPreferredCarryAngles: usize = 0x874; // QAngle
                pub const m_bNotSolidToWorld: usize = 0x880; // bool
                pub const m_bEnableUseOutput: usize = 0x881; // bool
                pub const m_iExploitableByPlayer: usize = 0x884; // int32
                pub const m_flTouchOutputPerEntityDelay: usize = 0x888; // float32
                pub const m_OnDamaged: usize = 0x890; // CEntityIOOutput
                pub const m_OnAwakened: usize = 0x8B8; // CEntityIOOutput
                pub const m_OnMotionEnabled: usize = 0x8E0; // CEntityIOOutput
                pub const m_OnPlayerUse: usize = 0x908; // CEntityIOOutput
                pub const m_OnStartTouch: usize = 0x930; // CEntityIOOutput
                pub const m_hCarryingPlayer: usize = 0x958; // CHandle<CBasePlayerPawn>
            }
            // Parent: CBaseFlex
            // Field count: 14
            //
            // Metadata:
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            // MNetworkExcludeByName
            // MNetworkExcludeByName
            // MNetworkExcludeByUserGroup
            // MNetworkExcludeByName
            // MNetworkExcludeByUserGroup
            // MNetworkExcludeByName
            // MNetworkExcludeByUserGroup
            // MNetworkExcludeByName
            // MNetworkExcludeByName
            // MNetworkExcludeByName
            // NetworkVarNames:  ()
            // NetworkVarNames:  ()
            // NetworkVarNames:  ()
            // NetworkVarNames:  ()
            // NetworkVarNames:  ()
            pub mod CBaseGrenade {
                pub const m_OnPlayerPickup: usize = 0xA40; // CEntityIOOutput
                pub const m_OnExplode: usize = 0xA68; // CEntityIOOutput
                pub const m_bHasWarnedAI: usize = 0xA90; // bool
                pub const m_bIsSmokeGrenade: usize = 0xA91; // bool
                pub const m_bIsLive: usize = 0xA92; // bool
                pub const m_DmgRadius: usize = 0xA94; // float32
                pub const m_flDetonateTime: usize = 0xA98; // GameTime_t
                pub const m_flWarnAITime: usize = 0xA9C; // float32
                pub const m_flDamage: usize = 0xAA0; // float32
                pub const m_iszBounceSound: usize = 0xAA8; // CUtlSymbolLarge
                pub const m_ExplosionSound: usize = 0xAB0; // CUtlString
                pub const m_hThrower: usize = 0xABC; // CHandle<CCSPlayerPawn>
                pub const m_flNextAttack: usize = 0xAD4; // GameTime_t
                pub const m_hOriginalThrower: usize = 0xAD8; // CHandle<CCSPlayerPawn>
            }
            // Parent: CBaseCSGrenadeProjectile
            // Field count: 0
            pub mod CHEGrenadeProjectile {
            }
            // Parent: CBasePlayerWeapon
            // Field count: 65
            //
            // Metadata:
            // MNetworkExcludeByName
            // NetworkVarNames: m_flFireSequenceStartTime (float)
            // NetworkVarNames: m_nFireSequenceStartTimeChange (int)
            // NetworkVarNames: m_ePlayerFireEvent (PlayerAnimEvent_t)
            // NetworkVarNames: m_ePlayerFireEventAttackType (WeaponAttackType_t)
            // NetworkVarNames: m_iState (CSWeaponState_t)
            // NetworkVarNames: m_nViewModelIndex (uint32)
            // NetworkVarNames: m_flTimeWeaponIdle (GameTime_t)
            // NetworkVarNames: m_weaponMode (CSWeaponMode)
            // NetworkVarNames: m_fAccuracyPenalty (float)
            // NetworkVarNames: m_iRecoilIndex (int)
            // NetworkVarNames: m_flRecoilIndex (float)
            // NetworkVarNames: m_bBurstMode (bool)
            // NetworkVarNames: m_nPostponeFireReadyTicks (GameTick_t)
            // NetworkVarNames: m_flPostponeFireReadyFrac (float)
            // NetworkVarNames: m_bInReload (bool)
            // NetworkVarNames: m_bReloadVisuallyComplete (bool)
            // NetworkVarNames: m_flDroppedAtTime (GameTime_t)
            // NetworkVarNames: m_bIsHauledBack (bool)
            // NetworkVarNames: m_bSilencerOn (bool)
            // NetworkVarNames: m_flTimeSilencerSwitchComplete (GameTime_t)
            // NetworkVarNames: m_iOriginalTeamNumber (int)
            // NetworkVarNames: m_iMostRecentTeamNumber (int)
            // NetworkVarNames: m_bDroppedNearBuyZone (bool)
            // NetworkVarNames: m_nextPrevOwnerUseTime (GameTime_t)
            // NetworkVarNames: m_hPrevOwner (CHandle<CCSPlayerPawn>)
            // NetworkVarNames: m_nDropTick (GameTick_t)
            // NetworkVarNames: m_fLastShotTime (GameTime_t)
            // NetworkVarNames: m_iIronSightMode (int)
            // NetworkVarNames: m_iNumEmptyAttacks (int)
            pub mod CCSWeaponBase {
                pub const m_bRemoveable: usize = 0xDA0; // bool
                pub const m_flFireSequenceStartTime: usize = 0xDA8; // float32
                pub const m_nFireSequenceStartTimeChange: usize = 0xDAC; // int32
                pub const m_nFireSequenceStartTimeAck: usize = 0xDB0; // int32
                pub const m_ePlayerFireEvent: usize = 0xDB4; // PlayerAnimEvent_t
                pub const m_ePlayerFireEventAttackType: usize = 0xDB8; // WeaponAttackType_t
                pub const m_seqIdle: usize = 0xDBC; // HSequence
                pub const m_seqFirePrimary: usize = 0xDC0; // HSequence
                pub const m_seqFireSecondary: usize = 0xDC4; // HSequence
                pub const m_thirdPersonFireSequences: usize = 0xDC8; // CUtlVector<HSequence>
                pub const m_hCurrentThirdPersonSequence: usize = 0xDE0; // HSequence
                pub const m_nSilencerBoneIndex: usize = 0xDE4; // int32
                pub const m_thirdPersonSequences: usize = 0xDE8; // 
                pub const m_bPlayerAmmoStockOnPickup: usize = 0xE10; // bool
                pub const m_bRequireUseToTouch: usize = 0xE11; // bool
                pub const m_iState: usize = 0xE14; // CSWeaponState_t
                pub const m_flLastTimeInAir: usize = 0xE18; // GameTime_t
                pub const m_flLastDeployTime: usize = 0xE1C; // GameTime_t
                pub const m_nLastEmptySoundCmdNum: usize = 0xE20; // int32
                pub const m_nViewModelIndex: usize = 0xE24; // uint32
                pub const m_bReloadsWithClips: usize = 0xE28; // bool
                pub const m_flTimeWeaponIdle: usize = 0xE48; // GameTime_t
                pub const m_bFireOnEmpty: usize = 0xE4C; // bool
                pub const m_OnPlayerPickup: usize = 0xE50; // CEntityIOOutput
                pub const m_weaponMode: usize = 0xE78; // CSWeaponMode
                pub const m_flTurningInaccuracyDelta: usize = 0xE7C; // float32
                pub const m_vecTurningInaccuracyEyeDirLast: usize = 0xE80; // Vector
                pub const m_flTurningInaccuracy: usize = 0xE8C; // float32
                pub const m_fAccuracyPenalty: usize = 0xE90; // float32
                pub const m_flLastAccuracyUpdateTime: usize = 0xE94; // GameTime_t
                pub const m_fAccuracySmoothedForZoom: usize = 0xE98; // float32
                pub const m_fScopeZoomEndTime: usize = 0xE9C; // GameTime_t
                pub const m_iRecoilIndex: usize = 0xEA0; // int32
                pub const m_flRecoilIndex: usize = 0xEA4; // float32
                pub const m_bBurstMode: usize = 0xEA8; // bool
                pub const m_nPostponeFireReadyTicks: usize = 0xEAC; // GameTick_t
                pub const m_flPostponeFireReadyFrac: usize = 0xEB0; // float32
                pub const m_bInReload: usize = 0xEB4; // bool
                pub const m_bReloadVisuallyComplete: usize = 0xEB5; // bool
                pub const m_flDroppedAtTime: usize = 0xEB8; // GameTime_t
                pub const m_bIsHauledBack: usize = 0xEBC; // bool
                pub const m_bSilencerOn: usize = 0xEBD; // bool
                pub const m_flTimeSilencerSwitchComplete: usize = 0xEC0; // GameTime_t
                pub const m_iOriginalTeamNumber: usize = 0xEC4; // int32
                pub const m_iMostRecentTeamNumber: usize = 0xEC8; // int32
                pub const m_bDroppedNearBuyZone: usize = 0xECC; // bool
                pub const m_flNextAttackRenderTimeOffset: usize = 0xED0; // float32
                pub const m_bCanBePickedUp: usize = 0xEE8; // bool
                pub const m_bUseCanOverrideNextOwnerTouchTime: usize = 0xEE9; // bool
                pub const m_nextOwnerTouchTime: usize = 0xEEC; // GameTime_t
                pub const m_nextPrevOwnerTouchTime: usize = 0xEF0; // GameTime_t
                pub const m_nextPrevOwnerUseTime: usize = 0xEF8; // GameTime_t
                pub const m_hPrevOwner: usize = 0xEFC; // CHandle<CCSPlayerPawn>
                pub const m_nDropTick: usize = 0xF00; // GameTick_t
                pub const m_donated: usize = 0xF24; // bool
                pub const m_fLastShotTime: usize = 0xF28; // GameTime_t
                pub const m_bWasOwnedByCT: usize = 0xF2C; // bool
                pub const m_bWasOwnedByTerrorist: usize = 0xF2D; // bool
                pub const m_bFiredOutOfAmmoEvent: usize = 0xF2E; // bool
                pub const m_numRemoveUnownedWeaponThink: usize = 0xF30; // int32
                pub const m_IronSightController: usize = 0xF38; // CIronSightController
                pub const m_iIronSightMode: usize = 0xF50; // int32
                pub const m_flLastLOSTraceFailureTime: usize = 0xF54; // GameTime_t
                pub const m_iNumEmptyAttacks: usize = 0xF58; // int32
                pub const m_flWatTickOffset: usize = 0xF5C; // float32
            }
            // Parent: CBaseEntity
            // Field count: 0
            pub mod CHandleDummy {
            }
            // Parent: CTeam
            // Field count: 14
            //
            // Metadata:
            // NetworkVarNames: m_bSurrendered (bool)
            // NetworkVarNames: m_szTeamMatchStat (char)
            // NetworkVarNames: m_numMapVictories (int)
            // NetworkVarNames: m_scoreFirstHalf (int32)
            // NetworkVarNames: m_scoreSecondHalf (int32)
            // NetworkVarNames: m_scoreOvertime (int32)
            // NetworkVarNames: m_szClanTeamname (char)
            // NetworkVarNames: m_iClanID (uint32)
            // NetworkVarNames: m_szTeamFlagImage (char)
            // NetworkVarNames: m_szTeamLogoImage (char)
            pub mod CCSTeam {
                pub const m_nLastRecievedShorthandedRoundBonus: usize = 0x598; // int32
                pub const m_nShorthandedRoundBonusStartRound: usize = 0x59C; // int32
                pub const m_bSurrendered: usize = 0x5A0; // bool
                pub const m_szTeamMatchStat: usize = 0x5A1; // char[512]
                pub const m_numMapVictories: usize = 0x7A4; // int32
                pub const m_scoreFirstHalf: usize = 0x7A8; // int32
                pub const m_scoreSecondHalf: usize = 0x7AC; // int32
                pub const m_scoreOvertime: usize = 0x7B0; // int32
                pub const m_szClanTeamname: usize = 0x7B4; // char[129]
                pub const m_iClanID: usize = 0x838; // uint32
                pub const m_szTeamFlagImage: usize = 0x83C; // 
                pub const m_szTeamLogoImage: usize = 0x844; // 
                pub const m_flNextResourceTime: usize = 0x84C; // float32
                pub const m_iLastUpdateSentAt: usize = 0x850; // int32
            }
            // Parent: CBaseTrigger
            // Field count: 2
            pub mod CTriggerDetectBulletFire {
                pub const m_bPlayerFireOnly: usize = 0x960; // bool
                pub const m_OnDetectedBulletFire: usize = 0x968; // CEntityIOOutput
            }
            // Parent: CBaseModelEntity
            // Field count: 0
            pub mod CWorld {
            }
            // Parent: CPointEntity
            // Field count: 1
            pub mod CPointGiveAmmo {
                pub const m_pActivator: usize = 0x4E0; // CHandle<CBaseEntity>
            }
            // Parent: 
            // Field count: 0
            pub mod CFuncMoveLinearAlias_momentary_door {
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            pub mod CAK47 {
            }
            // Parent: CBaseTrigger
            // Field count: 4
            pub mod CTriggerTeleport {
                pub const m_iLandmark: usize = 0x960; // CUtlSymbolLarge
                pub const m_bUseLandmarkAngles: usize = 0x968; // bool
                pub const m_bMirrorPlayer: usize = 0x969; // bool
                pub const m_bCheckDestIfClearForPlayer: usize = 0x96A; // bool
            }
            // Parent: CBaseCSGrenade
            // Field count: 0
            pub mod CHEGrenade {
            }
            // Parent: 
            // Field count: 0
            pub mod CGameEnd {
            }
            // Parent: CBaseTrigger
            // Field count: 0
            pub mod CTriggerCallback {
            }
            // Parent: CPhysicsProp
            // Field count: 0
            pub mod CPhysicsPropOverride {
            }
            // Parent: CBaseTrigger
            // Field count: 10
            //
            // Metadata:
            // NetworkVarNames:  ()
            // NetworkVarNames:  ()
            // NetworkVarNames:  ()
            // NetworkVarNames:  ()
            // NetworkVarNames:  ()
            pub mod CColorCorrectionVolume {
                pub const m_bEnabled: usize = 0x960; // bool
                pub const m_MaxWeight: usize = 0x964; // float32
                pub const m_FadeDuration: usize = 0x968; // float32
                pub const m_bStartDisabled: usize = 0x96C; // bool
                pub const m_Weight: usize = 0x970; // float32
                pub const m_lookupFilename: usize = 0x974; // char[512]
                pub const m_LastEnterWeight: usize = 0xB74; // float32
                pub const m_LastEnterTime: usize = 0xB78; // GameTime_t
                pub const m_LastExitWeight: usize = 0xB7C; // float32
                pub const m_LastExitTime: usize = 0xB80; // GameTime_t
            }
            // Parent: CBaseButton
            // Field count: 0
            pub mod CPhysicalButton {
            }
            // Parent: CEntitySubclassVDataBase
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPrecipitationVData {
                pub const m_szParticlePrecipitationEffect: usize = 0x28; // 
                pub const m_flInnerDistance: usize = 0x108; // float32
                pub const m_nAttachType: usize = 0x10C; // 
                pub const m_bBatchSameVolumeType: usize = 0x110; // bool
                pub const m_nRTEnvCP: usize = 0x114; // int32
                pub const m_nRTEnvCPComponent: usize = 0x118; // int32
                pub const m_szModifier: usize = 0x120; // CUtlString
            }
            // Parent: CBaseAnimGraph
            // Field count: 30
            //
            // Metadata:
            // NetworkVarNames: m_iszCommentaryFile (string_t)
            // NetworkVarNames: m_hViewPosition (CHandle<CBaseEntity>)
            // NetworkVarNames: m_bActive (bool)
            // NetworkVarNames: m_flStartTime (GameTime_t)
            // NetworkVarNames: m_flStartTimeInCommentary (float32)
            // NetworkVarNames: m_iszTitle (string_t)
            // NetworkVarNames: m_iszSpeakers (string_t)
            // NetworkVarNames: m_iNodeNumber (int)
            // NetworkVarNames: m_iNodeNumberMax (int)
            // NetworkVarNames: m_bListenedTo (bool)
            pub mod CPointCommentaryNode {
                pub const m_iszPreCommands: usize = 0x9A8; // CUtlSymbolLarge
                pub const m_iszPostCommands: usize = 0x9B0; // CUtlSymbolLarge
                pub const m_iszCommentaryFile: usize = 0x9B8; // CUtlSymbolLarge
                pub const m_iszViewTarget: usize = 0x9C0; // CUtlSymbolLarge
                pub const m_hViewTarget: usize = 0x9C8; // CHandle<CBaseEntity>
                pub const m_hViewTargetAngles: usize = 0x9CC; // CHandle<CBaseEntity>
                pub const m_iszViewPosition: usize = 0x9D0; // CUtlSymbolLarge
                pub const m_hViewPosition: usize = 0x9D8; // CHandle<CBaseEntity>
                pub const m_hViewPositionMover: usize = 0x9DC; // CHandle<CBaseEntity>
                pub const m_bPreventMovement: usize = 0x9E0; // bool
                pub const m_bUnderCrosshair: usize = 0x9E1; // bool
                pub const m_bUnstoppable: usize = 0x9E2; // bool
                pub const m_flFinishedTime: usize = 0x9E4; // GameTime_t
                pub const m_vecFinishOrigin: usize = 0x9E8; // Vector
                pub const m_vecOriginalAngles: usize = 0x9F4; // QAngle
                pub const m_vecFinishAngles: usize = 0xA00; // QAngle
                pub const m_bPreventChangesWhileMoving: usize = 0xA0C; // bool
                pub const m_bDisabled: usize = 0xA0D; // bool
                pub const m_vecTeleportOrigin: usize = 0xA10; // Vector
                pub const m_flAbortedPlaybackAt: usize = 0xA1C; // GameTime_t
                pub const m_pOnCommentaryStarted: usize = 0xA20; // CEntityIOOutput
                pub const m_pOnCommentaryStopped: usize = 0xA48; // CEntityIOOutput
                pub const m_bActive: usize = 0xA70; // bool
                pub const m_flStartTime: usize = 0xA74; // GameTime_t
                pub const m_flStartTimeInCommentary: usize = 0xA78; // float32
                pub const m_iszTitle: usize = 0xA80; // CUtlSymbolLarge
                pub const m_iszSpeakers: usize = 0xA88; // CUtlSymbolLarge
                pub const m_iNodeNumber: usize = 0xA90; // int32
                pub const m_iNodeNumberMax: usize = 0xA94; // int32
                pub const m_bListenedTo: usize = 0xA98; // bool
            }
            // Parent: CBaseClientUIEntity
            // Field count: 23
            //
            // Metadata:
            // NetworkVarNames:  ()
            // NetworkVarNames:  ()
            // NetworkVarNames:  ()
            // NetworkVarNames:  ()
            // NetworkVarNames:  ()
            // NetworkVarNames:  ()
            // NetworkVarNames:  ()
            // NetworkVarNames:  ()
            // NetworkVarNames:  ()
            // NetworkVarNames:  ()
            // NetworkVarNames:  ()
            // NetworkVarNames:  ()
            // NetworkVarNames:  ()
            // NetworkVarNames:  ()
            // NetworkVarNames:  ()
            // NetworkVarNames:  ()
            // NetworkVarNames:  ()
            // NetworkVarNames:  ()
            // NetworkVarNames:  ()
            // NetworkVarNames:  ()
            // NetworkVarNames:  ()
            // NetworkVarNames:  ()
            // NetworkVarNames:  ()
            pub mod CPointClientUIWorldPanel {
                pub const m_bIgnoreInput: usize = 0x940; // bool
                pub const m_bLit: usize = 0x941; // bool
                pub const m_bFollowPlayerAcrossTeleport: usize = 0x942; // bool
                pub const m_flWidth: usize = 0x944; // float32
                pub const m_flHeight: usize = 0x948; // float32
                pub const m_flDPI: usize = 0x94C; // float32
                pub const m_flInteractDistance: usize = 0x950; // float32
                pub const m_flDepthOffset: usize = 0x954; // float32
                pub const m_unOwnerContext: usize = 0x958; // uint32
                pub const m_unHorizontalAlign: usize = 0x95C; // uint32
                pub const m_unVerticalAlign: usize = 0x960; // uint32
                pub const m_unOrientation: usize = 0x964; // uint32
                pub const m_bAllowInteractionFromAllSceneWorlds: usize = 0x968; // bool
                pub const m_vecCSSClasses: usize = 0x970; // 
                pub const m_bOpaque: usize = 0x988; // bool
                pub const m_bNoDepth: usize = 0x989; // bool
                pub const m_bRenderBackface: usize = 0x98A; // bool
                pub const m_bUseOffScreenIndicator: usize = 0x98B; // bool
                pub const m_bExcludeFromSaveGames: usize = 0x98C; // bool
                pub const m_bGrabbable: usize = 0x98D; // bool
                pub const m_bOnlyRenderToTexture: usize = 0x98E; // bool
                pub const m_bDisableMipGen: usize = 0x98F; // bool
                pub const m_nExplicitImageLayout: usize = 0x990; // int32
            }
            // Parent: CBaseAnimGraph
            // Field count: 4
            pub mod CBaseProp {
                pub const m_bModelOverrodeBlockLOS: usize = 0x9A8; // bool
                pub const m_iShapeType: usize = 0x9AC; // int32
                pub const m_bConformToCollisionBounds: usize = 0x9B0; // bool
                pub const m_mPreferredCatchTransform: usize = 0x9B4; // matrix3x4_t
            }
            // Parent: CBaseModelEntity
            // Field count: 12
            //
            // Metadata:
            // NetworkVarNames: m_hSkyMaterial (HMaterialStrong)
            // NetworkVarNames: m_hSkyMaterialLightingOnly (HMaterialStrong)
            // NetworkVarNames: m_bStartDisabled (bool)
            // NetworkVarNames: m_vTintColor (Color)
            // NetworkVarNames: m_vTintColorLightingOnly (Color)
            // NetworkVarNames: m_flBrightnessScale (float)
            // NetworkVarNames: m_nFogType (int)
            // NetworkVarNames: m_flFogMinStart (float)
            // NetworkVarNames: m_flFogMinEnd (float)
            // NetworkVarNames: m_flFogMaxStart (float)
            // NetworkVarNames: m_flFogMaxEnd (float)
            // NetworkVarNames: m_bEnabled (bool)
            pub mod CEnvSky {
                pub const m_hSkyMaterial: usize = 0x790; // CStrongHandle<InfoForResourceTypeIMaterial2>
                pub const m_hSkyMaterialLightingOnly: usize = 0x798; // CStrongHandle<InfoForResourceTypeIMaterial2>
                pub const m_bStartDisabled: usize = 0x7A0; // bool
                pub const m_vTintColor: usize = 0x7A1; // Color
                pub const m_vTintColorLightingOnly: usize = 0x7A5; // Color
                pub const m_flBrightnessScale: usize = 0x7AC; // float32
                pub const m_nFogType: usize = 0x7B0; // int32
                pub const m_flFogMinStart: usize = 0x7B4; // float32
                pub const m_flFogMinEnd: usize = 0x7B8; // float32
                pub const m_flFogMaxStart: usize = 0x7BC; // float32
                pub const m_flFogMaxEnd: usize = 0x7C0; // float32
                pub const m_bEnabled: usize = 0x7C4; // bool
            }
            // Parent: 
            // Field count: 1
            pub mod CMarkupVolumeTagged_NavGame {
                pub const m_bFloodFillAttribute: usize = 0x7E8; // bool
            }
            // Parent: CBaseTrigger
            // Field count: 1
            pub mod CBuyZone {
                pub const m_LegacyTeamNum: usize = 0x960; // int32
            }
            // Parent: CBaseCSGrenade
            // Field count: 0
            pub mod CTripWireFire {
            }
            // Parent: CPointEntity
            // Field count: 5
            pub mod CInfoDynamicShadowHint {
                pub const m_bDisabled: usize = 0x4E0; // bool
                pub const m_flRange: usize = 0x4E4; // float32
                pub const m_nImportance: usize = 0x4E8; // int32
                pub const m_nLightChoice: usize = 0x4EC; // int32
                pub const m_hLight: usize = 0x4F0; // CHandle<CBaseEntity>
            }
            // Parent: CBaseCSGrenadeProjectile
            // Field count: 3
            pub mod CFlashbangProjectile {
                pub const m_flTimeToDetonate: usize = 0xB50; // float32
                pub const m_numOpponentsHit: usize = 0xB54; // uint8
                pub const m_numTeammatesHit: usize = 0xB55; // uint8
            }
            // Parent: CPointClientUIWorldPanel
            // Field count: 1
            //
            // Metadata:
            // NetworkVarNames:  ()
            pub mod CPointClientUIWorldTextPanel {
                pub const m_messageText: usize = 0x998; // char[512]
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            pub mod CWeaponSSG08 {
            }
            // Parent: CCSWeaponBase
            // Field count: 0
            pub mod CBreachCharge {
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            pub mod CWeaponUMP45 {
            }
            // Parent: CSprite
            // Field count: 0
            pub mod CSpriteAlias_env_glow {
            }
            // Parent: CBaseToggle
            // Field count: 25
            //
            // Metadata:
            // NetworkVarNames: m_glowEntity (CHandle<CBaseModelEntity>)
            // NetworkVarNames: m_usable (bool)
            // NetworkVarNames: m_szDisplayText (string_t)
            pub mod CBaseButton {
                pub const m_angMoveEntitySpace: usize = 0x810; // QAngle
                pub const m_fStayPushed: usize = 0x81C; // bool
                pub const m_fRotating: usize = 0x81D; // bool
                pub const m_ls: usize = 0x820; // locksound_t
                pub const m_sUseSound: usize = 0x840; // CUtlSymbolLarge
                pub const m_sLockedSound: usize = 0x848; // CUtlSymbolLarge
                pub const m_sUnlockedSound: usize = 0x850; // CUtlSymbolLarge
                pub const m_sOverrideAnticipationName: usize = 0x858; // CUtlSymbolLarge
                pub const m_bLocked: usize = 0x860; // bool
                pub const m_bDisabled: usize = 0x861; // bool
                pub const m_flUseLockedTime: usize = 0x864; // GameTime_t
                pub const m_bSolidBsp: usize = 0x868; // bool
                pub const m_OnDamaged: usize = 0x870; // CEntityIOOutput
                pub const m_OnPressed: usize = 0x898; // CEntityIOOutput
                pub const m_OnUseLocked: usize = 0x8C0; // CEntityIOOutput
                pub const m_OnIn: usize = 0x8E8; // CEntityIOOutput
                pub const m_OnOut: usize = 0x910; // CEntityIOOutput
                pub const m_nState: usize = 0x938; // int32
                pub const m_hConstraint: usize = 0x93C; // CEntityHandle
                pub const m_hConstraintParent: usize = 0x940; // CEntityHandle
                pub const m_bForceNpcExclude: usize = 0x944; // bool
                pub const m_sGlowEntity: usize = 0x948; // CUtlSymbolLarge
                pub const m_glowEntity: usize = 0x950; // CHandle<CBaseModelEntity>
                pub const m_usable: usize = 0x954; // bool
                pub const m_szDisplayText: usize = 0x958; // CUtlSymbolLarge
            }
            // Parent: CPredictedViewModel
            // Field count: 1
            //
            // Metadata:
            // NetworkVarNames: m_bShouldIgnoreOffsetAndAccuracy (bool)
            pub mod CCSGOViewModel {
                pub const m_bShouldIgnoreOffsetAndAccuracy: usize = 0x9F0; // bool
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 3
            //
            // Metadata:
            // NetworkVarNames: m_flDisplayHealth (float)
            pub mod CWeaponShield {
                pub const m_flBulletDamageAbsorbed: usize = 0xF90; // float32
                pub const m_flLastBulletHitSoundTime: usize = 0xF94; // GameTime_t
                pub const m_flDisplayHealth: usize = 0xF98; // float32
            }
            // Parent: CBaseProp
            // Field count: 33
            //
            // Metadata:
            // NetworkVarNames: m_CPropDataComponent (CPropDataComponent::Storage_t)
            // NetworkVarNames: m_noGhostCollision (bool)
            pub mod CBreakableProp {
                pub const m_CPropDataComponent: usize = 0x9F0; // CPropDataComponent
                pub const m_OnBreak: usize = 0xA30; // CEntityIOOutput
                pub const m_OnHealthChanged: usize = 0xA58; // CEntityOutputTemplate<float32>
                pub const m_OnTakeDamage: usize = 0xA80; // CEntityIOOutput
                pub const m_impactEnergyScale: usize = 0xAA8; // float32
                pub const m_iMinHealthDmg: usize = 0xAAC; // int32
                pub const m_preferredCarryAngles: usize = 0xAB0; // QAngle
                pub const m_flPressureDelay: usize = 0xABC; // float32
                pub const m_flDefBurstScale: usize = 0xAC0; // float32
                pub const m_vDefBurstOffset: usize = 0xAC4; // Vector
                pub const m_hBreaker: usize = 0xAD0; // CHandle<CBaseEntity>
                pub const m_PerformanceMode: usize = 0xAD4; // PerformanceMode_t
                pub const m_flPreventDamageBeforeTime: usize = 0xAD8; // GameTime_t
                pub const m_BreakableContentsType: usize = 0xADC; // BreakableContentsType_t
                pub const m_strBreakableContentsPropGroupOverride: usize = 0xAE0; // CUtlString
                pub const m_strBreakableContentsParticleOverride: usize = 0xAE8; // CUtlString
                pub const m_bHasBreakPiecesOrCommands: usize = 0xAF0; // bool
                pub const m_explodeDamage: usize = 0xAF4; // float32
                pub const m_explodeRadius: usize = 0xAF8; // float32
                pub const m_explosionDelay: usize = 0xB00; // float32
                pub const m_explosionBuildupSound: usize = 0xB08; // CUtlSymbolLarge
                pub const m_explosionCustomEffect: usize = 0xB10; // CUtlSymbolLarge
                pub const m_explosionCustomSound: usize = 0xB18; // CUtlSymbolLarge
                pub const m_explosionModifier: usize = 0xB20; // CUtlSymbolLarge
                pub const m_hPhysicsAttacker: usize = 0xB28; // CHandle<CBasePlayerPawn>
                pub const m_flLastPhysicsInfluenceTime: usize = 0xB2C; // GameTime_t
                pub const m_bOriginalBlockLOS: usize = 0xB30; // bool
                pub const m_flDefaultFadeScale: usize = 0xB34; // float32
                pub const m_hLastAttacker: usize = 0xB38; // CHandle<CBaseEntity>
                pub const m_hFlareEnt: usize = 0xB3C; // CHandle<CBaseEntity>
                pub const m_bUsePuntSound: usize = 0xB40; // bool
                pub const m_iszPuntSound: usize = 0xB48; // CUtlSymbolLarge
                pub const m_noGhostCollision: usize = 0xB50; // bool
            }
            // Parent: CBaseFlex
            // Field count: 9
            //
            // Metadata:
            // MNetworkExcludeByUserGroup
            // NetworkVarNames: m_hMyWearables (CHandle<CEconWearable>)
            pub mod CBaseCombatCharacter {
                pub const m_bForceServerRagdoll: usize = 0xA38; // bool
                pub const m_hMyWearables: usize = 0xA40; // CNetworkUtlVectorBase<CHandle<CEconWearable>>
                pub const m_impactEnergyScale: usize = 0xA58; // float32
                pub const m_bApplyStressDamage: usize = 0xA5C; // bool
                pub const m_iDamageCount: usize = 0xAA0; // int32
                pub const m_pVecRelationships: usize = 0xAA8; // CUtlVector<RelationshipOverride_t>*
                pub const m_strRelationships: usize = 0xAB0; // CUtlSymbolLarge
                pub const m_eHull: usize = 0xAB8; // Hull_t
                pub const m_nNavHullIdx: usize = 0xABC; // uint32
            }
            // Parent: CBaseModelEntity
            // Field count: 25
            //
            // Metadata:
            // NetworkVarNames: m_firePositions (Vector)
            // NetworkVarNames: m_fireParentPositions (Vector)
            // NetworkVarNames: m_bFireIsBurning (bool)
            // NetworkVarNames: m_BurnNormal (Vector)
            // NetworkVarNames: m_fireCount (int)
            // NetworkVarNames: m_nInfernoType (int)
            // NetworkVarNames: m_nFireEffectTickBegin (int)
            // NetworkVarNames: m_nFireLifetime (float)
            // NetworkVarNames: m_bInPostEffectTime (bool)
            pub mod CInferno {
                pub const m_firePositions: usize = 0x7A0; // 
                pub const m_fireParentPositions: usize = 0xAA0; // 
                pub const m_bFireIsBurning: usize = 0xDA0; // 
                pub const m_BurnNormal: usize = 0xDE0; // 
                pub const m_fireCount: usize = 0x10E0; // int32
                pub const m_nInfernoType: usize = 0x10E4; // int32
                pub const m_nFireEffectTickBegin: usize = 0x10E8; // int32
                pub const m_nFireLifetime: usize = 0x10EC; // float32
                pub const m_bInPostEffectTime: usize = 0x10F0; // bool
                pub const m_nFiresExtinguishCount: usize = 0x10F4; // int32
                pub const m_bWasCreatedInSmoke: usize = 0x10F8; // bool
                pub const m_extent: usize = 0x1300; // Extent
                pub const m_damageTimer: usize = 0x1318; // CountdownTimer
                pub const m_damageRampTimer: usize = 0x1330; // CountdownTimer
                pub const m_splashVelocity: usize = 0x1348; // Vector
                pub const m_InitialSplashVelocity: usize = 0x1354; // Vector
                pub const m_startPos: usize = 0x1360; // Vector
                pub const m_vecOriginalSpawnLocation: usize = 0x136C; // Vector
                pub const m_activeTimer: usize = 0x1378; // IntervalTimer
                pub const m_fireSpawnOffset: usize = 0x1388; // int32
                pub const m_nMaxFlames: usize = 0x138C; // int32
                pub const m_nSpreadCount: usize = 0x1390; // int32
                pub const m_BookkeepingTimer: usize = 0x1398; // CountdownTimer
                pub const m_NextSpreadTimer: usize = 0x13B0; // CountdownTimer
                pub const m_nSourceItemDefIndex: usize = 0x13C8; // uint16
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            pub mod CWeaponUSPSilencer {
            }
            // Parent: CBaseModelEntity
            // Field count: 23
            //
            // Metadata:
            // NetworkVarNames: m_hSpriteMaterial (HMaterialStrong)
            // NetworkVarNames: m_hAttachedToEntity (CHandle<CBaseEntity>)
            // NetworkVarNames: m_nAttachment (AttachmentHandle_t)
            // NetworkVarNames: m_flSpriteFramerate (float32)
            // NetworkVarNames: m_flFrame (float32)
            // NetworkVarNames: m_nBrightness (uint32)
            // NetworkVarNames: m_flBrightnessDuration (float32)
            // NetworkVarNames: m_flSpriteScale (float32)
            // NetworkVarNames: m_flScaleDuration (float32)
            // NetworkVarNames: m_bWorldSpaceScale (bool)
            // NetworkVarNames: m_flGlowProxySize (float32)
            // NetworkVarNames: m_flHDRColorScale (float32)
            pub mod CSprite {
                pub const m_hSpriteMaterial: usize = 0x790; // CStrongHandle<InfoForResourceTypeIMaterial2>
                pub const m_hAttachedToEntity: usize = 0x798; // CHandle<CBaseEntity>
                pub const m_nAttachment: usize = 0x79C; // 
                pub const m_flSpriteFramerate: usize = 0x7A0; // float32
                pub const m_flFrame: usize = 0x7A4; // float32
                pub const m_flDieTime: usize = 0x7A8; // GameTime_t
                pub const m_nBrightness: usize = 0x7B8; // uint32
                pub const m_flBrightnessDuration: usize = 0x7BC; // float32
                pub const m_flSpriteScale: usize = 0x7C0; // float32
                pub const m_flScaleDuration: usize = 0x7C4; // float32
                pub const m_bWorldSpaceScale: usize = 0x7C8; // bool
                pub const m_flGlowProxySize: usize = 0x7CC; // float32
                pub const m_flHDRColorScale: usize = 0x7D0; // float32
                pub const m_flLastTime: usize = 0x7D4; // GameTime_t
                pub const m_flMaxFrame: usize = 0x7D8; // float32
                pub const m_flStartScale: usize = 0x7DC; // float32
                pub const m_flDestScale: usize = 0x7E0; // float32
                pub const m_flScaleTimeStart: usize = 0x7E4; // GameTime_t
                pub const m_nStartBrightness: usize = 0x7E8; // int32
                pub const m_nDestBrightness: usize = 0x7EC; // int32
                pub const m_flBrightnessTimeStart: usize = 0x7F0; // GameTime_t
                pub const m_nSpriteWidth: usize = 0x7F4; // int32
                pub const m_nSpriteHeight: usize = 0x7F8; // int32
            }
            // Parent: CInfoDynamicShadowHint
            // Field count: 2
            pub mod CInfoDynamicShadowHintBox {
                pub const m_vBoxMins: usize = 0x4F8; // Vector
                pub const m_vBoxMaxs: usize = 0x504; // Vector
            }
            // Parent: CBaseCSGrenade
            // Field count: 0
            pub mod CFlashbang {
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            pub mod CWeaponAug {
            }
            // Parent: CDynamicProp
            // Field count: 28
            //
            // Metadata:
            // NetworkVarNames: m_AttributeManager (CAttributeContainer)
            // NetworkVarNames: m_jumpedThisFrame (bool)
            // NetworkVarNames: m_leader (CHandle<CCSPlayerPawn>)
            pub mod CChicken {
                pub const m_AttributeManager: usize = 0xC78; // CAttributeContainer
                pub const m_updateTimer: usize = 0xF40; // CountdownTimer
                pub const m_stuckAnchor: usize = 0xF58; // Vector
                pub const m_stuckTimer: usize = 0xF68; // CountdownTimer
                pub const m_collisionStuckTimer: usize = 0xF80; // CountdownTimer
                pub const m_isOnGround: usize = 0xF98; // bool
                pub const m_vFallVelocity: usize = 0xF9C; // Vector
                pub const m_desiredActivity: usize = 0xFA8; // ChickenActivity
                pub const m_currentActivity: usize = 0xFAC; // ChickenActivity
                pub const m_activityTimer: usize = 0xFB0; // CountdownTimer
                pub const m_turnRate: usize = 0xFC8; // float32
                pub const m_fleeFrom: usize = 0xFCC; // CHandle<CBaseEntity>
                pub const m_moveRateThrottleTimer: usize = 0xFD0; // CountdownTimer
                pub const m_startleTimer: usize = 0xFE8; // CountdownTimer
                pub const m_vocalizeTimer: usize = 0x1000; // CountdownTimer
                pub const m_flWhenZombified: usize = 0x1018; // GameTime_t
                pub const m_jumpedThisFrame: usize = 0x101C; // bool
                pub const m_leader: usize = 0x1020; // CHandle<CCSPlayerPawn>
                pub const m_reuseTimer: usize = 0x1038; // CountdownTimer
                pub const m_hasBeenUsed: usize = 0x1050; // bool
                pub const m_jumpTimer: usize = 0x1058; // CountdownTimer
                pub const m_flLastJumpTime: usize = 0x1070; // float32
                pub const m_bInJump: usize = 0x1074; // bool
                pub const m_repathTimer: usize = 0x3080; // CountdownTimer
                pub const m_vecPathGoal: usize = 0x3118; // Vector
                pub const m_flActiveFollowStartTime: usize = 0x3124; // GameTime_t
                pub const m_followMinuteTimer: usize = 0x3128; // CountdownTimer
                pub const m_BlockDirectionTimer: usize = 0x3148; // CountdownTimer
            }
            // Parent: CBaseTrigger
            // Field count: 7
            pub mod CChangeLevel {
                pub const m_sMapName: usize = 0x960; // CUtlString
                pub const m_sLandmarkName: usize = 0x968; // CUtlString
                pub const m_OnChangeLevel: usize = 0x970; // CEntityIOOutput
                pub const m_bTouched: usize = 0x998; // bool
                pub const m_bNoTouch: usize = 0x999; // bool
                pub const m_bNewChapter: usize = 0x99A; // bool
                pub const m_bOnChangeLevelFired: usize = 0x99B; // bool
            }
            // Parent: CBaseTrigger
            // Field count: 14
            pub mod CTriggerLerpObject {
                pub const m_iszLerpTarget: usize = 0x960; // CUtlSymbolLarge
                pub const m_hLerpTarget: usize = 0x968; // CHandle<CBaseEntity>
                pub const m_iszLerpTargetAttachment: usize = 0x970; // CUtlSymbolLarge
                pub const m_hLerpTargetAttachment: usize = 0x978; // 
                pub const m_flLerpDuration: usize = 0x97C; // float32
                pub const m_bLerpRestoreMoveType: usize = 0x980; // bool
                pub const m_bSingleLerpObject: usize = 0x981; // bool
                pub const m_vecLerpingObjects: usize = 0x988; // 
                pub const m_iszLerpEffect: usize = 0x9A0; // CUtlSymbolLarge
                pub const m_iszLerpSound: usize = 0x9A8; // CUtlSymbolLarge
                pub const m_bAttachTouchingObject: usize = 0x9B0; // bool
                pub const m_hEntityToWaitForDisconnect: usize = 0x9B4; // CHandle<CBaseEntity>
                pub const m_OnLerpStarted: usize = 0x9B8; // CEntityIOOutput
                pub const m_OnLerpFinished: usize = 0x9E0; // CEntityIOOutput
            }
            // Parent: CBaseToggle
            // Field count: 12
            //
            // Metadata:
            // MNetworkIncludeByName
            // NetworkVarNames:  ()
            // NetworkVarNames:  ()
            pub mod CBaseTrigger {
                pub const m_bDisabled: usize = 0x810; // bool
                pub const m_iFilterName: usize = 0x818; // CUtlSymbolLarge
                pub const m_hFilter: usize = 0x820; // CHandle<CBaseFilter>
                pub const m_OnStartTouch: usize = 0x828; // CEntityIOOutput
                pub const m_OnStartTouchAll: usize = 0x850; // CEntityIOOutput
                pub const m_OnEndTouch: usize = 0x878; // CEntityIOOutput
                pub const m_OnEndTouchAll: usize = 0x8A0; // CEntityIOOutput
                pub const m_OnTouching: usize = 0x8C8; // CEntityIOOutput
                pub const m_OnTouchingEachEntity: usize = 0x8F0; // CEntityIOOutput
                pub const m_OnNotTouching: usize = 0x918; // CEntityIOOutput
                pub const m_hTouchingEntities: usize = 0x940; // CUtlVector<CHandle<CBaseEntity>>
                pub const m_bClientSidePredicted: usize = 0x958; // bool
            }
            // Parent: CBaseFlex
            // Field count: 9
            //
            // Metadata:
            // NetworkVarNames: m_AttributeManager (CAttributeContainer)
            // NetworkVarNames: m_OriginalOwnerXuidLow (uint32)
            // NetworkVarNames: m_OriginalOwnerXuidHigh (uint32)
            // NetworkVarNames: m_nFallbackPaintKit (int)
            // NetworkVarNames: m_nFallbackSeed (int)
            // NetworkVarNames: m_flFallbackWear (float)
            // NetworkVarNames: m_nFallbackStatTrak (int)
            pub mod CEconEntity {
                pub const m_AttributeManager: usize = 0xA48; // CAttributeContainer
                pub const m_OriginalOwnerXuidLow: usize = 0xD10; // uint32
                pub const m_OriginalOwnerXuidHigh: usize = 0xD14; // uint32
                pub const m_nFallbackPaintKit: usize = 0xD18; // int32
                pub const m_nFallbackSeed: usize = 0xD1C; // int32
                pub const m_flFallbackWear: usize = 0xD20; // float32
                pub const m_nFallbackStatTrak: usize = 0xD24; // int32
                pub const m_hOldProvidee: usize = 0xD28; // CHandle<CBaseEntity>
                pub const m_iOldOwnerClass: usize = 0xD2C; // int32
            }
            // Parent: CBaseTrigger
            // Field count: 13
            //
            // Metadata:
            // NetworkVarNames: m_gravityScale (float)
            // NetworkVarNames: m_linearLimit (float)
            // NetworkVarNames: m_linearDamping (float)
            // NetworkVarNames: m_angularLimit (float)
            // NetworkVarNames: m_angularDamping (float)
            // NetworkVarNames: m_linearForce (float)
            // NetworkVarNames: m_flFrequency (float)
            // NetworkVarNames: m_flDampingRatio (float)
            // NetworkVarNames: m_vecLinearForcePointAt (Vector)
            // NetworkVarNames: m_bCollapseToForcePoint (bool)
            // NetworkVarNames: m_vecLinearForcePointAtWorld (Vector)
            // NetworkVarNames: m_vecLinearForceDirection (Vector)
            // NetworkVarNames: m_bConvertToDebrisWhenPossible (bool)
            pub mod CTriggerPhysics {
                pub const m_gravityScale: usize = 0x970; // float32
                pub const m_linearLimit: usize = 0x974; // float32
                pub const m_linearDamping: usize = 0x978; // float32
                pub const m_angularLimit: usize = 0x97C; // float32
                pub const m_angularDamping: usize = 0x980; // float32
                pub const m_linearForce: usize = 0x984; // float32
                pub const m_flFrequency: usize = 0x988; // float32
                pub const m_flDampingRatio: usize = 0x98C; // float32
                pub const m_vecLinearForcePointAt: usize = 0x990; // Vector
                pub const m_bCollapseToForcePoint: usize = 0x99C; // bool
                pub const m_vecLinearForcePointAtWorld: usize = 0x9A0; // Vector
                pub const m_vecLinearForceDirection: usize = 0x9AC; // Vector
                pub const m_bConvertToDebrisWhenPossible: usize = 0x9B8; // bool
            }
            // Parent: CBaseModelEntity
            // Field count: 26
            pub mod CFuncShatterglass {
                pub const m_matPanelTransform: usize = 0x790; // matrix3x4_t
                pub const m_matPanelTransformWsTemp: usize = 0x7C0; // matrix3x4_t
                pub const m_vecShatterGlassShards: usize = 0x7F0; // CUtlVector<uint32>
                pub const m_PanelSize: usize = 0x808; // Vector2D
                pub const m_flLastShatterSoundEmitTime: usize = 0x810; // GameTime_t
                pub const m_flLastCleanupTime: usize = 0x814; // GameTime_t
                pub const m_flInitAtTime: usize = 0x818; // GameTime_t
                pub const m_flGlassThickness: usize = 0x81C; // float32
                pub const m_flSpawnInvulnerability: usize = 0x820; // float32
                pub const m_bBreakSilent: usize = 0x824; // bool
                pub const m_bBreakShardless: usize = 0x825; // bool
                pub const m_bBroken: usize = 0x826; // bool
                pub const m_bGlassNavIgnore: usize = 0x827; // bool
                pub const m_bGlassInFrame: usize = 0x828; // bool
                pub const m_bStartBroken: usize = 0x829; // bool
                pub const m_iInitialDamageType: usize = 0x82A; // uint8
                pub const m_szDamagePositioningEntityName01: usize = 0x830; // CUtlSymbolLarge
                pub const m_szDamagePositioningEntityName02: usize = 0x838; // CUtlSymbolLarge
                pub const m_szDamagePositioningEntityName03: usize = 0x840; // CUtlSymbolLarge
                pub const m_szDamagePositioningEntityName04: usize = 0x848; // CUtlSymbolLarge
                pub const m_vInitialDamagePositions: usize = 0x850; // 
                pub const m_vExtraDamagePositions: usize = 0x868; // 
                pub const m_vInitialPanelVertices: usize = 0x880; // 
                pub const m_OnBroken: usize = 0x898; // CEntityIOOutput
                pub const m_iSurfaceType: usize = 0x8C0; // uint8
                pub const m_hMaterialDamageBase: usize = 0x8C8; // CStrongHandle<InfoForResourceTypeIMaterial2>
            }
            // Parent: CBaseButton
            // Field count: 0
            pub mod CRotButton {
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            pub mod CWeaponHKP2000 {
            }
            // Parent: CBaseAnimGraph
            // Field count: 27
            //
            // Metadata:
            // NetworkVarNames: m_bBombTicking (bool)
            // NetworkVarNames: m_flC4Blow (GameTime_t)
            // NetworkVarNames: m_nBombSite (int)
            // NetworkVarNames: m_nSourceSoundscapeHash (int)
            // NetworkVarNames: m_AttributeManager (CAttributeContainer)
            // NetworkVarNames: m_bCannotBeDefused (bool)
            // NetworkVarNames: m_entitySpottedState (EntitySpottedState_t)
            // NetworkVarNames: m_bHasExploded (bool)
            // NetworkVarNames: m_flTimerLength (float)
            // NetworkVarNames: m_bBeingDefused (bool)
            // NetworkVarNames: m_flDefuseLength (float)
            // NetworkVarNames: m_flDefuseCountDown (GameTime_t)
            // NetworkVarNames: m_bBombDefused (bool)
            // NetworkVarNames: m_hBombDefuser (CHandle<CCSPlayerPawn>)
            // NetworkVarNames: m_hControlPanel (CHandle<CBaseEntity>)
            pub mod CPlantedC4 {
                pub const m_bBombTicking: usize = 0x9B0; // bool
                pub const m_flC4Blow: usize = 0x9B4; // GameTime_t
                pub const m_nBombSite: usize = 0x9B8; // int32
                pub const m_nSourceSoundscapeHash: usize = 0x9BC; // int32
                pub const m_AttributeManager: usize = 0x9C0; // CAttributeContainer
                pub const m_OnBombDefused: usize = 0xC88; // CEntityIOOutput
                pub const m_OnBombBeginDefuse: usize = 0xCB0; // CEntityIOOutput
                pub const m_OnBombDefuseAborted: usize = 0xCD8; // CEntityIOOutput
                pub const m_bCannotBeDefused: usize = 0xD00; // bool
                pub const m_entitySpottedState: usize = 0xD08; // EntitySpottedState_t
                pub const m_nSpotRules: usize = 0xD20; // int32
                pub const m_bTrainingPlacedByPlayer: usize = 0xD24; // bool
                pub const m_bHasExploded: usize = 0xD25; // bool
                pub const m_flTimerLength: usize = 0xD28; // float32
                pub const m_bBeingDefused: usize = 0xD2C; // bool
                pub const m_fLastDefuseTime: usize = 0xD34; // GameTime_t
                pub const m_flDefuseLength: usize = 0xD3C; // float32
                pub const m_flDefuseCountDown: usize = 0xD40; // GameTime_t
                pub const m_bBombDefused: usize = 0xD44; // bool
                pub const m_hBombDefuser: usize = 0xD48; // CHandle<CCSPlayerPawn>
                pub const m_hControlPanel: usize = 0xD4C; // CHandle<CBaseEntity>
                pub const m_iProgressBarTime: usize = 0xD50; // int32
                pub const m_bVoiceAlertFired: usize = 0xD54; // bool
                pub const m_bVoiceAlertPlayed: usize = 0xD55; // bool[4]
                pub const m_flNextBotBeepTime: usize = 0xD5C; // GameTime_t
                pub const m_angCatchUpToPlayerEye: usize = 0xD64; // QAngle
                pub const m_flLastSpinDetectionTime: usize = 0xD70; // GameTime_t
            }
            // Parent: CBaseClientUIEntity
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames:  ()
            pub mod CPointClientUIDialog {
                pub const m_hActivator: usize = 0x940; // CHandle<CBaseEntity>
                pub const m_bStartEnabled: usize = 0x944; // bool
            }
            // Parent: CCSWeaponBase
            // Field count: 0
            pub mod CWeaponNOVA {
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames: m_fFireTime (GameTime_t)
            pub mod CWeaponTaser {
                pub const m_fFireTime: usize = 0xF90; // GameTime_t
                pub const m_nLastAttackTick: usize = 0xF94; // int32
            }
            // Parent: CBaseAnimGraph
            // Field count: 0
            pub mod CWaterBullet {
            }
            // Parent: CPointEntity
            // Field count: 6
            pub mod CMessage {
                pub const m_iszMessage: usize = 0x4E0; // CUtlSymbolLarge
                pub const m_MessageVolume: usize = 0x4E8; // float32
                pub const m_MessageAttenuation: usize = 0x4EC; // int32
                pub const m_Radius: usize = 0x4F0; // float32
                pub const m_sNoise: usize = 0x4F8; // CUtlSymbolLarge
                pub const m_OnShowMessage: usize = 0x500; // CEntityIOOutput
            }
            // Parent: CBaseModelEntity
            // Field count: 15
            //
            // Metadata:
            // NetworkVarNames:  ()
            pub mod CBreakable {
                pub const m_CPropDataComponent: usize = 0x798; // CPropDataComponent
                pub const m_Material: usize = 0x7D8; // Materials
                pub const m_hBreaker: usize = 0x7DC; // CHandle<CBaseEntity>
                pub const m_Explosion: usize = 0x7E0; // Explosions
                pub const m_iszSpawnObject: usize = 0x7E8; // CUtlSymbolLarge
                pub const m_flPressureDelay: usize = 0x7F0; // float32
                pub const m_iMinHealthDmg: usize = 0x7F4; // int32
                pub const m_iszPropData: usize = 0x7F8; // CUtlSymbolLarge
                pub const m_impactEnergyScale: usize = 0x800; // float32
                pub const m_nOverrideBlockLOS: usize = 0x804; // EOverrideBlockLOS_t
                pub const m_OnBreak: usize = 0x808; // CEntityIOOutput
                pub const m_OnHealthChanged: usize = 0x830; // CEntityOutputTemplate<float32>
                pub const m_PerformanceMode: usize = 0x858; // PerformanceMode_t
                pub const m_hPhysicsAttacker: usize = 0x85C; // CHandle<CBasePlayerPawn>
                pub const m_flLastPhysicsInfluenceTime: usize = 0x860; // GameTime_t
            }
            // Parent: CBaseModelEntity
            // Field count: 16
            pub mod CBaseToggle {
                pub const m_toggle_state: usize = 0x790; // TOGGLE_STATE
                pub const m_flMoveDistance: usize = 0x794; // float32
                pub const m_flWait: usize = 0x798; // float32
                pub const m_flLip: usize = 0x79C; // float32
                pub const m_bAlwaysFireBlockedOutputs: usize = 0x7A0; // bool
                pub const m_vecPosition1: usize = 0x7A4; // Vector
                pub const m_vecPosition2: usize = 0x7B0; // Vector
                pub const m_vecMoveAng: usize = 0x7BC; // QAngle
                pub const m_vecAngle1: usize = 0x7C8; // QAngle
                pub const m_vecAngle2: usize = 0x7D4; // QAngle
                pub const m_flHeight: usize = 0x7E0; // float32
                pub const m_hActivator: usize = 0x7E4; // CHandle<CBaseEntity>
                pub const m_vecFinalDest: usize = 0x7E8; // Vector
                pub const m_vecFinalAngle: usize = 0x7F4; // QAngle
                pub const m_movementType: usize = 0x800; // int32
                pub const m_sMaster: usize = 0x808; // CUtlSymbolLarge
            }
            // Parent: CRotButton
            // Field count: 14
            pub mod CMomentaryRotButton {
                pub const m_Position: usize = 0x960; // CEntityOutputTemplate<float32>
                pub const m_OnUnpressed: usize = 0x988; // CEntityIOOutput
                pub const m_OnFullyOpen: usize = 0x9B0; // CEntityIOOutput
                pub const m_OnFullyClosed: usize = 0x9D8; // CEntityIOOutput
                pub const m_OnReachedPosition: usize = 0xA00; // CEntityIOOutput
                pub const m_lastUsed: usize = 0xA28; // int32
                pub const m_start: usize = 0xA2C; // QAngle
                pub const m_end: usize = 0xA38; // QAngle
                pub const m_IdealYaw: usize = 0xA44; // float32
                pub const m_sNoise: usize = 0xA48; // CUtlSymbolLarge
                pub const m_bUpdateTarget: usize = 0xA50; // bool
                pub const m_direction: usize = 0xA54; // int32
                pub const m_returnSpeed: usize = 0xA58; // float32
                pub const m_flStartPosition: usize = 0xA5C; // float32
            }
            // Parent: 
            // Field count: 2
            pub mod CGameText {
                pub const m_iszMessage: usize = 0x7A0; // CUtlSymbolLarge
                pub const m_textParms: usize = 0x7A8; // hudtextparms_t
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            pub mod CWeaponMP5SD {
            }
            // Parent: CBaseModelEntity
            // Field count: 8
            //
            // Metadata:
            // NetworkVarNames: m_bLoop (bool)
            // NetworkVarNames: m_flFPS (float)
            // NetworkVarNames: m_hPositionKeys (HRenderTextureStrong)
            // NetworkVarNames: m_hRotationKeys (HRenderTextureStrong)
            // NetworkVarNames: m_vAnimationBoundsMin (Vector)
            // NetworkVarNames: m_vAnimationBoundsMax (Vector)
            // NetworkVarNames: m_flStartTime (float)
            // NetworkVarNames: m_flStartFrame (float)
            pub mod CTextureBasedAnimatable {
                pub const m_bLoop: usize = 0x790; // bool
                pub const m_flFPS: usize = 0x794; // float32
                pub const m_hPositionKeys: usize = 0x798; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_hRotationKeys: usize = 0x7A0; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_vAnimationBoundsMin: usize = 0x7A8; // Vector
                pub const m_vAnimationBoundsMax: usize = 0x7B4; // Vector
                pub const m_flStartTime: usize = 0x7C0; // float32
                pub const m_flStartFrame: usize = 0x7C4; // float32
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            pub mod CWeaponFamas {
            }
            // Parent: CPointEntity
            // Field count: 10
            //
            // Metadata:
            // NetworkVarNames:  ()
            // NetworkVarNames:  ()
            // NetworkVarNames:  ()
            // NetworkVarNames:  ()
            // NetworkVarNames:  ()
            // NetworkVarNames:  ()
            // NetworkVarNames:  ()
            // NetworkVarNames:  ()
            pub mod CInfoOffscreenPanoramaTexture {
                pub const m_bDisabled: usize = 0x4E0; // bool
                pub const m_nResolutionX: usize = 0x4E4; // int32
                pub const m_nResolutionY: usize = 0x4E8; // int32
                pub const m_szLayoutFileName: usize = 0x4F0; // CUtlSymbolLarge
                pub const m_RenderAttrName: usize = 0x4F8; // CUtlSymbolLarge
                pub const m_TargetEntities: usize = 0x500; // CNetworkUtlVectorBase<CHandle<CBaseModelEntity>>
                pub const m_nTargetChangeCount: usize = 0x518; // int32
                pub const m_vecCSSClasses: usize = 0x520; // 
                pub const m_szTargetsName: usize = 0x538; // CUtlSymbolLarge
                pub const m_AdditionalTargetEntities: usize = 0x540; // 
            }
            // Parent: CCSWeaponBase
            // Field count: 9
            //
            // Metadata:
            // NetworkVarNames: m_zoomLevel (int)
            // NetworkVarNames: m_iBurstShotsRemaining (int)
            // NetworkVarNames: m_bNeedsBoltAction (bool)
            pub mod CCSWeaponBaseGun {
                pub const m_zoomLevel: usize = 0xF70; // int32
                pub const m_iBurstShotsRemaining: usize = 0xF74; // int32
                pub const m_silencedModelIndex: usize = 0xF80; // int32
                pub const m_inPrecache: usize = 0xF84; // bool
                pub const m_bNeedsBoltAction: usize = 0xF85; // bool
                pub const m_bSkillReloadAvailable: usize = 0xF86; // bool
                pub const m_bSkillReloadLiftedReloadKey: usize = 0xF87; // bool
                pub const m_bSkillBoltInterruptAvailable: usize = 0xF88; // bool
                pub const m_bSkillBoltLiftedFireKey: usize = 0xF89; // bool
            }
            // Parent: CBaseToggle
            // Field count: 3
            pub mod CGunTarget {
                pub const m_on: usize = 0x810; // bool
                pub const m_hTargetEnt: usize = 0x814; // CHandle<CBaseEntity>
                pub const m_OnDeath: usize = 0x818; // CEntityIOOutput
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            pub mod CWeaponM4A1Silencer {
            }
            // Parent: 
            // Field count: 1
            pub mod CScriptNavBlocker {
                pub const m_vExtent: usize = 0x7A0; // Vector
            }
            // Parent: CBaseAnimGraph
            // Field count: 1
            pub mod CConstraintAnchor {
                pub const m_massScale: usize = 0x9A8; // float32
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            pub mod CWeaponTec9 {
            }
            // Parent: 
            // Field count: 0
            pub mod CMarkupVolumeTagged_Nav {
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            pub mod CWeaponCZ75a {
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            pub mod CWeaponP250 {
            }
            // Parent: CBaseAnimGraph
            // Field count: 7
            //
            // Metadata:
            // NetworkVarNames: m_flexWeight (float32)
            // NetworkVarNames: m_vLookTargetPosition (Vector)
            // NetworkVarNames: m_blinktoggle (bool)
            pub mod CBaseFlex {
                pub const m_flexWeight: usize = 0x9A8; // CNetworkUtlVectorBase<float32>
                pub const m_vLookTargetPosition: usize = 0x9C0; // Vector
                pub const m_blinktoggle: usize = 0x9CC; // bool
                pub const m_flAllowResponsesEndTime: usize = 0xA20; // GameTime_t
                pub const m_flLastFlexAnimationTime: usize = 0xA24; // GameTime_t
                pub const m_nNextSceneEventId: usize = 0xA28; // SceneEventId_t
                pub const m_bUpdateLayerPriorities: usize = 0xA2C; // bool
            }
            // Parent: CBasePlayerWeaponVData
            // Field count: 92
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertySuppressBaseClassField
            // MPropertySuppressBaseClassField
            pub mod CCSWeaponBaseVData {
                pub const m_WeaponType: usize = 0x348; // CSWeaponType
                pub const m_WeaponCategory: usize = 0x34C; // CSWeaponCategory
                pub const m_szViewModel: usize = 0x350; // 
                pub const m_szPlayerModel: usize = 0x430; // 
                pub const m_szWorldDroppedModel: usize = 0x510; // 
                pub const m_szAimsightLensMaskModel: usize = 0x5F0; // 
                pub const m_szMagazineModel: usize = 0x6D0; // 
                pub const m_szHeatEffect: usize = 0x7B0; // 
                pub const m_szEjectBrassEffect: usize = 0x890; // 
                pub const m_szMuzzleFlashParticleAlt: usize = 0x970; // 
                pub const m_szMuzzleFlashThirdPersonParticle: usize = 0xA50; // 
                pub const m_szMuzzleFlashThirdPersonParticleAlt: usize = 0xB30; // 
                pub const m_szTracerParticle: usize = 0xC10; // 
                pub const m_GearSlot: usize = 0xCF0; // gear_slot_t
                pub const m_GearSlotPosition: usize = 0xCF4; // int32
                pub const m_DefaultLoadoutSlot: usize = 0xCF8; // loadout_slot_t
                pub const m_sWrongTeamMsg: usize = 0xD00; // CUtlString
                pub const m_nPrice: usize = 0xD08; // int32
                pub const m_nKillAward: usize = 0xD0C; // int32
                pub const m_nPrimaryReserveAmmoMax: usize = 0xD10; // int32
                pub const m_nSecondaryReserveAmmoMax: usize = 0xD14; // int32
                pub const m_bMeleeWeapon: usize = 0xD18; // bool
                pub const m_bHasBurstMode: usize = 0xD19; // bool
                pub const m_bIsRevolver: usize = 0xD1A; // bool
                pub const m_bCannotShootUnderwater: usize = 0xD1B; // bool
                pub const m_szName: usize = 0xD20; // CGlobalSymbol
                pub const m_szAnimExtension: usize = 0xD28; // CUtlString
                pub const m_eSilencerType: usize = 0xD30; // CSWeaponSilencerType
                pub const m_nCrosshairMinDistance: usize = 0xD34; // int32
                pub const m_nCrosshairDeltaDistance: usize = 0xD38; // int32
                pub const m_bIsFullAuto: usize = 0xD3C; // bool
                pub const m_nNumBullets: usize = 0xD40; // int32
                pub const m_flCycleTime: usize = 0xD44; // CFiringModeFloat
                pub const m_flMaxSpeed: usize = 0xD4C; // CFiringModeFloat
                pub const m_flSpread: usize = 0xD54; // CFiringModeFloat
                pub const m_flInaccuracyCrouch: usize = 0xD5C; // CFiringModeFloat
                pub const m_flInaccuracyStand: usize = 0xD64; // CFiringModeFloat
                pub const m_flInaccuracyJump: usize = 0xD6C; // CFiringModeFloat
                pub const m_flInaccuracyLand: usize = 0xD74; // CFiringModeFloat
                pub const m_flInaccuracyLadder: usize = 0xD7C; // CFiringModeFloat
                pub const m_flInaccuracyFire: usize = 0xD84; // CFiringModeFloat
                pub const m_flInaccuracyMove: usize = 0xD8C; // CFiringModeFloat
                pub const m_flRecoilAngle: usize = 0xD94; // CFiringModeFloat
                pub const m_flRecoilAngleVariance: usize = 0xD9C; // CFiringModeFloat
                pub const m_flRecoilMagnitude: usize = 0xDA4; // CFiringModeFloat
                pub const m_flRecoilMagnitudeVariance: usize = 0xDAC; // CFiringModeFloat
                pub const m_nTracerFrequency: usize = 0xDB4; // CFiringModeInt
                pub const m_flInaccuracyJumpInitial: usize = 0xDBC; // float32
                pub const m_flInaccuracyJumpApex: usize = 0xDC0; // float32
                pub const m_flInaccuracyReload: usize = 0xDC4; // float32
                pub const m_nRecoilSeed: usize = 0xDC8; // int32
                pub const m_nSpreadSeed: usize = 0xDCC; // int32
                pub const m_flTimeToIdleAfterFire: usize = 0xDD0; // float32
                pub const m_flIdleInterval: usize = 0xDD4; // float32
                pub const m_flAttackMovespeedFactor: usize = 0xDD8; // float32
                pub const m_flHeatPerShot: usize = 0xDDC; // float32
                pub const m_flInaccuracyPitchShift: usize = 0xDE0; // float32
                pub const m_flInaccuracyAltSoundThreshold: usize = 0xDE4; // float32
                pub const m_flBotAudibleRange: usize = 0xDE8; // float32
                pub const m_szUseRadioSubtitle: usize = 0xDF0; // CUtlString
                pub const m_bUnzoomsAfterShot: usize = 0xDF8; // bool
                pub const m_bHideViewModelWhenZoomed: usize = 0xDF9; // bool
                pub const m_nZoomLevels: usize = 0xDFC; // int32
                pub const m_nZoomFOV1: usize = 0xE00; // int32
                pub const m_nZoomFOV2: usize = 0xE04; // int32
                pub const m_flZoomTime0: usize = 0xE08; // float32
                pub const m_flZoomTime1: usize = 0xE0C; // float32
                pub const m_flZoomTime2: usize = 0xE10; // float32
                pub const m_flIronSightPullUpSpeed: usize = 0xE14; // float32
                pub const m_flIronSightPutDownSpeed: usize = 0xE18; // float32
                pub const m_flIronSightFOV: usize = 0xE1C; // float32
                pub const m_flIronSightPivotForward: usize = 0xE20; // float32
                pub const m_flIronSightLooseness: usize = 0xE24; // float32
                pub const m_angPivotAngle: usize = 0xE28; // QAngle
                pub const m_vecIronSightEyePos: usize = 0xE34; // Vector
                pub const m_nDamage: usize = 0xE40; // int32
                pub const m_flHeadshotMultiplier: usize = 0xE44; // float32
                pub const m_flArmorRatio: usize = 0xE48; // float32
                pub const m_flPenetration: usize = 0xE4C; // float32
                pub const m_flRange: usize = 0xE50; // float32
                pub const m_flRangeModifier: usize = 0xE54; // float32
                pub const m_flFlinchVelocityModifierLarge: usize = 0xE58; // float32
                pub const m_flFlinchVelocityModifierSmall: usize = 0xE5C; // float32
                pub const m_flRecoveryTimeCrouch: usize = 0xE60; // float32
                pub const m_flRecoveryTimeStand: usize = 0xE64; // float32
                pub const m_flRecoveryTimeCrouchFinal: usize = 0xE68; // float32
                pub const m_flRecoveryTimeStandFinal: usize = 0xE6C; // float32
                pub const m_nRecoveryTransitionStartBullet: usize = 0xE70; // int32
                pub const m_nRecoveryTransitionEndBullet: usize = 0xE74; // int32
                pub const m_flThrowVelocity: usize = 0xE78; // float32
                pub const m_vSmokeColor: usize = 0xE7C; // Vector
                pub const m_szAnimClass: usize = 0xE88; // CGlobalSymbol
            }
            // Parent: 
            // Field count: 3
            //
            // Metadata:
            // MNetworkVarTypeOverride
            // MNetworkIncludeByName
            // MNetworkVarTypeOverride
            // MNetworkIncludeByName
            // MNetworkVarTypeOverride
            // MNetworkIncludeByName
            // MNetworkVarTypeOverride
            // MNetworkIncludeByName
            // MNetworkVarTypeOverride
            // MNetworkIncludeByName
            // MNetworkVarTypeOverride
            // MNetworkIncludeByName
            // MNetworkVarTypeOverride
            // MNetworkIncludeByName
            // NetworkVarNames: m_pBulletServices (CCSPlayer_BulletServices*)
            // NetworkVarNames: m_pHostageServices (CCSPlayer_HostageServices*)
            // NetworkVarNames: m_pBuyServices (CCSPlayer_BuyServices*)
            // NetworkVarNames: m_pActionTrackingServices (CCSPlayer_ActionTrackingServices*)
            // NetworkVarNames: m_bHasFemaleVoice (bool)
            // NetworkVarNames: m_szLastPlaceName (char)
            // NetworkVarNames: m_bInBuyZone (bool)
            // NetworkVarNames: m_bInHostageRescueZone (bool)
            // NetworkVarNames: m_bInBombZone (bool)
            // NetworkVarNames: m_iRetakesOffering (int)
            // NetworkVarNames: m_iRetakesOfferingCard (int)
            // NetworkVarNames: m_bRetakesHasDefuseKit (bool)
            // NetworkVarNames: m_bRetakesMVPLastRound (bool)
            // NetworkVarNames: m_iRetakesMVPBoostItem (int)
            // NetworkVarNames: m_RetakesMVPBoostExtraUtility (loadout_slot_t)
            // NetworkVarNames: m_flHealthShotBoostExpirationTime (GameTime_t)
            // NetworkVarNames: m_aimPunchAngle (QAngle)
            // NetworkVarNames: m_aimPunchAngleVel (QAngle)
            // NetworkVarNames: m_aimPunchTickBase (int)
            // NetworkVarNames: m_aimPunchTickFraction (float)
            // NetworkVarNames: m_bIsBuyMenuOpen (bool)
            // NetworkVarNames: m_flTimeOfLastInjury (GameTime_t)
            // NetworkVarNames: m_flNextSprayDecalTime (GameTime_t)
            // NetworkVarNames: m_nRagdollDamageBone (int)
            // NetworkVarNames: m_vRagdollDamageForce (Vector)
            // NetworkVarNames: m_vRagdollDamagePosition (Vector)
            // NetworkVarNames: m_szRagdollDamageWeaponName (char)
            // NetworkVarNames: m_bRagdollDamageHeadshot (bool)
            // NetworkVarNames: m_vRagdollServerOrigin (Vector)
            // NetworkVarNames: m_EconGloves (CEconItemView)
            // NetworkVarNames: m_nEconGlovesChanged (uint8)
            // NetworkVarNames: m_qDeathEyeAngles (QAngle)
            // NetworkVarNames: m_bLeftHanded (bool)
            // NetworkVarNames: m_fSwitchedHandednessTime (GameTime_t)
            // NetworkVarNames: m_flViewmodelOffsetX (float)
            // NetworkVarNames: m_flViewmodelOffsetY (float)
            // NetworkVarNames: m_flViewmodelOffsetZ (float)
            // NetworkVarNames: m_flViewmodelFOV (float)
            // NetworkVarNames: m_bIsWalking (bool)
            // NetworkVarNames: m_nLastKillerIndex (CEntityIndex)
            // NetworkVarNames: m_entitySpottedState (EntitySpottedState_t)
            // NetworkVarNames: m_bIsScoped (bool)
            // NetworkVarNames: m_bResumeZoom (bool)
            // NetworkVarNames: m_bIsDefusing (bool)
            // NetworkVarNames: m_bIsGrabbingHostage (bool)
            // NetworkVarNames: m_iBlockingUseActionInProgress (CSPlayerBlockingUseAction_t)
            // NetworkVarNames: m_flEmitSoundTime (GameTime_t)
            // NetworkVarNames: m_bInNoDefuseArea (bool)
            // NetworkVarNames: m_nWhichBombZone (int)
            // NetworkVarNames: m_iShotsFired (int)
            // NetworkVarNames: m_flFlinchStack (float)
            // NetworkVarNames: m_flVelocityModifier (float)
            // NetworkVarNames: m_flHitHeading (float)
            // NetworkVarNames: m_nHitBodyPart (int)
            // NetworkVarNames: m_bWaitForNoAttack (bool)
            // NetworkVarNames: m_bKilledByHeadshot (bool)
            // NetworkVarNames: m_thirdPersonHeading (QAngle)
            // NetworkVarNames: m_flSlopeDropOffset (float)
            // NetworkVarNames: m_flSlopeDropHeight (float)
            // NetworkVarNames: m_vHeadConstraintOffset (Vector)
            // NetworkVarNames: m_ArmorValue (int32)
            // NetworkVarNames: m_unCurrentEquipmentValue (uint16)
            // NetworkVarNames: m_unRoundStartEquipmentValue (uint16)
            // NetworkVarNames: m_unFreezetimeEndEquipmentValue (uint16)
            // NetworkVarNames: m_vecPlayerPatchEconIndices (uint32)
            // NetworkVarNames: m_GunGameImmunityColor (Color)
            // NetworkVarNames: m_PredictedDamageTags (PredictedDamageTag_t)
            pub mod CCSPlayerPawn {
                pub const m_pBulletServices: usize = 0xDD0; // 
                pub const m_pHostageServices: usize = 0xDD8; // 
                pub const m_pBuyServices: usize = 0x0; // 
            }
            // Parent: CBaseGrenade
            // Field count: 0
            pub mod CBumpMineProjectile {
            }
            // Parent: CBasePlayerController
            // Field count: 90
            //
            // Metadata:
            // MNetworkUserGroupProxy
            // MNetworkUserGroupProxy
            // MNetworkUserGroupProxy
            // NetworkVarNames:  ()
            // NetworkVarNames:  ()
            // NetworkVarNames:  ()
            // NetworkVarNames:  ()
            // NetworkVarNames:  ()
            // NetworkVarNames:  ()
            // NetworkVarNames:  ()
            // NetworkVarNames:  ()
            // NetworkVarNames:  ()
            // NetworkVarNames:  ()
            // NetworkVarNames:  ()
            // NetworkVarNames:  ()
            // NetworkVarNames:  ()
            // NetworkVarNames:  ()
            // NetworkVarNames:  ()
            // NetworkVarNames:  ()
            // NetworkVarNames:  ()
            // NetworkVarNames:  ()
            // NetworkVarNames:  ()
            // NetworkVarNames:  ()
            // NetworkVarNames:  ()
            // NetworkVarNames:  ()
            // NetworkVarNames:  ()
            // NetworkVarNames:  ()
            // NetworkVarNames:  ()
            // NetworkVarNames:  ()
            // NetworkVarNames:  ()
            // NetworkVarNames:  ()
            // NetworkVarNames:  ()
            // NetworkVarNames:  ()
            // NetworkVarNames:  ()
            // NetworkVarNames:  ()
            // NetworkVarNames:  ()
            // NetworkVarNames:  ()
            // NetworkVarNames:  ()
            // NetworkVarNames:  ()
            // NetworkVarNames:  ()
            // NetworkVarNames:  ()
            // NetworkVarNames:  ()
            // NetworkVarNames:  ()
            // NetworkVarNames:  ()
            // NetworkVarNames:  ()
            // NetworkVarNames:  ()
            // NetworkVarNames:  ()
            // NetworkVarNames:  ()
            // NetworkVarNames:  ()
            // NetworkVarNames:  ()
            // NetworkVarNames:  ()
            // NetworkVarNames:  ()
            // NetworkVarNames:  ()
            // NetworkVarNames:  ()
            pub mod CCSPlayerController {
                pub const m_pInGameMoneyServices: usize = 0x788; // 
                pub const m_pInventoryServices: usize = 0x790; // 
                pub const m_pActionTrackingServices: usize = 0x798; // 
                pub const m_pDamageServices: usize = 0x7A0; // 
                pub const m_iPing: usize = 0x7A8; // uint32
                pub const m_bHasCommunicationAbuseMute: usize = 0x7AC; // bool
                pub const m_szCrosshairCodes: usize = 0x7B0; // CUtlSymbolLarge
                pub const m_iPendingTeamNum: usize = 0x7B8; // uint8
                pub const m_flForceTeamTime: usize = 0x7BC; // GameTime_t
                pub const m_iCompTeammateColor: usize = 0x7C0; // int32
                pub const m_bEverPlayedOnTeam: usize = 0x7C4; // bool
                pub const m_bAttemptedToGetColor: usize = 0x7C5; // bool
                pub const m_iTeammatePreferredColor: usize = 0x7C8; // int32
                pub const m_bTeamChanged: usize = 0x7CC; // bool
                pub const m_bInSwitchTeam: usize = 0x7CD; // bool
                pub const m_bHasSeenJoinGame: usize = 0x7CE; // bool
                pub const m_bJustBecameSpectator: usize = 0x7CF; // bool
                pub const m_bSwitchTeamsOnNextRoundReset: usize = 0x7D0; // bool
                pub const m_bRemoveAllItemsOnNextRoundReset: usize = 0x7D1; // bool
                pub const m_flLastJoinTeamTime: usize = 0x7D4; // GameTime_t
                pub const m_szClan: usize = 0x7D8; // CUtlSymbolLarge
                pub const m_szClanName: usize = 0x7E0; // 
                pub const m_iCoachingTeam: usize = 0x800; // int32
                pub const m_nPlayerDominated: usize = 0x808; // uint64
                pub const m_nPlayerDominatingMe: usize = 0x810; // uint64
                pub const m_iCompetitiveRanking: usize = 0x818; // int32
                pub const m_iCompetitiveWins: usize = 0x81C; // int32
                pub const m_iCompetitiveRankType: usize = 0x820; // int8
                pub const m_iCompetitiveRankingPredicted_Win: usize = 0x824; // int32
                pub const m_iCompetitiveRankingPredicted_Loss: usize = 0x828; // int32
                pub const m_iCompetitiveRankingPredicted_Tie: usize = 0x82C; // int32
                pub const m_nEndMatchNextMapVote: usize = 0x830; // int32
                pub const m_unActiveQuestId: usize = 0x834; // uint16
                pub const m_nQuestProgressReason: usize = 0x838; // QuestProgress::Reason
                pub const m_unPlayerTvControlFlags: usize = 0x83C; // uint32
                pub const m_iDraftIndex: usize = 0x868; // int32
                pub const m_msQueuedModeDisconnectionTimestamp: usize = 0x86C; // uint32
                pub const m_uiAbandonRecordedReason: usize = 0x870; // uint32
                pub const m_bCannotBeKicked: usize = 0x874; // bool
                pub const m_bEverFullyConnected: usize = 0x875; // bool
                pub const m_bAbandonAllowsSurrender: usize = 0x876; // bool
                pub const m_bAbandonOffersInstantSurrender: usize = 0x877; // bool
                pub const m_bDisconnection1MinWarningPrinted: usize = 0x878; // bool
                pub const m_bScoreReported: usize = 0x879; // bool
                pub const m_nDisconnectionTick: usize = 0x87C; // int32
                pub const m_bControllingBot: usize = 0x888; // bool
                pub const m_bHasControlledBotThisRound: usize = 0x889; // bool
                pub const m_bHasBeenControlledByPlayerThisRound: usize = 0x88A; // bool
                pub const m_nBotsControlledThisRound: usize = 0x88C; // int32
                pub const m_bCanControlObservedBot: usize = 0x890; // bool
                pub const m_hPlayerPawn: usize = 0x894; // CHandle<CCSPlayerPawn>
                pub const m_hObserverPawn: usize = 0x898; // 
                pub const m_DesiredObserverMode: usize = 0x89C; // int32
                pub const m_hDesiredObserverTarget: usize = 0x8A0; // CEntityHandle
                pub const m_bPawnIsAlive: usize = 0x8A4; // bool
                pub const m_iPawnHealth: usize = 0x8A8; // uint32
                pub const m_iPawnArmor: usize = 0x8AC; // int32
                pub const m_bPawnHasDefuser: usize = 0x8B0; // bool
                pub const m_bPawnHasHelmet: usize = 0x8B1; // bool
                pub const m_nPawnCharacterDefIndex: usize = 0x8B2; // uint16
                pub const m_iPawnLifetimeStart: usize = 0x8B4; // int32
                pub const m_iPawnLifetimeEnd: usize = 0x8B8; // int32
                pub const m_iPawnBotDifficulty: usize = 0x8BC; // int32
                pub const m_hOriginalControllerOfCurrentPawn: usize = 0x8C0; // CHandle<CCSPlayerController>
                pub const m_iScore: usize = 0x8C4; // int32
                pub const m_iRoundScore: usize = 0x8C8; // int32
                pub const m_iRoundsWon: usize = 0x8CC; // int32
                pub const m_recentKillQueue: usize = 0x8D0; // 
                pub const m_nFirstKill: usize = 0x8D8; // uint8
                pub const m_nKillCount: usize = 0x8D9; // uint8
                pub const m_bMvpNoMusic: usize = 0x8DA; // bool
                pub const m_eMvpReason: usize = 0x8DC; // int32
                pub const m_iMusicKitID: usize = 0x8E0; // int32
                pub const m_iMusicKitMVPs: usize = 0x8E4; // int32
                pub const m_iMVPs: usize = 0x8E8; // int32
                pub const m_nUpdateCounter: usize = 0x8EC; // int32
                pub const m_flSmoothedPing: usize = 0x8F0; // float32
                pub const m_lastHeldVoteTimer: usize = 0xF998; // IntervalTimer
                pub const m_bShowHints: usize = 0xF9B0; // bool
                pub const m_iNextTimeCheck: usize = 0xF9B4; // int32
                pub const m_bJustDidTeamKill: usize = 0xF9B8; // bool
                pub const m_bPunishForTeamKill: usize = 0xF9B9; // bool
                pub const m_bGaveTeamDamageWarning: usize = 0xF9BA; // bool
                pub const m_bGaveTeamDamageWarningThisRound: usize = 0xF9BB; // bool
                pub const m_dblLastReceivedPacketPlatFloatTime: usize = 0xF9C0; // float64
                pub const m_LastTeamDamageWarningTime: usize = 0xF9C8; // GameTime_t
                pub const m_LastTimePlayerWasDisconnectedForPawnsRemove: usize = 0xF9CC; // GameTime_t
                pub const m_nSuspiciousHitCount: usize = 0xF9D0; // uint32
                pub const m_nNonSuspiciousHitStreak: usize = 0xF9D4; // uint32
                pub const m_bFireBulletsSeedSynchronized: usize = 0xFA79; // bool
            }
            // Parent: IEconItemInterface
            // Field count: 13
            //
            // Metadata:
            // NetworkVarNames: m_iItemDefinitionIndex (item_definition_index_t)
            // NetworkVarNames: m_iEntityQuality (int)
            // NetworkVarNames: m_iEntityLevel (uint32)
            // NetworkVarNames: m_iItemIDHigh (uint32)
            // NetworkVarNames: m_iItemIDLow (uint32)
            // NetworkVarNames: m_iAccountID (uint32)
            // NetworkVarNames: m_iInventoryPosition (uint32)
            // NetworkVarNames: m_bInitialized (bool)
            // NetworkVarNames: m_AttributeList (CAttributeList)
            // NetworkVarNames: m_NetworkedDynamicAttributes (CAttributeList)
            // NetworkVarNames: m_szCustomName (char)
            pub mod CEconItemView {
                pub const m_iItemDefinitionIndex: usize = 0x38; // uint16
                pub const m_iEntityQuality: usize = 0x3C; // int32
                pub const m_iEntityLevel: usize = 0x40; // uint32
                pub const m_iItemID: usize = 0x48; // uint64
                pub const m_iItemIDHigh: usize = 0x50; // uint32
                pub const m_iItemIDLow: usize = 0x54; // uint32
                pub const m_iAccountID: usize = 0x58; // uint32
                pub const m_iInventoryPosition: usize = 0x5C; // uint32
                pub const m_bInitialized: usize = 0x68; // bool
                pub const m_AttributeList: usize = 0x70; // CAttributeList
                pub const m_NetworkedDynamicAttributes: usize = 0xD0; // CAttributeList
                pub const m_szCustomName: usize = 0x130; // 
                pub const m_szCustomNameOverride: usize = 0x1D1; // 
            }
            // Parent: CPointEntity
            // Field count: 0
            pub mod CInfoInstructorHintBombTargetA {
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            pub mod CWeaponAWP {
            }
            // Parent: CBaseCombatCharacter
            // Field count: 25
            //
            // Metadata:
            // MNetworkUserGroupProxy
            // MNetworkUserGroupProxy
            // MNetworkExcludeByUserGroup
            // MNetworkIncludeByUserGroup
            // MNetworkIncludeByUserGroup
            // MNetworkIncludeByUserGroup
            // MNetworkIncludeByName
            // MNetworkOverride
            // MNetworkOverride
            // MNetworkOverride
            // MNetworkExcludeByName
            // MNetworkExcludeByName
            // MNetworkExcludeByName
            // MNetworkExcludeByName
            // MNetworkExcludeByName
            // MNetworkExcludeByName
            // MNetworkExcludeByName
            // MNetworkExcludeByName
            // NetworkVarNames: m_pWeaponServices (CPlayer_WeaponServices*)
            // NetworkVarNames: m_pItemServices (CPlayer_ItemServices*)
            // NetworkVarNames: m_pAutoaimServices (CPlayer_AutoaimServices*)
            // NetworkVarNames: m_pObserverServices (CPlayer_ObserverServices*)
            // NetworkVarNames: m_pWaterServices (CPlayer_WaterServices*)
            // NetworkVarNames: m_pUseServices (CPlayer_UseServices*)
            // NetworkVarNames: m_pFlashlightServices (CPlayer_FlashlightServices*)
            // NetworkVarNames: m_pCameraServices (CPlayer_CameraServices*)
            // NetworkVarNames: m_pMovementServices (CPlayer_MovementServices*)
            // MNetworkUserGroupProxy
            // NetworkVarNames: m_ServerViewAngleChanges (ViewAngleServerChange_t)
            // NetworkVarNames: m_iHideHUD (uint32)
            // NetworkVarNames: m_skybox3d (sky3dparams_t)
            // NetworkVarNames: m_flDeathTime (GameTime_t)
            // NetworkVarNames: m_hController (CHandle<CBasePlayerController>)
            pub mod CBasePlayerPawn {
                pub const m_pWeaponServices: usize = 0xAC0; // CPlayer_WeaponServices*
                pub const m_pItemServices: usize = 0xAC8; // CPlayer_ItemServices*
                pub const m_pAutoaimServices: usize = 0xAD0; // CPlayer_AutoaimServices*
                pub const m_pObserverServices: usize = 0xAD8; // CPlayer_ObserverServices*
                pub const m_pWaterServices: usize = 0xAE0; // CPlayer_WaterServices*
                pub const m_pUseServices: usize = 0xAE8; // CPlayer_UseServices*
                pub const m_pFlashlightServices: usize = 0xAF0; // CPlayer_FlashlightServices*
                pub const m_pCameraServices: usize = 0xAF8; // CPlayer_CameraServices*
                pub const m_pMovementServices: usize = 0xB00; // CPlayer_MovementServices*
                pub const m_ServerViewAngleChanges: usize = 0xB10; // CUtlVectorEmbeddedNetworkVar<ViewAngleServerChange_t>
                pub const m_nHighestGeneratedServerViewAngleChangeIndex: usize = 0xB60; // uint32
                pub const v_angle: usize = 0xB64; // QAngle
                pub const v_anglePrevious: usize = 0xB70; // QAngle
                pub const m_iHideHUD: usize = 0xB7C; // uint32
                pub const m_skybox3d: usize = 0xB80; // sky3dparams_t
                pub const m_fTimeLastHurt: usize = 0xC10; // GameTime_t
                pub const m_flDeathTime: usize = 0xC14; // GameTime_t
                pub const m_fNextSuicideTime: usize = 0xC18; // GameTime_t
                pub const m_fInitHUD: usize = 0xC1C; // bool
                pub const m_pExpresser: usize = 0xC20; // CAI_Expresser*
                pub const m_hController: usize = 0xC28; // CHandle<CBasePlayerController>
                pub const m_fHltvReplayDelay: usize = 0xC30; // float32
                pub const m_fHltvReplayEnd: usize = 0xC34; // float32
                pub const m_iHltvReplayEntity: usize = 0xC38; // CEntityIndex
                pub const m_sndOpvarLatchData: usize = 0xC40; // CUtlVector<sndopvarlatchdata_t>
            }
            // Parent: CBaseTrigger
            // Field count: 16
            //
            // Metadata:
            // NetworkVarNames: m_hPostSettings (HPostProcessingStrong)
            // NetworkVarNames: m_flFadeDuration (float)
            // NetworkVarNames: m_flMinLogExposure (float)
            // NetworkVarNames: m_flMaxLogExposure (float)
            // NetworkVarNames: m_flMinExposure (float)
            // NetworkVarNames: m_flMaxExposure (float)
            // NetworkVarNames: m_flExposureCompensation (float)
            // NetworkVarNames: m_flExposureFadeSpeedUp (float)
            // NetworkVarNames: m_flExposureFadeSpeedDown (float)
            // NetworkVarNames: m_flTonemapEVSmoothingRange (float)
            // NetworkVarNames: m_bMaster (bool)
            // NetworkVarNames: m_bExposureControl (bool)
            // NetworkVarNames: m_flRate (float)
            // NetworkVarNames: m_flTonemapPercentTarget (float)
            // NetworkVarNames: m_flTonemapPercentBrightPixels (float)
            // NetworkVarNames: m_flTonemapMinAvgLum (float)
            pub mod CPostProcessingVolume {
                pub const m_hPostSettings: usize = 0x970; // CStrongHandle<InfoForResourceTypeCPostProcessingResource>
                pub const m_flFadeDuration: usize = 0x978; // float32
                pub const m_flMinLogExposure: usize = 0x97C; // float32
                pub const m_flMaxLogExposure: usize = 0x980; // float32
                pub const m_flMinExposure: usize = 0x984; // float32
                pub const m_flMaxExposure: usize = 0x988; // float32
                pub const m_flExposureCompensation: usize = 0x98C; // float32
                pub const m_flExposureFadeSpeedUp: usize = 0x990; // float32
                pub const m_flExposureFadeSpeedDown: usize = 0x994; // float32
                pub const m_flTonemapEVSmoothingRange: usize = 0x998; // float32
                pub const m_bMaster: usize = 0x99C; // bool
                pub const m_bExposureControl: usize = 0x99D; // bool
                pub const m_flRate: usize = 0x9A0; // float32
                pub const m_flTonemapPercentTarget: usize = 0x9A4; // float32
                pub const m_flTonemapPercentBrightPixels: usize = 0x9A8; // float32
                pub const m_flTonemapMinAvgLum: usize = 0x9AC; // float32
            }
            // Parent: CBaseModelEntity
            // Field count: 4
            //
            // Metadata:
            // NetworkVarNames:  ()
            // NetworkVarNames:  ()
            pub mod CSpotlightEnd {
                pub const m_flLightScale: usize = 0x790; // float32
                pub const m_Radius: usize = 0x794; // float32
                pub const m_vSpotlightDir: usize = 0x798; // Vector
                pub const m_vSpotlightOrg: usize = 0x7A4; // Vector
            }
            // Parent: CBaseCSGrenade
            // Field count: 0
            pub mod CSensorGrenade {
            }
            // Parent: CBaseTrigger
            // Field count: 1
            pub mod CTriggerDetectExplosion {
                pub const m_OnDetectedExplosion: usize = 0x988; // CEntityIOOutput
            }
            // Parent: CEconEntity
            // Field count: 2
            pub mod CEconWearable {
                pub const m_nForceSkin: usize = 0xD30; // int32
                pub const m_bAlwaysAllow: usize = 0xD34; // bool
            }
            // Parent: CBaseModelEntity
            // Field count: 9
            //
            // Metadata:
            // MNetworkIncludeByName
            // MNetworkOverride
            // MNetworkOverride
            // MNetworkOverride
            // MNetworkOverride
            // MNetworkOverride
            // NetworkVarNames: m_vecMoveDirEntitySpace (Vector)
            // NetworkVarNames: m_flTargetSpeed (float32)
            // NetworkVarNames: m_nTransitionStartTick (GameTick_t)
            // NetworkVarNames: m_nTransitionDurationTicks (int)
            // NetworkVarNames: m_flTransitionStartSpeed (float32)
            // NetworkVarNames: m_hConveyorModels (EHANDLE)
            pub mod CFuncConveyor {
                pub const m_szConveyorModels: usize = 0x790; // CUtlSymbolLarge
                pub const m_flTransitionDurationSeconds: usize = 0x798; // float32
                pub const m_angMoveEntitySpace: usize = 0x79C; // QAngle
                pub const m_vecMoveDirEntitySpace: usize = 0x7A8; // Vector
                pub const m_flTargetSpeed: usize = 0x7B4; // float32
                pub const m_nTransitionStartTick: usize = 0x7B8; // GameTick_t
                pub const m_nTransitionDurationTicks: usize = 0x7BC; // int32
                pub const m_flTransitionStartSpeed: usize = 0x7C0; // float32
                pub const m_hConveyorModels: usize = 0x7C8; // 
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            pub mod CWeaponMag7 {
            }
            // Parent: CBaseDoor
            // Field count: 1
            pub mod CRotDoor {
                pub const m_bSolidBsp: usize = 0xA18; // bool
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            pub mod CWeaponElite {
            }
            // Parent: CCSWeaponBase
            // Field count: 11
            //
            // Metadata:
            // NetworkVarNames: m_bStartedArming (bool)
            // NetworkVarNames: m_fArmedTime (GameTime_t)
            // NetworkVarNames: m_bBombPlacedAnimation (bool)
            // NetworkVarNames: m_bIsPlantingViaUse (bool)
            // NetworkVarNames: m_entitySpottedState (EntitySpottedState_t)
            pub mod CC4 {
                pub const m_vecLastValidPlayerHeldPosition: usize = 0xFA0; // Vector
                pub const m_vecLastValidDroppedPosition: usize = 0xFAC; // Vector
                pub const m_bDoValidDroppedPositionCheck: usize = 0xFB8; // bool
                pub const m_bStartedArming: usize = 0xFB9; // bool
                pub const m_fArmedTime: usize = 0xFBC; // GameTime_t
                pub const m_bBombPlacedAnimation: usize = 0xFC0; // bool
                pub const m_bIsPlantingViaUse: usize = 0xFC1; // bool
                pub const m_entitySpottedState: usize = 0xFC8; // EntitySpottedState_t
                pub const m_nSpotRules: usize = 0xFE0; // int32
                pub const m_bPlayedArmingBeeps: usize = 0xFE4; // 
                pub const m_bBombPlanted: usize = 0xFEB; // bool
            }
            // Parent: CHostageRescueZoneShim
            // Field count: 0
            pub mod CHostageRescueZone {
            }
            // Parent: CBaseToggle
            // Field count: 27
            //
            // Metadata:
            // NetworkVarNames:  ()
            pub mod CBaseDoor {
                pub const m_angMoveEntitySpace: usize = 0x820; // QAngle
                pub const m_vecMoveDirParentSpace: usize = 0x82C; // Vector
                pub const m_ls: usize = 0x838; // locksound_t
                pub const m_bForceClosed: usize = 0x858; // bool
                pub const m_bDoorGroup: usize = 0x859; // bool
                pub const m_bLocked: usize = 0x85A; // bool
                pub const m_bIgnoreDebris: usize = 0x85B; // bool
                pub const m_eSpawnPosition: usize = 0x85C; // FuncDoorSpawnPos_t
                pub const m_flBlockDamage: usize = 0x860; // float32
                pub const m_NoiseMoving: usize = 0x868; // CUtlSymbolLarge
                pub const m_NoiseArrived: usize = 0x870; // CUtlSymbolLarge
                pub const m_NoiseMovingClosed: usize = 0x878; // CUtlSymbolLarge
                pub const m_NoiseArrivedClosed: usize = 0x880; // CUtlSymbolLarge
                pub const m_ChainTarget: usize = 0x888; // CUtlSymbolLarge
                pub const m_OnBlockedClosing: usize = 0x890; // CEntityIOOutput
                pub const m_OnBlockedOpening: usize = 0x8B8; // CEntityIOOutput
                pub const m_OnUnblockedClosing: usize = 0x8E0; // CEntityIOOutput
                pub const m_OnUnblockedOpening: usize = 0x908; // CEntityIOOutput
                pub const m_OnFullyClosed: usize = 0x930; // CEntityIOOutput
                pub const m_OnFullyOpen: usize = 0x958; // CEntityIOOutput
                pub const m_OnClose: usize = 0x980; // CEntityIOOutput
                pub const m_OnOpen: usize = 0x9A8; // CEntityIOOutput
                pub const m_OnLockedUse: usize = 0x9D0; // CEntityIOOutput
                pub const m_bLoopMoveSound: usize = 0x9F8; // bool
                pub const m_bCreateNavObstacle: usize = 0xA10; // bool
                pub const m_isChaining: usize = 0xA11; // bool
                pub const m_bIsUsable: usize = 0xA12; // bool
            }
            // Parent: CCSWeaponBase
            // Field count: 0
            pub mod CTablet {
            }
            // Parent: 
            // Field count: 0
            pub mod CRagdollPropAlias_physics_prop_ragdoll {
            }
            // Parent: CSprite
            // Field count: 0
            pub mod CCSSprite {
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            pub mod CWeaponSCAR20 {
            }
            // Parent: CBaseGrenade
            // Field count: 0
            pub mod CTripWireFireProjectile {
            }
            // Parent: CHostageExpresserShim
            // Field count: 39
            //
            // Metadata:
            // NetworkVarNames:  ()
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            // NetworkVarNames:  ()
            // NetworkVarNames:  ()
            // NetworkVarNames:  ()
            // NetworkVarNames:  ()
            // NetworkVarNames:  ()
            // NetworkVarNames:  ()
            // NetworkVarNames:  ()
            // NetworkVarNames:  ()
            // NetworkVarNames:  ()
            // NetworkVarNames:  ()
            // NetworkVarNames:  ()
            pub mod CHostage {
                pub const m_OnHostageBeginGrab: usize = 0xAD8; // CEntityIOOutput
                pub const m_OnFirstPickedUp: usize = 0xB00; // CEntityIOOutput
                pub const m_OnDroppedNotRescued: usize = 0xB28; // CEntityIOOutput
                pub const m_OnRescued: usize = 0xB50; // CEntityIOOutput
                pub const m_entitySpottedState: usize = 0xB78; // EntitySpottedState_t
                pub const m_nSpotRules: usize = 0xB90; // int32
                pub const m_uiHostageSpawnExclusionGroupMask: usize = 0xB94; // uint32
                pub const m_nHostageSpawnRandomFactor: usize = 0xB98; // uint32
                pub const m_bRemove: usize = 0xB9C; // bool
                pub const m_vel: usize = 0xBA0; // Vector
                pub const m_isRescued: usize = 0xBAC; // bool
                pub const m_jumpedThisFrame: usize = 0xBAD; // bool
                pub const m_nHostageState: usize = 0xBB0; // int32
                pub const m_leader: usize = 0xBB4; // CHandle<CBaseEntity>
                pub const m_lastLeader: usize = 0xBB8; // CHandle<CCSPlayerPawnBase>
                pub const m_reuseTimer: usize = 0xBC0; // CountdownTimer
                pub const m_hasBeenUsed: usize = 0xBD8; // bool
                pub const m_accel: usize = 0xBDC; // Vector
                pub const m_isRunning: usize = 0xBE8; // bool
                pub const m_isCrouching: usize = 0xBE9; // bool
                pub const m_jumpTimer: usize = 0xBF0; // CountdownTimer
                pub const m_isWaitingForLeader: usize = 0xC08; // bool
                pub const m_repathTimer: usize = 0x2C18; // CountdownTimer
                pub const m_inhibitDoorTimer: usize = 0x2C30; // CountdownTimer
                pub const m_inhibitObstacleAvoidanceTimer: usize = 0x2CC0; // CountdownTimer
                pub const m_wiggleTimer: usize = 0x2CE0; // CountdownTimer
                pub const m_isAdjusted: usize = 0x2CFC; // bool
                pub const m_bHandsHaveBeenCut: usize = 0x2CFD; // bool
                pub const m_hHostageGrabber: usize = 0x2D00; // CHandle<CCSPlayerPawn>
                pub const m_fLastGrabTime: usize = 0x2D04; // GameTime_t
                pub const m_vecPositionWhenStartedDroppingToGround: usize = 0x2D08; // Vector
                pub const m_vecGrabbedPos: usize = 0x2D14; // Vector
                pub const m_flRescueStartTime: usize = 0x2D20; // GameTime_t
                pub const m_flGrabSuccessTime: usize = 0x2D24; // GameTime_t
                pub const m_flDropStartTime: usize = 0x2D28; // GameTime_t
                pub const m_nApproachRewardPayouts: usize = 0x2D2C; // int32
                pub const m_nPickupEventCount: usize = 0x2D30; // int32
                pub const m_vecSpawnGroundPos: usize = 0x2D34; // Vector
                pub const m_vecHostageResetPosition: usize = 0x2D54; // Vector
            }
            // Parent: CPointEntity
            // Field count: 9
            pub mod CMapInfo {
                pub const m_iBuyingStatus: usize = 0x4E0; // int32
                pub const m_flBombRadius: usize = 0x4E4; // float32
                pub const m_iPetPopulation: usize = 0x4E8; // int32
                pub const m_bUseNormalSpawnsForDM: usize = 0x4EC; // bool
                pub const m_bDisableAutoGeneratedDMSpawns: usize = 0x4ED; // bool
                pub const m_flBotMaxVisionDistance: usize = 0x4F0; // float32
                pub const m_iHostageCount: usize = 0x4F4; // int32
                pub const m_bFadePlayerVisibilityFarZ: usize = 0x4F8; // bool
                pub const m_bRainTraceToSkyEnabled: usize = 0x4F9; // bool
            }
            // Parent: CBaseTrigger
            // Field count: 0
            pub mod CTriggerBombReset {
            }
        }
    }
}
