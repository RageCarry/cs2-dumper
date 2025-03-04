// Generated using https://github.com/a2x/cs2-dumper
// 2025-03-04 15:03:18.228370980 UTC

#![allow(non_upper_case_globals, non_camel_case_types, non_snake_case, unused)]

pub mod cs2_dumper {
    pub mod schemas {
        // Module: worldrenderer.dll
        // Class count: 23
        // Enum count: 0
        pub mod worldrenderer_dll {
            // Parent: None
            // Field count: 14
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod SceneObject_t {
                pub const m_nObjectID: usize = 0x0; // uint32
                pub const m_vTransform: usize = 0x4; // 
                pub const m_flFadeStartDistance: usize = 0x34; // float32
                pub const m_flFadeEndDistance: usize = 0x38; // float32
                pub const m_vTintColor: usize = 0x3C; // Vector4D
                pub const m_skin: usize = 0x50; // CUtlString
                pub const m_nObjectTypeFlags: usize = 0x58; // 
                pub const m_vLightingOrigin: usize = 0x5C; // Vector
                pub const m_nOverlayRenderOrder: usize = 0x68; // int16
                pub const m_nLODOverride: usize = 0x6A; // int16
                pub const m_nCubeMapPrecomputedHandshake: usize = 0x6C; // int32
                pub const m_nLightProbeVolumePrecomputedHandshake: usize = 0x70; // int32
                pub const m_renderableModel: usize = 0x78; // CStrongHandle<InfoForResourceTypeCModel>
                pub const m_renderable: usize = 0x80; // CStrongHandle<InfoForResourceTypeCRenderMesh>
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod AggregateLODSetup_t {
                pub const m_vLODOrigin: usize = 0x0; // Vector
                pub const m_fMaxObjectScale: usize = 0xC; // float32
                pub const m_fSwitchDistances: usize = 0x10; // 
            }
            // Parent: BaseSceneObjectOverride_t
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod ExtraVertexStreamOverride_t {
                pub const m_nSubSceneObject: usize = 0x4; // uint32
                pub const m_nDrawCallIndex: usize = 0x8; // uint32
                pub const m_nAdditionalMeshDrawPrimitiveFlags: usize = 0xC; // 
                pub const m_extraBufferBinding: usize = 0x10; // CRenderBufferBinding
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod ClutterTile_t {
                pub const m_nFirstInstance: usize = 0x0; // uint32
                pub const m_nLastInstance: usize = 0x4; // uint32
                pub const m_BoundsWs: usize = 0x8; // AABB_t
            }
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod AggregateSceneObject_t {
                pub const m_allFlags: usize = 0x0; // 
                pub const m_anyFlags: usize = 0x4; // 
                pub const m_nLayer: usize = 0x8; // int16
                pub const m_aggregateMeshes: usize = 0x10; // 
                pub const m_lodSetups: usize = 0x28; // 
                pub const m_visClusterMembership: usize = 0x40; // 
                pub const m_fragmentTransforms: usize = 0x58; // 
                pub const m_renderableModel: usize = 0x70; // CStrongHandle<InfoForResourceTypeCModel>
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod NodeData_t {
                pub const m_nParent: usize = 0x0; // int32
                pub const m_vOrigin: usize = 0x4; // Vector
                pub const m_vMinBounds: usize = 0x10; // Vector
                pub const m_vMaxBounds: usize = 0x1C; // Vector
                pub const m_flMinimumDistance: usize = 0x28; // float32
                pub const m_ChildNodeIndices: usize = 0x30; // 
                pub const m_worldNodePrefix: usize = 0x48; // CUtlString
            }
            // Parent: None
            // Field count: 0
            pub mod VMapResourceData_t {
            }
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod ClutterSceneObject_t {
                pub const m_Bounds: usize = 0x0; // AABB_t
                pub const m_flags: usize = 0x18; // 
                pub const m_nLayer: usize = 0x1C; // int16
                pub const m_instancePositions: usize = 0x20; // 
                pub const m_instanceScales: usize = 0x50; // 
                pub const m_instanceTintSrgb: usize = 0x68; // 
                pub const m_tiles: usize = 0x80; // 
                pub const m_renderableModel: usize = 0x98; // CStrongHandle<InfoForResourceTypeCModel>
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod WorldBuilderParams_t {
                pub const m_flMinDrawVolumeSize: usize = 0x0; // float32
                pub const m_bBuildBakedLighting: usize = 0x4; // bool
                pub const m_bakedLightingInfo: usize = 0x8; // 
                pub const m_nCompileTimestamp: usize = 0x38; // uint64
                pub const m_nCompileFingerprint: usize = 0x40; // uint64
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod PermEntityLumpData_t {
                pub const m_name: usize = 0x8; // CUtlString
                pub const m_childLumps: usize = 0x10; // 
                pub const m_entityKeyValues: usize = 0x28; // 
            }
            // Parent: None
            // Field count: 14
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod WorldNode_t {
                pub const m_sceneObjects: usize = 0x0; // 
                pub const m_infoOverlays: usize = 0x18; // 
                pub const m_visClusterMembership: usize = 0x30; // 
                pub const m_aggregateSceneObjects: usize = 0x48; // 
                pub const m_clutterSceneObjects: usize = 0x60; // 
                pub const m_extraVertexStreamOverrides: usize = 0x78; // 
                pub const m_materialOverrides: usize = 0x90; // 
                pub const m_extraVertexStreams: usize = 0xA8; // 
                pub const m_layerNames: usize = 0xC0; // 
                pub const m_sceneObjectLayerIndices: usize = 0xD8; // 
                pub const m_overlayLayerIndices: usize = 0xF0; // 
                pub const m_grassFileName: usize = 0x108; // CUtlString
                pub const m_nodeLightingInfo: usize = 0x110; // 
                pub const m_bHasBakedGeometryFlag: usize = 0x140; // bool
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod BaseSceneObjectOverride_t {
                pub const m_nSceneObjectIndex: usize = 0x0; // uint32
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod EntityIOConnectionData_t {
                pub const m_outputName: usize = 0x0; // CUtlString
                pub const m_targetType: usize = 0x8; // uint32
                pub const m_targetName: usize = 0x10; // CUtlString
                pub const m_inputName: usize = 0x18; // CUtlString
                pub const m_overrideParam: usize = 0x20; // CUtlString
                pub const m_flDelay: usize = 0x28; // float32
                pub const m_nTimesToFire: usize = 0x2C; // int32
            }
            // Parent: None
            // Field count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod BakedLightingInfo_t {
                pub const m_nLightmapVersionNumber: usize = 0x0; // uint32
                pub const m_nLightmapGameVersionNumber: usize = 0x4; // uint32
                pub const m_vLightmapUvScale: usize = 0x8; // Vector2D
                pub const m_bHasLightmaps: usize = 0x10; // bool
                pub const m_bBakedShadowsGamma20: usize = 0x11; // bool
                pub const m_bCompressionEnabled: usize = 0x12; // bool
                pub const m_nChartPackIterations: usize = 0x13; // uint8
                pub const m_nVradQuality: usize = 0x14; // uint8
                pub const m_lightMaps: usize = 0x18; // 
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod VoxelVisBlockOffset_t {
                pub const m_nOffset: usize = 0x0; // uint32
                pub const m_nElementCount: usize = 0x4; // uint32
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            pub mod InfoForResourceTypeVMapResourceData_t {
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod WorldNodeOnDiskBufferData_t {
                pub const m_nElementCount: usize = 0x0; // int32
                pub const m_nElementSizeInBytes: usize = 0x4; // int32
                pub const m_inputLayoutFields: usize = 0x8; // 
                pub const m_pData: usize = 0x20; // 
            }
            // Parent: None
            // Field count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod AggregateMeshInfo_t {
                pub const m_nVisClusterMemberOffset: usize = 0x0; // uint32
                pub const m_nVisClusterMemberCount: usize = 0x4; // uint8
                pub const m_bHasTransform: usize = 0x5; // bool
                pub const m_nDrawCallIndex: usize = 0x6; // int16
                pub const m_nLODSetupIndex: usize = 0x8; // int16
                pub const m_nLODGroupMask: usize = 0xA; // uint8
                pub const m_vTintColor: usize = 0xB; // Color
                pub const m_objectFlags: usize = 0x10; // 
                pub const m_nLightProbeVolumePrecomputedHandshake: usize = 0x14; // int32
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod World_t {
                pub const m_builderParams: usize = 0x0; // 
                pub const m_worldNodes: usize = 0x48; // 
                pub const m_worldLightingInfo: usize = 0x60; // 
                pub const m_entityLumps: usize = 0x90; // 
            }
            // Parent: None
            // Field count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod InfoOverlayData_t {
                pub const m_transform: usize = 0x0; // matrix3x4_t
                pub const m_flWidth: usize = 0x30; // float32
                pub const m_flHeight: usize = 0x34; // float32
                pub const m_flDepth: usize = 0x38; // float32
                pub const m_vUVStart: usize = 0x3C; // Vector2D
                pub const m_vUVEnd: usize = 0x44; // Vector2D
                pub const m_pMaterial: usize = 0x50; // CStrongHandle<InfoForResourceTypeIMaterial2>
                pub const m_nRenderOrder: usize = 0x58; // int32
                pub const m_vTintColor: usize = 0x5C; // Vector4D
                pub const m_nSequenceOverride: usize = 0x6C; // int32
            }
            // Parent: BaseSceneObjectOverride_t
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod MaterialOverride_t {
                pub const m_nSubSceneObject: usize = 0x4; // uint32
                pub const m_nDrawCallIndex: usize = 0x8; // uint32
                pub const m_pMaterial: usize = 0x10; // CStrongHandle<InfoForResourceTypeIMaterial2>
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod EntityKeyValueData_t {
                pub const m_connections: usize = 0x8; // 
                pub const m_keyValuesData: usize = 0x20; // CUtlBinaryBlock
            }
            // Parent: None
            // Field count: 13
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CVoxelVisibility {
                pub const m_nBaseClusterCount: usize = 0x40; // uint32
                pub const m_nPVSBytesPerCluster: usize = 0x44; // uint32
                pub const m_vMinBounds: usize = 0x48; // Vector
                pub const m_vMaxBounds: usize = 0x54; // Vector
                pub const m_flGridSize: usize = 0x60; // float32
                pub const m_nSkyVisibilityCluster: usize = 0x64; // uint32
                pub const m_nSunVisibilityCluster: usize = 0x68; // uint32
                pub const m_NodeBlock: usize = 0x6C; // 
                pub const m_RegionBlock: usize = 0x74; // 
                pub const m_EnclosedClusterListBlock: usize = 0x7C; // 
                pub const m_EnclosedClustersBlock: usize = 0x84; // 
                pub const m_MasksBlock: usize = 0x8C; // 
                pub const m_nVisBlocks: usize = 0x94; // 
            }
        }
    }
}
