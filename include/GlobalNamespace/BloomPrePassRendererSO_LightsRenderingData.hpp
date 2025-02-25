// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: BloomPrePassRendererSO
#include "GlobalNamespace/BloomPrePassRendererSO.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
// Including type: UnityEngine.Vector4
#include "UnityEngine/Vector4.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Mesh
  class Mesh;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: BloomPrePassRendererSO/LightsRenderingData
  // [TokenAttribute] Offset: FFFFFFFF
  class BloomPrePassRendererSO::LightsRenderingData : public ::Il2CppObject {
    public:
    // public UnityEngine.Mesh mesh
    // Size: 0x8
    // Offset: 0x10
    UnityEngine::Mesh* mesh;
    // Field size check
    static_assert(sizeof(UnityEngine::Mesh*) == 0x8);
    // public UnityEngine.Vector3[] vertices
    // Size: 0x8
    // Offset: 0x18
    ::Array<UnityEngine::Vector3>* vertices;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::Vector3>*) == 0x8);
    // public UnityEngine.Color[] colors
    // Size: 0x8
    // Offset: 0x20
    ::Array<UnityEngine::Color>* colors;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::Color>*) == 0x8);
    // public UnityEngine.Vector4[] viewPos
    // Size: 0x8
    // Offset: 0x28
    ::Array<UnityEngine::Vector4>* viewPos;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::Vector4>*) == 0x8);
    // Creating value type constructor for type: LightsRenderingData
    LightsRenderingData(UnityEngine::Mesh* mesh_ = {}, ::Array<UnityEngine::Vector3>* vertices_ = {}, ::Array<UnityEngine::Color>* colors_ = {}, ::Array<UnityEngine::Vector4>* viewPos_ = {}) noexcept : mesh{mesh_}, vertices{vertices_}, colors{colors_}, viewPos{viewPos_} {}
    // Get instance field reference: public UnityEngine.Mesh mesh
    UnityEngine::Mesh*& dyn_mesh();
    // Get instance field reference: public UnityEngine.Vector3[] vertices
    ::Array<UnityEngine::Vector3>*& dyn_vertices();
    // Get instance field reference: public UnityEngine.Color[] colors
    ::Array<UnityEngine::Color>*& dyn_colors();
    // Get instance field reference: public UnityEngine.Vector4[] viewPos
    ::Array<UnityEngine::Vector4>*& dyn_viewPos();
    // public System.Void .ctor()
    // Offset: 0x1E14A3C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BloomPrePassRendererSO::LightsRenderingData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BloomPrePassRendererSO::LightsRenderingData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BloomPrePassRendererSO::LightsRenderingData*, creationType>()));
    }
  }; // BloomPrePassRendererSO/LightsRenderingData
  #pragma pack(pop)
  static check_size<sizeof(BloomPrePassRendererSO::LightsRenderingData), 40 + sizeof(::Array<UnityEngine::Vector4>*)> __GlobalNamespace_BloomPrePassRendererSO_LightsRenderingDataSizeCheck;
  static_assert(sizeof(BloomPrePassRendererSO::LightsRenderingData) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BloomPrePassRendererSO::LightsRenderingData*, "", "BloomPrePassRendererSO/LightsRenderingData");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePassRendererSO::LightsRenderingData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
