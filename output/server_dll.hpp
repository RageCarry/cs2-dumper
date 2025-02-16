// Generated using https://github.com/a2x/cs2-dumper
// 2025-02-16 07:27:14.282532083 UTC

#pragma once

#include <cstddef>

namespace cs2_dumper {
    namespace schemas {
        // Module: server.dll
        // Class count: 140
        // Enum count: 0
        namespace server_dll {
            // Parent: CBaseCombatCharacter
            // Field count: 1
            namespace CHostageExpresserShim {
                constexpr std::ptrdiff_t m_pExpresser = 0xAC0; // CAI_Expresser*
            }
            // Parent: CBaseTrigger
            // Field count: 3
            namespace CTriggerSoundscape {
                constexpr std::ptrdiff_t m_hSoundscape = 0x960; // CHandle<CEnvSoundscapeTriggerable>
                constexpr std::ptrdiff_t m_SoundscapeName = 0x968; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_spectators = 0x970; // CUtlVector<CHandle<CBasePlayerPawn>>
            }
            // Parent: CBreakableProp
            // Field count: 22
            //
            // Metadata:
            // NetworkVarNames:  ()
            // NetworkVarNames:  ()
            namespace CDynamicProp {
                constexpr std::ptrdiff_t m_bCreateNavObstacle = 0xB60; // bool
                constexpr std::ptrdiff_t m_bNavObstacleUpdatesOverridden = 0xB61; // bool
                constexpr std::ptrdiff_t m_bUseHitboxesForRenderBox = 0xB62; // bool
                constexpr std::ptrdiff_t m_bUseAnimGraph = 0xB63; // bool
                constexpr std::ptrdiff_t m_pOutputAnimBegun = 0xB68; // CEntityIOOutput
                constexpr std::ptrdiff_t m_pOutputAnimOver = 0xB90; // CEntityIOOutput
                constexpr std::ptrdiff_t m_pOutputAnimLoopCycleOver = 0xBB8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnAnimReachedStart = 0xBE0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnAnimReachedEnd = 0xC08; // CEntityIOOutput
                constexpr std::ptrdiff_t m_iszIdleAnim = 0xC30; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_nIdleAnimLoopMode = 0xC38; // AnimLoopMode_t
                constexpr std::ptrdiff_t m_bRandomizeCycle = 0xC3C; // bool
                constexpr std::ptrdiff_t m_bStartDisabled = 0xC3D; // bool
                constexpr std::ptrdiff_t m_bFiredStartEndOutput = 0xC3E; // bool
                constexpr std::ptrdiff_t m_bForceNpcExclude = 0xC3F; // bool
                constexpr std::ptrdiff_t m_bCreateNonSolid = 0xC40; // bool
                constexpr std::ptrdiff_t m_bIsOverrideProp = 0xC41; // bool
                constexpr std::ptrdiff_t m_iInitialGlowState = 0xC44; // int32
                constexpr std::ptrdiff_t m_nGlowRange = 0xC48; // int32
                constexpr std::ptrdiff_t m_nGlowRangeMin = 0xC4C; // int32
                constexpr std::ptrdiff_t m_glowColor = 0xC50; // Color
                constexpr std::ptrdiff_t m_nGlowTeam = 0xC54; // int32
            }
            // Parent: CCSWeaponBase
            // Field count: 7
            //
            // Metadata:
            // NetworkVarNames: m_bPlayingUninterruptableAct (bool)
            // NetworkVarNames: m_nUninterruptableActivity (PlayerAnimEvent_t)
            namespace CFists {
                constexpr std::ptrdiff_t m_bPlayingUninterruptableAct = 0xF70; // bool
                constexpr std::ptrdiff_t m_nUninterruptableActivity = 0xF74; // PlayerAnimEvent_t
                constexpr std::ptrdiff_t m_bRestorePrevWep = 0xF78; // bool
                constexpr std::ptrdiff_t m_hWeaponBeforePrevious = 0xF7C; // CHandle<CBasePlayerWeapon>
                constexpr std::ptrdiff_t m_hWeaponPrevious = 0xF80; // CHandle<CBasePlayerWeapon>
                constexpr std::ptrdiff_t m_bDelayedHardPunchIncoming = 0xF84; // bool
                constexpr std::ptrdiff_t m_bDestroyAfterTaunt = 0xF85; // bool
            }
            // Parent: CBreakable
            // Field count: 0
            namespace CPushable {
            }
            // Parent: CBaseTrigger
            // Field count: 0
            namespace CTriggerTripWire {
            }
            // Parent: CBaseTrigger
            // Field count: 1
            namespace CTriggerMultiple {
                constexpr std::ptrdiff_t m_OnTrigger = 0x960; // CEntityIOOutput
            }
            // Parent: CFuncBrush
            // Field count: 4
            //
            // Metadata:
            // NetworkVarNames: m_EffectName (string_t)
            namespace CFuncElectrifiedVolume {
                constexpr std::ptrdiff_t m_EffectName = 0x7B0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_EffectInterpenetrateName = 0x7B8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_EffectZapName = 0x7C0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszEffectSource = 0x7C8; // CUtlSymbolLarge
            }
            // Parent: CWeaponBaseItem
            // Field count: 0
            namespace CItem_Healthshot {
            }
            // Parent: CBaseTrigger
            // Field count: 1
            namespace CFogTrigger {
                constexpr std::ptrdiff_t m_fog = 0x960; // fogparams_t
            }
            // Parent: CBaseTrigger
            // Field count: 0
            namespace CTriggerHostageReset {
            }
            // Parent: CPointEntity
            // Field count: 0
            namespace CInfoInstructorHintBombTargetB {
            }
            // Parent: CCSWeaponBase
            // Field count: 0
            namespace CWeaponSawedoff {
            }
            // Parent: CBaseTrigger
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames: m_flFluidDensity (float)
            namespace CTriggerBuoyancy {
                constexpr std::ptrdiff_t m_BuoyancyHelper = 0x960; // CBuoyancyHelper
                constexpr std::ptrdiff_t m_flFluidDensity = 0x9E0; // float32
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
            namespace CSmokeGrenadeProjectile {
                constexpr std::ptrdiff_t m_nSmokeEffectTickBegin = 0xB68; // int32
                constexpr std::ptrdiff_t m_bDidSmokeEffect = 0xB6C; // bool
                constexpr std::ptrdiff_t m_nRandomSeed = 0xB70; // int32
                constexpr std::ptrdiff_t m_vSmokeColor = 0xB74; // Vector
                constexpr std::ptrdiff_t m_vSmokeDetonationPos = 0xB80; // Vector
                constexpr std::ptrdiff_t m_VoxelFrameData = 0xB90; // CNetworkUtlVectorBase<uint8>
                constexpr std::ptrdiff_t m_nVoxelFrameDataSize = 0xBA8; // int32
                constexpr std::ptrdiff_t m_nVoxelUpdate = 0xBAC; // int32
                constexpr std::ptrdiff_t m_flLastBounce = 0xBB0; // GameTime_t
                constexpr std::ptrdiff_t m_fllastSimulationTime = 0xBB4; // GameTime_t
                constexpr std::ptrdiff_t m_bExplodeFromInferno = 0x2E38; // bool
            }
            // Parent: CBot
            // Field count: 11
            namespace CCSBot {
                constexpr std::ptrdiff_t m_eyePosition = 0x108; // Vector
                constexpr std::ptrdiff_t m_name = 0x114; // char[64]
                constexpr std::ptrdiff_t m_combatRange = 0x154; // float32
                constexpr std::ptrdiff_t m_isRogue = 0x0; // bool
                constexpr std::ptrdiff_t m_lastOrigin = 0x650C; // Vector
                constexpr std::ptrdiff_t m_lastRadioRecievedTimestamp = 0x651C; // float32
                constexpr std::ptrdiff_t m_lastRadioSentTimestamp = 0x6520; // float32
                constexpr std::ptrdiff_t m_radioSubject = 0x6524; // CHandle<CCSPlayerPawn>
                constexpr std::ptrdiff_t m_radioPosition = 0x6528; // Vector
                constexpr std::ptrdiff_t m_voiceEndTimestamp = 0x6534; // float32
                constexpr std::ptrdiff_t m_lastValidReactionQueueFrame = 0x6540; // int32
            }
            // Parent: 
            // Field count: 0
            namespace CItemKevlar {
            }
            // Parent: CBaseTrigger
            // Field count: 14
            namespace CTriggerHurt {
                constexpr std::ptrdiff_t m_flOriginalDamage = 0x960; // float32
                constexpr std::ptrdiff_t m_flDamage = 0x964; // float32
                constexpr std::ptrdiff_t m_flDamageCap = 0x968; // float32
                constexpr std::ptrdiff_t m_flLastDmgTime = 0x96C; // GameTime_t
                constexpr std::ptrdiff_t m_flForgivenessDelay = 0x970; // float32
                constexpr std::ptrdiff_t m_bitsDamageInflict = 0x974; // DamageTypes_t
                constexpr std::ptrdiff_t m_damageModel = 0x978; // int32
                constexpr std::ptrdiff_t m_bNoDmgForce = 0x97C; // bool
                constexpr std::ptrdiff_t m_vDamageForce = 0x980; // Vector
                constexpr std::ptrdiff_t m_thinkAlways = 0x98C; // bool
                constexpr std::ptrdiff_t m_hurtThinkPeriod = 0x990; // float32
                constexpr std::ptrdiff_t m_OnHurt = 0x998; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnHurtPlayer = 0x9C0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_hurtEntities = 0x9E8; // CUtlVector<CHandle<CBaseEntity>>
            }
            // Parent: CPointEntity
            // Field count: 4
            namespace CSoundEnt {
                constexpr std::ptrdiff_t m_iFreeSound = 0x4E0; // int32
                constexpr std::ptrdiff_t m_iActiveSound = 0x4E4; // int32
                constexpr std::ptrdiff_t m_cLastActiveSounds = 0x4E8; // int32
                constexpr std::ptrdiff_t m_SoundPool = 0x4EC; // 
            }
            // Parent: CSprite
            // Field count: 0
            namespace CSpriteOriented {
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            namespace CWeaponM4A1 {
            }
            // Parent: CBeam
            // Field count: 5
            namespace CEnvLaser {
                constexpr std::ptrdiff_t m_iszLaserTarget = 0x830; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_pSprite = 0x838; // 
                constexpr std::ptrdiff_t m_iszSpriteName = 0x840; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_firePosition = 0x848; // Vector
                constexpr std::ptrdiff_t m_flStartFrame = 0x854; // float32
            }
            // Parent: CSprite
            // Field count: 0
            namespace CCommentaryViewPosition {
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
            namespace CBasePlayerWeapon {
                constexpr std::ptrdiff_t m_nNextPrimaryAttackTick = 0xD30; // GameTick_t
                constexpr std::ptrdiff_t m_flNextPrimaryAttackTickRatio = 0xD34; // float32
                constexpr std::ptrdiff_t m_nNextSecondaryAttackTick = 0xD38; // GameTick_t
                constexpr std::ptrdiff_t m_flNextSecondaryAttackTickRatio = 0xD3C; // float32
                constexpr std::ptrdiff_t m_iClip1 = 0xD40; // int32
                constexpr std::ptrdiff_t m_iClip2 = 0xD44; // int32
                constexpr std::ptrdiff_t m_pReserveAmmo = 0xD48; // 
                constexpr std::ptrdiff_t m_OnPlayerUse = 0xD50; // CEntityIOOutput
            }
            // Parent: CBaseFlex
            // Field count: 0
            namespace CBaseFlexAlias_funCBaseFlex {
            }
            // Parent: CBaseAnimGraph
            // Field count: 0
            namespace CHostageCarriableProp {
            }
            // Parent: CBaseModelEntity
            // Field count: 18
            //
            // Metadata:
            // MNetworkOverride
            // MNetworkOverride
            namespace CFuncRotating {
                constexpr std::ptrdiff_t m_OnStopped = 0x790; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnStarted = 0x7B8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnReachedStart = 0x7E0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_localRotationVector = 0x808; // RotationVector
                constexpr std::ptrdiff_t m_flFanFriction = 0x814; // float32
                constexpr std::ptrdiff_t m_flAttenuation = 0x818; // float32
                constexpr std::ptrdiff_t m_flVolume = 0x81C; // float32
                constexpr std::ptrdiff_t m_flTargetSpeed = 0x820; // float32
                constexpr std::ptrdiff_t m_flMaxSpeed = 0x824; // float32
                constexpr std::ptrdiff_t m_flBlockDamage = 0x828; // float32
                constexpr std::ptrdiff_t m_NoiseRunning = 0x830; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_bReversed = 0x838; // bool
                constexpr std::ptrdiff_t m_bAccelDecel = 0x839; // bool
                constexpr std::ptrdiff_t m_prevLocalAngles = 0x844; // QAngle
                constexpr std::ptrdiff_t m_angStart = 0x850; // QAngle
                constexpr std::ptrdiff_t m_bStopAtStartPos = 0x85C; // bool
                constexpr std::ptrdiff_t m_vecClientOrigin = 0x860; // Vector
                constexpr std::ptrdiff_t m_vecClientAngles = 0x86C; // QAngle
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
            namespace CBaseCSGrenadeProjectile {
                constexpr std::ptrdiff_t m_vInitialPosition = 0xAE0; // Vector
                constexpr std::ptrdiff_t m_vInitialVelocity = 0xAEC; // Vector
                constexpr std::ptrdiff_t m_nBounces = 0xAF8; // int32
                constexpr std::ptrdiff_t m_nExplodeEffectIndex = 0xB00; // 
                constexpr std::ptrdiff_t m_nExplodeEffectTickBegin = 0xB08; // int32
                constexpr std::ptrdiff_t m_vecExplodeEffectOrigin = 0xB0C; // Vector
                constexpr std::ptrdiff_t m_flSpawnTime = 0xB18; // GameTime_t
                constexpr std::ptrdiff_t m_unOGSExtraFlags = 0xB1C; // uint8
                constexpr std::ptrdiff_t m_bDetonationRecorded = 0xB1D; // bool
                constexpr std::ptrdiff_t m_nItemIndex = 0xB1E; // uint16
                constexpr std::ptrdiff_t m_vecOriginalSpawnLocation = 0xB20; // Vector
                constexpr std::ptrdiff_t m_flLastBounceSoundTime = 0xB2C; // GameTime_t
                constexpr std::ptrdiff_t m_vecGrenadeSpin = 0xB30; // RotationVector
                constexpr std::ptrdiff_t m_vecLastHitSurfaceNormal = 0xB3C; // Vector
                constexpr std::ptrdiff_t m_nTicksAtZeroVelocity = 0xB48; // int32
                constexpr std::ptrdiff_t m_bHasEverHitEnemy = 0xB4C; // bool
            }
            // Parent: CServerOnlyModelEntity
            // Field count: 1
            namespace CCSPlace {
                constexpr std::ptrdiff_t m_name = 0x798; // CUtlSymbolLarge
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
            namespace CEntityDissolve {
                constexpr std::ptrdiff_t m_flFadeInStart = 0x790; // float32
                constexpr std::ptrdiff_t m_flFadeInLength = 0x794; // float32
                constexpr std::ptrdiff_t m_flFadeOutModelStart = 0x798; // float32
                constexpr std::ptrdiff_t m_flFadeOutModelLength = 0x79C; // float32
                constexpr std::ptrdiff_t m_flFadeOutStart = 0x7A0; // float32
                constexpr std::ptrdiff_t m_flFadeOutLength = 0x7A4; // float32
                constexpr std::ptrdiff_t m_flStartTime = 0x7A8; // GameTime_t
                constexpr std::ptrdiff_t m_nDissolveType = 0x7AC; // EntityDisolveType_t
                constexpr std::ptrdiff_t m_vDissolverOrigin = 0x7B0; // Vector
                constexpr std::ptrdiff_t m_nMagnitude = 0x7BC; // uint32
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
            namespace CBeam {
                constexpr std::ptrdiff_t m_flFrameRate = 0x790; // float32
                constexpr std::ptrdiff_t m_flHDRColorScale = 0x794; // float32
                constexpr std::ptrdiff_t m_flFireTime = 0x798; // GameTime_t
                constexpr std::ptrdiff_t m_flDamage = 0x79C; // float32
                constexpr std::ptrdiff_t m_nNumBeamEnts = 0x7A0; // uint8
                constexpr std::ptrdiff_t m_hBaseMaterial = 0x7A8; // CStrongHandle<InfoForResourceTypeIMaterial2>
                constexpr std::ptrdiff_t m_nHaloIndex = 0x7B0; // CStrongHandle<InfoForResourceTypeIMaterial2>
                constexpr std::ptrdiff_t m_nBeamType = 0x7B8; // BeamType_t
                constexpr std::ptrdiff_t m_nBeamFlags = 0x7BC; // uint32
                constexpr std::ptrdiff_t m_hAttachEntity = 0x7C0; // CHandle<CBaseEntity>[10]
                constexpr std::ptrdiff_t m_nAttachIndex = 0x7E8; // 
                constexpr std::ptrdiff_t m_fWidth = 0x7F4; // float32
                constexpr std::ptrdiff_t m_fEndWidth = 0x7F8; // float32
                constexpr std::ptrdiff_t m_fFadeLength = 0x7FC; // float32
                constexpr std::ptrdiff_t m_fHaloScale = 0x800; // float32
                constexpr std::ptrdiff_t m_fAmplitude = 0x804; // float32
                constexpr std::ptrdiff_t m_fStartFrame = 0x808; // float32
                constexpr std::ptrdiff_t m_fSpeed = 0x80C; // float32
                constexpr std::ptrdiff_t m_flFrame = 0x810; // float32
                constexpr std::ptrdiff_t m_nClipStyle = 0x814; // BeamClipStyle_t
                constexpr std::ptrdiff_t m_bTurnedOff = 0x818; // bool
                constexpr std::ptrdiff_t m_vecEndPos = 0x81C; // Vector
                constexpr std::ptrdiff_t m_hEndEntity = 0x828; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_nDissolveType = 0x82C; // int32
            }
            // Parent: CSceneEntity
            // Field count: 0
            namespace CSceneEntityAlias_logic_choreographed_scene {
            }
            // Parent: CPointEntity
            // Field count: 4
            namespace CRagdollMagnet {
                constexpr std::ptrdiff_t m_bDisabled = 0x4E0; // bool
                constexpr std::ptrdiff_t m_radius = 0x4E4; // float32
                constexpr std::ptrdiff_t m_force = 0x4E8; // float32
                constexpr std::ptrdiff_t m_axis = 0x4EC; // Vector
            }
            // Parent: CBaseModelEntity
            // Field count: 0
            namespace CFuncBrush {
            }
            // Parent: CCSWeaponBase
            // Field count: 0
            namespace CMelee {
            }
            // Parent: CBreakable
            // Field count: 14
            namespace CPhysBox {
                constexpr std::ptrdiff_t m_damageType = 0x868; // int32
                constexpr std::ptrdiff_t m_damageToEnableMotion = 0x86C; // int32
                constexpr std::ptrdiff_t m_flForceToEnableMotion = 0x870; // float32
                constexpr std::ptrdiff_t m_angPreferredCarryAngles = 0x874; // QAngle
                constexpr std::ptrdiff_t m_bNotSolidToWorld = 0x880; // bool
                constexpr std::ptrdiff_t m_bEnableUseOutput = 0x881; // bool
                constexpr std::ptrdiff_t m_iExploitableByPlayer = 0x884; // int32
                constexpr std::ptrdiff_t m_flTouchOutputPerEntityDelay = 0x888; // float32
                constexpr std::ptrdiff_t m_OnDamaged = 0x890; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnAwakened = 0x8B8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnMotionEnabled = 0x8E0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnPlayerUse = 0x908; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnStartTouch = 0x930; // CEntityIOOutput
                constexpr std::ptrdiff_t m_hCarryingPlayer = 0x958; // CHandle<CBasePlayerPawn>
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
            namespace CBaseGrenade {
                constexpr std::ptrdiff_t m_OnPlayerPickup = 0xA40; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnExplode = 0xA68; // CEntityIOOutput
                constexpr std::ptrdiff_t m_bHasWarnedAI = 0xA90; // bool
                constexpr std::ptrdiff_t m_bIsSmokeGrenade = 0xA91; // bool
                constexpr std::ptrdiff_t m_bIsLive = 0xA92; // bool
                constexpr std::ptrdiff_t m_DmgRadius = 0xA94; // float32
                constexpr std::ptrdiff_t m_flDetonateTime = 0xA98; // GameTime_t
                constexpr std::ptrdiff_t m_flWarnAITime = 0xA9C; // float32
                constexpr std::ptrdiff_t m_flDamage = 0xAA0; // float32
                constexpr std::ptrdiff_t m_iszBounceSound = 0xAA8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_ExplosionSound = 0xAB0; // CUtlString
                constexpr std::ptrdiff_t m_hThrower = 0xABC; // CHandle<CCSPlayerPawn>
                constexpr std::ptrdiff_t m_flNextAttack = 0xAD4; // GameTime_t
                constexpr std::ptrdiff_t m_hOriginalThrower = 0xAD8; // CHandle<CCSPlayerPawn>
            }
            // Parent: CBaseCSGrenadeProjectile
            // Field count: 0
            namespace CHEGrenadeProjectile {
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
            namespace CCSWeaponBase {
                constexpr std::ptrdiff_t m_bRemoveable = 0xDA0; // bool
                constexpr std::ptrdiff_t m_flFireSequenceStartTime = 0xDA8; // float32
                constexpr std::ptrdiff_t m_nFireSequenceStartTimeChange = 0xDAC; // int32
                constexpr std::ptrdiff_t m_nFireSequenceStartTimeAck = 0xDB0; // int32
                constexpr std::ptrdiff_t m_ePlayerFireEvent = 0xDB4; // PlayerAnimEvent_t
                constexpr std::ptrdiff_t m_ePlayerFireEventAttackType = 0xDB8; // WeaponAttackType_t
                constexpr std::ptrdiff_t m_seqIdle = 0xDBC; // HSequence
                constexpr std::ptrdiff_t m_seqFirePrimary = 0xDC0; // HSequence
                constexpr std::ptrdiff_t m_seqFireSecondary = 0xDC4; // HSequence
                constexpr std::ptrdiff_t m_thirdPersonFireSequences = 0xDC8; // CUtlVector<HSequence>
                constexpr std::ptrdiff_t m_hCurrentThirdPersonSequence = 0xDE0; // HSequence
                constexpr std::ptrdiff_t m_nSilencerBoneIndex = 0xDE4; // int32
                constexpr std::ptrdiff_t m_thirdPersonSequences = 0xDE8; // 
                constexpr std::ptrdiff_t m_bPlayerAmmoStockOnPickup = 0xE10; // bool
                constexpr std::ptrdiff_t m_bRequireUseToTouch = 0xE11; // bool
                constexpr std::ptrdiff_t m_iState = 0xE14; // CSWeaponState_t
                constexpr std::ptrdiff_t m_flLastTimeInAir = 0xE18; // GameTime_t
                constexpr std::ptrdiff_t m_flLastDeployTime = 0xE1C; // GameTime_t
                constexpr std::ptrdiff_t m_nLastEmptySoundCmdNum = 0xE20; // int32
                constexpr std::ptrdiff_t m_nViewModelIndex = 0xE24; // uint32
                constexpr std::ptrdiff_t m_bReloadsWithClips = 0xE28; // bool
                constexpr std::ptrdiff_t m_flTimeWeaponIdle = 0xE48; // GameTime_t
                constexpr std::ptrdiff_t m_bFireOnEmpty = 0xE4C; // bool
                constexpr std::ptrdiff_t m_OnPlayerPickup = 0xE50; // CEntityIOOutput
                constexpr std::ptrdiff_t m_weaponMode = 0xE78; // CSWeaponMode
                constexpr std::ptrdiff_t m_flTurningInaccuracyDelta = 0xE7C; // float32
                constexpr std::ptrdiff_t m_vecTurningInaccuracyEyeDirLast = 0xE80; // Vector
                constexpr std::ptrdiff_t m_flTurningInaccuracy = 0xE8C; // float32
                constexpr std::ptrdiff_t m_fAccuracyPenalty = 0xE90; // float32
                constexpr std::ptrdiff_t m_flLastAccuracyUpdateTime = 0xE94; // GameTime_t
                constexpr std::ptrdiff_t m_fAccuracySmoothedForZoom = 0xE98; // float32
                constexpr std::ptrdiff_t m_fScopeZoomEndTime = 0xE9C; // GameTime_t
                constexpr std::ptrdiff_t m_iRecoilIndex = 0xEA0; // int32
                constexpr std::ptrdiff_t m_flRecoilIndex = 0xEA4; // float32
                constexpr std::ptrdiff_t m_bBurstMode = 0xEA8; // bool
                constexpr std::ptrdiff_t m_nPostponeFireReadyTicks = 0xEAC; // GameTick_t
                constexpr std::ptrdiff_t m_flPostponeFireReadyFrac = 0xEB0; // float32
                constexpr std::ptrdiff_t m_bInReload = 0xEB4; // bool
                constexpr std::ptrdiff_t m_bReloadVisuallyComplete = 0xEB5; // bool
                constexpr std::ptrdiff_t m_flDroppedAtTime = 0xEB8; // GameTime_t
                constexpr std::ptrdiff_t m_bIsHauledBack = 0xEBC; // bool
                constexpr std::ptrdiff_t m_bSilencerOn = 0xEBD; // bool
                constexpr std::ptrdiff_t m_flTimeSilencerSwitchComplete = 0xEC0; // GameTime_t
                constexpr std::ptrdiff_t m_iOriginalTeamNumber = 0xEC4; // int32
                constexpr std::ptrdiff_t m_iMostRecentTeamNumber = 0xEC8; // int32
                constexpr std::ptrdiff_t m_bDroppedNearBuyZone = 0xECC; // bool
                constexpr std::ptrdiff_t m_flNextAttackRenderTimeOffset = 0xED0; // float32
                constexpr std::ptrdiff_t m_bCanBePickedUp = 0xEE8; // bool
                constexpr std::ptrdiff_t m_bUseCanOverrideNextOwnerTouchTime = 0xEE9; // bool
                constexpr std::ptrdiff_t m_nextOwnerTouchTime = 0xEEC; // GameTime_t
                constexpr std::ptrdiff_t m_nextPrevOwnerTouchTime = 0xEF0; // GameTime_t
                constexpr std::ptrdiff_t m_nextPrevOwnerUseTime = 0xEF8; // GameTime_t
                constexpr std::ptrdiff_t m_hPrevOwner = 0xEFC; // CHandle<CCSPlayerPawn>
                constexpr std::ptrdiff_t m_nDropTick = 0xF00; // GameTick_t
                constexpr std::ptrdiff_t m_donated = 0xF24; // bool
                constexpr std::ptrdiff_t m_fLastShotTime = 0xF28; // GameTime_t
                constexpr std::ptrdiff_t m_bWasOwnedByCT = 0xF2C; // bool
                constexpr std::ptrdiff_t m_bWasOwnedByTerrorist = 0xF2D; // bool
                constexpr std::ptrdiff_t m_bFiredOutOfAmmoEvent = 0xF2E; // bool
                constexpr std::ptrdiff_t m_numRemoveUnownedWeaponThink = 0xF30; // int32
                constexpr std::ptrdiff_t m_IronSightController = 0xF38; // CIronSightController
                constexpr std::ptrdiff_t m_iIronSightMode = 0xF50; // int32
                constexpr std::ptrdiff_t m_flLastLOSTraceFailureTime = 0xF54; // GameTime_t
                constexpr std::ptrdiff_t m_iNumEmptyAttacks = 0xF58; // int32
                constexpr std::ptrdiff_t m_flWatTickOffset = 0xF5C; // float32
            }
            // Parent: CBaseEntity
            // Field count: 0
            namespace CHandleDummy {
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
            namespace CCSTeam {
                constexpr std::ptrdiff_t m_nLastRecievedShorthandedRoundBonus = 0x598; // int32
                constexpr std::ptrdiff_t m_nShorthandedRoundBonusStartRound = 0x59C; // int32
                constexpr std::ptrdiff_t m_bSurrendered = 0x5A0; // bool
                constexpr std::ptrdiff_t m_szTeamMatchStat = 0x5A1; // char[512]
                constexpr std::ptrdiff_t m_numMapVictories = 0x7A4; // int32
                constexpr std::ptrdiff_t m_scoreFirstHalf = 0x7A8; // int32
                constexpr std::ptrdiff_t m_scoreSecondHalf = 0x7AC; // int32
                constexpr std::ptrdiff_t m_scoreOvertime = 0x7B0; // int32
                constexpr std::ptrdiff_t m_szClanTeamname = 0x7B4; // char[129]
                constexpr std::ptrdiff_t m_iClanID = 0x838; // uint32
                constexpr std::ptrdiff_t m_szTeamFlagImage = 0x83C; // 
                constexpr std::ptrdiff_t m_szTeamLogoImage = 0x844; // 
                constexpr std::ptrdiff_t m_flNextResourceTime = 0x84C; // float32
                constexpr std::ptrdiff_t m_iLastUpdateSentAt = 0x850; // int32
            }
            // Parent: CBaseTrigger
            // Field count: 2
            namespace CTriggerDetectBulletFire {
                constexpr std::ptrdiff_t m_bPlayerFireOnly = 0x960; // bool
                constexpr std::ptrdiff_t m_OnDetectedBulletFire = 0x968; // CEntityIOOutput
            }
            // Parent: CBaseModelEntity
            // Field count: 0
            namespace CWorld {
            }
            // Parent: CPointEntity
            // Field count: 1
            namespace CPointGiveAmmo {
                constexpr std::ptrdiff_t m_pActivator = 0x4E0; // CHandle<CBaseEntity>
            }
            // Parent: 
            // Field count: 0
            namespace CFuncMoveLinearAlias_momentary_door {
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            namespace CAK47 {
            }
            // Parent: CBaseTrigger
            // Field count: 4
            namespace CTriggerTeleport {
                constexpr std::ptrdiff_t m_iLandmark = 0x960; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_bUseLandmarkAngles = 0x968; // bool
                constexpr std::ptrdiff_t m_bMirrorPlayer = 0x969; // bool
                constexpr std::ptrdiff_t m_bCheckDestIfClearForPlayer = 0x96A; // bool
            }
            // Parent: CBaseCSGrenade
            // Field count: 0
            namespace CHEGrenade {
            }
            // Parent: 
            // Field count: 0
            namespace CGameEnd {
            }
            // Parent: CBaseTrigger
            // Field count: 0
            namespace CTriggerCallback {
            }
            // Parent: CPhysicsProp
            // Field count: 0
            namespace CPhysicsPropOverride {
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
            namespace CColorCorrectionVolume {
                constexpr std::ptrdiff_t m_bEnabled = 0x960; // bool
                constexpr std::ptrdiff_t m_MaxWeight = 0x964; // float32
                constexpr std::ptrdiff_t m_FadeDuration = 0x968; // float32
                constexpr std::ptrdiff_t m_bStartDisabled = 0x96C; // bool
                constexpr std::ptrdiff_t m_Weight = 0x970; // float32
                constexpr std::ptrdiff_t m_lookupFilename = 0x974; // char[512]
                constexpr std::ptrdiff_t m_LastEnterWeight = 0xB74; // float32
                constexpr std::ptrdiff_t m_LastEnterTime = 0xB78; // GameTime_t
                constexpr std::ptrdiff_t m_LastExitWeight = 0xB7C; // float32
                constexpr std::ptrdiff_t m_LastExitTime = 0xB80; // GameTime_t
            }
            // Parent: CBaseButton
            // Field count: 0
            namespace CPhysicalButton {
            }
            // Parent: CEntitySubclassVDataBase
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPrecipitationVData {
                constexpr std::ptrdiff_t m_szParticlePrecipitationEffect = 0x28; // 
                constexpr std::ptrdiff_t m_flInnerDistance = 0x108; // float32
                constexpr std::ptrdiff_t m_nAttachType = 0x10C; // 
                constexpr std::ptrdiff_t m_bBatchSameVolumeType = 0x110; // bool
                constexpr std::ptrdiff_t m_nRTEnvCP = 0x114; // int32
                constexpr std::ptrdiff_t m_nRTEnvCPComponent = 0x118; // int32
                constexpr std::ptrdiff_t m_szModifier = 0x120; // CUtlString
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
            namespace CPointCommentaryNode {
                constexpr std::ptrdiff_t m_iszPreCommands = 0x9A8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszPostCommands = 0x9B0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszCommentaryFile = 0x9B8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszViewTarget = 0x9C0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hViewTarget = 0x9C8; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_hViewTargetAngles = 0x9CC; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_iszViewPosition = 0x9D0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hViewPosition = 0x9D8; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_hViewPositionMover = 0x9DC; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_bPreventMovement = 0x9E0; // bool
                constexpr std::ptrdiff_t m_bUnderCrosshair = 0x9E1; // bool
                constexpr std::ptrdiff_t m_bUnstoppable = 0x9E2; // bool
                constexpr std::ptrdiff_t m_flFinishedTime = 0x9E4; // GameTime_t
                constexpr std::ptrdiff_t m_vecFinishOrigin = 0x9E8; // Vector
                constexpr std::ptrdiff_t m_vecOriginalAngles = 0x9F4; // QAngle
                constexpr std::ptrdiff_t m_vecFinishAngles = 0xA00; // QAngle
                constexpr std::ptrdiff_t m_bPreventChangesWhileMoving = 0xA0C; // bool
                constexpr std::ptrdiff_t m_bDisabled = 0xA0D; // bool
                constexpr std::ptrdiff_t m_vecTeleportOrigin = 0xA10; // Vector
                constexpr std::ptrdiff_t m_flAbortedPlaybackAt = 0xA1C; // GameTime_t
                constexpr std::ptrdiff_t m_pOnCommentaryStarted = 0xA20; // CEntityIOOutput
                constexpr std::ptrdiff_t m_pOnCommentaryStopped = 0xA48; // CEntityIOOutput
                constexpr std::ptrdiff_t m_bActive = 0xA70; // bool
                constexpr std::ptrdiff_t m_flStartTime = 0xA74; // GameTime_t
                constexpr std::ptrdiff_t m_flStartTimeInCommentary = 0xA78; // float32
                constexpr std::ptrdiff_t m_iszTitle = 0xA80; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszSpeakers = 0xA88; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iNodeNumber = 0xA90; // int32
                constexpr std::ptrdiff_t m_iNodeNumberMax = 0xA94; // int32
                constexpr std::ptrdiff_t m_bListenedTo = 0xA98; // bool
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
            namespace CPointClientUIWorldPanel {
                constexpr std::ptrdiff_t m_bIgnoreInput = 0x940; // bool
                constexpr std::ptrdiff_t m_bLit = 0x941; // bool
                constexpr std::ptrdiff_t m_bFollowPlayerAcrossTeleport = 0x942; // bool
                constexpr std::ptrdiff_t m_flWidth = 0x944; // float32
                constexpr std::ptrdiff_t m_flHeight = 0x948; // float32
                constexpr std::ptrdiff_t m_flDPI = 0x94C; // float32
                constexpr std::ptrdiff_t m_flInteractDistance = 0x950; // float32
                constexpr std::ptrdiff_t m_flDepthOffset = 0x954; // float32
                constexpr std::ptrdiff_t m_unOwnerContext = 0x958; // uint32
                constexpr std::ptrdiff_t m_unHorizontalAlign = 0x95C; // uint32
                constexpr std::ptrdiff_t m_unVerticalAlign = 0x960; // uint32
                constexpr std::ptrdiff_t m_unOrientation = 0x964; // uint32
                constexpr std::ptrdiff_t m_bAllowInteractionFromAllSceneWorlds = 0x968; // bool
                constexpr std::ptrdiff_t m_vecCSSClasses = 0x970; // 
                constexpr std::ptrdiff_t m_bOpaque = 0x988; // bool
                constexpr std::ptrdiff_t m_bNoDepth = 0x989; // bool
                constexpr std::ptrdiff_t m_bRenderBackface = 0x98A; // bool
                constexpr std::ptrdiff_t m_bUseOffScreenIndicator = 0x98B; // bool
                constexpr std::ptrdiff_t m_bExcludeFromSaveGames = 0x98C; // bool
                constexpr std::ptrdiff_t m_bGrabbable = 0x98D; // bool
                constexpr std::ptrdiff_t m_bOnlyRenderToTexture = 0x98E; // bool
                constexpr std::ptrdiff_t m_bDisableMipGen = 0x98F; // bool
                constexpr std::ptrdiff_t m_nExplicitImageLayout = 0x990; // int32
            }
            // Parent: CBaseAnimGraph
            // Field count: 4
            namespace CBaseProp {
                constexpr std::ptrdiff_t m_bModelOverrodeBlockLOS = 0x9A8; // bool
                constexpr std::ptrdiff_t m_iShapeType = 0x9AC; // int32
                constexpr std::ptrdiff_t m_bConformToCollisionBounds = 0x9B0; // bool
                constexpr std::ptrdiff_t m_mPreferredCatchTransform = 0x9B4; // matrix3x4_t
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
            namespace CEnvSky {
                constexpr std::ptrdiff_t m_hSkyMaterial = 0x790; // CStrongHandle<InfoForResourceTypeIMaterial2>
                constexpr std::ptrdiff_t m_hSkyMaterialLightingOnly = 0x798; // CStrongHandle<InfoForResourceTypeIMaterial2>
                constexpr std::ptrdiff_t m_bStartDisabled = 0x7A0; // bool
                constexpr std::ptrdiff_t m_vTintColor = 0x7A1; // Color
                constexpr std::ptrdiff_t m_vTintColorLightingOnly = 0x7A5; // Color
                constexpr std::ptrdiff_t m_flBrightnessScale = 0x7AC; // float32
                constexpr std::ptrdiff_t m_nFogType = 0x7B0; // int32
                constexpr std::ptrdiff_t m_flFogMinStart = 0x7B4; // float32
                constexpr std::ptrdiff_t m_flFogMinEnd = 0x7B8; // float32
                constexpr std::ptrdiff_t m_flFogMaxStart = 0x7BC; // float32
                constexpr std::ptrdiff_t m_flFogMaxEnd = 0x7C0; // float32
                constexpr std::ptrdiff_t m_bEnabled = 0x7C4; // bool
            }
            // Parent: 
            // Field count: 1
            namespace CMarkupVolumeTagged_NavGame {
                constexpr std::ptrdiff_t m_bFloodFillAttribute = 0x7E8; // bool
            }
            // Parent: CBaseTrigger
            // Field count: 1
            namespace CBuyZone {
                constexpr std::ptrdiff_t m_LegacyTeamNum = 0x960; // int32
            }
            // Parent: CBaseCSGrenade
            // Field count: 0
            namespace CTripWireFire {
            }
            // Parent: CPointEntity
            // Field count: 5
            namespace CInfoDynamicShadowHint {
                constexpr std::ptrdiff_t m_bDisabled = 0x4E0; // bool
                constexpr std::ptrdiff_t m_flRange = 0x4E4; // float32
                constexpr std::ptrdiff_t m_nImportance = 0x4E8; // int32
                constexpr std::ptrdiff_t m_nLightChoice = 0x4EC; // int32
                constexpr std::ptrdiff_t m_hLight = 0x4F0; // CHandle<CBaseEntity>
            }
            // Parent: CBaseCSGrenadeProjectile
            // Field count: 3
            namespace CFlashbangProjectile {
                constexpr std::ptrdiff_t m_flTimeToDetonate = 0xB50; // float32
                constexpr std::ptrdiff_t m_numOpponentsHit = 0xB54; // uint8
                constexpr std::ptrdiff_t m_numTeammatesHit = 0xB55; // uint8
            }
            // Parent: CPointClientUIWorldPanel
            // Field count: 1
            //
            // Metadata:
            // NetworkVarNames:  ()
            namespace CPointClientUIWorldTextPanel {
                constexpr std::ptrdiff_t m_messageText = 0x998; // char[512]
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            namespace CWeaponSSG08 {
            }
            // Parent: CCSWeaponBase
            // Field count: 0
            namespace CBreachCharge {
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            namespace CWeaponUMP45 {
            }
            // Parent: CSprite
            // Field count: 0
            namespace CSpriteAlias_env_glow {
            }
            // Parent: CBaseToggle
            // Field count: 25
            //
            // Metadata:
            // NetworkVarNames: m_glowEntity (CHandle<CBaseModelEntity>)
            // NetworkVarNames: m_usable (bool)
            // NetworkVarNames: m_szDisplayText (string_t)
            namespace CBaseButton {
                constexpr std::ptrdiff_t m_angMoveEntitySpace = 0x810; // QAngle
                constexpr std::ptrdiff_t m_fStayPushed = 0x81C; // bool
                constexpr std::ptrdiff_t m_fRotating = 0x81D; // bool
                constexpr std::ptrdiff_t m_ls = 0x820; // locksound_t
                constexpr std::ptrdiff_t m_sUseSound = 0x840; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_sLockedSound = 0x848; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_sUnlockedSound = 0x850; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_sOverrideAnticipationName = 0x858; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_bLocked = 0x860; // bool
                constexpr std::ptrdiff_t m_bDisabled = 0x861; // bool
                constexpr std::ptrdiff_t m_flUseLockedTime = 0x864; // GameTime_t
                constexpr std::ptrdiff_t m_bSolidBsp = 0x868; // bool
                constexpr std::ptrdiff_t m_OnDamaged = 0x870; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnPressed = 0x898; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnUseLocked = 0x8C0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnIn = 0x8E8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnOut = 0x910; // CEntityIOOutput
                constexpr std::ptrdiff_t m_nState = 0x938; // int32
                constexpr std::ptrdiff_t m_hConstraint = 0x93C; // CEntityHandle
                constexpr std::ptrdiff_t m_hConstraintParent = 0x940; // CEntityHandle
                constexpr std::ptrdiff_t m_bForceNpcExclude = 0x944; // bool
                constexpr std::ptrdiff_t m_sGlowEntity = 0x948; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_glowEntity = 0x950; // CHandle<CBaseModelEntity>
                constexpr std::ptrdiff_t m_usable = 0x954; // bool
                constexpr std::ptrdiff_t m_szDisplayText = 0x958; // CUtlSymbolLarge
            }
            // Parent: CPredictedViewModel
            // Field count: 1
            //
            // Metadata:
            // NetworkVarNames: m_bShouldIgnoreOffsetAndAccuracy (bool)
            namespace CCSGOViewModel {
                constexpr std::ptrdiff_t m_bShouldIgnoreOffsetAndAccuracy = 0x9F0; // bool
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 3
            //
            // Metadata:
            // NetworkVarNames: m_flDisplayHealth (float)
            namespace CWeaponShield {
                constexpr std::ptrdiff_t m_flBulletDamageAbsorbed = 0xF90; // float32
                constexpr std::ptrdiff_t m_flLastBulletHitSoundTime = 0xF94; // GameTime_t
                constexpr std::ptrdiff_t m_flDisplayHealth = 0xF98; // float32
            }
            // Parent: CBaseProp
            // Field count: 33
            //
            // Metadata:
            // NetworkVarNames: m_CPropDataComponent (CPropDataComponent::Storage_t)
            // NetworkVarNames: m_noGhostCollision (bool)
            namespace CBreakableProp {
                constexpr std::ptrdiff_t m_CPropDataComponent = 0x9F0; // CPropDataComponent
                constexpr std::ptrdiff_t m_OnBreak = 0xA30; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnHealthChanged = 0xA58; // CEntityOutputTemplate<float32>
                constexpr std::ptrdiff_t m_OnTakeDamage = 0xA80; // CEntityIOOutput
                constexpr std::ptrdiff_t m_impactEnergyScale = 0xAA8; // float32
                constexpr std::ptrdiff_t m_iMinHealthDmg = 0xAAC; // int32
                constexpr std::ptrdiff_t m_preferredCarryAngles = 0xAB0; // QAngle
                constexpr std::ptrdiff_t m_flPressureDelay = 0xABC; // float32
                constexpr std::ptrdiff_t m_flDefBurstScale = 0xAC0; // float32
                constexpr std::ptrdiff_t m_vDefBurstOffset = 0xAC4; // Vector
                constexpr std::ptrdiff_t m_hBreaker = 0xAD0; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_PerformanceMode = 0xAD4; // PerformanceMode_t
                constexpr std::ptrdiff_t m_flPreventDamageBeforeTime = 0xAD8; // GameTime_t
                constexpr std::ptrdiff_t m_BreakableContentsType = 0xADC; // BreakableContentsType_t
                constexpr std::ptrdiff_t m_strBreakableContentsPropGroupOverride = 0xAE0; // CUtlString
                constexpr std::ptrdiff_t m_strBreakableContentsParticleOverride = 0xAE8; // CUtlString
                constexpr std::ptrdiff_t m_bHasBreakPiecesOrCommands = 0xAF0; // bool
                constexpr std::ptrdiff_t m_explodeDamage = 0xAF4; // float32
                constexpr std::ptrdiff_t m_explodeRadius = 0xAF8; // float32
                constexpr std::ptrdiff_t m_explosionDelay = 0xB00; // float32
                constexpr std::ptrdiff_t m_explosionBuildupSound = 0xB08; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_explosionCustomEffect = 0xB10; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_explosionCustomSound = 0xB18; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_explosionModifier = 0xB20; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hPhysicsAttacker = 0xB28; // CHandle<CBasePlayerPawn>
                constexpr std::ptrdiff_t m_flLastPhysicsInfluenceTime = 0xB2C; // GameTime_t
                constexpr std::ptrdiff_t m_bOriginalBlockLOS = 0xB30; // bool
                constexpr std::ptrdiff_t m_flDefaultFadeScale = 0xB34; // float32
                constexpr std::ptrdiff_t m_hLastAttacker = 0xB38; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_hFlareEnt = 0xB3C; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_bUsePuntSound = 0xB40; // bool
                constexpr std::ptrdiff_t m_iszPuntSound = 0xB48; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_noGhostCollision = 0xB50; // bool
            }
            // Parent: CBaseFlex
            // Field count: 9
            //
            // Metadata:
            // MNetworkExcludeByUserGroup
            // NetworkVarNames: m_hMyWearables (CHandle<CEconWearable>)
            namespace CBaseCombatCharacter {
                constexpr std::ptrdiff_t m_bForceServerRagdoll = 0xA38; // bool
                constexpr std::ptrdiff_t m_hMyWearables = 0xA40; // CNetworkUtlVectorBase<CHandle<CEconWearable>>
                constexpr std::ptrdiff_t m_impactEnergyScale = 0xA58; // float32
                constexpr std::ptrdiff_t m_bApplyStressDamage = 0xA5C; // bool
                constexpr std::ptrdiff_t m_iDamageCount = 0xAA0; // int32
                constexpr std::ptrdiff_t m_pVecRelationships = 0xAA8; // CUtlVector<RelationshipOverride_t>*
                constexpr std::ptrdiff_t m_strRelationships = 0xAB0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_eHull = 0xAB8; // Hull_t
                constexpr std::ptrdiff_t m_nNavHullIdx = 0xABC; // uint32
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
            namespace CInferno {
                constexpr std::ptrdiff_t m_firePositions = 0x7A0; // 
                constexpr std::ptrdiff_t m_fireParentPositions = 0xAA0; // 
                constexpr std::ptrdiff_t m_bFireIsBurning = 0xDA0; // 
                constexpr std::ptrdiff_t m_BurnNormal = 0xDE0; // 
                constexpr std::ptrdiff_t m_fireCount = 0x10E0; // int32
                constexpr std::ptrdiff_t m_nInfernoType = 0x10E4; // int32
                constexpr std::ptrdiff_t m_nFireEffectTickBegin = 0x10E8; // int32
                constexpr std::ptrdiff_t m_nFireLifetime = 0x10EC; // float32
                constexpr std::ptrdiff_t m_bInPostEffectTime = 0x10F0; // bool
                constexpr std::ptrdiff_t m_nFiresExtinguishCount = 0x10F4; // int32
                constexpr std::ptrdiff_t m_bWasCreatedInSmoke = 0x10F8; // bool
                constexpr std::ptrdiff_t m_extent = 0x1300; // Extent
                constexpr std::ptrdiff_t m_damageTimer = 0x1318; // CountdownTimer
                constexpr std::ptrdiff_t m_damageRampTimer = 0x1330; // CountdownTimer
                constexpr std::ptrdiff_t m_splashVelocity = 0x1348; // Vector
                constexpr std::ptrdiff_t m_InitialSplashVelocity = 0x1354; // Vector
                constexpr std::ptrdiff_t m_startPos = 0x1360; // Vector
                constexpr std::ptrdiff_t m_vecOriginalSpawnLocation = 0x136C; // Vector
                constexpr std::ptrdiff_t m_activeTimer = 0x1378; // IntervalTimer
                constexpr std::ptrdiff_t m_fireSpawnOffset = 0x1388; // int32
                constexpr std::ptrdiff_t m_nMaxFlames = 0x138C; // int32
                constexpr std::ptrdiff_t m_nSpreadCount = 0x1390; // int32
                constexpr std::ptrdiff_t m_BookkeepingTimer = 0x1398; // CountdownTimer
                constexpr std::ptrdiff_t m_NextSpreadTimer = 0x13B0; // CountdownTimer
                constexpr std::ptrdiff_t m_nSourceItemDefIndex = 0x13C8; // uint16
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            namespace CWeaponUSPSilencer {
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
            namespace CSprite {
                constexpr std::ptrdiff_t m_hSpriteMaterial = 0x790; // CStrongHandle<InfoForResourceTypeIMaterial2>
                constexpr std::ptrdiff_t m_hAttachedToEntity = 0x798; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_nAttachment = 0x79C; // 
                constexpr std::ptrdiff_t m_flSpriteFramerate = 0x7A0; // float32
                constexpr std::ptrdiff_t m_flFrame = 0x7A4; // float32
                constexpr std::ptrdiff_t m_flDieTime = 0x7A8; // GameTime_t
                constexpr std::ptrdiff_t m_nBrightness = 0x7B8; // uint32
                constexpr std::ptrdiff_t m_flBrightnessDuration = 0x7BC; // float32
                constexpr std::ptrdiff_t m_flSpriteScale = 0x7C0; // float32
                constexpr std::ptrdiff_t m_flScaleDuration = 0x7C4; // float32
                constexpr std::ptrdiff_t m_bWorldSpaceScale = 0x7C8; // bool
                constexpr std::ptrdiff_t m_flGlowProxySize = 0x7CC; // float32
                constexpr std::ptrdiff_t m_flHDRColorScale = 0x7D0; // float32
                constexpr std::ptrdiff_t m_flLastTime = 0x7D4; // GameTime_t
                constexpr std::ptrdiff_t m_flMaxFrame = 0x7D8; // float32
                constexpr std::ptrdiff_t m_flStartScale = 0x7DC; // float32
                constexpr std::ptrdiff_t m_flDestScale = 0x7E0; // float32
                constexpr std::ptrdiff_t m_flScaleTimeStart = 0x7E4; // GameTime_t
                constexpr std::ptrdiff_t m_nStartBrightness = 0x7E8; // int32
                constexpr std::ptrdiff_t m_nDestBrightness = 0x7EC; // int32
                constexpr std::ptrdiff_t m_flBrightnessTimeStart = 0x7F0; // GameTime_t
                constexpr std::ptrdiff_t m_nSpriteWidth = 0x7F4; // int32
                constexpr std::ptrdiff_t m_nSpriteHeight = 0x7F8; // int32
            }
            // Parent: CInfoDynamicShadowHint
            // Field count: 2
            namespace CInfoDynamicShadowHintBox {
                constexpr std::ptrdiff_t m_vBoxMins = 0x4F8; // Vector
                constexpr std::ptrdiff_t m_vBoxMaxs = 0x504; // Vector
            }
            // Parent: CBaseCSGrenade
            // Field count: 0
            namespace CFlashbang {
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            namespace CWeaponAug {
            }
            // Parent: CDynamicProp
            // Field count: 28
            //
            // Metadata:
            // NetworkVarNames: m_AttributeManager (CAttributeContainer)
            // NetworkVarNames: m_jumpedThisFrame (bool)
            // NetworkVarNames: m_leader (CHandle<CCSPlayerPawn>)
            namespace CChicken {
                constexpr std::ptrdiff_t m_AttributeManager = 0xC78; // CAttributeContainer
                constexpr std::ptrdiff_t m_updateTimer = 0xF40; // CountdownTimer
                constexpr std::ptrdiff_t m_stuckAnchor = 0xF58; // Vector
                constexpr std::ptrdiff_t m_stuckTimer = 0xF68; // CountdownTimer
                constexpr std::ptrdiff_t m_collisionStuckTimer = 0xF80; // CountdownTimer
                constexpr std::ptrdiff_t m_isOnGround = 0xF98; // bool
                constexpr std::ptrdiff_t m_vFallVelocity = 0xF9C; // Vector
                constexpr std::ptrdiff_t m_desiredActivity = 0xFA8; // ChickenActivity
                constexpr std::ptrdiff_t m_currentActivity = 0xFAC; // ChickenActivity
                constexpr std::ptrdiff_t m_activityTimer = 0xFB0; // CountdownTimer
                constexpr std::ptrdiff_t m_turnRate = 0xFC8; // float32
                constexpr std::ptrdiff_t m_fleeFrom = 0xFCC; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_moveRateThrottleTimer = 0xFD0; // CountdownTimer
                constexpr std::ptrdiff_t m_startleTimer = 0xFE8; // CountdownTimer
                constexpr std::ptrdiff_t m_vocalizeTimer = 0x1000; // CountdownTimer
                constexpr std::ptrdiff_t m_flWhenZombified = 0x1018; // GameTime_t
                constexpr std::ptrdiff_t m_jumpedThisFrame = 0x101C; // bool
                constexpr std::ptrdiff_t m_leader = 0x1020; // CHandle<CCSPlayerPawn>
                constexpr std::ptrdiff_t m_reuseTimer = 0x1038; // CountdownTimer
                constexpr std::ptrdiff_t m_hasBeenUsed = 0x1050; // bool
                constexpr std::ptrdiff_t m_jumpTimer = 0x1058; // CountdownTimer
                constexpr std::ptrdiff_t m_flLastJumpTime = 0x1070; // float32
                constexpr std::ptrdiff_t m_bInJump = 0x1074; // bool
                constexpr std::ptrdiff_t m_repathTimer = 0x3080; // CountdownTimer
                constexpr std::ptrdiff_t m_vecPathGoal = 0x3118; // Vector
                constexpr std::ptrdiff_t m_flActiveFollowStartTime = 0x3124; // GameTime_t
                constexpr std::ptrdiff_t m_followMinuteTimer = 0x3128; // CountdownTimer
                constexpr std::ptrdiff_t m_BlockDirectionTimer = 0x3148; // CountdownTimer
            }
            // Parent: CBaseTrigger
            // Field count: 7
            namespace CChangeLevel {
                constexpr std::ptrdiff_t m_sMapName = 0x960; // CUtlString
                constexpr std::ptrdiff_t m_sLandmarkName = 0x968; // CUtlString
                constexpr std::ptrdiff_t m_OnChangeLevel = 0x970; // CEntityIOOutput
                constexpr std::ptrdiff_t m_bTouched = 0x998; // bool
                constexpr std::ptrdiff_t m_bNoTouch = 0x999; // bool
                constexpr std::ptrdiff_t m_bNewChapter = 0x99A; // bool
                constexpr std::ptrdiff_t m_bOnChangeLevelFired = 0x99B; // bool
            }
            // Parent: CBaseTrigger
            // Field count: 14
            namespace CTriggerLerpObject {
                constexpr std::ptrdiff_t m_iszLerpTarget = 0x960; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hLerpTarget = 0x968; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_iszLerpTargetAttachment = 0x970; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hLerpTargetAttachment = 0x978; // 
                constexpr std::ptrdiff_t m_flLerpDuration = 0x97C; // float32
                constexpr std::ptrdiff_t m_bLerpRestoreMoveType = 0x980; // bool
                constexpr std::ptrdiff_t m_bSingleLerpObject = 0x981; // bool
                constexpr std::ptrdiff_t m_vecLerpingObjects = 0x988; // 
                constexpr std::ptrdiff_t m_iszLerpEffect = 0x9A0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszLerpSound = 0x9A8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_bAttachTouchingObject = 0x9B0; // bool
                constexpr std::ptrdiff_t m_hEntityToWaitForDisconnect = 0x9B4; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_OnLerpStarted = 0x9B8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnLerpFinished = 0x9E0; // CEntityIOOutput
            }
            // Parent: CBaseToggle
            // Field count: 12
            //
            // Metadata:
            // MNetworkIncludeByName
            // NetworkVarNames:  ()
            // NetworkVarNames:  ()
            namespace CBaseTrigger {
                constexpr std::ptrdiff_t m_bDisabled = 0x810; // bool
                constexpr std::ptrdiff_t m_iFilterName = 0x818; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hFilter = 0x820; // CHandle<CBaseFilter>
                constexpr std::ptrdiff_t m_OnStartTouch = 0x828; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnStartTouchAll = 0x850; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnEndTouch = 0x878; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnEndTouchAll = 0x8A0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnTouching = 0x8C8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnTouchingEachEntity = 0x8F0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnNotTouching = 0x918; // CEntityIOOutput
                constexpr std::ptrdiff_t m_hTouchingEntities = 0x940; // CUtlVector<CHandle<CBaseEntity>>
                constexpr std::ptrdiff_t m_bClientSidePredicted = 0x958; // bool
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
            namespace CEconEntity {
                constexpr std::ptrdiff_t m_AttributeManager = 0xA48; // CAttributeContainer
                constexpr std::ptrdiff_t m_OriginalOwnerXuidLow = 0xD10; // uint32
                constexpr std::ptrdiff_t m_OriginalOwnerXuidHigh = 0xD14; // uint32
                constexpr std::ptrdiff_t m_nFallbackPaintKit = 0xD18; // int32
                constexpr std::ptrdiff_t m_nFallbackSeed = 0xD1C; // int32
                constexpr std::ptrdiff_t m_flFallbackWear = 0xD20; // float32
                constexpr std::ptrdiff_t m_nFallbackStatTrak = 0xD24; // int32
                constexpr std::ptrdiff_t m_hOldProvidee = 0xD28; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_iOldOwnerClass = 0xD2C; // int32
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
            namespace CTriggerPhysics {
                constexpr std::ptrdiff_t m_gravityScale = 0x970; // float32
                constexpr std::ptrdiff_t m_linearLimit = 0x974; // float32
                constexpr std::ptrdiff_t m_linearDamping = 0x978; // float32
                constexpr std::ptrdiff_t m_angularLimit = 0x97C; // float32
                constexpr std::ptrdiff_t m_angularDamping = 0x980; // float32
                constexpr std::ptrdiff_t m_linearForce = 0x984; // float32
                constexpr std::ptrdiff_t m_flFrequency = 0x988; // float32
                constexpr std::ptrdiff_t m_flDampingRatio = 0x98C; // float32
                constexpr std::ptrdiff_t m_vecLinearForcePointAt = 0x990; // Vector
                constexpr std::ptrdiff_t m_bCollapseToForcePoint = 0x99C; // bool
                constexpr std::ptrdiff_t m_vecLinearForcePointAtWorld = 0x9A0; // Vector
                constexpr std::ptrdiff_t m_vecLinearForceDirection = 0x9AC; // Vector
                constexpr std::ptrdiff_t m_bConvertToDebrisWhenPossible = 0x9B8; // bool
            }
            // Parent: CBaseModelEntity
            // Field count: 26
            namespace CFuncShatterglass {
                constexpr std::ptrdiff_t m_matPanelTransform = 0x790; // matrix3x4_t
                constexpr std::ptrdiff_t m_matPanelTransformWsTemp = 0x7C0; // matrix3x4_t
                constexpr std::ptrdiff_t m_vecShatterGlassShards = 0x7F0; // CUtlVector<uint32>
                constexpr std::ptrdiff_t m_PanelSize = 0x808; // Vector2D
                constexpr std::ptrdiff_t m_flLastShatterSoundEmitTime = 0x810; // GameTime_t
                constexpr std::ptrdiff_t m_flLastCleanupTime = 0x814; // GameTime_t
                constexpr std::ptrdiff_t m_flInitAtTime = 0x818; // GameTime_t
                constexpr std::ptrdiff_t m_flGlassThickness = 0x81C; // float32
                constexpr std::ptrdiff_t m_flSpawnInvulnerability = 0x820; // float32
                constexpr std::ptrdiff_t m_bBreakSilent = 0x824; // bool
                constexpr std::ptrdiff_t m_bBreakShardless = 0x825; // bool
                constexpr std::ptrdiff_t m_bBroken = 0x826; // bool
                constexpr std::ptrdiff_t m_bGlassNavIgnore = 0x827; // bool
                constexpr std::ptrdiff_t m_bGlassInFrame = 0x828; // bool
                constexpr std::ptrdiff_t m_bStartBroken = 0x829; // bool
                constexpr std::ptrdiff_t m_iInitialDamageType = 0x82A; // uint8
                constexpr std::ptrdiff_t m_szDamagePositioningEntityName01 = 0x830; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_szDamagePositioningEntityName02 = 0x838; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_szDamagePositioningEntityName03 = 0x840; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_szDamagePositioningEntityName04 = 0x848; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_vInitialDamagePositions = 0x850; // 
                constexpr std::ptrdiff_t m_vExtraDamagePositions = 0x868; // 
                constexpr std::ptrdiff_t m_vInitialPanelVertices = 0x880; // 
                constexpr std::ptrdiff_t m_OnBroken = 0x898; // CEntityIOOutput
                constexpr std::ptrdiff_t m_iSurfaceType = 0x8C0; // uint8
                constexpr std::ptrdiff_t m_hMaterialDamageBase = 0x8C8; // CStrongHandle<InfoForResourceTypeIMaterial2>
            }
            // Parent: CBaseButton
            // Field count: 0
            namespace CRotButton {
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            namespace CWeaponHKP2000 {
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
            namespace CPlantedC4 {
                constexpr std::ptrdiff_t m_bBombTicking = 0x9B0; // bool
                constexpr std::ptrdiff_t m_flC4Blow = 0x9B4; // GameTime_t
                constexpr std::ptrdiff_t m_nBombSite = 0x9B8; // int32
                constexpr std::ptrdiff_t m_nSourceSoundscapeHash = 0x9BC; // int32
                constexpr std::ptrdiff_t m_AttributeManager = 0x9C0; // CAttributeContainer
                constexpr std::ptrdiff_t m_OnBombDefused = 0xC88; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnBombBeginDefuse = 0xCB0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnBombDefuseAborted = 0xCD8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_bCannotBeDefused = 0xD00; // bool
                constexpr std::ptrdiff_t m_entitySpottedState = 0xD08; // EntitySpottedState_t
                constexpr std::ptrdiff_t m_nSpotRules = 0xD20; // int32
                constexpr std::ptrdiff_t m_bTrainingPlacedByPlayer = 0xD24; // bool
                constexpr std::ptrdiff_t m_bHasExploded = 0xD25; // bool
                constexpr std::ptrdiff_t m_flTimerLength = 0xD28; // float32
                constexpr std::ptrdiff_t m_bBeingDefused = 0xD2C; // bool
                constexpr std::ptrdiff_t m_fLastDefuseTime = 0xD34; // GameTime_t
                constexpr std::ptrdiff_t m_flDefuseLength = 0xD3C; // float32
                constexpr std::ptrdiff_t m_flDefuseCountDown = 0xD40; // GameTime_t
                constexpr std::ptrdiff_t m_bBombDefused = 0xD44; // bool
                constexpr std::ptrdiff_t m_hBombDefuser = 0xD48; // CHandle<CCSPlayerPawn>
                constexpr std::ptrdiff_t m_hControlPanel = 0xD4C; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_iProgressBarTime = 0xD50; // int32
                constexpr std::ptrdiff_t m_bVoiceAlertFired = 0xD54; // bool
                constexpr std::ptrdiff_t m_bVoiceAlertPlayed = 0xD55; // bool[4]
                constexpr std::ptrdiff_t m_flNextBotBeepTime = 0xD5C; // GameTime_t
                constexpr std::ptrdiff_t m_angCatchUpToPlayerEye = 0xD64; // QAngle
                constexpr std::ptrdiff_t m_flLastSpinDetectionTime = 0xD70; // GameTime_t
            }
            // Parent: CBaseClientUIEntity
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames:  ()
            namespace CPointClientUIDialog {
                constexpr std::ptrdiff_t m_hActivator = 0x940; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_bStartEnabled = 0x944; // bool
            }
            // Parent: CCSWeaponBase
            // Field count: 0
            namespace CWeaponNOVA {
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames: m_fFireTime (GameTime_t)
            namespace CWeaponTaser {
                constexpr std::ptrdiff_t m_fFireTime = 0xF90; // GameTime_t
                constexpr std::ptrdiff_t m_nLastAttackTick = 0xF94; // int32
            }
            // Parent: CBaseAnimGraph
            // Field count: 0
            namespace CWaterBullet {
            }
            // Parent: CPointEntity
            // Field count: 6
            namespace CMessage {
                constexpr std::ptrdiff_t m_iszMessage = 0x4E0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_MessageVolume = 0x4E8; // float32
                constexpr std::ptrdiff_t m_MessageAttenuation = 0x4EC; // int32
                constexpr std::ptrdiff_t m_Radius = 0x4F0; // float32
                constexpr std::ptrdiff_t m_sNoise = 0x4F8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_OnShowMessage = 0x500; // CEntityIOOutput
            }
            // Parent: CBaseModelEntity
            // Field count: 15
            //
            // Metadata:
            // NetworkVarNames:  ()
            namespace CBreakable {
                constexpr std::ptrdiff_t m_CPropDataComponent = 0x798; // CPropDataComponent
                constexpr std::ptrdiff_t m_Material = 0x7D8; // Materials
                constexpr std::ptrdiff_t m_hBreaker = 0x7DC; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_Explosion = 0x7E0; // Explosions
                constexpr std::ptrdiff_t m_iszSpawnObject = 0x7E8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_flPressureDelay = 0x7F0; // float32
                constexpr std::ptrdiff_t m_iMinHealthDmg = 0x7F4; // int32
                constexpr std::ptrdiff_t m_iszPropData = 0x7F8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_impactEnergyScale = 0x800; // float32
                constexpr std::ptrdiff_t m_nOverrideBlockLOS = 0x804; // EOverrideBlockLOS_t
                constexpr std::ptrdiff_t m_OnBreak = 0x808; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnHealthChanged = 0x830; // CEntityOutputTemplate<float32>
                constexpr std::ptrdiff_t m_PerformanceMode = 0x858; // PerformanceMode_t
                constexpr std::ptrdiff_t m_hPhysicsAttacker = 0x85C; // CHandle<CBasePlayerPawn>
                constexpr std::ptrdiff_t m_flLastPhysicsInfluenceTime = 0x860; // GameTime_t
            }
            // Parent: CBaseModelEntity
            // Field count: 16
            namespace CBaseToggle {
                constexpr std::ptrdiff_t m_toggle_state = 0x790; // TOGGLE_STATE
                constexpr std::ptrdiff_t m_flMoveDistance = 0x794; // float32
                constexpr std::ptrdiff_t m_flWait = 0x798; // float32
                constexpr std::ptrdiff_t m_flLip = 0x79C; // float32
                constexpr std::ptrdiff_t m_bAlwaysFireBlockedOutputs = 0x7A0; // bool
                constexpr std::ptrdiff_t m_vecPosition1 = 0x7A4; // Vector
                constexpr std::ptrdiff_t m_vecPosition2 = 0x7B0; // Vector
                constexpr std::ptrdiff_t m_vecMoveAng = 0x7BC; // QAngle
                constexpr std::ptrdiff_t m_vecAngle1 = 0x7C8; // QAngle
                constexpr std::ptrdiff_t m_vecAngle2 = 0x7D4; // QAngle
                constexpr std::ptrdiff_t m_flHeight = 0x7E0; // float32
                constexpr std::ptrdiff_t m_hActivator = 0x7E4; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_vecFinalDest = 0x7E8; // Vector
                constexpr std::ptrdiff_t m_vecFinalAngle = 0x7F4; // QAngle
                constexpr std::ptrdiff_t m_movementType = 0x800; // int32
                constexpr std::ptrdiff_t m_sMaster = 0x808; // CUtlSymbolLarge
            }
            // Parent: CRotButton
            // Field count: 14
            namespace CMomentaryRotButton {
                constexpr std::ptrdiff_t m_Position = 0x960; // CEntityOutputTemplate<float32>
                constexpr std::ptrdiff_t m_OnUnpressed = 0x988; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnFullyOpen = 0x9B0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnFullyClosed = 0x9D8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnReachedPosition = 0xA00; // CEntityIOOutput
                constexpr std::ptrdiff_t m_lastUsed = 0xA28; // int32
                constexpr std::ptrdiff_t m_start = 0xA2C; // QAngle
                constexpr std::ptrdiff_t m_end = 0xA38; // QAngle
                constexpr std::ptrdiff_t m_IdealYaw = 0xA44; // float32
                constexpr std::ptrdiff_t m_sNoise = 0xA48; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_bUpdateTarget = 0xA50; // bool
                constexpr std::ptrdiff_t m_direction = 0xA54; // int32
                constexpr std::ptrdiff_t m_returnSpeed = 0xA58; // float32
                constexpr std::ptrdiff_t m_flStartPosition = 0xA5C; // float32
            }
            // Parent: 
            // Field count: 2
            namespace CGameText {
                constexpr std::ptrdiff_t m_iszMessage = 0x7A0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_textParms = 0x7A8; // hudtextparms_t
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            namespace CWeaponMP5SD {
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
            namespace CTextureBasedAnimatable {
                constexpr std::ptrdiff_t m_bLoop = 0x790; // bool
                constexpr std::ptrdiff_t m_flFPS = 0x794; // float32
                constexpr std::ptrdiff_t m_hPositionKeys = 0x798; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_hRotationKeys = 0x7A0; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_vAnimationBoundsMin = 0x7A8; // Vector
                constexpr std::ptrdiff_t m_vAnimationBoundsMax = 0x7B4; // Vector
                constexpr std::ptrdiff_t m_flStartTime = 0x7C0; // float32
                constexpr std::ptrdiff_t m_flStartFrame = 0x7C4; // float32
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            namespace CWeaponFamas {
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
            namespace CInfoOffscreenPanoramaTexture {
                constexpr std::ptrdiff_t m_bDisabled = 0x4E0; // bool
                constexpr std::ptrdiff_t m_nResolutionX = 0x4E4; // int32
                constexpr std::ptrdiff_t m_nResolutionY = 0x4E8; // int32
                constexpr std::ptrdiff_t m_szLayoutFileName = 0x4F0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_RenderAttrName = 0x4F8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_TargetEntities = 0x500; // CNetworkUtlVectorBase<CHandle<CBaseModelEntity>>
                constexpr std::ptrdiff_t m_nTargetChangeCount = 0x518; // int32
                constexpr std::ptrdiff_t m_vecCSSClasses = 0x520; // 
                constexpr std::ptrdiff_t m_szTargetsName = 0x538; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_AdditionalTargetEntities = 0x540; // 
            }
            // Parent: CCSWeaponBase
            // Field count: 9
            //
            // Metadata:
            // NetworkVarNames: m_zoomLevel (int)
            // NetworkVarNames: m_iBurstShotsRemaining (int)
            // NetworkVarNames: m_bNeedsBoltAction (bool)
            namespace CCSWeaponBaseGun {
                constexpr std::ptrdiff_t m_zoomLevel = 0xF70; // int32
                constexpr std::ptrdiff_t m_iBurstShotsRemaining = 0xF74; // int32
                constexpr std::ptrdiff_t m_silencedModelIndex = 0xF80; // int32
                constexpr std::ptrdiff_t m_inPrecache = 0xF84; // bool
                constexpr std::ptrdiff_t m_bNeedsBoltAction = 0xF85; // bool
                constexpr std::ptrdiff_t m_bSkillReloadAvailable = 0xF86; // bool
                constexpr std::ptrdiff_t m_bSkillReloadLiftedReloadKey = 0xF87; // bool
                constexpr std::ptrdiff_t m_bSkillBoltInterruptAvailable = 0xF88; // bool
                constexpr std::ptrdiff_t m_bSkillBoltLiftedFireKey = 0xF89; // bool
            }
            // Parent: CBaseToggle
            // Field count: 3
            namespace CGunTarget {
                constexpr std::ptrdiff_t m_on = 0x810; // bool
                constexpr std::ptrdiff_t m_hTargetEnt = 0x814; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_OnDeath = 0x818; // CEntityIOOutput
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            namespace CWeaponM4A1Silencer {
            }
            // Parent: 
            // Field count: 1
            namespace CScriptNavBlocker {
                constexpr std::ptrdiff_t m_vExtent = 0x7A0; // Vector
            }
            // Parent: CBaseAnimGraph
            // Field count: 1
            namespace CConstraintAnchor {
                constexpr std::ptrdiff_t m_massScale = 0x9A8; // float32
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            namespace CWeaponTec9 {
            }
            // Parent: 
            // Field count: 0
            namespace CMarkupVolumeTagged_Nav {
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            namespace CWeaponCZ75a {
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            namespace CWeaponP250 {
            }
            // Parent: CBaseAnimGraph
            // Field count: 7
            //
            // Metadata:
            // NetworkVarNames: m_flexWeight (float32)
            // NetworkVarNames: m_vLookTargetPosition (Vector)
            // NetworkVarNames: m_blinktoggle (bool)
            namespace CBaseFlex {
                constexpr std::ptrdiff_t m_flexWeight = 0x9A8; // CNetworkUtlVectorBase<float32>
                constexpr std::ptrdiff_t m_vLookTargetPosition = 0x9C0; // Vector
                constexpr std::ptrdiff_t m_blinktoggle = 0x9CC; // bool
                constexpr std::ptrdiff_t m_flAllowResponsesEndTime = 0xA20; // GameTime_t
                constexpr std::ptrdiff_t m_flLastFlexAnimationTime = 0xA24; // GameTime_t
                constexpr std::ptrdiff_t m_nNextSceneEventId = 0xA28; // SceneEventId_t
                constexpr std::ptrdiff_t m_bUpdateLayerPriorities = 0xA2C; // bool
            }
            // Parent: CBasePlayerWeaponVData
            // Field count: 92
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertySuppressBaseClassField
            // MPropertySuppressBaseClassField
            namespace CCSWeaponBaseVData {
                constexpr std::ptrdiff_t m_WeaponType = 0x348; // CSWeaponType
                constexpr std::ptrdiff_t m_WeaponCategory = 0x34C; // CSWeaponCategory
                constexpr std::ptrdiff_t m_szViewModel = 0x350; // 
                constexpr std::ptrdiff_t m_szPlayerModel = 0x430; // 
                constexpr std::ptrdiff_t m_szWorldDroppedModel = 0x510; // 
                constexpr std::ptrdiff_t m_szAimsightLensMaskModel = 0x5F0; // 
                constexpr std::ptrdiff_t m_szMagazineModel = 0x6D0; // 
                constexpr std::ptrdiff_t m_szHeatEffect = 0x7B0; // 
                constexpr std::ptrdiff_t m_szEjectBrassEffect = 0x890; // 
                constexpr std::ptrdiff_t m_szMuzzleFlashParticleAlt = 0x970; // 
                constexpr std::ptrdiff_t m_szMuzzleFlashThirdPersonParticle = 0xA50; // 
                constexpr std::ptrdiff_t m_szMuzzleFlashThirdPersonParticleAlt = 0xB30; // 
                constexpr std::ptrdiff_t m_szTracerParticle = 0xC10; // 
                constexpr std::ptrdiff_t m_GearSlot = 0xCF0; // gear_slot_t
                constexpr std::ptrdiff_t m_GearSlotPosition = 0xCF4; // int32
                constexpr std::ptrdiff_t m_DefaultLoadoutSlot = 0xCF8; // loadout_slot_t
                constexpr std::ptrdiff_t m_sWrongTeamMsg = 0xD00; // CUtlString
                constexpr std::ptrdiff_t m_nPrice = 0xD08; // int32
                constexpr std::ptrdiff_t m_nKillAward = 0xD0C; // int32
                constexpr std::ptrdiff_t m_nPrimaryReserveAmmoMax = 0xD10; // int32
                constexpr std::ptrdiff_t m_nSecondaryReserveAmmoMax = 0xD14; // int32
                constexpr std::ptrdiff_t m_bMeleeWeapon = 0xD18; // bool
                constexpr std::ptrdiff_t m_bHasBurstMode = 0xD19; // bool
                constexpr std::ptrdiff_t m_bIsRevolver = 0xD1A; // bool
                constexpr std::ptrdiff_t m_bCannotShootUnderwater = 0xD1B; // bool
                constexpr std::ptrdiff_t m_szName = 0xD20; // CGlobalSymbol
                constexpr std::ptrdiff_t m_szAnimExtension = 0xD28; // CUtlString
                constexpr std::ptrdiff_t m_eSilencerType = 0xD30; // CSWeaponSilencerType
                constexpr std::ptrdiff_t m_nCrosshairMinDistance = 0xD34; // int32
                constexpr std::ptrdiff_t m_nCrosshairDeltaDistance = 0xD38; // int32
                constexpr std::ptrdiff_t m_bIsFullAuto = 0xD3C; // bool
                constexpr std::ptrdiff_t m_nNumBullets = 0xD40; // int32
                constexpr std::ptrdiff_t m_flCycleTime = 0xD44; // CFiringModeFloat
                constexpr std::ptrdiff_t m_flMaxSpeed = 0xD4C; // CFiringModeFloat
                constexpr std::ptrdiff_t m_flSpread = 0xD54; // CFiringModeFloat
                constexpr std::ptrdiff_t m_flInaccuracyCrouch = 0xD5C; // CFiringModeFloat
                constexpr std::ptrdiff_t m_flInaccuracyStand = 0xD64; // CFiringModeFloat
                constexpr std::ptrdiff_t m_flInaccuracyJump = 0xD6C; // CFiringModeFloat
                constexpr std::ptrdiff_t m_flInaccuracyLand = 0xD74; // CFiringModeFloat
                constexpr std::ptrdiff_t m_flInaccuracyLadder = 0xD7C; // CFiringModeFloat
                constexpr std::ptrdiff_t m_flInaccuracyFire = 0xD84; // CFiringModeFloat
                constexpr std::ptrdiff_t m_flInaccuracyMove = 0xD8C; // CFiringModeFloat
                constexpr std::ptrdiff_t m_flRecoilAngle = 0xD94; // CFiringModeFloat
                constexpr std::ptrdiff_t m_flRecoilAngleVariance = 0xD9C; // CFiringModeFloat
                constexpr std::ptrdiff_t m_flRecoilMagnitude = 0xDA4; // CFiringModeFloat
                constexpr std::ptrdiff_t m_flRecoilMagnitudeVariance = 0xDAC; // CFiringModeFloat
                constexpr std::ptrdiff_t m_nTracerFrequency = 0xDB4; // CFiringModeInt
                constexpr std::ptrdiff_t m_flInaccuracyJumpInitial = 0xDBC; // float32
                constexpr std::ptrdiff_t m_flInaccuracyJumpApex = 0xDC0; // float32
                constexpr std::ptrdiff_t m_flInaccuracyReload = 0xDC4; // float32
                constexpr std::ptrdiff_t m_nRecoilSeed = 0xDC8; // int32
                constexpr std::ptrdiff_t m_nSpreadSeed = 0xDCC; // int32
                constexpr std::ptrdiff_t m_flTimeToIdleAfterFire = 0xDD0; // float32
                constexpr std::ptrdiff_t m_flIdleInterval = 0xDD4; // float32
                constexpr std::ptrdiff_t m_flAttackMovespeedFactor = 0xDD8; // float32
                constexpr std::ptrdiff_t m_flHeatPerShot = 0xDDC; // float32
                constexpr std::ptrdiff_t m_flInaccuracyPitchShift = 0xDE0; // float32
                constexpr std::ptrdiff_t m_flInaccuracyAltSoundThreshold = 0xDE4; // float32
                constexpr std::ptrdiff_t m_flBotAudibleRange = 0xDE8; // float32
                constexpr std::ptrdiff_t m_szUseRadioSubtitle = 0xDF0; // CUtlString
                constexpr std::ptrdiff_t m_bUnzoomsAfterShot = 0xDF8; // bool
                constexpr std::ptrdiff_t m_bHideViewModelWhenZoomed = 0xDF9; // bool
                constexpr std::ptrdiff_t m_nZoomLevels = 0xDFC; // int32
                constexpr std::ptrdiff_t m_nZoomFOV1 = 0xE00; // int32
                constexpr std::ptrdiff_t m_nZoomFOV2 = 0xE04; // int32
                constexpr std::ptrdiff_t m_flZoomTime0 = 0xE08; // float32
                constexpr std::ptrdiff_t m_flZoomTime1 = 0xE0C; // float32
                constexpr std::ptrdiff_t m_flZoomTime2 = 0xE10; // float32
                constexpr std::ptrdiff_t m_flIronSightPullUpSpeed = 0xE14; // float32
                constexpr std::ptrdiff_t m_flIronSightPutDownSpeed = 0xE18; // float32
                constexpr std::ptrdiff_t m_flIronSightFOV = 0xE1C; // float32
                constexpr std::ptrdiff_t m_flIronSightPivotForward = 0xE20; // float32
                constexpr std::ptrdiff_t m_flIronSightLooseness = 0xE24; // float32
                constexpr std::ptrdiff_t m_angPivotAngle = 0xE28; // QAngle
                constexpr std::ptrdiff_t m_vecIronSightEyePos = 0xE34; // Vector
                constexpr std::ptrdiff_t m_nDamage = 0xE40; // int32
                constexpr std::ptrdiff_t m_flHeadshotMultiplier = 0xE44; // float32
                constexpr std::ptrdiff_t m_flArmorRatio = 0xE48; // float32
                constexpr std::ptrdiff_t m_flPenetration = 0xE4C; // float32
                constexpr std::ptrdiff_t m_flRange = 0xE50; // float32
                constexpr std::ptrdiff_t m_flRangeModifier = 0xE54; // float32
                constexpr std::ptrdiff_t m_flFlinchVelocityModifierLarge = 0xE58; // float32
                constexpr std::ptrdiff_t m_flFlinchVelocityModifierSmall = 0xE5C; // float32
                constexpr std::ptrdiff_t m_flRecoveryTimeCrouch = 0xE60; // float32
                constexpr std::ptrdiff_t m_flRecoveryTimeStand = 0xE64; // float32
                constexpr std::ptrdiff_t m_flRecoveryTimeCrouchFinal = 0xE68; // float32
                constexpr std::ptrdiff_t m_flRecoveryTimeStandFinal = 0xE6C; // float32
                constexpr std::ptrdiff_t m_nRecoveryTransitionStartBullet = 0xE70; // int32
                constexpr std::ptrdiff_t m_nRecoveryTransitionEndBullet = 0xE74; // int32
                constexpr std::ptrdiff_t m_flThrowVelocity = 0xE78; // float32
                constexpr std::ptrdiff_t m_vSmokeColor = 0xE7C; // Vector
                constexpr std::ptrdiff_t m_szAnimClass = 0xE88; // CGlobalSymbol
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
            namespace CCSPlayerPawn {
                constexpr std::ptrdiff_t m_pBulletServices = 0xDD0; // 
                constexpr std::ptrdiff_t m_pHostageServices = 0xDD8; // 
                constexpr std::ptrdiff_t m_pBuyServices = 0x0; // 
            }
            // Parent: CBaseGrenade
            // Field count: 0
            namespace CBumpMineProjectile {
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
            namespace CCSPlayerController {
                constexpr std::ptrdiff_t m_pInGameMoneyServices = 0x788; // 
                constexpr std::ptrdiff_t m_pInventoryServices = 0x790; // 
                constexpr std::ptrdiff_t m_pActionTrackingServices = 0x798; // 
                constexpr std::ptrdiff_t m_pDamageServices = 0x7A0; // 
                constexpr std::ptrdiff_t m_iPing = 0x7A8; // uint32
                constexpr std::ptrdiff_t m_bHasCommunicationAbuseMute = 0x7AC; // bool
                constexpr std::ptrdiff_t m_szCrosshairCodes = 0x7B0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iPendingTeamNum = 0x7B8; // uint8
                constexpr std::ptrdiff_t m_flForceTeamTime = 0x7BC; // GameTime_t
                constexpr std::ptrdiff_t m_iCompTeammateColor = 0x7C0; // int32
                constexpr std::ptrdiff_t m_bEverPlayedOnTeam = 0x7C4; // bool
                constexpr std::ptrdiff_t m_bAttemptedToGetColor = 0x7C5; // bool
                constexpr std::ptrdiff_t m_iTeammatePreferredColor = 0x7C8; // int32
                constexpr std::ptrdiff_t m_bTeamChanged = 0x7CC; // bool
                constexpr std::ptrdiff_t m_bInSwitchTeam = 0x7CD; // bool
                constexpr std::ptrdiff_t m_bHasSeenJoinGame = 0x7CE; // bool
                constexpr std::ptrdiff_t m_bJustBecameSpectator = 0x7CF; // bool
                constexpr std::ptrdiff_t m_bSwitchTeamsOnNextRoundReset = 0x7D0; // bool
                constexpr std::ptrdiff_t m_bRemoveAllItemsOnNextRoundReset = 0x7D1; // bool
                constexpr std::ptrdiff_t m_flLastJoinTeamTime = 0x7D4; // GameTime_t
                constexpr std::ptrdiff_t m_szClan = 0x7D8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_szClanName = 0x7E0; // 
                constexpr std::ptrdiff_t m_iCoachingTeam = 0x800; // int32
                constexpr std::ptrdiff_t m_nPlayerDominated = 0x808; // uint64
                constexpr std::ptrdiff_t m_nPlayerDominatingMe = 0x810; // uint64
                constexpr std::ptrdiff_t m_iCompetitiveRanking = 0x818; // int32
                constexpr std::ptrdiff_t m_iCompetitiveWins = 0x81C; // int32
                constexpr std::ptrdiff_t m_iCompetitiveRankType = 0x820; // int8
                constexpr std::ptrdiff_t m_iCompetitiveRankingPredicted_Win = 0x824; // int32
                constexpr std::ptrdiff_t m_iCompetitiveRankingPredicted_Loss = 0x828; // int32
                constexpr std::ptrdiff_t m_iCompetitiveRankingPredicted_Tie = 0x82C; // int32
                constexpr std::ptrdiff_t m_nEndMatchNextMapVote = 0x830; // int32
                constexpr std::ptrdiff_t m_unActiveQuestId = 0x834; // uint16
                constexpr std::ptrdiff_t m_nQuestProgressReason = 0x838; // QuestProgress::Reason
                constexpr std::ptrdiff_t m_unPlayerTvControlFlags = 0x83C; // uint32
                constexpr std::ptrdiff_t m_iDraftIndex = 0x868; // int32
                constexpr std::ptrdiff_t m_msQueuedModeDisconnectionTimestamp = 0x86C; // uint32
                constexpr std::ptrdiff_t m_uiAbandonRecordedReason = 0x870; // uint32
                constexpr std::ptrdiff_t m_bCannotBeKicked = 0x874; // bool
                constexpr std::ptrdiff_t m_bEverFullyConnected = 0x875; // bool
                constexpr std::ptrdiff_t m_bAbandonAllowsSurrender = 0x876; // bool
                constexpr std::ptrdiff_t m_bAbandonOffersInstantSurrender = 0x877; // bool
                constexpr std::ptrdiff_t m_bDisconnection1MinWarningPrinted = 0x878; // bool
                constexpr std::ptrdiff_t m_bScoreReported = 0x879; // bool
                constexpr std::ptrdiff_t m_nDisconnectionTick = 0x87C; // int32
                constexpr std::ptrdiff_t m_bControllingBot = 0x888; // bool
                constexpr std::ptrdiff_t m_bHasControlledBotThisRound = 0x889; // bool
                constexpr std::ptrdiff_t m_bHasBeenControlledByPlayerThisRound = 0x88A; // bool
                constexpr std::ptrdiff_t m_nBotsControlledThisRound = 0x88C; // int32
                constexpr std::ptrdiff_t m_bCanControlObservedBot = 0x890; // bool
                constexpr std::ptrdiff_t m_hPlayerPawn = 0x894; // CHandle<CCSPlayerPawn>
                constexpr std::ptrdiff_t m_hObserverPawn = 0x898; // 
                constexpr std::ptrdiff_t m_DesiredObserverMode = 0x89C; // int32
                constexpr std::ptrdiff_t m_hDesiredObserverTarget = 0x8A0; // CEntityHandle
                constexpr std::ptrdiff_t m_bPawnIsAlive = 0x8A4; // bool
                constexpr std::ptrdiff_t m_iPawnHealth = 0x8A8; // uint32
                constexpr std::ptrdiff_t m_iPawnArmor = 0x8AC; // int32
                constexpr std::ptrdiff_t m_bPawnHasDefuser = 0x8B0; // bool
                constexpr std::ptrdiff_t m_bPawnHasHelmet = 0x8B1; // bool
                constexpr std::ptrdiff_t m_nPawnCharacterDefIndex = 0x8B2; // uint16
                constexpr std::ptrdiff_t m_iPawnLifetimeStart = 0x8B4; // int32
                constexpr std::ptrdiff_t m_iPawnLifetimeEnd = 0x8B8; // int32
                constexpr std::ptrdiff_t m_iPawnBotDifficulty = 0x8BC; // int32
                constexpr std::ptrdiff_t m_hOriginalControllerOfCurrentPawn = 0x8C0; // CHandle<CCSPlayerController>
                constexpr std::ptrdiff_t m_iScore = 0x8C4; // int32
                constexpr std::ptrdiff_t m_iRoundScore = 0x8C8; // int32
                constexpr std::ptrdiff_t m_iRoundsWon = 0x8CC; // int32
                constexpr std::ptrdiff_t m_recentKillQueue = 0x8D0; // 
                constexpr std::ptrdiff_t m_nFirstKill = 0x8D8; // uint8
                constexpr std::ptrdiff_t m_nKillCount = 0x8D9; // uint8
                constexpr std::ptrdiff_t m_bMvpNoMusic = 0x8DA; // bool
                constexpr std::ptrdiff_t m_eMvpReason = 0x8DC; // int32
                constexpr std::ptrdiff_t m_iMusicKitID = 0x8E0; // int32
                constexpr std::ptrdiff_t m_iMusicKitMVPs = 0x8E4; // int32
                constexpr std::ptrdiff_t m_iMVPs = 0x8E8; // int32
                constexpr std::ptrdiff_t m_nUpdateCounter = 0x8EC; // int32
                constexpr std::ptrdiff_t m_flSmoothedPing = 0x8F0; // float32
                constexpr std::ptrdiff_t m_lastHeldVoteTimer = 0xF998; // IntervalTimer
                constexpr std::ptrdiff_t m_bShowHints = 0xF9B0; // bool
                constexpr std::ptrdiff_t m_iNextTimeCheck = 0xF9B4; // int32
                constexpr std::ptrdiff_t m_bJustDidTeamKill = 0xF9B8; // bool
                constexpr std::ptrdiff_t m_bPunishForTeamKill = 0xF9B9; // bool
                constexpr std::ptrdiff_t m_bGaveTeamDamageWarning = 0xF9BA; // bool
                constexpr std::ptrdiff_t m_bGaveTeamDamageWarningThisRound = 0xF9BB; // bool
                constexpr std::ptrdiff_t m_dblLastReceivedPacketPlatFloatTime = 0xF9C0; // float64
                constexpr std::ptrdiff_t m_LastTeamDamageWarningTime = 0xF9C8; // GameTime_t
                constexpr std::ptrdiff_t m_LastTimePlayerWasDisconnectedForPawnsRemove = 0xF9CC; // GameTime_t
                constexpr std::ptrdiff_t m_nSuspiciousHitCount = 0xF9D0; // uint32
                constexpr std::ptrdiff_t m_nNonSuspiciousHitStreak = 0xF9D4; // uint32
                constexpr std::ptrdiff_t m_bFireBulletsSeedSynchronized = 0xFA79; // bool
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
            namespace CEconItemView {
                constexpr std::ptrdiff_t m_iItemDefinitionIndex = 0x38; // uint16
                constexpr std::ptrdiff_t m_iEntityQuality = 0x3C; // int32
                constexpr std::ptrdiff_t m_iEntityLevel = 0x40; // uint32
                constexpr std::ptrdiff_t m_iItemID = 0x48; // uint64
                constexpr std::ptrdiff_t m_iItemIDHigh = 0x50; // uint32
                constexpr std::ptrdiff_t m_iItemIDLow = 0x54; // uint32
                constexpr std::ptrdiff_t m_iAccountID = 0x58; // uint32
                constexpr std::ptrdiff_t m_iInventoryPosition = 0x5C; // uint32
                constexpr std::ptrdiff_t m_bInitialized = 0x68; // bool
                constexpr std::ptrdiff_t m_AttributeList = 0x70; // CAttributeList
                constexpr std::ptrdiff_t m_NetworkedDynamicAttributes = 0xD0; // CAttributeList
                constexpr std::ptrdiff_t m_szCustomName = 0x130; // 
                constexpr std::ptrdiff_t m_szCustomNameOverride = 0x1D1; // 
            }
            // Parent: CPointEntity
            // Field count: 0
            namespace CInfoInstructorHintBombTargetA {
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            namespace CWeaponAWP {
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
            namespace CBasePlayerPawn {
                constexpr std::ptrdiff_t m_pWeaponServices = 0xAC0; // CPlayer_WeaponServices*
                constexpr std::ptrdiff_t m_pItemServices = 0xAC8; // CPlayer_ItemServices*
                constexpr std::ptrdiff_t m_pAutoaimServices = 0xAD0; // CPlayer_AutoaimServices*
                constexpr std::ptrdiff_t m_pObserverServices = 0xAD8; // CPlayer_ObserverServices*
                constexpr std::ptrdiff_t m_pWaterServices = 0xAE0; // CPlayer_WaterServices*
                constexpr std::ptrdiff_t m_pUseServices = 0xAE8; // CPlayer_UseServices*
                constexpr std::ptrdiff_t m_pFlashlightServices = 0xAF0; // CPlayer_FlashlightServices*
                constexpr std::ptrdiff_t m_pCameraServices = 0xAF8; // CPlayer_CameraServices*
                constexpr std::ptrdiff_t m_pMovementServices = 0xB00; // CPlayer_MovementServices*
                constexpr std::ptrdiff_t m_ServerViewAngleChanges = 0xB10; // CUtlVectorEmbeddedNetworkVar<ViewAngleServerChange_t>
                constexpr std::ptrdiff_t m_nHighestGeneratedServerViewAngleChangeIndex = 0xB60; // uint32
                constexpr std::ptrdiff_t v_angle = 0xB64; // QAngle
                constexpr std::ptrdiff_t v_anglePrevious = 0xB70; // QAngle
                constexpr std::ptrdiff_t m_iHideHUD = 0xB7C; // uint32
                constexpr std::ptrdiff_t m_skybox3d = 0xB80; // sky3dparams_t
                constexpr std::ptrdiff_t m_fTimeLastHurt = 0xC10; // GameTime_t
                constexpr std::ptrdiff_t m_flDeathTime = 0xC14; // GameTime_t
                constexpr std::ptrdiff_t m_fNextSuicideTime = 0xC18; // GameTime_t
                constexpr std::ptrdiff_t m_fInitHUD = 0xC1C; // bool
                constexpr std::ptrdiff_t m_pExpresser = 0xC20; // CAI_Expresser*
                constexpr std::ptrdiff_t m_hController = 0xC28; // CHandle<CBasePlayerController>
                constexpr std::ptrdiff_t m_fHltvReplayDelay = 0xC30; // float32
                constexpr std::ptrdiff_t m_fHltvReplayEnd = 0xC34; // float32
                constexpr std::ptrdiff_t m_iHltvReplayEntity = 0xC38; // CEntityIndex
                constexpr std::ptrdiff_t m_sndOpvarLatchData = 0xC40; // CUtlVector<sndopvarlatchdata_t>
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
            namespace CPostProcessingVolume {
                constexpr std::ptrdiff_t m_hPostSettings = 0x970; // CStrongHandle<InfoForResourceTypeCPostProcessingResource>
                constexpr std::ptrdiff_t m_flFadeDuration = 0x978; // float32
                constexpr std::ptrdiff_t m_flMinLogExposure = 0x97C; // float32
                constexpr std::ptrdiff_t m_flMaxLogExposure = 0x980; // float32
                constexpr std::ptrdiff_t m_flMinExposure = 0x984; // float32
                constexpr std::ptrdiff_t m_flMaxExposure = 0x988; // float32
                constexpr std::ptrdiff_t m_flExposureCompensation = 0x98C; // float32
                constexpr std::ptrdiff_t m_flExposureFadeSpeedUp = 0x990; // float32
                constexpr std::ptrdiff_t m_flExposureFadeSpeedDown = 0x994; // float32
                constexpr std::ptrdiff_t m_flTonemapEVSmoothingRange = 0x998; // float32
                constexpr std::ptrdiff_t m_bMaster = 0x99C; // bool
                constexpr std::ptrdiff_t m_bExposureControl = 0x99D; // bool
                constexpr std::ptrdiff_t m_flRate = 0x9A0; // float32
                constexpr std::ptrdiff_t m_flTonemapPercentTarget = 0x9A4; // float32
                constexpr std::ptrdiff_t m_flTonemapPercentBrightPixels = 0x9A8; // float32
                constexpr std::ptrdiff_t m_flTonemapMinAvgLum = 0x9AC; // float32
            }
            // Parent: CBaseModelEntity
            // Field count: 4
            //
            // Metadata:
            // NetworkVarNames:  ()
            // NetworkVarNames:  ()
            namespace CSpotlightEnd {
                constexpr std::ptrdiff_t m_flLightScale = 0x790; // float32
                constexpr std::ptrdiff_t m_Radius = 0x794; // float32
                constexpr std::ptrdiff_t m_vSpotlightDir = 0x798; // Vector
                constexpr std::ptrdiff_t m_vSpotlightOrg = 0x7A4; // Vector
            }
            // Parent: CBaseCSGrenade
            // Field count: 0
            namespace CSensorGrenade {
            }
            // Parent: CBaseTrigger
            // Field count: 1
            namespace CTriggerDetectExplosion {
                constexpr std::ptrdiff_t m_OnDetectedExplosion = 0x988; // CEntityIOOutput
            }
            // Parent: CEconEntity
            // Field count: 2
            namespace CEconWearable {
                constexpr std::ptrdiff_t m_nForceSkin = 0xD30; // int32
                constexpr std::ptrdiff_t m_bAlwaysAllow = 0xD34; // bool
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
            namespace CFuncConveyor {
                constexpr std::ptrdiff_t m_szConveyorModels = 0x790; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_flTransitionDurationSeconds = 0x798; // float32
                constexpr std::ptrdiff_t m_angMoveEntitySpace = 0x79C; // QAngle
                constexpr std::ptrdiff_t m_vecMoveDirEntitySpace = 0x7A8; // Vector
                constexpr std::ptrdiff_t m_flTargetSpeed = 0x7B4; // float32
                constexpr std::ptrdiff_t m_nTransitionStartTick = 0x7B8; // GameTick_t
                constexpr std::ptrdiff_t m_nTransitionDurationTicks = 0x7BC; // int32
                constexpr std::ptrdiff_t m_flTransitionStartSpeed = 0x7C0; // float32
                constexpr std::ptrdiff_t m_hConveyorModels = 0x7C8; // 
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            namespace CWeaponMag7 {
            }
            // Parent: CBaseDoor
            // Field count: 1
            namespace CRotDoor {
                constexpr std::ptrdiff_t m_bSolidBsp = 0xA18; // bool
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            namespace CWeaponElite {
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
            namespace CC4 {
                constexpr std::ptrdiff_t m_vecLastValidPlayerHeldPosition = 0xFA0; // Vector
                constexpr std::ptrdiff_t m_vecLastValidDroppedPosition = 0xFAC; // Vector
                constexpr std::ptrdiff_t m_bDoValidDroppedPositionCheck = 0xFB8; // bool
                constexpr std::ptrdiff_t m_bStartedArming = 0xFB9; // bool
                constexpr std::ptrdiff_t m_fArmedTime = 0xFBC; // GameTime_t
                constexpr std::ptrdiff_t m_bBombPlacedAnimation = 0xFC0; // bool
                constexpr std::ptrdiff_t m_bIsPlantingViaUse = 0xFC1; // bool
                constexpr std::ptrdiff_t m_entitySpottedState = 0xFC8; // EntitySpottedState_t
                constexpr std::ptrdiff_t m_nSpotRules = 0xFE0; // int32
                constexpr std::ptrdiff_t m_bPlayedArmingBeeps = 0xFE4; // 
                constexpr std::ptrdiff_t m_bBombPlanted = 0xFEB; // bool
            }
            // Parent: CHostageRescueZoneShim
            // Field count: 0
            namespace CHostageRescueZone {
            }
            // Parent: CBaseToggle
            // Field count: 27
            //
            // Metadata:
            // NetworkVarNames:  ()
            namespace CBaseDoor {
                constexpr std::ptrdiff_t m_angMoveEntitySpace = 0x820; // QAngle
                constexpr std::ptrdiff_t m_vecMoveDirParentSpace = 0x82C; // Vector
                constexpr std::ptrdiff_t m_ls = 0x838; // locksound_t
                constexpr std::ptrdiff_t m_bForceClosed = 0x858; // bool
                constexpr std::ptrdiff_t m_bDoorGroup = 0x859; // bool
                constexpr std::ptrdiff_t m_bLocked = 0x85A; // bool
                constexpr std::ptrdiff_t m_bIgnoreDebris = 0x85B; // bool
                constexpr std::ptrdiff_t m_eSpawnPosition = 0x85C; // FuncDoorSpawnPos_t
                constexpr std::ptrdiff_t m_flBlockDamage = 0x860; // float32
                constexpr std::ptrdiff_t m_NoiseMoving = 0x868; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_NoiseArrived = 0x870; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_NoiseMovingClosed = 0x878; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_NoiseArrivedClosed = 0x880; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_ChainTarget = 0x888; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_OnBlockedClosing = 0x890; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnBlockedOpening = 0x8B8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnUnblockedClosing = 0x8E0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnUnblockedOpening = 0x908; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnFullyClosed = 0x930; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnFullyOpen = 0x958; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnClose = 0x980; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnOpen = 0x9A8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnLockedUse = 0x9D0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_bLoopMoveSound = 0x9F8; // bool
                constexpr std::ptrdiff_t m_bCreateNavObstacle = 0xA10; // bool
                constexpr std::ptrdiff_t m_isChaining = 0xA11; // bool
                constexpr std::ptrdiff_t m_bIsUsable = 0xA12; // bool
            }
            // Parent: CCSWeaponBase
            // Field count: 0
            namespace CTablet {
            }
            // Parent: 
            // Field count: 0
            namespace CRagdollPropAlias_physics_prop_ragdoll {
            }
            // Parent: CSprite
            // Field count: 0
            namespace CCSSprite {
            }
            // Parent: CCSWeaponBaseGun
            // Field count: 0
            namespace CWeaponSCAR20 {
            }
            // Parent: CBaseGrenade
            // Field count: 0
            namespace CTripWireFireProjectile {
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
            namespace CHostage {
                constexpr std::ptrdiff_t m_OnHostageBeginGrab = 0xAD8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnFirstPickedUp = 0xB00; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnDroppedNotRescued = 0xB28; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnRescued = 0xB50; // CEntityIOOutput
                constexpr std::ptrdiff_t m_entitySpottedState = 0xB78; // EntitySpottedState_t
                constexpr std::ptrdiff_t m_nSpotRules = 0xB90; // int32
                constexpr std::ptrdiff_t m_uiHostageSpawnExclusionGroupMask = 0xB94; // uint32
                constexpr std::ptrdiff_t m_nHostageSpawnRandomFactor = 0xB98; // uint32
                constexpr std::ptrdiff_t m_bRemove = 0xB9C; // bool
                constexpr std::ptrdiff_t m_vel = 0xBA0; // Vector
                constexpr std::ptrdiff_t m_isRescued = 0xBAC; // bool
                constexpr std::ptrdiff_t m_jumpedThisFrame = 0xBAD; // bool
                constexpr std::ptrdiff_t m_nHostageState = 0xBB0; // int32
                constexpr std::ptrdiff_t m_leader = 0xBB4; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t m_lastLeader = 0xBB8; // CHandle<CCSPlayerPawnBase>
                constexpr std::ptrdiff_t m_reuseTimer = 0xBC0; // CountdownTimer
                constexpr std::ptrdiff_t m_hasBeenUsed = 0xBD8; // bool
                constexpr std::ptrdiff_t m_accel = 0xBDC; // Vector
                constexpr std::ptrdiff_t m_isRunning = 0xBE8; // bool
                constexpr std::ptrdiff_t m_isCrouching = 0xBE9; // bool
                constexpr std::ptrdiff_t m_jumpTimer = 0xBF0; // CountdownTimer
                constexpr std::ptrdiff_t m_isWaitingForLeader = 0xC08; // bool
                constexpr std::ptrdiff_t m_repathTimer = 0x2C18; // CountdownTimer
                constexpr std::ptrdiff_t m_inhibitDoorTimer = 0x2C30; // CountdownTimer
                constexpr std::ptrdiff_t m_inhibitObstacleAvoidanceTimer = 0x2CC0; // CountdownTimer
                constexpr std::ptrdiff_t m_wiggleTimer = 0x2CE0; // CountdownTimer
                constexpr std::ptrdiff_t m_isAdjusted = 0x2CFC; // bool
                constexpr std::ptrdiff_t m_bHandsHaveBeenCut = 0x2CFD; // bool
                constexpr std::ptrdiff_t m_hHostageGrabber = 0x2D00; // CHandle<CCSPlayerPawn>
                constexpr std::ptrdiff_t m_fLastGrabTime = 0x2D04; // GameTime_t
                constexpr std::ptrdiff_t m_vecPositionWhenStartedDroppingToGround = 0x2D08; // Vector
                constexpr std::ptrdiff_t m_vecGrabbedPos = 0x2D14; // Vector
                constexpr std::ptrdiff_t m_flRescueStartTime = 0x2D20; // GameTime_t
                constexpr std::ptrdiff_t m_flGrabSuccessTime = 0x2D24; // GameTime_t
                constexpr std::ptrdiff_t m_flDropStartTime = 0x2D28; // GameTime_t
                constexpr std::ptrdiff_t m_nApproachRewardPayouts = 0x2D2C; // int32
                constexpr std::ptrdiff_t m_nPickupEventCount = 0x2D30; // int32
                constexpr std::ptrdiff_t m_vecSpawnGroundPos = 0x2D34; // Vector
                constexpr std::ptrdiff_t m_vecHostageResetPosition = 0x2D54; // Vector
            }
            // Parent: CPointEntity
            // Field count: 9
            namespace CMapInfo {
                constexpr std::ptrdiff_t m_iBuyingStatus = 0x4E0; // int32
                constexpr std::ptrdiff_t m_flBombRadius = 0x4E4; // float32
                constexpr std::ptrdiff_t m_iPetPopulation = 0x4E8; // int32
                constexpr std::ptrdiff_t m_bUseNormalSpawnsForDM = 0x4EC; // bool
                constexpr std::ptrdiff_t m_bDisableAutoGeneratedDMSpawns = 0x4ED; // bool
                constexpr std::ptrdiff_t m_flBotMaxVisionDistance = 0x4F0; // float32
                constexpr std::ptrdiff_t m_iHostageCount = 0x4F4; // int32
                constexpr std::ptrdiff_t m_bFadePlayerVisibilityFarZ = 0x4F8; // bool
                constexpr std::ptrdiff_t m_bRainTraceToSkyEnabled = 0x4F9; // bool
            }
            // Parent: CBaseTrigger
            // Field count: 0
            namespace CTriggerBombReset {
            }
        }
    }
}
