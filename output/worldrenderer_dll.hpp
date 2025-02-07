// Generated using https://github.com/a2x/cs2-dumper
// 2025-02-07 01:09:20.514738783 UTC

#pragma once

#include <cstddef>

namespace cs2_dumper {
    namespace schemas {
        // Module: worldrenderer.dll
        // Class count: 23
        // Enum count: 0
        namespace worldrenderer_dll {
            // Parent: None
            // Field count: 14
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace SceneObject_t {
                constexpr std::ptrdiff_t m_nObjectID = 0x0; // uint32
                constexpr std::ptrdiff_t m_vTransform = 0x4; // 
                constexpr std::ptrdiff_t m_flFadeStartDistance = 0x34; // float32
                constexpr std::ptrdiff_t m_flFadeEndDistance = 0x38; // float32
                constexpr std::ptrdiff_t m_vTintColor = 0x3C; // Vector4D
                constexpr std::ptrdiff_t m_skin = 0x50; // CUtlString
                constexpr std::ptrdiff_t m_nObjectTypeFlags = 0x58; // 
                constexpr std::ptrdiff_t m_vLightingOrigin = 0x5C; // Vector
                constexpr std::ptrdiff_t m_nOverlayRenderOrder = 0x68; // int16
                constexpr std::ptrdiff_t m_nLODOverride = 0x6A; // int16
                constexpr std::ptrdiff_t m_nCubeMapPrecomputedHandshake = 0x6C; // int32
                constexpr std::ptrdiff_t m_nLightProbeVolumePrecomputedHandshake = 0x70; // int32
                constexpr std::ptrdiff_t m_renderableModel = 0x78; // 
                constexpr std::ptrdiff_t m_renderable = 0x80; // 
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace AggregateLODSetup_t {
                constexpr std::ptrdiff_t m_vLODOrigin = 0x0; // Vector
                constexpr std::ptrdiff_t m_fMaxObjectScale = 0xC; // float32
                constexpr std::ptrdiff_t m_fSwitchDistances = 0x10; // 
            }
            // Parent: BaseSceneObjectOverride_t
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace ExtraVertexStreamOverride_t {
                constexpr std::ptrdiff_t m_nSubSceneObject = 0x4; // uint32
                constexpr std::ptrdiff_t m_nDrawCallIndex = 0x8; // uint32
                constexpr std::ptrdiff_t m_nAdditionalMeshDrawPrimitiveFlags = 0xC; // 
                constexpr std::ptrdiff_t m_extraBufferBinding = 0x10; // CRenderBufferBinding
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace ClutterTile_t {
                constexpr std::ptrdiff_t m_nFirstInstance = 0x0; // uint32
                constexpr std::ptrdiff_t m_nLastInstance = 0x4; // uint32
                constexpr std::ptrdiff_t m_BoundsWs = 0x8; // AABB_t
            }
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace AggregateSceneObject_t {
                constexpr std::ptrdiff_t m_allFlags = 0x0; // 
                constexpr std::ptrdiff_t m_anyFlags = 0x4; // 
                constexpr std::ptrdiff_t m_nLayer = 0x8; // int16
                constexpr std::ptrdiff_t m_aggregateMeshes = 0x10; // 
                constexpr std::ptrdiff_t m_lodSetups = 0x28; // 
                constexpr std::ptrdiff_t m_visClusterMembership = 0x40; // 
                constexpr std::ptrdiff_t m_fragmentTransforms = 0x58; // 
                constexpr std::ptrdiff_t m_renderableModel = 0x70; // 
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace NodeData_t {
                constexpr std::ptrdiff_t m_nParent = 0x0; // int32
                constexpr std::ptrdiff_t m_vOrigin = 0x4; // Vector
                constexpr std::ptrdiff_t m_vMinBounds = 0x10; // Vector
                constexpr std::ptrdiff_t m_vMaxBounds = 0x1C; // Vector
                constexpr std::ptrdiff_t m_flMinimumDistance = 0x28; // float32
                constexpr std::ptrdiff_t m_ChildNodeIndices = 0x30; // 
                constexpr std::ptrdiff_t m_worldNodePrefix = 0x48; // CUtlString
            }
            // Parent: None
            // Field count: 0
            namespace VMapResourceData_t {
            }
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace ClutterSceneObject_t {
                constexpr std::ptrdiff_t m_Bounds = 0x0; // AABB_t
                constexpr std::ptrdiff_t m_flags = 0x18; // 
                constexpr std::ptrdiff_t m_nLayer = 0x1C; // int16
                constexpr std::ptrdiff_t m_instancePositions = 0x20; // 
                constexpr std::ptrdiff_t m_instanceScales = 0x50; // 
                constexpr std::ptrdiff_t m_instanceTintSrgb = 0x68; // 
                constexpr std::ptrdiff_t m_tiles = 0x80; // 
                constexpr std::ptrdiff_t m_renderableModel = 0x98; // 
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace WorldBuilderParams_t {
                constexpr std::ptrdiff_t m_flMinDrawVolumeSize = 0x0; // float32
                constexpr std::ptrdiff_t m_bBuildBakedLighting = 0x4; // bool
                constexpr std::ptrdiff_t m_bakedLightingInfo = 0x8; // 
                constexpr std::ptrdiff_t m_nCompileTimestamp = 0x38; // uint64
                constexpr std::ptrdiff_t m_nCompileFingerprint = 0x40; // uint64
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace PermEntityLumpData_t {
                constexpr std::ptrdiff_t m_name = 0x8; // CUtlString
                constexpr std::ptrdiff_t m_childLumps = 0x10; // 
                constexpr std::ptrdiff_t m_entityKeyValues = 0x28; // 
            }
            // Parent: None
            // Field count: 14
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace WorldNode_t {
                constexpr std::ptrdiff_t m_sceneObjects = 0x0; // 
                constexpr std::ptrdiff_t m_infoOverlays = 0x18; // 
                constexpr std::ptrdiff_t m_visClusterMembership = 0x30; // 
                constexpr std::ptrdiff_t m_aggregateSceneObjects = 0x48; // 
                constexpr std::ptrdiff_t m_clutterSceneObjects = 0x60; // 
                constexpr std::ptrdiff_t m_extraVertexStreamOverrides = 0x78; // 
                constexpr std::ptrdiff_t m_materialOverrides = 0x90; // 
                constexpr std::ptrdiff_t m_extraVertexStreams = 0xA8; // 
                constexpr std::ptrdiff_t m_layerNames = 0xC0; // 
                constexpr std::ptrdiff_t m_sceneObjectLayerIndices = 0xD8; // 
                constexpr std::ptrdiff_t m_overlayLayerIndices = 0xF0; // 
                constexpr std::ptrdiff_t m_grassFileName = 0x108; // CUtlString
                constexpr std::ptrdiff_t m_nodeLightingInfo = 0x110; // 
                constexpr std::ptrdiff_t m_bHasBakedGeometryFlag = 0x140; // bool
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace BaseSceneObjectOverride_t {
                constexpr std::ptrdiff_t m_nSceneObjectIndex = 0x0; // uint32
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace EntityIOConnectionData_t {
                constexpr std::ptrdiff_t m_outputName = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_targetType = 0x8; // uint32
                constexpr std::ptrdiff_t m_targetName = 0x10; // CUtlString
                constexpr std::ptrdiff_t m_inputName = 0x18; // CUtlString
                constexpr std::ptrdiff_t m_overrideParam = 0x20; // CUtlString
                constexpr std::ptrdiff_t m_flDelay = 0x28; // float32
                constexpr std::ptrdiff_t m_nTimesToFire = 0x2C; // int32
            }
            // Parent: None
            // Field count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace BakedLightingInfo_t {
                constexpr std::ptrdiff_t m_nLightmapVersionNumber = 0x0; // uint32
                constexpr std::ptrdiff_t m_nLightmapGameVersionNumber = 0x4; // uint32
                constexpr std::ptrdiff_t m_vLightmapUvScale = 0x8; // Vector2D
                constexpr std::ptrdiff_t m_bHasLightmaps = 0x10; // bool
                constexpr std::ptrdiff_t m_bBakedShadowsGamma20 = 0x11; // bool
                constexpr std::ptrdiff_t m_bCompressionEnabled = 0x12; // bool
                constexpr std::ptrdiff_t m_nChartPackIterations = 0x13; // uint8
                constexpr std::ptrdiff_t m_nVradQuality = 0x14; // uint8
                constexpr std::ptrdiff_t m_lightMaps = 0x18; // 
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace VoxelVisBlockOffset_t {
                constexpr std::ptrdiff_t m_nOffset = 0x0; // uint32
                constexpr std::ptrdiff_t m_nElementCount = 0x4; // uint32
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace InfoForResourceTypeVMapResourceData_t {
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace WorldNodeOnDiskBufferData_t {
                constexpr std::ptrdiff_t m_nElementCount = 0x0; // int32
                constexpr std::ptrdiff_t m_nElementSizeInBytes = 0x4; // int32
                constexpr std::ptrdiff_t m_inputLayoutFields = 0x8; // 
                constexpr std::ptrdiff_t m_pData = 0x20; // 
            }
            // Parent: None
            // Field count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace AggregateMeshInfo_t {
                constexpr std::ptrdiff_t m_nVisClusterMemberOffset = 0x0; // uint32
                constexpr std::ptrdiff_t m_nVisClusterMemberCount = 0x4; // uint8
                constexpr std::ptrdiff_t m_bHasTransform = 0x5; // bool
                constexpr std::ptrdiff_t m_nDrawCallIndex = 0x6; // int16
                constexpr std::ptrdiff_t m_nLODSetupIndex = 0x8; // int16
                constexpr std::ptrdiff_t m_nLODGroupMask = 0xA; // uint8
                constexpr std::ptrdiff_t m_vTintColor = 0xB; // Color
                constexpr std::ptrdiff_t m_objectFlags = 0x10; // 
                constexpr std::ptrdiff_t m_nLightProbeVolumePrecomputedHandshake = 0x14; // int32
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace World_t {
                constexpr std::ptrdiff_t m_builderParams = 0x0; // 
                constexpr std::ptrdiff_t m_worldNodes = 0x48; // 
                constexpr std::ptrdiff_t m_worldLightingInfo = 0x60; // 
                constexpr std::ptrdiff_t m_entityLumps = 0x90; // 
            }
            // Parent: None
            // Field count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace InfoOverlayData_t {
                constexpr std::ptrdiff_t m_transform = 0x0; // matrix3x4_t
                constexpr std::ptrdiff_t m_flWidth = 0x30; // float32
                constexpr std::ptrdiff_t m_flHeight = 0x34; // float32
                constexpr std::ptrdiff_t m_flDepth = 0x38; // float32
                constexpr std::ptrdiff_t m_vUVStart = 0x3C; // Vector2D
                constexpr std::ptrdiff_t m_vUVEnd = 0x44; // Vector2D
                constexpr std::ptrdiff_t m_pMaterial = 0x50; // CStrongHandle<InfoForResourceTypeIMaterial2>
                constexpr std::ptrdiff_t m_nRenderOrder = 0x58; // int32
                constexpr std::ptrdiff_t m_vTintColor = 0x5C; // Vector4D
                constexpr std::ptrdiff_t m_nSequenceOverride = 0x6C; // int32
            }
            // Parent: BaseSceneObjectOverride_t
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace MaterialOverride_t {
                constexpr std::ptrdiff_t m_nSubSceneObject = 0x4; // uint32
                constexpr std::ptrdiff_t m_nDrawCallIndex = 0x8; // uint32
                constexpr std::ptrdiff_t m_pMaterial = 0x10; // CStrongHandle<InfoForResourceTypeIMaterial2>
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace EntityKeyValueData_t {
                constexpr std::ptrdiff_t m_connections = 0x8; // 
                constexpr std::ptrdiff_t m_keyValuesData = 0x20; // CUtlBinaryBlock
            }
            // Parent: None
            // Field count: 13
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CVoxelVisibility {
                constexpr std::ptrdiff_t m_nBaseClusterCount = 0x40; // uint32
                constexpr std::ptrdiff_t m_nPVSBytesPerCluster = 0x44; // uint32
                constexpr std::ptrdiff_t m_vMinBounds = 0x48; // Vector
                constexpr std::ptrdiff_t m_vMaxBounds = 0x54; // Vector
                constexpr std::ptrdiff_t m_flGridSize = 0x60; // float32
                constexpr std::ptrdiff_t m_nSkyVisibilityCluster = 0x64; // uint32
                constexpr std::ptrdiff_t m_nSunVisibilityCluster = 0x68; // uint32
                constexpr std::ptrdiff_t m_NodeBlock = 0x6C; // 
                constexpr std::ptrdiff_t m_RegionBlock = 0x74; // 
                constexpr std::ptrdiff_t m_EnclosedClusterListBlock = 0x7C; // 
                constexpr std::ptrdiff_t m_EnclosedClustersBlock = 0x84; // 
                constexpr std::ptrdiff_t m_MasksBlock = 0x8C; // 
                constexpr std::ptrdiff_t m_nVisBlocks = 0x94; // 
            }
        }
    }
}
