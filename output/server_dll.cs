// Generated using https://github.com/a2x/cs2-dumper
// 2025-02-16 07:27:14.282532083 UTC

namespace CS2Dumper.Schemas {
    // Module: server.dll
    // Class count: 140
    // Enum count: 0
    public static class ServerDll {
        // Parent: CBaseCombatCharacter
        // Field count: 1
        public static class CHostageExpresserShim {
            public const nint m_pExpresser = 0xAC0; // CAI_Expresser*
        }
        // Parent: CBaseTrigger
        // Field count: 3
        public static class CTriggerSoundscape {
            public const nint m_hSoundscape = 0x960; // CHandle<CEnvSoundscapeTriggerable>
            public const nint m_SoundscapeName = 0x968; // CUtlSymbolLarge
            public const nint m_spectators = 0x970; // CUtlVector<CHandle<CBasePlayerPawn>>
        }
        // Parent: CBreakableProp
        // Field count: 22
        //
        // Metadata:
        // NetworkVarNames:  ()
        // NetworkVarNames:  ()
        public static class CDynamicProp {
            public const nint m_bCreateNavObstacle = 0xB60; // bool
            public const nint m_bNavObstacleUpdatesOverridden = 0xB61; // bool
            public const nint m_bUseHitboxesForRenderBox = 0xB62; // bool
            public const nint m_bUseAnimGraph = 0xB63; // bool
            public const nint m_pOutputAnimBegun = 0xB68; // CEntityIOOutput
            public const nint m_pOutputAnimOver = 0xB90; // CEntityIOOutput
            public const nint m_pOutputAnimLoopCycleOver = 0xBB8; // CEntityIOOutput
            public const nint m_OnAnimReachedStart = 0xBE0; // CEntityIOOutput
            public const nint m_OnAnimReachedEnd = 0xC08; // CEntityIOOutput
            public const nint m_iszIdleAnim = 0xC30; // CUtlSymbolLarge
            public const nint m_nIdleAnimLoopMode = 0xC38; // AnimLoopMode_t
            public const nint m_bRandomizeCycle = 0xC3C; // bool
            public const nint m_bStartDisabled = 0xC3D; // bool
            public const nint m_bFiredStartEndOutput = 0xC3E; // bool
            public const nint m_bForceNpcExclude = 0xC3F; // bool
            public const nint m_bCreateNonSolid = 0xC40; // bool
            public const nint m_bIsOverrideProp = 0xC41; // bool
            public const nint m_iInitialGlowState = 0xC44; // int32
            public const nint m_nGlowRange = 0xC48; // int32
            public const nint m_nGlowRangeMin = 0xC4C; // int32
            public const nint m_glowColor = 0xC50; // Color
            public const nint m_nGlowTeam = 0xC54; // int32
        }
        // Parent: CCSWeaponBase
        // Field count: 7
        //
        // Metadata:
        // NetworkVarNames: m_bPlayingUninterruptableAct (bool)
        // NetworkVarNames: m_nUninterruptableActivity (PlayerAnimEvent_t)
        public static class CFists {
            public const nint m_bPlayingUninterruptableAct = 0xF70; // bool
            public const nint m_nUninterruptableActivity = 0xF74; // PlayerAnimEvent_t
            public const nint m_bRestorePrevWep = 0xF78; // bool
            public const nint m_hWeaponBeforePrevious = 0xF7C; // CHandle<CBasePlayerWeapon>
            public const nint m_hWeaponPrevious = 0xF80; // CHandle<CBasePlayerWeapon>
            public const nint m_bDelayedHardPunchIncoming = 0xF84; // bool
            public const nint m_bDestroyAfterTaunt = 0xF85; // bool
        }
        // Parent: CBreakable
        // Field count: 0
        public static class CPushable {
        }
        // Parent: CBaseTrigger
        // Field count: 0
        public static class CTriggerTripWire {
        }
        // Parent: CBaseTrigger
        // Field count: 1
        public static class CTriggerMultiple {
            public const nint m_OnTrigger = 0x960; // CEntityIOOutput
        }
        // Parent: CFuncBrush
        // Field count: 4
        //
        // Metadata:
        // NetworkVarNames: m_EffectName (string_t)
        public static class CFuncElectrifiedVolume {
            public const nint m_EffectName = 0x7B0; // CUtlSymbolLarge
            public const nint m_EffectInterpenetrateName = 0x7B8; // CUtlSymbolLarge
            public const nint m_EffectZapName = 0x7C0; // CUtlSymbolLarge
            public const nint m_iszEffectSource = 0x7C8; // CUtlSymbolLarge
        }
        // Parent: CWeaponBaseItem
        // Field count: 0
        public static class CItem_Healthshot {
        }
        // Parent: CBaseTrigger
        // Field count: 1
        public static class CFogTrigger {
            public const nint m_fog = 0x960; // fogparams_t
        }
        // Parent: CBaseTrigger
        // Field count: 0
        public static class CTriggerHostageReset {
        }
        // Parent: CPointEntity
        // Field count: 0
        public static class CInfoInstructorHintBombTargetB {
        }
        // Parent: CCSWeaponBase
        // Field count: 0
        public static class CWeaponSawedoff {
        }
        // Parent: CBaseTrigger
        // Field count: 2
        //
        // Metadata:
        // NetworkVarNames: m_flFluidDensity (float)
        public static class CTriggerBuoyancy {
            public const nint m_BuoyancyHelper = 0x960; // CBuoyancyHelper
            public const nint m_flFluidDensity = 0x9E0; // float32
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
        public static class CSmokeGrenadeProjectile {
            public const nint m_nSmokeEffectTickBegin = 0xB68; // int32
            public const nint m_bDidSmokeEffect = 0xB6C; // bool
            public const nint m_nRandomSeed = 0xB70; // int32
            public const nint m_vSmokeColor = 0xB74; // Vector
            public const nint m_vSmokeDetonationPos = 0xB80; // Vector
            public const nint m_VoxelFrameData = 0xB90; // CNetworkUtlVectorBase<uint8>
            public const nint m_nVoxelFrameDataSize = 0xBA8; // int32
            public const nint m_nVoxelUpdate = 0xBAC; // int32
            public const nint m_flLastBounce = 0xBB0; // GameTime_t
            public const nint m_fllastSimulationTime = 0xBB4; // GameTime_t
            public const nint m_bExplodeFromInferno = 0x2E38; // bool
        }
        // Parent: CBot
        // Field count: 11
        public static class CCSBot {
            public const nint m_eyePosition = 0x108; // Vector
            public const nint m_name = 0x114; // char[64]
            public const nint m_combatRange = 0x154; // float32
            public const nint m_isRogue = 0x0; // bool
            public const nint m_lastOrigin = 0x650C; // Vector
            public const nint m_lastRadioRecievedTimestamp = 0x651C; // float32
            public const nint m_lastRadioSentTimestamp = 0x6520; // float32
            public const nint m_radioSubject = 0x6524; // CHandle<CCSPlayerPawn>
            public const nint m_radioPosition = 0x6528; // Vector
            public const nint m_voiceEndTimestamp = 0x6534; // float32
            public const nint m_lastValidReactionQueueFrame = 0x6540; // int32
        }
        // Parent: 
        // Field count: 0
        public static class CItemKevlar {
        }
        // Parent: CBaseTrigger
        // Field count: 14
        public static class CTriggerHurt {
            public const nint m_flOriginalDamage = 0x960; // float32
            public const nint m_flDamage = 0x964; // float32
            public const nint m_flDamageCap = 0x968; // float32
            public const nint m_flLastDmgTime = 0x96C; // GameTime_t
            public const nint m_flForgivenessDelay = 0x970; // float32
            public const nint m_bitsDamageInflict = 0x974; // DamageTypes_t
            public const nint m_damageModel = 0x978; // int32
            public const nint m_bNoDmgForce = 0x97C; // bool
            public const nint m_vDamageForce = 0x980; // Vector
            public const nint m_thinkAlways = 0x98C; // bool
            public const nint m_hurtThinkPeriod = 0x990; // float32
            public const nint m_OnHurt = 0x998; // CEntityIOOutput
            public const nint m_OnHurtPlayer = 0x9C0; // CEntityIOOutput
            public const nint m_hurtEntities = 0x9E8; // CUtlVector<CHandle<CBaseEntity>>
        }
        // Parent: CPointEntity
        // Field count: 4
        public static class CSoundEnt {
            public const nint m_iFreeSound = 0x4E0; // int32
            public const nint m_iActiveSound = 0x4E4; // int32
            public const nint m_cLastActiveSounds = 0x4E8; // int32
            public const nint m_SoundPool = 0x4EC; // 
        }
        // Parent: CSprite
        // Field count: 0
        public static class CSpriteOriented {
        }
        // Parent: CCSWeaponBaseGun
        // Field count: 0
        public static class CWeaponM4A1 {
        }
        // Parent: CBeam
        // Field count: 5
        public static class CEnvLaser {
            public const nint m_iszLaserTarget = 0x830; // CUtlSymbolLarge
            public const nint m_pSprite = 0x838; // 
            public const nint m_iszSpriteName = 0x840; // CUtlSymbolLarge
            public const nint m_firePosition = 0x848; // Vector
            public const nint m_flStartFrame = 0x854; // float32
        }
        // Parent: CSprite
        // Field count: 0
        public static class CCommentaryViewPosition {
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
        public static class CBasePlayerWeapon {
            public const nint m_nNextPrimaryAttackTick = 0xD30; // GameTick_t
            public const nint m_flNextPrimaryAttackTickRatio = 0xD34; // float32
            public const nint m_nNextSecondaryAttackTick = 0xD38; // GameTick_t
            public const nint m_flNextSecondaryAttackTickRatio = 0xD3C; // float32
            public const nint m_iClip1 = 0xD40; // int32
            public const nint m_iClip2 = 0xD44; // int32
            public const nint m_pReserveAmmo = 0xD48; // 
            public const nint m_OnPlayerUse = 0xD50; // CEntityIOOutput
        }
        // Parent: CBaseFlex
        // Field count: 0
        public static class CBaseFlexAlias_funCBaseFlex {
        }
        // Parent: CBaseAnimGraph
        // Field count: 0
        public static class CHostageCarriableProp {
        }
        // Parent: CBaseModelEntity
        // Field count: 18
        //
        // Metadata:
        // MNetworkOverride
        // MNetworkOverride
        public static class CFuncRotating {
            public const nint m_OnStopped = 0x790; // CEntityIOOutput
            public const nint m_OnStarted = 0x7B8; // CEntityIOOutput
            public const nint m_OnReachedStart = 0x7E0; // CEntityIOOutput
            public const nint m_localRotationVector = 0x808; // RotationVector
            public const nint m_flFanFriction = 0x814; // float32
            public const nint m_flAttenuation = 0x818; // float32
            public const nint m_flVolume = 0x81C; // float32
            public const nint m_flTargetSpeed = 0x820; // float32
            public const nint m_flMaxSpeed = 0x824; // float32
            public const nint m_flBlockDamage = 0x828; // float32
            public const nint m_NoiseRunning = 0x830; // CUtlSymbolLarge
            public const nint m_bReversed = 0x838; // bool
            public const nint m_bAccelDecel = 0x839; // bool
            public const nint m_prevLocalAngles = 0x844; // QAngle
            public const nint m_angStart = 0x850; // QAngle
            public const nint m_bStopAtStartPos = 0x85C; // bool
            public const nint m_vecClientOrigin = 0x860; // Vector
            public const nint m_vecClientAngles = 0x86C; // QAngle
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
        public static class CBaseCSGrenadeProjectile {
            public const nint m_vInitialPosition = 0xAE0; // Vector
            public const nint m_vInitialVelocity = 0xAEC; // Vector
            public const nint m_nBounces = 0xAF8; // int32
            public const nint m_nExplodeEffectIndex = 0xB00; // 
            public const nint m_nExplodeEffectTickBegin = 0xB08; // int32
            public const nint m_vecExplodeEffectOrigin = 0xB0C; // Vector
            public const nint m_flSpawnTime = 0xB18; // GameTime_t
            public const nint m_unOGSExtraFlags = 0xB1C; // uint8
            public const nint m_bDetonationRecorded = 0xB1D; // bool
            public const nint m_nItemIndex = 0xB1E; // uint16
            public const nint m_vecOriginalSpawnLocation = 0xB20; // Vector
            public const nint m_flLastBounceSoundTime = 0xB2C; // GameTime_t
            public const nint m_vecGrenadeSpin = 0xB30; // RotationVector
            public const nint m_vecLastHitSurfaceNormal = 0xB3C; // Vector
            public const nint m_nTicksAtZeroVelocity = 0xB48; // int32
            public const nint m_bHasEverHitEnemy = 0xB4C; // bool
        }
        // Parent: CServerOnlyModelEntity
        // Field count: 1
        public static class CCSPlace {
            public const nint m_name = 0x798; // CUtlSymbolLarge
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
        public static class CEntityDissolve {
            public const nint m_flFadeInStart = 0x790; // float32
            public const nint m_flFadeInLength = 0x794; // float32
            public const nint m_flFadeOutModelStart = 0x798; // float32
            public const nint m_flFadeOutModelLength = 0x79C; // float32
            public const nint m_flFadeOutStart = 0x7A0; // float32
            public const nint m_flFadeOutLength = 0x7A4; // float32
            public const nint m_flStartTime = 0x7A8; // GameTime_t
            public const nint m_nDissolveType = 0x7AC; // EntityDisolveType_t
            public const nint m_vDissolverOrigin = 0x7B0; // Vector
            public const nint m_nMagnitude = 0x7BC; // uint32
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
        public static class CBeam {
            public const nint m_flFrameRate = 0x790; // float32
            public const nint m_flHDRColorScale = 0x794; // float32
            public const nint m_flFireTime = 0x798; // GameTime_t
            public const nint m_flDamage = 0x79C; // float32
            public const nint m_nNumBeamEnts = 0x7A0; // uint8
            public const nint m_hBaseMaterial = 0x7A8; // CStrongHandle<InfoForResourceTypeIMaterial2>
            public const nint m_nHaloIndex = 0x7B0; // CStrongHandle<InfoForResourceTypeIMaterial2>
            public const nint m_nBeamType = 0x7B8; // BeamType_t
            public const nint m_nBeamFlags = 0x7BC; // uint32
            public const nint m_hAttachEntity = 0x7C0; // CHandle<CBaseEntity>[10]
            public const nint m_nAttachIndex = 0x7E8; // 
            public const nint m_fWidth = 0x7F4; // float32
            public const nint m_fEndWidth = 0x7F8; // float32
            public const nint m_fFadeLength = 0x7FC; // float32
            public const nint m_fHaloScale = 0x800; // float32
            public const nint m_fAmplitude = 0x804; // float32
            public const nint m_fStartFrame = 0x808; // float32
            public const nint m_fSpeed = 0x80C; // float32
            public const nint m_flFrame = 0x810; // float32
            public const nint m_nClipStyle = 0x814; // BeamClipStyle_t
            public const nint m_bTurnedOff = 0x818; // bool
            public const nint m_vecEndPos = 0x81C; // Vector
            public const nint m_hEndEntity = 0x828; // CHandle<CBaseEntity>
            public const nint m_nDissolveType = 0x82C; // int32
        }
        // Parent: CSceneEntity
        // Field count: 0
        public static class CSceneEntityAlias_logic_choreographed_scene {
        }
        // Parent: CPointEntity
        // Field count: 4
        public static class CRagdollMagnet {
            public const nint m_bDisabled = 0x4E0; // bool
            public const nint m_radius = 0x4E4; // float32
            public const nint m_force = 0x4E8; // float32
            public const nint m_axis = 0x4EC; // Vector
        }
        // Parent: CBaseModelEntity
        // Field count: 0
        public static class CFuncBrush {
        }
        // Parent: CCSWeaponBase
        // Field count: 0
        public static class CMelee {
        }
        // Parent: CBreakable
        // Field count: 14
        public static class CPhysBox {
            public const nint m_damageType = 0x868; // int32
            public const nint m_damageToEnableMotion = 0x86C; // int32
            public const nint m_flForceToEnableMotion = 0x870; // float32
            public const nint m_angPreferredCarryAngles = 0x874; // QAngle
            public const nint m_bNotSolidToWorld = 0x880; // bool
            public const nint m_bEnableUseOutput = 0x881; // bool
            public const nint m_iExploitableByPlayer = 0x884; // int32
            public const nint m_flTouchOutputPerEntityDelay = 0x888; // float32
            public const nint m_OnDamaged = 0x890; // CEntityIOOutput
            public const nint m_OnAwakened = 0x8B8; // CEntityIOOutput
            public const nint m_OnMotionEnabled = 0x8E0; // CEntityIOOutput
            public const nint m_OnPlayerUse = 0x908; // CEntityIOOutput
            public const nint m_OnStartTouch = 0x930; // CEntityIOOutput
            public const nint m_hCarryingPlayer = 0x958; // CHandle<CBasePlayerPawn>
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
        public static class CBaseGrenade {
            public const nint m_OnPlayerPickup = 0xA40; // CEntityIOOutput
            public const nint m_OnExplode = 0xA68; // CEntityIOOutput
            public const nint m_bHasWarnedAI = 0xA90; // bool
            public const nint m_bIsSmokeGrenade = 0xA91; // bool
            public const nint m_bIsLive = 0xA92; // bool
            public const nint m_DmgRadius = 0xA94; // float32
            public const nint m_flDetonateTime = 0xA98; // GameTime_t
            public const nint m_flWarnAITime = 0xA9C; // float32
            public const nint m_flDamage = 0xAA0; // float32
            public const nint m_iszBounceSound = 0xAA8; // CUtlSymbolLarge
            public const nint m_ExplosionSound = 0xAB0; // CUtlString
            public const nint m_hThrower = 0xABC; // CHandle<CCSPlayerPawn>
            public const nint m_flNextAttack = 0xAD4; // GameTime_t
            public const nint m_hOriginalThrower = 0xAD8; // CHandle<CCSPlayerPawn>
        }
        // Parent: CBaseCSGrenadeProjectile
        // Field count: 0
        public static class CHEGrenadeProjectile {
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
        public static class CCSWeaponBase {
            public const nint m_bRemoveable = 0xDA0; // bool
            public const nint m_flFireSequenceStartTime = 0xDA8; // float32
            public const nint m_nFireSequenceStartTimeChange = 0xDAC; // int32
            public const nint m_nFireSequenceStartTimeAck = 0xDB0; // int32
            public const nint m_ePlayerFireEvent = 0xDB4; // PlayerAnimEvent_t
            public const nint m_ePlayerFireEventAttackType = 0xDB8; // WeaponAttackType_t
            public const nint m_seqIdle = 0xDBC; // HSequence
            public const nint m_seqFirePrimary = 0xDC0; // HSequence
            public const nint m_seqFireSecondary = 0xDC4; // HSequence
            public const nint m_thirdPersonFireSequences = 0xDC8; // CUtlVector<HSequence>
            public const nint m_hCurrentThirdPersonSequence = 0xDE0; // HSequence
            public const nint m_nSilencerBoneIndex = 0xDE4; // int32
            public const nint m_thirdPersonSequences = 0xDE8; // 
            public const nint m_bPlayerAmmoStockOnPickup = 0xE10; // bool
            public const nint m_bRequireUseToTouch = 0xE11; // bool
            public const nint m_iState = 0xE14; // CSWeaponState_t
            public const nint m_flLastTimeInAir = 0xE18; // GameTime_t
            public const nint m_flLastDeployTime = 0xE1C; // GameTime_t
            public const nint m_nLastEmptySoundCmdNum = 0xE20; // int32
            public const nint m_nViewModelIndex = 0xE24; // uint32
            public const nint m_bReloadsWithClips = 0xE28; // bool
            public const nint m_flTimeWeaponIdle = 0xE48; // GameTime_t
            public const nint m_bFireOnEmpty = 0xE4C; // bool
            public const nint m_OnPlayerPickup = 0xE50; // CEntityIOOutput
            public const nint m_weaponMode = 0xE78; // CSWeaponMode
            public const nint m_flTurningInaccuracyDelta = 0xE7C; // float32
            public const nint m_vecTurningInaccuracyEyeDirLast = 0xE80; // Vector
            public const nint m_flTurningInaccuracy = 0xE8C; // float32
            public const nint m_fAccuracyPenalty = 0xE90; // float32
            public const nint m_flLastAccuracyUpdateTime = 0xE94; // GameTime_t
            public const nint m_fAccuracySmoothedForZoom = 0xE98; // float32
            public const nint m_fScopeZoomEndTime = 0xE9C; // GameTime_t
            public const nint m_iRecoilIndex = 0xEA0; // int32
            public const nint m_flRecoilIndex = 0xEA4; // float32
            public const nint m_bBurstMode = 0xEA8; // bool
            public const nint m_nPostponeFireReadyTicks = 0xEAC; // GameTick_t
            public const nint m_flPostponeFireReadyFrac = 0xEB0; // float32
            public const nint m_bInReload = 0xEB4; // bool
            public const nint m_bReloadVisuallyComplete = 0xEB5; // bool
            public const nint m_flDroppedAtTime = 0xEB8; // GameTime_t
            public const nint m_bIsHauledBack = 0xEBC; // bool
            public const nint m_bSilencerOn = 0xEBD; // bool
            public const nint m_flTimeSilencerSwitchComplete = 0xEC0; // GameTime_t
            public const nint m_iOriginalTeamNumber = 0xEC4; // int32
            public const nint m_iMostRecentTeamNumber = 0xEC8; // int32
            public const nint m_bDroppedNearBuyZone = 0xECC; // bool
            public const nint m_flNextAttackRenderTimeOffset = 0xED0; // float32
            public const nint m_bCanBePickedUp = 0xEE8; // bool
            public const nint m_bUseCanOverrideNextOwnerTouchTime = 0xEE9; // bool
            public const nint m_nextOwnerTouchTime = 0xEEC; // GameTime_t
            public const nint m_nextPrevOwnerTouchTime = 0xEF0; // GameTime_t
            public const nint m_nextPrevOwnerUseTime = 0xEF8; // GameTime_t
            public const nint m_hPrevOwner = 0xEFC; // CHandle<CCSPlayerPawn>
            public const nint m_nDropTick = 0xF00; // GameTick_t
            public const nint m_donated = 0xF24; // bool
            public const nint m_fLastShotTime = 0xF28; // GameTime_t
            public const nint m_bWasOwnedByCT = 0xF2C; // bool
            public const nint m_bWasOwnedByTerrorist = 0xF2D; // bool
            public const nint m_bFiredOutOfAmmoEvent = 0xF2E; // bool
            public const nint m_numRemoveUnownedWeaponThink = 0xF30; // int32
            public const nint m_IronSightController = 0xF38; // CIronSightController
            public const nint m_iIronSightMode = 0xF50; // int32
            public const nint m_flLastLOSTraceFailureTime = 0xF54; // GameTime_t
            public const nint m_iNumEmptyAttacks = 0xF58; // int32
            public const nint m_flWatTickOffset = 0xF5C; // float32
        }
        // Parent: CBaseEntity
        // Field count: 0
        public static class CHandleDummy {
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
        public static class CCSTeam {
            public const nint m_nLastRecievedShorthandedRoundBonus = 0x598; // int32
            public const nint m_nShorthandedRoundBonusStartRound = 0x59C; // int32
            public const nint m_bSurrendered = 0x5A0; // bool
            public const nint m_szTeamMatchStat = 0x5A1; // char[512]
            public const nint m_numMapVictories = 0x7A4; // int32
            public const nint m_scoreFirstHalf = 0x7A8; // int32
            public const nint m_scoreSecondHalf = 0x7AC; // int32
            public const nint m_scoreOvertime = 0x7B0; // int32
            public const nint m_szClanTeamname = 0x7B4; // char[129]
            public const nint m_iClanID = 0x838; // uint32
            public const nint m_szTeamFlagImage = 0x83C; // 
            public const nint m_szTeamLogoImage = 0x844; // 
            public const nint m_flNextResourceTime = 0x84C; // float32
            public const nint m_iLastUpdateSentAt = 0x850; // int32
        }
        // Parent: CBaseTrigger
        // Field count: 2
        public static class CTriggerDetectBulletFire {
            public const nint m_bPlayerFireOnly = 0x960; // bool
            public const nint m_OnDetectedBulletFire = 0x968; // CEntityIOOutput
        }
        // Parent: CBaseModelEntity
        // Field count: 0
        public static class CWorld {
        }
        // Parent: CPointEntity
        // Field count: 1
        public static class CPointGiveAmmo {
            public const nint m_pActivator = 0x4E0; // CHandle<CBaseEntity>
        }
        // Parent: 
        // Field count: 0
        public static class CFuncMoveLinearAlias_momentary_door {
        }
        // Parent: CCSWeaponBaseGun
        // Field count: 0
        public static class CAK47 {
        }
        // Parent: CBaseTrigger
        // Field count: 4
        public static class CTriggerTeleport {
            public const nint m_iLandmark = 0x960; // CUtlSymbolLarge
            public const nint m_bUseLandmarkAngles = 0x968; // bool
            public const nint m_bMirrorPlayer = 0x969; // bool
            public const nint m_bCheckDestIfClearForPlayer = 0x96A; // bool
        }
        // Parent: CBaseCSGrenade
        // Field count: 0
        public static class CHEGrenade {
        }
        // Parent: 
        // Field count: 0
        public static class CGameEnd {
        }
        // Parent: CBaseTrigger
        // Field count: 0
        public static class CTriggerCallback {
        }
        // Parent: CPhysicsProp
        // Field count: 0
        public static class CPhysicsPropOverride {
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
        public static class CColorCorrectionVolume {
            public const nint m_bEnabled = 0x960; // bool
            public const nint m_MaxWeight = 0x964; // float32
            public const nint m_FadeDuration = 0x968; // float32
            public const nint m_bStartDisabled = 0x96C; // bool
            public const nint m_Weight = 0x970; // float32
            public const nint m_lookupFilename = 0x974; // char[512]
            public const nint m_LastEnterWeight = 0xB74; // float32
            public const nint m_LastEnterTime = 0xB78; // GameTime_t
            public const nint m_LastExitWeight = 0xB7C; // float32
            public const nint m_LastExitTime = 0xB80; // GameTime_t
        }
        // Parent: CBaseButton
        // Field count: 0
        public static class CPhysicalButton {
        }
        // Parent: CEntitySubclassVDataBase
        // Field count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPrecipitationVData {
            public const nint m_szParticlePrecipitationEffect = 0x28; // 
            public const nint m_flInnerDistance = 0x108; // float32
            public const nint m_nAttachType = 0x10C; // 
            public const nint m_bBatchSameVolumeType = 0x110; // bool
            public const nint m_nRTEnvCP = 0x114; // int32
            public const nint m_nRTEnvCPComponent = 0x118; // int32
            public const nint m_szModifier = 0x120; // CUtlString
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
        public static class CPointCommentaryNode {
            public const nint m_iszPreCommands = 0x9A8; // CUtlSymbolLarge
            public const nint m_iszPostCommands = 0x9B0; // CUtlSymbolLarge
            public const nint m_iszCommentaryFile = 0x9B8; // CUtlSymbolLarge
            public const nint m_iszViewTarget = 0x9C0; // CUtlSymbolLarge
            public const nint m_hViewTarget = 0x9C8; // CHandle<CBaseEntity>
            public const nint m_hViewTargetAngles = 0x9CC; // CHandle<CBaseEntity>
            public const nint m_iszViewPosition = 0x9D0; // CUtlSymbolLarge
            public const nint m_hViewPosition = 0x9D8; // CHandle<CBaseEntity>
            public const nint m_hViewPositionMover = 0x9DC; // CHandle<CBaseEntity>
            public const nint m_bPreventMovement = 0x9E0; // bool
            public const nint m_bUnderCrosshair = 0x9E1; // bool
            public const nint m_bUnstoppable = 0x9E2; // bool
            public const nint m_flFinishedTime = 0x9E4; // GameTime_t
            public const nint m_vecFinishOrigin = 0x9E8; // Vector
            public const nint m_vecOriginalAngles = 0x9F4; // QAngle
            public const nint m_vecFinishAngles = 0xA00; // QAngle
            public const nint m_bPreventChangesWhileMoving = 0xA0C; // bool
            public const nint m_bDisabled = 0xA0D; // bool
            public const nint m_vecTeleportOrigin = 0xA10; // Vector
            public const nint m_flAbortedPlaybackAt = 0xA1C; // GameTime_t
            public const nint m_pOnCommentaryStarted = 0xA20; // CEntityIOOutput
            public const nint m_pOnCommentaryStopped = 0xA48; // CEntityIOOutput
            public const nint m_bActive = 0xA70; // bool
            public const nint m_flStartTime = 0xA74; // GameTime_t
            public const nint m_flStartTimeInCommentary = 0xA78; // float32
            public const nint m_iszTitle = 0xA80; // CUtlSymbolLarge
            public const nint m_iszSpeakers = 0xA88; // CUtlSymbolLarge
            public const nint m_iNodeNumber = 0xA90; // int32
            public const nint m_iNodeNumberMax = 0xA94; // int32
            public const nint m_bListenedTo = 0xA98; // bool
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
        public static class CPointClientUIWorldPanel {
            public const nint m_bIgnoreInput = 0x940; // bool
            public const nint m_bLit = 0x941; // bool
            public const nint m_bFollowPlayerAcrossTeleport = 0x942; // bool
            public const nint m_flWidth = 0x944; // float32
            public const nint m_flHeight = 0x948; // float32
            public const nint m_flDPI = 0x94C; // float32
            public const nint m_flInteractDistance = 0x950; // float32
            public const nint m_flDepthOffset = 0x954; // float32
            public const nint m_unOwnerContext = 0x958; // uint32
            public const nint m_unHorizontalAlign = 0x95C; // uint32
            public const nint m_unVerticalAlign = 0x960; // uint32
            public const nint m_unOrientation = 0x964; // uint32
            public const nint m_bAllowInteractionFromAllSceneWorlds = 0x968; // bool
            public const nint m_vecCSSClasses = 0x970; // 
            public const nint m_bOpaque = 0x988; // bool
            public const nint m_bNoDepth = 0x989; // bool
            public const nint m_bRenderBackface = 0x98A; // bool
            public const nint m_bUseOffScreenIndicator = 0x98B; // bool
            public const nint m_bExcludeFromSaveGames = 0x98C; // bool
            public const nint m_bGrabbable = 0x98D; // bool
            public const nint m_bOnlyRenderToTexture = 0x98E; // bool
            public const nint m_bDisableMipGen = 0x98F; // bool
            public const nint m_nExplicitImageLayout = 0x990; // int32
        }
        // Parent: CBaseAnimGraph
        // Field count: 4
        public static class CBaseProp {
            public const nint m_bModelOverrodeBlockLOS = 0x9A8; // bool
            public const nint m_iShapeType = 0x9AC; // int32
            public const nint m_bConformToCollisionBounds = 0x9B0; // bool
            public const nint m_mPreferredCatchTransform = 0x9B4; // matrix3x4_t
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
        public static class CEnvSky {
            public const nint m_hSkyMaterial = 0x790; // CStrongHandle<InfoForResourceTypeIMaterial2>
            public const nint m_hSkyMaterialLightingOnly = 0x798; // CStrongHandle<InfoForResourceTypeIMaterial2>
            public const nint m_bStartDisabled = 0x7A0; // bool
            public const nint m_vTintColor = 0x7A1; // Color
            public const nint m_vTintColorLightingOnly = 0x7A5; // Color
            public const nint m_flBrightnessScale = 0x7AC; // float32
            public const nint m_nFogType = 0x7B0; // int32
            public const nint m_flFogMinStart = 0x7B4; // float32
            public const nint m_flFogMinEnd = 0x7B8; // float32
            public const nint m_flFogMaxStart = 0x7BC; // float32
            public const nint m_flFogMaxEnd = 0x7C0; // float32
            public const nint m_bEnabled = 0x7C4; // bool
        }
        // Parent: 
        // Field count: 1
        public static class CMarkupVolumeTagged_NavGame {
            public const nint m_bFloodFillAttribute = 0x7E8; // bool
        }
        // Parent: CBaseTrigger
        // Field count: 1
        public static class CBuyZone {
            public const nint m_LegacyTeamNum = 0x960; // int32
        }
        // Parent: CBaseCSGrenade
        // Field count: 0
        public static class CTripWireFire {
        }
        // Parent: CPointEntity
        // Field count: 5
        public static class CInfoDynamicShadowHint {
            public const nint m_bDisabled = 0x4E0; // bool
            public const nint m_flRange = 0x4E4; // float32
            public const nint m_nImportance = 0x4E8; // int32
            public const nint m_nLightChoice = 0x4EC; // int32
            public const nint m_hLight = 0x4F0; // CHandle<CBaseEntity>
        }
        // Parent: CBaseCSGrenadeProjectile
        // Field count: 3
        public static class CFlashbangProjectile {
            public const nint m_flTimeToDetonate = 0xB50; // float32
            public const nint m_numOpponentsHit = 0xB54; // uint8
            public const nint m_numTeammatesHit = 0xB55; // uint8
        }
        // Parent: CPointClientUIWorldPanel
        // Field count: 1
        //
        // Metadata:
        // NetworkVarNames:  ()
        public static class CPointClientUIWorldTextPanel {
            public const nint m_messageText = 0x998; // char[512]
        }
        // Parent: CCSWeaponBaseGun
        // Field count: 0
        public static class CWeaponSSG08 {
        }
        // Parent: CCSWeaponBase
        // Field count: 0
        public static class CBreachCharge {
        }
        // Parent: CCSWeaponBaseGun
        // Field count: 0
        public static class CWeaponUMP45 {
        }
        // Parent: CSprite
        // Field count: 0
        public static class CSpriteAlias_env_glow {
        }
        // Parent: CBaseToggle
        // Field count: 25
        //
        // Metadata:
        // NetworkVarNames: m_glowEntity (CHandle<CBaseModelEntity>)
        // NetworkVarNames: m_usable (bool)
        // NetworkVarNames: m_szDisplayText (string_t)
        public static class CBaseButton {
            public const nint m_angMoveEntitySpace = 0x810; // QAngle
            public const nint m_fStayPushed = 0x81C; // bool
            public const nint m_fRotating = 0x81D; // bool
            public const nint m_ls = 0x820; // locksound_t
            public const nint m_sUseSound = 0x840; // CUtlSymbolLarge
            public const nint m_sLockedSound = 0x848; // CUtlSymbolLarge
            public const nint m_sUnlockedSound = 0x850; // CUtlSymbolLarge
            public const nint m_sOverrideAnticipationName = 0x858; // CUtlSymbolLarge
            public const nint m_bLocked = 0x860; // bool
            public const nint m_bDisabled = 0x861; // bool
            public const nint m_flUseLockedTime = 0x864; // GameTime_t
            public const nint m_bSolidBsp = 0x868; // bool
            public const nint m_OnDamaged = 0x870; // CEntityIOOutput
            public const nint m_OnPressed = 0x898; // CEntityIOOutput
            public const nint m_OnUseLocked = 0x8C0; // CEntityIOOutput
            public const nint m_OnIn = 0x8E8; // CEntityIOOutput
            public const nint m_OnOut = 0x910; // CEntityIOOutput
            public const nint m_nState = 0x938; // int32
            public const nint m_hConstraint = 0x93C; // CEntityHandle
            public const nint m_hConstraintParent = 0x940; // CEntityHandle
            public const nint m_bForceNpcExclude = 0x944; // bool
            public const nint m_sGlowEntity = 0x948; // CUtlSymbolLarge
            public const nint m_glowEntity = 0x950; // CHandle<CBaseModelEntity>
            public const nint m_usable = 0x954; // bool
            public const nint m_szDisplayText = 0x958; // CUtlSymbolLarge
        }
        // Parent: CPredictedViewModel
        // Field count: 1
        //
        // Metadata:
        // NetworkVarNames: m_bShouldIgnoreOffsetAndAccuracy (bool)
        public static class CCSGOViewModel {
            public const nint m_bShouldIgnoreOffsetAndAccuracy = 0x9F0; // bool
        }
        // Parent: CCSWeaponBaseGun
        // Field count: 3
        //
        // Metadata:
        // NetworkVarNames: m_flDisplayHealth (float)
        public static class CWeaponShield {
            public const nint m_flBulletDamageAbsorbed = 0xF90; // float32
            public const nint m_flLastBulletHitSoundTime = 0xF94; // GameTime_t
            public const nint m_flDisplayHealth = 0xF98; // float32
        }
        // Parent: CBaseProp
        // Field count: 33
        //
        // Metadata:
        // NetworkVarNames: m_CPropDataComponent (CPropDataComponent::Storage_t)
        // NetworkVarNames: m_noGhostCollision (bool)
        public static class CBreakableProp {
            public const nint m_CPropDataComponent = 0x9F0; // CPropDataComponent
            public const nint m_OnBreak = 0xA30; // CEntityIOOutput
            public const nint m_OnHealthChanged = 0xA58; // CEntityOutputTemplate<float32>
            public const nint m_OnTakeDamage = 0xA80; // CEntityIOOutput
            public const nint m_impactEnergyScale = 0xAA8; // float32
            public const nint m_iMinHealthDmg = 0xAAC; // int32
            public const nint m_preferredCarryAngles = 0xAB0; // QAngle
            public const nint m_flPressureDelay = 0xABC; // float32
            public const nint m_flDefBurstScale = 0xAC0; // float32
            public const nint m_vDefBurstOffset = 0xAC4; // Vector
            public const nint m_hBreaker = 0xAD0; // CHandle<CBaseEntity>
            public const nint m_PerformanceMode = 0xAD4; // PerformanceMode_t
            public const nint m_flPreventDamageBeforeTime = 0xAD8; // GameTime_t
            public const nint m_BreakableContentsType = 0xADC; // BreakableContentsType_t
            public const nint m_strBreakableContentsPropGroupOverride = 0xAE0; // CUtlString
            public const nint m_strBreakableContentsParticleOverride = 0xAE8; // CUtlString
            public const nint m_bHasBreakPiecesOrCommands = 0xAF0; // bool
            public const nint m_explodeDamage = 0xAF4; // float32
            public const nint m_explodeRadius = 0xAF8; // float32
            public const nint m_explosionDelay = 0xB00; // float32
            public const nint m_explosionBuildupSound = 0xB08; // CUtlSymbolLarge
            public const nint m_explosionCustomEffect = 0xB10; // CUtlSymbolLarge
            public const nint m_explosionCustomSound = 0xB18; // CUtlSymbolLarge
            public const nint m_explosionModifier = 0xB20; // CUtlSymbolLarge
            public const nint m_hPhysicsAttacker = 0xB28; // CHandle<CBasePlayerPawn>
            public const nint m_flLastPhysicsInfluenceTime = 0xB2C; // GameTime_t
            public const nint m_bOriginalBlockLOS = 0xB30; // bool
            public const nint m_flDefaultFadeScale = 0xB34; // float32
            public const nint m_hLastAttacker = 0xB38; // CHandle<CBaseEntity>
            public const nint m_hFlareEnt = 0xB3C; // CHandle<CBaseEntity>
            public const nint m_bUsePuntSound = 0xB40; // bool
            public const nint m_iszPuntSound = 0xB48; // CUtlSymbolLarge
            public const nint m_noGhostCollision = 0xB50; // bool
        }
        // Parent: CBaseFlex
        // Field count: 9
        //
        // Metadata:
        // MNetworkExcludeByUserGroup
        // NetworkVarNames: m_hMyWearables (CHandle<CEconWearable>)
        public static class CBaseCombatCharacter {
            public const nint m_bForceServerRagdoll = 0xA38; // bool
            public const nint m_hMyWearables = 0xA40; // CNetworkUtlVectorBase<CHandle<CEconWearable>>
            public const nint m_impactEnergyScale = 0xA58; // float32
            public const nint m_bApplyStressDamage = 0xA5C; // bool
            public const nint m_iDamageCount = 0xAA0; // int32
            public const nint m_pVecRelationships = 0xAA8; // CUtlVector<RelationshipOverride_t>*
            public const nint m_strRelationships = 0xAB0; // CUtlSymbolLarge
            public const nint m_eHull = 0xAB8; // Hull_t
            public const nint m_nNavHullIdx = 0xABC; // uint32
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
        public static class CInferno {
            public const nint m_firePositions = 0x7A0; // 
            public const nint m_fireParentPositions = 0xAA0; // 
            public const nint m_bFireIsBurning = 0xDA0; // 
            public const nint m_BurnNormal = 0xDE0; // 
            public const nint m_fireCount = 0x10E0; // int32
            public const nint m_nInfernoType = 0x10E4; // int32
            public const nint m_nFireEffectTickBegin = 0x10E8; // int32
            public const nint m_nFireLifetime = 0x10EC; // float32
            public const nint m_bInPostEffectTime = 0x10F0; // bool
            public const nint m_nFiresExtinguishCount = 0x10F4; // int32
            public const nint m_bWasCreatedInSmoke = 0x10F8; // bool
            public const nint m_extent = 0x1300; // Extent
            public const nint m_damageTimer = 0x1318; // CountdownTimer
            public const nint m_damageRampTimer = 0x1330; // CountdownTimer
            public const nint m_splashVelocity = 0x1348; // Vector
            public const nint m_InitialSplashVelocity = 0x1354; // Vector
            public const nint m_startPos = 0x1360; // Vector
            public const nint m_vecOriginalSpawnLocation = 0x136C; // Vector
            public const nint m_activeTimer = 0x1378; // IntervalTimer
            public const nint m_fireSpawnOffset = 0x1388; // int32
            public const nint m_nMaxFlames = 0x138C; // int32
            public const nint m_nSpreadCount = 0x1390; // int32
            public const nint m_BookkeepingTimer = 0x1398; // CountdownTimer
            public const nint m_NextSpreadTimer = 0x13B0; // CountdownTimer
            public const nint m_nSourceItemDefIndex = 0x13C8; // uint16
        }
        // Parent: CCSWeaponBaseGun
        // Field count: 0
        public static class CWeaponUSPSilencer {
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
        public static class CSprite {
            public const nint m_hSpriteMaterial = 0x790; // CStrongHandle<InfoForResourceTypeIMaterial2>
            public const nint m_hAttachedToEntity = 0x798; // CHandle<CBaseEntity>
            public const nint m_nAttachment = 0x79C; // 
            public const nint m_flSpriteFramerate = 0x7A0; // float32
            public const nint m_flFrame = 0x7A4; // float32
            public const nint m_flDieTime = 0x7A8; // GameTime_t
            public const nint m_nBrightness = 0x7B8; // uint32
            public const nint m_flBrightnessDuration = 0x7BC; // float32
            public const nint m_flSpriteScale = 0x7C0; // float32
            public const nint m_flScaleDuration = 0x7C4; // float32
            public const nint m_bWorldSpaceScale = 0x7C8; // bool
            public const nint m_flGlowProxySize = 0x7CC; // float32
            public const nint m_flHDRColorScale = 0x7D0; // float32
            public const nint m_flLastTime = 0x7D4; // GameTime_t
            public const nint m_flMaxFrame = 0x7D8; // float32
            public const nint m_flStartScale = 0x7DC; // float32
            public const nint m_flDestScale = 0x7E0; // float32
            public const nint m_flScaleTimeStart = 0x7E4; // GameTime_t
            public const nint m_nStartBrightness = 0x7E8; // int32
            public const nint m_nDestBrightness = 0x7EC; // int32
            public const nint m_flBrightnessTimeStart = 0x7F0; // GameTime_t
            public const nint m_nSpriteWidth = 0x7F4; // int32
            public const nint m_nSpriteHeight = 0x7F8; // int32
        }
        // Parent: CInfoDynamicShadowHint
        // Field count: 2
        public static class CInfoDynamicShadowHintBox {
            public const nint m_vBoxMins = 0x4F8; // Vector
            public const nint m_vBoxMaxs = 0x504; // Vector
        }
        // Parent: CBaseCSGrenade
        // Field count: 0
        public static class CFlashbang {
        }
        // Parent: CCSWeaponBaseGun
        // Field count: 0
        public static class CWeaponAug {
        }
        // Parent: CDynamicProp
        // Field count: 28
        //
        // Metadata:
        // NetworkVarNames: m_AttributeManager (CAttributeContainer)
        // NetworkVarNames: m_jumpedThisFrame (bool)
        // NetworkVarNames: m_leader (CHandle<CCSPlayerPawn>)
        public static class CChicken {
            public const nint m_AttributeManager = 0xC78; // CAttributeContainer
            public const nint m_updateTimer = 0xF40; // CountdownTimer
            public const nint m_stuckAnchor = 0xF58; // Vector
            public const nint m_stuckTimer = 0xF68; // CountdownTimer
            public const nint m_collisionStuckTimer = 0xF80; // CountdownTimer
            public const nint m_isOnGround = 0xF98; // bool
            public const nint m_vFallVelocity = 0xF9C; // Vector
            public const nint m_desiredActivity = 0xFA8; // ChickenActivity
            public const nint m_currentActivity = 0xFAC; // ChickenActivity
            public const nint m_activityTimer = 0xFB0; // CountdownTimer
            public const nint m_turnRate = 0xFC8; // float32
            public const nint m_fleeFrom = 0xFCC; // CHandle<CBaseEntity>
            public const nint m_moveRateThrottleTimer = 0xFD0; // CountdownTimer
            public const nint m_startleTimer = 0xFE8; // CountdownTimer
            public const nint m_vocalizeTimer = 0x1000; // CountdownTimer
            public const nint m_flWhenZombified = 0x1018; // GameTime_t
            public const nint m_jumpedThisFrame = 0x101C; // bool
            public const nint m_leader = 0x1020; // CHandle<CCSPlayerPawn>
            public const nint m_reuseTimer = 0x1038; // CountdownTimer
            public const nint m_hasBeenUsed = 0x1050; // bool
            public const nint m_jumpTimer = 0x1058; // CountdownTimer
            public const nint m_flLastJumpTime = 0x1070; // float32
            public const nint m_bInJump = 0x1074; // bool
            public const nint m_repathTimer = 0x3080; // CountdownTimer
            public const nint m_vecPathGoal = 0x3118; // Vector
            public const nint m_flActiveFollowStartTime = 0x3124; // GameTime_t
            public const nint m_followMinuteTimer = 0x3128; // CountdownTimer
            public const nint m_BlockDirectionTimer = 0x3148; // CountdownTimer
        }
        // Parent: CBaseTrigger
        // Field count: 7
        public static class CChangeLevel {
            public const nint m_sMapName = 0x960; // CUtlString
            public const nint m_sLandmarkName = 0x968; // CUtlString
            public const nint m_OnChangeLevel = 0x970; // CEntityIOOutput
            public const nint m_bTouched = 0x998; // bool
            public const nint m_bNoTouch = 0x999; // bool
            public const nint m_bNewChapter = 0x99A; // bool
            public const nint m_bOnChangeLevelFired = 0x99B; // bool
        }
        // Parent: CBaseTrigger
        // Field count: 14
        public static class CTriggerLerpObject {
            public const nint m_iszLerpTarget = 0x960; // CUtlSymbolLarge
            public const nint m_hLerpTarget = 0x968; // CHandle<CBaseEntity>
            public const nint m_iszLerpTargetAttachment = 0x970; // CUtlSymbolLarge
            public const nint m_hLerpTargetAttachment = 0x978; // 
            public const nint m_flLerpDuration = 0x97C; // float32
            public const nint m_bLerpRestoreMoveType = 0x980; // bool
            public const nint m_bSingleLerpObject = 0x981; // bool
            public const nint m_vecLerpingObjects = 0x988; // 
            public const nint m_iszLerpEffect = 0x9A0; // CUtlSymbolLarge
            public const nint m_iszLerpSound = 0x9A8; // CUtlSymbolLarge
            public const nint m_bAttachTouchingObject = 0x9B0; // bool
            public const nint m_hEntityToWaitForDisconnect = 0x9B4; // CHandle<CBaseEntity>
            public const nint m_OnLerpStarted = 0x9B8; // CEntityIOOutput
            public const nint m_OnLerpFinished = 0x9E0; // CEntityIOOutput
        }
        // Parent: CBaseToggle
        // Field count: 12
        //
        // Metadata:
        // MNetworkIncludeByName
        // NetworkVarNames:  ()
        // NetworkVarNames:  ()
        public static class CBaseTrigger {
            public const nint m_bDisabled = 0x810; // bool
            public const nint m_iFilterName = 0x818; // CUtlSymbolLarge
            public const nint m_hFilter = 0x820; // CHandle<CBaseFilter>
            public const nint m_OnStartTouch = 0x828; // CEntityIOOutput
            public const nint m_OnStartTouchAll = 0x850; // CEntityIOOutput
            public const nint m_OnEndTouch = 0x878; // CEntityIOOutput
            public const nint m_OnEndTouchAll = 0x8A0; // CEntityIOOutput
            public const nint m_OnTouching = 0x8C8; // CEntityIOOutput
            public const nint m_OnTouchingEachEntity = 0x8F0; // CEntityIOOutput
            public const nint m_OnNotTouching = 0x918; // CEntityIOOutput
            public const nint m_hTouchingEntities = 0x940; // CUtlVector<CHandle<CBaseEntity>>
            public const nint m_bClientSidePredicted = 0x958; // bool
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
        public static class CEconEntity {
            public const nint m_AttributeManager = 0xA48; // CAttributeContainer
            public const nint m_OriginalOwnerXuidLow = 0xD10; // uint32
            public const nint m_OriginalOwnerXuidHigh = 0xD14; // uint32
            public const nint m_nFallbackPaintKit = 0xD18; // int32
            public const nint m_nFallbackSeed = 0xD1C; // int32
            public const nint m_flFallbackWear = 0xD20; // float32
            public const nint m_nFallbackStatTrak = 0xD24; // int32
            public const nint m_hOldProvidee = 0xD28; // CHandle<CBaseEntity>
            public const nint m_iOldOwnerClass = 0xD2C; // int32
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
        public static class CTriggerPhysics {
            public const nint m_gravityScale = 0x970; // float32
            public const nint m_linearLimit = 0x974; // float32
            public const nint m_linearDamping = 0x978; // float32
            public const nint m_angularLimit = 0x97C; // float32
            public const nint m_angularDamping = 0x980; // float32
            public const nint m_linearForce = 0x984; // float32
            public const nint m_flFrequency = 0x988; // float32
            public const nint m_flDampingRatio = 0x98C; // float32
            public const nint m_vecLinearForcePointAt = 0x990; // Vector
            public const nint m_bCollapseToForcePoint = 0x99C; // bool
            public const nint m_vecLinearForcePointAtWorld = 0x9A0; // Vector
            public const nint m_vecLinearForceDirection = 0x9AC; // Vector
            public const nint m_bConvertToDebrisWhenPossible = 0x9B8; // bool
        }
        // Parent: CBaseModelEntity
        // Field count: 26
        public static class CFuncShatterglass {
            public const nint m_matPanelTransform = 0x790; // matrix3x4_t
            public const nint m_matPanelTransformWsTemp = 0x7C0; // matrix3x4_t
            public const nint m_vecShatterGlassShards = 0x7F0; // CUtlVector<uint32>
            public const nint m_PanelSize = 0x808; // Vector2D
            public const nint m_flLastShatterSoundEmitTime = 0x810; // GameTime_t
            public const nint m_flLastCleanupTime = 0x814; // GameTime_t
            public const nint m_flInitAtTime = 0x818; // GameTime_t
            public const nint m_flGlassThickness = 0x81C; // float32
            public const nint m_flSpawnInvulnerability = 0x820; // float32
            public const nint m_bBreakSilent = 0x824; // bool
            public const nint m_bBreakShardless = 0x825; // bool
            public const nint m_bBroken = 0x826; // bool
            public const nint m_bGlassNavIgnore = 0x827; // bool
            public const nint m_bGlassInFrame = 0x828; // bool
            public const nint m_bStartBroken = 0x829; // bool
            public const nint m_iInitialDamageType = 0x82A; // uint8
            public const nint m_szDamagePositioningEntityName01 = 0x830; // CUtlSymbolLarge
            public const nint m_szDamagePositioningEntityName02 = 0x838; // CUtlSymbolLarge
            public const nint m_szDamagePositioningEntityName03 = 0x840; // CUtlSymbolLarge
            public const nint m_szDamagePositioningEntityName04 = 0x848; // CUtlSymbolLarge
            public const nint m_vInitialDamagePositions = 0x850; // 
            public const nint m_vExtraDamagePositions = 0x868; // 
            public const nint m_vInitialPanelVertices = 0x880; // 
            public const nint m_OnBroken = 0x898; // CEntityIOOutput
            public const nint m_iSurfaceType = 0x8C0; // uint8
            public const nint m_hMaterialDamageBase = 0x8C8; // CStrongHandle<InfoForResourceTypeIMaterial2>
        }
        // Parent: CBaseButton
        // Field count: 0
        public static class CRotButton {
        }
        // Parent: CCSWeaponBaseGun
        // Field count: 0
        public static class CWeaponHKP2000 {
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
        public static class CPlantedC4 {
            public const nint m_bBombTicking = 0x9B0; // bool
            public const nint m_flC4Blow = 0x9B4; // GameTime_t
            public const nint m_nBombSite = 0x9B8; // int32
            public const nint m_nSourceSoundscapeHash = 0x9BC; // int32
            public const nint m_AttributeManager = 0x9C0; // CAttributeContainer
            public const nint m_OnBombDefused = 0xC88; // CEntityIOOutput
            public const nint m_OnBombBeginDefuse = 0xCB0; // CEntityIOOutput
            public const nint m_OnBombDefuseAborted = 0xCD8; // CEntityIOOutput
            public const nint m_bCannotBeDefused = 0xD00; // bool
            public const nint m_entitySpottedState = 0xD08; // EntitySpottedState_t
            public const nint m_nSpotRules = 0xD20; // int32
            public const nint m_bTrainingPlacedByPlayer = 0xD24; // bool
            public const nint m_bHasExploded = 0xD25; // bool
            public const nint m_flTimerLength = 0xD28; // float32
            public const nint m_bBeingDefused = 0xD2C; // bool
            public const nint m_fLastDefuseTime = 0xD34; // GameTime_t
            public const nint m_flDefuseLength = 0xD3C; // float32
            public const nint m_flDefuseCountDown = 0xD40; // GameTime_t
            public const nint m_bBombDefused = 0xD44; // bool
            public const nint m_hBombDefuser = 0xD48; // CHandle<CCSPlayerPawn>
            public const nint m_hControlPanel = 0xD4C; // CHandle<CBaseEntity>
            public const nint m_iProgressBarTime = 0xD50; // int32
            public const nint m_bVoiceAlertFired = 0xD54; // bool
            public const nint m_bVoiceAlertPlayed = 0xD55; // bool[4]
            public const nint m_flNextBotBeepTime = 0xD5C; // GameTime_t
            public const nint m_angCatchUpToPlayerEye = 0xD64; // QAngle
            public const nint m_flLastSpinDetectionTime = 0xD70; // GameTime_t
        }
        // Parent: CBaseClientUIEntity
        // Field count: 2
        //
        // Metadata:
        // NetworkVarNames:  ()
        public static class CPointClientUIDialog {
            public const nint m_hActivator = 0x940; // CHandle<CBaseEntity>
            public const nint m_bStartEnabled = 0x944; // bool
        }
        // Parent: CCSWeaponBase
        // Field count: 0
        public static class CWeaponNOVA {
        }
        // Parent: CCSWeaponBaseGun
        // Field count: 2
        //
        // Metadata:
        // NetworkVarNames: m_fFireTime (GameTime_t)
        public static class CWeaponTaser {
            public const nint m_fFireTime = 0xF90; // GameTime_t
            public const nint m_nLastAttackTick = 0xF94; // int32
        }
        // Parent: CBaseAnimGraph
        // Field count: 0
        public static class CWaterBullet {
        }
        // Parent: CPointEntity
        // Field count: 6
        public static class CMessage {
            public const nint m_iszMessage = 0x4E0; // CUtlSymbolLarge
            public const nint m_MessageVolume = 0x4E8; // float32
            public const nint m_MessageAttenuation = 0x4EC; // int32
            public const nint m_Radius = 0x4F0; // float32
            public const nint m_sNoise = 0x4F8; // CUtlSymbolLarge
            public const nint m_OnShowMessage = 0x500; // CEntityIOOutput
        }
        // Parent: CBaseModelEntity
        // Field count: 15
        //
        // Metadata:
        // NetworkVarNames:  ()
        public static class CBreakable {
            public const nint m_CPropDataComponent = 0x798; // CPropDataComponent
            public const nint m_Material = 0x7D8; // Materials
            public const nint m_hBreaker = 0x7DC; // CHandle<CBaseEntity>
            public const nint m_Explosion = 0x7E0; // Explosions
            public const nint m_iszSpawnObject = 0x7E8; // CUtlSymbolLarge
            public const nint m_flPressureDelay = 0x7F0; // float32
            public const nint m_iMinHealthDmg = 0x7F4; // int32
            public const nint m_iszPropData = 0x7F8; // CUtlSymbolLarge
            public const nint m_impactEnergyScale = 0x800; // float32
            public const nint m_nOverrideBlockLOS = 0x804; // EOverrideBlockLOS_t
            public const nint m_OnBreak = 0x808; // CEntityIOOutput
            public const nint m_OnHealthChanged = 0x830; // CEntityOutputTemplate<float32>
            public const nint m_PerformanceMode = 0x858; // PerformanceMode_t
            public const nint m_hPhysicsAttacker = 0x85C; // CHandle<CBasePlayerPawn>
            public const nint m_flLastPhysicsInfluenceTime = 0x860; // GameTime_t
        }
        // Parent: CBaseModelEntity
        // Field count: 16
        public static class CBaseToggle {
            public const nint m_toggle_state = 0x790; // TOGGLE_STATE
            public const nint m_flMoveDistance = 0x794; // float32
            public const nint m_flWait = 0x798; // float32
            public const nint m_flLip = 0x79C; // float32
            public const nint m_bAlwaysFireBlockedOutputs = 0x7A0; // bool
            public const nint m_vecPosition1 = 0x7A4; // Vector
            public const nint m_vecPosition2 = 0x7B0; // Vector
            public const nint m_vecMoveAng = 0x7BC; // QAngle
            public const nint m_vecAngle1 = 0x7C8; // QAngle
            public const nint m_vecAngle2 = 0x7D4; // QAngle
            public const nint m_flHeight = 0x7E0; // float32
            public const nint m_hActivator = 0x7E4; // CHandle<CBaseEntity>
            public const nint m_vecFinalDest = 0x7E8; // Vector
            public const nint m_vecFinalAngle = 0x7F4; // QAngle
            public const nint m_movementType = 0x800; // int32
            public const nint m_sMaster = 0x808; // CUtlSymbolLarge
        }
        // Parent: CRotButton
        // Field count: 14
        public static class CMomentaryRotButton {
            public const nint m_Position = 0x960; // CEntityOutputTemplate<float32>
            public const nint m_OnUnpressed = 0x988; // CEntityIOOutput
            public const nint m_OnFullyOpen = 0x9B0; // CEntityIOOutput
            public const nint m_OnFullyClosed = 0x9D8; // CEntityIOOutput
            public const nint m_OnReachedPosition = 0xA00; // CEntityIOOutput
            public const nint m_lastUsed = 0xA28; // int32
            public const nint m_start = 0xA2C; // QAngle
            public const nint m_end = 0xA38; // QAngle
            public const nint m_IdealYaw = 0xA44; // float32
            public const nint m_sNoise = 0xA48; // CUtlSymbolLarge
            public const nint m_bUpdateTarget = 0xA50; // bool
            public const nint m_direction = 0xA54; // int32
            public const nint m_returnSpeed = 0xA58; // float32
            public const nint m_flStartPosition = 0xA5C; // float32
        }
        // Parent: 
        // Field count: 2
        public static class CGameText {
            public const nint m_iszMessage = 0x7A0; // CUtlSymbolLarge
            public const nint m_textParms = 0x7A8; // hudtextparms_t
        }
        // Parent: CCSWeaponBaseGun
        // Field count: 0
        public static class CWeaponMP5SD {
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
        public static class CTextureBasedAnimatable {
            public const nint m_bLoop = 0x790; // bool
            public const nint m_flFPS = 0x794; // float32
            public const nint m_hPositionKeys = 0x798; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_hRotationKeys = 0x7A0; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_vAnimationBoundsMin = 0x7A8; // Vector
            public const nint m_vAnimationBoundsMax = 0x7B4; // Vector
            public const nint m_flStartTime = 0x7C0; // float32
            public const nint m_flStartFrame = 0x7C4; // float32
        }
        // Parent: CCSWeaponBaseGun
        // Field count: 0
        public static class CWeaponFamas {
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
        public static class CInfoOffscreenPanoramaTexture {
            public const nint m_bDisabled = 0x4E0; // bool
            public const nint m_nResolutionX = 0x4E4; // int32
            public const nint m_nResolutionY = 0x4E8; // int32
            public const nint m_szLayoutFileName = 0x4F0; // CUtlSymbolLarge
            public const nint m_RenderAttrName = 0x4F8; // CUtlSymbolLarge
            public const nint m_TargetEntities = 0x500; // CNetworkUtlVectorBase<CHandle<CBaseModelEntity>>
            public const nint m_nTargetChangeCount = 0x518; // int32
            public const nint m_vecCSSClasses = 0x520; // 
            public const nint m_szTargetsName = 0x538; // CUtlSymbolLarge
            public const nint m_AdditionalTargetEntities = 0x540; // 
        }
        // Parent: CCSWeaponBase
        // Field count: 9
        //
        // Metadata:
        // NetworkVarNames: m_zoomLevel (int)
        // NetworkVarNames: m_iBurstShotsRemaining (int)
        // NetworkVarNames: m_bNeedsBoltAction (bool)
        public static class CCSWeaponBaseGun {
            public const nint m_zoomLevel = 0xF70; // int32
            public const nint m_iBurstShotsRemaining = 0xF74; // int32
            public const nint m_silencedModelIndex = 0xF80; // int32
            public const nint m_inPrecache = 0xF84; // bool
            public const nint m_bNeedsBoltAction = 0xF85; // bool
            public const nint m_bSkillReloadAvailable = 0xF86; // bool
            public const nint m_bSkillReloadLiftedReloadKey = 0xF87; // bool
            public const nint m_bSkillBoltInterruptAvailable = 0xF88; // bool
            public const nint m_bSkillBoltLiftedFireKey = 0xF89; // bool
        }
        // Parent: CBaseToggle
        // Field count: 3
        public static class CGunTarget {
            public const nint m_on = 0x810; // bool
            public const nint m_hTargetEnt = 0x814; // CHandle<CBaseEntity>
            public const nint m_OnDeath = 0x818; // CEntityIOOutput
        }
        // Parent: CCSWeaponBaseGun
        // Field count: 0
        public static class CWeaponM4A1Silencer {
        }
        // Parent: 
        // Field count: 1
        public static class CScriptNavBlocker {
            public const nint m_vExtent = 0x7A0; // Vector
        }
        // Parent: CBaseAnimGraph
        // Field count: 1
        public static class CConstraintAnchor {
            public const nint m_massScale = 0x9A8; // float32
        }
        // Parent: CCSWeaponBaseGun
        // Field count: 0
        public static class CWeaponTec9 {
        }
        // Parent: 
        // Field count: 0
        public static class CMarkupVolumeTagged_Nav {
        }
        // Parent: CCSWeaponBaseGun
        // Field count: 0
        public static class CWeaponCZ75a {
        }
        // Parent: CCSWeaponBaseGun
        // Field count: 0
        public static class CWeaponP250 {
        }
        // Parent: CBaseAnimGraph
        // Field count: 7
        //
        // Metadata:
        // NetworkVarNames: m_flexWeight (float32)
        // NetworkVarNames: m_vLookTargetPosition (Vector)
        // NetworkVarNames: m_blinktoggle (bool)
        public static class CBaseFlex {
            public const nint m_flexWeight = 0x9A8; // CNetworkUtlVectorBase<float32>
            public const nint m_vLookTargetPosition = 0x9C0; // Vector
            public const nint m_blinktoggle = 0x9CC; // bool
            public const nint m_flAllowResponsesEndTime = 0xA20; // GameTime_t
            public const nint m_flLastFlexAnimationTime = 0xA24; // GameTime_t
            public const nint m_nNextSceneEventId = 0xA28; // SceneEventId_t
            public const nint m_bUpdateLayerPriorities = 0xA2C; // bool
        }
        // Parent: CBasePlayerWeaponVData
        // Field count: 92
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertySuppressBaseClassField
        // MPropertySuppressBaseClassField
        public static class CCSWeaponBaseVData {
            public const nint m_WeaponType = 0x348; // CSWeaponType
            public const nint m_WeaponCategory = 0x34C; // CSWeaponCategory
            public const nint m_szViewModel = 0x350; // 
            public const nint m_szPlayerModel = 0x430; // 
            public const nint m_szWorldDroppedModel = 0x510; // 
            public const nint m_szAimsightLensMaskModel = 0x5F0; // 
            public const nint m_szMagazineModel = 0x6D0; // 
            public const nint m_szHeatEffect = 0x7B0; // 
            public const nint m_szEjectBrassEffect = 0x890; // 
            public const nint m_szMuzzleFlashParticleAlt = 0x970; // 
            public const nint m_szMuzzleFlashThirdPersonParticle = 0xA50; // 
            public const nint m_szMuzzleFlashThirdPersonParticleAlt = 0xB30; // 
            public const nint m_szTracerParticle = 0xC10; // 
            public const nint m_GearSlot = 0xCF0; // gear_slot_t
            public const nint m_GearSlotPosition = 0xCF4; // int32
            public const nint m_DefaultLoadoutSlot = 0xCF8; // loadout_slot_t
            public const nint m_sWrongTeamMsg = 0xD00; // CUtlString
            public const nint m_nPrice = 0xD08; // int32
            public const nint m_nKillAward = 0xD0C; // int32
            public const nint m_nPrimaryReserveAmmoMax = 0xD10; // int32
            public const nint m_nSecondaryReserveAmmoMax = 0xD14; // int32
            public const nint m_bMeleeWeapon = 0xD18; // bool
            public const nint m_bHasBurstMode = 0xD19; // bool
            public const nint m_bIsRevolver = 0xD1A; // bool
            public const nint m_bCannotShootUnderwater = 0xD1B; // bool
            public const nint m_szName = 0xD20; // CGlobalSymbol
            public const nint m_szAnimExtension = 0xD28; // CUtlString
            public const nint m_eSilencerType = 0xD30; // CSWeaponSilencerType
            public const nint m_nCrosshairMinDistance = 0xD34; // int32
            public const nint m_nCrosshairDeltaDistance = 0xD38; // int32
            public const nint m_bIsFullAuto = 0xD3C; // bool
            public const nint m_nNumBullets = 0xD40; // int32
            public const nint m_flCycleTime = 0xD44; // CFiringModeFloat
            public const nint m_flMaxSpeed = 0xD4C; // CFiringModeFloat
            public const nint m_flSpread = 0xD54; // CFiringModeFloat
            public const nint m_flInaccuracyCrouch = 0xD5C; // CFiringModeFloat
            public const nint m_flInaccuracyStand = 0xD64; // CFiringModeFloat
            public const nint m_flInaccuracyJump = 0xD6C; // CFiringModeFloat
            public const nint m_flInaccuracyLand = 0xD74; // CFiringModeFloat
            public const nint m_flInaccuracyLadder = 0xD7C; // CFiringModeFloat
            public const nint m_flInaccuracyFire = 0xD84; // CFiringModeFloat
            public const nint m_flInaccuracyMove = 0xD8C; // CFiringModeFloat
            public const nint m_flRecoilAngle = 0xD94; // CFiringModeFloat
            public const nint m_flRecoilAngleVariance = 0xD9C; // CFiringModeFloat
            public const nint m_flRecoilMagnitude = 0xDA4; // CFiringModeFloat
            public const nint m_flRecoilMagnitudeVariance = 0xDAC; // CFiringModeFloat
            public const nint m_nTracerFrequency = 0xDB4; // CFiringModeInt
            public const nint m_flInaccuracyJumpInitial = 0xDBC; // float32
            public const nint m_flInaccuracyJumpApex = 0xDC0; // float32
            public const nint m_flInaccuracyReload = 0xDC4; // float32
            public const nint m_nRecoilSeed = 0xDC8; // int32
            public const nint m_nSpreadSeed = 0xDCC; // int32
            public const nint m_flTimeToIdleAfterFire = 0xDD0; // float32
            public const nint m_flIdleInterval = 0xDD4; // float32
            public const nint m_flAttackMovespeedFactor = 0xDD8; // float32
            public const nint m_flHeatPerShot = 0xDDC; // float32
            public const nint m_flInaccuracyPitchShift = 0xDE0; // float32
            public const nint m_flInaccuracyAltSoundThreshold = 0xDE4; // float32
            public const nint m_flBotAudibleRange = 0xDE8; // float32
            public const nint m_szUseRadioSubtitle = 0xDF0; // CUtlString
            public const nint m_bUnzoomsAfterShot = 0xDF8; // bool
            public const nint m_bHideViewModelWhenZoomed = 0xDF9; // bool
            public const nint m_nZoomLevels = 0xDFC; // int32
            public const nint m_nZoomFOV1 = 0xE00; // int32
            public const nint m_nZoomFOV2 = 0xE04; // int32
            public const nint m_flZoomTime0 = 0xE08; // float32
            public const nint m_flZoomTime1 = 0xE0C; // float32
            public const nint m_flZoomTime2 = 0xE10; // float32
            public const nint m_flIronSightPullUpSpeed = 0xE14; // float32
            public const nint m_flIronSightPutDownSpeed = 0xE18; // float32
            public const nint m_flIronSightFOV = 0xE1C; // float32
            public const nint m_flIronSightPivotForward = 0xE20; // float32
            public const nint m_flIronSightLooseness = 0xE24; // float32
            public const nint m_angPivotAngle = 0xE28; // QAngle
            public const nint m_vecIronSightEyePos = 0xE34; // Vector
            public const nint m_nDamage = 0xE40; // int32
            public const nint m_flHeadshotMultiplier = 0xE44; // float32
            public const nint m_flArmorRatio = 0xE48; // float32
            public const nint m_flPenetration = 0xE4C; // float32
            public const nint m_flRange = 0xE50; // float32
            public const nint m_flRangeModifier = 0xE54; // float32
            public const nint m_flFlinchVelocityModifierLarge = 0xE58; // float32
            public const nint m_flFlinchVelocityModifierSmall = 0xE5C; // float32
            public const nint m_flRecoveryTimeCrouch = 0xE60; // float32
            public const nint m_flRecoveryTimeStand = 0xE64; // float32
            public const nint m_flRecoveryTimeCrouchFinal = 0xE68; // float32
            public const nint m_flRecoveryTimeStandFinal = 0xE6C; // float32
            public const nint m_nRecoveryTransitionStartBullet = 0xE70; // int32
            public const nint m_nRecoveryTransitionEndBullet = 0xE74; // int32
            public const nint m_flThrowVelocity = 0xE78; // float32
            public const nint m_vSmokeColor = 0xE7C; // Vector
            public const nint m_szAnimClass = 0xE88; // CGlobalSymbol
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
        public static class CCSPlayerPawn {
            public const nint m_pBulletServices = 0xDD0; // 
            public const nint m_pHostageServices = 0xDD8; // 
            public const nint m_pBuyServices = 0x0; // 
        }
        // Parent: CBaseGrenade
        // Field count: 0
        public static class CBumpMineProjectile {
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
        public static class CCSPlayerController {
            public const nint m_pInGameMoneyServices = 0x788; // 
            public const nint m_pInventoryServices = 0x790; // 
            public const nint m_pActionTrackingServices = 0x798; // 
            public const nint m_pDamageServices = 0x7A0; // 
            public const nint m_iPing = 0x7A8; // uint32
            public const nint m_bHasCommunicationAbuseMute = 0x7AC; // bool
            public const nint m_szCrosshairCodes = 0x7B0; // CUtlSymbolLarge
            public const nint m_iPendingTeamNum = 0x7B8; // uint8
            public const nint m_flForceTeamTime = 0x7BC; // GameTime_t
            public const nint m_iCompTeammateColor = 0x7C0; // int32
            public const nint m_bEverPlayedOnTeam = 0x7C4; // bool
            public const nint m_bAttemptedToGetColor = 0x7C5; // bool
            public const nint m_iTeammatePreferredColor = 0x7C8; // int32
            public const nint m_bTeamChanged = 0x7CC; // bool
            public const nint m_bInSwitchTeam = 0x7CD; // bool
            public const nint m_bHasSeenJoinGame = 0x7CE; // bool
            public const nint m_bJustBecameSpectator = 0x7CF; // bool
            public const nint m_bSwitchTeamsOnNextRoundReset = 0x7D0; // bool
            public const nint m_bRemoveAllItemsOnNextRoundReset = 0x7D1; // bool
            public const nint m_flLastJoinTeamTime = 0x7D4; // GameTime_t
            public const nint m_szClan = 0x7D8; // CUtlSymbolLarge
            public const nint m_szClanName = 0x7E0; // 
            public const nint m_iCoachingTeam = 0x800; // int32
            public const nint m_nPlayerDominated = 0x808; // uint64
            public const nint m_nPlayerDominatingMe = 0x810; // uint64
            public const nint m_iCompetitiveRanking = 0x818; // int32
            public const nint m_iCompetitiveWins = 0x81C; // int32
            public const nint m_iCompetitiveRankType = 0x820; // int8
            public const nint m_iCompetitiveRankingPredicted_Win = 0x824; // int32
            public const nint m_iCompetitiveRankingPredicted_Loss = 0x828; // int32
            public const nint m_iCompetitiveRankingPredicted_Tie = 0x82C; // int32
            public const nint m_nEndMatchNextMapVote = 0x830; // int32
            public const nint m_unActiveQuestId = 0x834; // uint16
            public const nint m_nQuestProgressReason = 0x838; // QuestProgress::Reason
            public const nint m_unPlayerTvControlFlags = 0x83C; // uint32
            public const nint m_iDraftIndex = 0x868; // int32
            public const nint m_msQueuedModeDisconnectionTimestamp = 0x86C; // uint32
            public const nint m_uiAbandonRecordedReason = 0x870; // uint32
            public const nint m_bCannotBeKicked = 0x874; // bool
            public const nint m_bEverFullyConnected = 0x875; // bool
            public const nint m_bAbandonAllowsSurrender = 0x876; // bool
            public const nint m_bAbandonOffersInstantSurrender = 0x877; // bool
            public const nint m_bDisconnection1MinWarningPrinted = 0x878; // bool
            public const nint m_bScoreReported = 0x879; // bool
            public const nint m_nDisconnectionTick = 0x87C; // int32
            public const nint m_bControllingBot = 0x888; // bool
            public const nint m_bHasControlledBotThisRound = 0x889; // bool
            public const nint m_bHasBeenControlledByPlayerThisRound = 0x88A; // bool
            public const nint m_nBotsControlledThisRound = 0x88C; // int32
            public const nint m_bCanControlObservedBot = 0x890; // bool
            public const nint m_hPlayerPawn = 0x894; // CHandle<CCSPlayerPawn>
            public const nint m_hObserverPawn = 0x898; // 
            public const nint m_DesiredObserverMode = 0x89C; // int32
            public const nint m_hDesiredObserverTarget = 0x8A0; // CEntityHandle
            public const nint m_bPawnIsAlive = 0x8A4; // bool
            public const nint m_iPawnHealth = 0x8A8; // uint32
            public const nint m_iPawnArmor = 0x8AC; // int32
            public const nint m_bPawnHasDefuser = 0x8B0; // bool
            public const nint m_bPawnHasHelmet = 0x8B1; // bool
            public const nint m_nPawnCharacterDefIndex = 0x8B2; // uint16
            public const nint m_iPawnLifetimeStart = 0x8B4; // int32
            public const nint m_iPawnLifetimeEnd = 0x8B8; // int32
            public const nint m_iPawnBotDifficulty = 0x8BC; // int32
            public const nint m_hOriginalControllerOfCurrentPawn = 0x8C0; // CHandle<CCSPlayerController>
            public const nint m_iScore = 0x8C4; // int32
            public const nint m_iRoundScore = 0x8C8; // int32
            public const nint m_iRoundsWon = 0x8CC; // int32
            public const nint m_recentKillQueue = 0x8D0; // 
            public const nint m_nFirstKill = 0x8D8; // uint8
            public const nint m_nKillCount = 0x8D9; // uint8
            public const nint m_bMvpNoMusic = 0x8DA; // bool
            public const nint m_eMvpReason = 0x8DC; // int32
            public const nint m_iMusicKitID = 0x8E0; // int32
            public const nint m_iMusicKitMVPs = 0x8E4; // int32
            public const nint m_iMVPs = 0x8E8; // int32
            public const nint m_nUpdateCounter = 0x8EC; // int32
            public const nint m_flSmoothedPing = 0x8F0; // float32
            public const nint m_lastHeldVoteTimer = 0xF998; // IntervalTimer
            public const nint m_bShowHints = 0xF9B0; // bool
            public const nint m_iNextTimeCheck = 0xF9B4; // int32
            public const nint m_bJustDidTeamKill = 0xF9B8; // bool
            public const nint m_bPunishForTeamKill = 0xF9B9; // bool
            public const nint m_bGaveTeamDamageWarning = 0xF9BA; // bool
            public const nint m_bGaveTeamDamageWarningThisRound = 0xF9BB; // bool
            public const nint m_dblLastReceivedPacketPlatFloatTime = 0xF9C0; // float64
            public const nint m_LastTeamDamageWarningTime = 0xF9C8; // GameTime_t
            public const nint m_LastTimePlayerWasDisconnectedForPawnsRemove = 0xF9CC; // GameTime_t
            public const nint m_nSuspiciousHitCount = 0xF9D0; // uint32
            public const nint m_nNonSuspiciousHitStreak = 0xF9D4; // uint32
            public const nint m_bFireBulletsSeedSynchronized = 0xFA79; // bool
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
        public static class CEconItemView {
            public const nint m_iItemDefinitionIndex = 0x38; // uint16
            public const nint m_iEntityQuality = 0x3C; // int32
            public const nint m_iEntityLevel = 0x40; // uint32
            public const nint m_iItemID = 0x48; // uint64
            public const nint m_iItemIDHigh = 0x50; // uint32
            public const nint m_iItemIDLow = 0x54; // uint32
            public const nint m_iAccountID = 0x58; // uint32
            public const nint m_iInventoryPosition = 0x5C; // uint32
            public const nint m_bInitialized = 0x68; // bool
            public const nint m_AttributeList = 0x70; // CAttributeList
            public const nint m_NetworkedDynamicAttributes = 0xD0; // CAttributeList
            public const nint m_szCustomName = 0x130; // 
            public const nint m_szCustomNameOverride = 0x1D1; // 
        }
        // Parent: CPointEntity
        // Field count: 0
        public static class CInfoInstructorHintBombTargetA {
        }
        // Parent: CCSWeaponBaseGun
        // Field count: 0
        public static class CWeaponAWP {
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
        public static class CBasePlayerPawn {
            public const nint m_pWeaponServices = 0xAC0; // CPlayer_WeaponServices*
            public const nint m_pItemServices = 0xAC8; // CPlayer_ItemServices*
            public const nint m_pAutoaimServices = 0xAD0; // CPlayer_AutoaimServices*
            public const nint m_pObserverServices = 0xAD8; // CPlayer_ObserverServices*
            public const nint m_pWaterServices = 0xAE0; // CPlayer_WaterServices*
            public const nint m_pUseServices = 0xAE8; // CPlayer_UseServices*
            public const nint m_pFlashlightServices = 0xAF0; // CPlayer_FlashlightServices*
            public const nint m_pCameraServices = 0xAF8; // CPlayer_CameraServices*
            public const nint m_pMovementServices = 0xB00; // CPlayer_MovementServices*
            public const nint m_ServerViewAngleChanges = 0xB10; // CUtlVectorEmbeddedNetworkVar<ViewAngleServerChange_t>
            public const nint m_nHighestGeneratedServerViewAngleChangeIndex = 0xB60; // uint32
            public const nint v_angle = 0xB64; // QAngle
            public const nint v_anglePrevious = 0xB70; // QAngle
            public const nint m_iHideHUD = 0xB7C; // uint32
            public const nint m_skybox3d = 0xB80; // sky3dparams_t
            public const nint m_fTimeLastHurt = 0xC10; // GameTime_t
            public const nint m_flDeathTime = 0xC14; // GameTime_t
            public const nint m_fNextSuicideTime = 0xC18; // GameTime_t
            public const nint m_fInitHUD = 0xC1C; // bool
            public const nint m_pExpresser = 0xC20; // CAI_Expresser*
            public const nint m_hController = 0xC28; // CHandle<CBasePlayerController>
            public const nint m_fHltvReplayDelay = 0xC30; // float32
            public const nint m_fHltvReplayEnd = 0xC34; // float32
            public const nint m_iHltvReplayEntity = 0xC38; // CEntityIndex
            public const nint m_sndOpvarLatchData = 0xC40; // CUtlVector<sndopvarlatchdata_t>
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
        public static class CPostProcessingVolume {
            public const nint m_hPostSettings = 0x970; // CStrongHandle<InfoForResourceTypeCPostProcessingResource>
            public const nint m_flFadeDuration = 0x978; // float32
            public const nint m_flMinLogExposure = 0x97C; // float32
            public const nint m_flMaxLogExposure = 0x980; // float32
            public const nint m_flMinExposure = 0x984; // float32
            public const nint m_flMaxExposure = 0x988; // float32
            public const nint m_flExposureCompensation = 0x98C; // float32
            public const nint m_flExposureFadeSpeedUp = 0x990; // float32
            public const nint m_flExposureFadeSpeedDown = 0x994; // float32
            public const nint m_flTonemapEVSmoothingRange = 0x998; // float32
            public const nint m_bMaster = 0x99C; // bool
            public const nint m_bExposureControl = 0x99D; // bool
            public const nint m_flRate = 0x9A0; // float32
            public const nint m_flTonemapPercentTarget = 0x9A4; // float32
            public const nint m_flTonemapPercentBrightPixels = 0x9A8; // float32
            public const nint m_flTonemapMinAvgLum = 0x9AC; // float32
        }
        // Parent: CBaseModelEntity
        // Field count: 4
        //
        // Metadata:
        // NetworkVarNames:  ()
        // NetworkVarNames:  ()
        public static class CSpotlightEnd {
            public const nint m_flLightScale = 0x790; // float32
            public const nint m_Radius = 0x794; // float32
            public const nint m_vSpotlightDir = 0x798; // Vector
            public const nint m_vSpotlightOrg = 0x7A4; // Vector
        }
        // Parent: CBaseCSGrenade
        // Field count: 0
        public static class CSensorGrenade {
        }
        // Parent: CBaseTrigger
        // Field count: 1
        public static class CTriggerDetectExplosion {
            public const nint m_OnDetectedExplosion = 0x988; // CEntityIOOutput
        }
        // Parent: CEconEntity
        // Field count: 2
        public static class CEconWearable {
            public const nint m_nForceSkin = 0xD30; // int32
            public const nint m_bAlwaysAllow = 0xD34; // bool
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
        public static class CFuncConveyor {
            public const nint m_szConveyorModels = 0x790; // CUtlSymbolLarge
            public const nint m_flTransitionDurationSeconds = 0x798; // float32
            public const nint m_angMoveEntitySpace = 0x79C; // QAngle
            public const nint m_vecMoveDirEntitySpace = 0x7A8; // Vector
            public const nint m_flTargetSpeed = 0x7B4; // float32
            public const nint m_nTransitionStartTick = 0x7B8; // GameTick_t
            public const nint m_nTransitionDurationTicks = 0x7BC; // int32
            public const nint m_flTransitionStartSpeed = 0x7C0; // float32
            public const nint m_hConveyorModels = 0x7C8; // 
        }
        // Parent: CCSWeaponBaseGun
        // Field count: 0
        public static class CWeaponMag7 {
        }
        // Parent: CBaseDoor
        // Field count: 1
        public static class CRotDoor {
            public const nint m_bSolidBsp = 0xA18; // bool
        }
        // Parent: CCSWeaponBaseGun
        // Field count: 0
        public static class CWeaponElite {
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
        public static class CC4 {
            public const nint m_vecLastValidPlayerHeldPosition = 0xFA0; // Vector
            public const nint m_vecLastValidDroppedPosition = 0xFAC; // Vector
            public const nint m_bDoValidDroppedPositionCheck = 0xFB8; // bool
            public const nint m_bStartedArming = 0xFB9; // bool
            public const nint m_fArmedTime = 0xFBC; // GameTime_t
            public const nint m_bBombPlacedAnimation = 0xFC0; // bool
            public const nint m_bIsPlantingViaUse = 0xFC1; // bool
            public const nint m_entitySpottedState = 0xFC8; // EntitySpottedState_t
            public const nint m_nSpotRules = 0xFE0; // int32
            public const nint m_bPlayedArmingBeeps = 0xFE4; // 
            public const nint m_bBombPlanted = 0xFEB; // bool
        }
        // Parent: CHostageRescueZoneShim
        // Field count: 0
        public static class CHostageRescueZone {
        }
        // Parent: CBaseToggle
        // Field count: 27
        //
        // Metadata:
        // NetworkVarNames:  ()
        public static class CBaseDoor {
            public const nint m_angMoveEntitySpace = 0x820; // QAngle
            public const nint m_vecMoveDirParentSpace = 0x82C; // Vector
            public const nint m_ls = 0x838; // locksound_t
            public const nint m_bForceClosed = 0x858; // bool
            public const nint m_bDoorGroup = 0x859; // bool
            public const nint m_bLocked = 0x85A; // bool
            public const nint m_bIgnoreDebris = 0x85B; // bool
            public const nint m_eSpawnPosition = 0x85C; // FuncDoorSpawnPos_t
            public const nint m_flBlockDamage = 0x860; // float32
            public const nint m_NoiseMoving = 0x868; // CUtlSymbolLarge
            public const nint m_NoiseArrived = 0x870; // CUtlSymbolLarge
            public const nint m_NoiseMovingClosed = 0x878; // CUtlSymbolLarge
            public const nint m_NoiseArrivedClosed = 0x880; // CUtlSymbolLarge
            public const nint m_ChainTarget = 0x888; // CUtlSymbolLarge
            public const nint m_OnBlockedClosing = 0x890; // CEntityIOOutput
            public const nint m_OnBlockedOpening = 0x8B8; // CEntityIOOutput
            public const nint m_OnUnblockedClosing = 0x8E0; // CEntityIOOutput
            public const nint m_OnUnblockedOpening = 0x908; // CEntityIOOutput
            public const nint m_OnFullyClosed = 0x930; // CEntityIOOutput
            public const nint m_OnFullyOpen = 0x958; // CEntityIOOutput
            public const nint m_OnClose = 0x980; // CEntityIOOutput
            public const nint m_OnOpen = 0x9A8; // CEntityIOOutput
            public const nint m_OnLockedUse = 0x9D0; // CEntityIOOutput
            public const nint m_bLoopMoveSound = 0x9F8; // bool
            public const nint m_bCreateNavObstacle = 0xA10; // bool
            public const nint m_isChaining = 0xA11; // bool
            public const nint m_bIsUsable = 0xA12; // bool
        }
        // Parent: CCSWeaponBase
        // Field count: 0
        public static class CTablet {
        }
        // Parent: 
        // Field count: 0
        public static class CRagdollPropAlias_physics_prop_ragdoll {
        }
        // Parent: CSprite
        // Field count: 0
        public static class CCSSprite {
        }
        // Parent: CCSWeaponBaseGun
        // Field count: 0
        public static class CWeaponSCAR20 {
        }
        // Parent: CBaseGrenade
        // Field count: 0
        public static class CTripWireFireProjectile {
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
        public static class CHostage {
            public const nint m_OnHostageBeginGrab = 0xAD8; // CEntityIOOutput
            public const nint m_OnFirstPickedUp = 0xB00; // CEntityIOOutput
            public const nint m_OnDroppedNotRescued = 0xB28; // CEntityIOOutput
            public const nint m_OnRescued = 0xB50; // CEntityIOOutput
            public const nint m_entitySpottedState = 0xB78; // EntitySpottedState_t
            public const nint m_nSpotRules = 0xB90; // int32
            public const nint m_uiHostageSpawnExclusionGroupMask = 0xB94; // uint32
            public const nint m_nHostageSpawnRandomFactor = 0xB98; // uint32
            public const nint m_bRemove = 0xB9C; // bool
            public const nint m_vel = 0xBA0; // Vector
            public const nint m_isRescued = 0xBAC; // bool
            public const nint m_jumpedThisFrame = 0xBAD; // bool
            public const nint m_nHostageState = 0xBB0; // int32
            public const nint m_leader = 0xBB4; // CHandle<CBaseEntity>
            public const nint m_lastLeader = 0xBB8; // CHandle<CCSPlayerPawnBase>
            public const nint m_reuseTimer = 0xBC0; // CountdownTimer
            public const nint m_hasBeenUsed = 0xBD8; // bool
            public const nint m_accel = 0xBDC; // Vector
            public const nint m_isRunning = 0xBE8; // bool
            public const nint m_isCrouching = 0xBE9; // bool
            public const nint m_jumpTimer = 0xBF0; // CountdownTimer
            public const nint m_isWaitingForLeader = 0xC08; // bool
            public const nint m_repathTimer = 0x2C18; // CountdownTimer
            public const nint m_inhibitDoorTimer = 0x2C30; // CountdownTimer
            public const nint m_inhibitObstacleAvoidanceTimer = 0x2CC0; // CountdownTimer
            public const nint m_wiggleTimer = 0x2CE0; // CountdownTimer
            public const nint m_isAdjusted = 0x2CFC; // bool
            public const nint m_bHandsHaveBeenCut = 0x2CFD; // bool
            public const nint m_hHostageGrabber = 0x2D00; // CHandle<CCSPlayerPawn>
            public const nint m_fLastGrabTime = 0x2D04; // GameTime_t
            public const nint m_vecPositionWhenStartedDroppingToGround = 0x2D08; // Vector
            public const nint m_vecGrabbedPos = 0x2D14; // Vector
            public const nint m_flRescueStartTime = 0x2D20; // GameTime_t
            public const nint m_flGrabSuccessTime = 0x2D24; // GameTime_t
            public const nint m_flDropStartTime = 0x2D28; // GameTime_t
            public const nint m_nApproachRewardPayouts = 0x2D2C; // int32
            public const nint m_nPickupEventCount = 0x2D30; // int32
            public const nint m_vecSpawnGroundPos = 0x2D34; // Vector
            public const nint m_vecHostageResetPosition = 0x2D54; // Vector
        }
        // Parent: CPointEntity
        // Field count: 9
        public static class CMapInfo {
            public const nint m_iBuyingStatus = 0x4E0; // int32
            public const nint m_flBombRadius = 0x4E4; // float32
            public const nint m_iPetPopulation = 0x4E8; // int32
            public const nint m_bUseNormalSpawnsForDM = 0x4EC; // bool
            public const nint m_bDisableAutoGeneratedDMSpawns = 0x4ED; // bool
            public const nint m_flBotMaxVisionDistance = 0x4F0; // float32
            public const nint m_iHostageCount = 0x4F4; // int32
            public const nint m_bFadePlayerVisibilityFarZ = 0x4F8; // bool
            public const nint m_bRainTraceToSkyEnabled = 0x4F9; // bool
        }
        // Parent: CBaseTrigger
        // Field count: 0
        public static class CTriggerBombReset {
        }
    }
}
