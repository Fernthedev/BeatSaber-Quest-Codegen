// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: RenderTexture
  class RenderTexture;
  // Forward declaring type: Material
  class Material;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x2C
  #pragma pack(push, 1)
  // Autogenerated type: SimpleTemporalFiltering
  // [TokenAttribute] Offset: FFFFFFFF
  class SimpleTemporalFiltering : public ::Il2CppObject {
    public:
    // private UnityEngine.RenderTexture[] _temporalFilteringTextures
    // Size: 0x8
    // Offset: 0x10
    ::Array<UnityEngine::RenderTexture*>* temporalFilteringTextures;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::RenderTexture*>*) == 0x8);
    // private System.Int32 _prevTemporalFilteringTextureIdx
    // Size: 0x4
    // Offset: 0x18
    int prevTemporalFilteringTextureIdx;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: prevTemporalFilteringTextureIdx and: temporalFilteringMaterial
    char __padding1[0x4] = {};
    // private UnityEngine.Material _temporalFilteringMaterial
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::Material* temporalFilteringMaterial;
    // Field size check
    static_assert(sizeof(UnityEngine::Material*) == 0x8);
    // private System.Int32 _bufferTexID
    // Size: 0x4
    // Offset: 0x28
    int bufferTexID;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: SimpleTemporalFiltering
    SimpleTemporalFiltering(::Array<UnityEngine::RenderTexture*>* temporalFilteringTextures_ = {}, int prevTemporalFilteringTextureIdx_ = {}, UnityEngine::Material* temporalFilteringMaterial_ = {}, int bufferTexID_ = {}) noexcept : temporalFilteringTextures{temporalFilteringTextures_}, prevTemporalFilteringTextureIdx{prevTemporalFilteringTextureIdx_}, temporalFilteringMaterial{temporalFilteringMaterial_}, bufferTexID{bufferTexID_} {}
    // Get instance field reference: private UnityEngine.RenderTexture[] _temporalFilteringTextures
    ::Array<UnityEngine::RenderTexture*>*& dyn__temporalFilteringTextures();
    // Get instance field reference: private System.Int32 _prevTemporalFilteringTextureIdx
    int& dyn__prevTemporalFilteringTextureIdx();
    // Get instance field reference: private UnityEngine.Material _temporalFilteringMaterial
    UnityEngine::Material*& dyn__temporalFilteringMaterial();
    // Get instance field reference: private System.Int32 _bufferTexID
    int& dyn__bufferTexID();
    // public UnityEngine.RenderTexture FilterTexture(UnityEngine.RenderTexture src)
    // Offset: 0x2390DC4
    UnityEngine::RenderTexture* FilterTexture(UnityEngine::RenderTexture* src);
    // private System.Void CreateRenderTexturesIfNeeded(System.Int32 width, System.Int32 height)
    // Offset: 0x2390F6C
    void CreateRenderTexturesIfNeeded(int width, int height);
    // public System.Void .ctor()
    // Offset: 0x2390D10
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SimpleTemporalFiltering* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SimpleTemporalFiltering::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SimpleTemporalFiltering*, creationType>()));
    }
  }; // SimpleTemporalFiltering
  #pragma pack(pop)
  static check_size<sizeof(SimpleTemporalFiltering), 40 + sizeof(int)> __GlobalNamespace_SimpleTemporalFilteringSizeCheck;
  static_assert(sizeof(SimpleTemporalFiltering) == 0x2C);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SimpleTemporalFiltering*, "", "SimpleTemporalFiltering");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SimpleTemporalFiltering::FilterTexture
// Il2CppName: FilterTexture
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::RenderTexture* (GlobalNamespace::SimpleTemporalFiltering::*)(UnityEngine::RenderTexture*)>(&GlobalNamespace::SimpleTemporalFiltering::FilterTexture)> {
  static const MethodInfo* get() {
    static auto* src = &::il2cpp_utils::GetClassFromName("UnityEngine", "RenderTexture")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SimpleTemporalFiltering*), "FilterTexture", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{src});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SimpleTemporalFiltering::CreateRenderTexturesIfNeeded
// Il2CppName: CreateRenderTexturesIfNeeded
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SimpleTemporalFiltering::*)(int, int)>(&GlobalNamespace::SimpleTemporalFiltering::CreateRenderTexturesIfNeeded)> {
  static const MethodInfo* get() {
    static auto* width = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* height = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SimpleTemporalFiltering*), "CreateRenderTexturesIfNeeded", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{width, height});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SimpleTemporalFiltering::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
