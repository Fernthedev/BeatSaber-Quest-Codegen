// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
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
  // Forward declaring type: Camera
  class Camera;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: RenderTextureFromPostEffect
  class RenderTextureFromPostEffect : public UnityEngine::MonoBehaviour {
    public:
    // public UnityEngine.RenderTexture _targetTexture
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::RenderTexture* targetTexture;
    // Field size check
    static_assert(sizeof(UnityEngine::RenderTexture*) == 0x8);
    // private UnityEngine.Camera _camera
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::Camera* camera;
    // Field size check
    static_assert(sizeof(UnityEngine::Camera*) == 0x8);
    // Creating value type constructor for type: RenderTextureFromPostEffect
    RenderTextureFromPostEffect(UnityEngine::RenderTexture* targetTexture_ = {}, UnityEngine::Camera* camera_ = {}) noexcept : targetTexture{targetTexture_}, camera{camera_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public UnityEngine.RenderTexture get_targetTexture()
    // Offset: 0x2362C54
    UnityEngine::RenderTexture* get_targetTexture();
    // protected System.Void Awake()
    // Offset: 0x2362C5C
    void Awake();
    // private System.Void OnRenderImage(UnityEngine.RenderTexture src, UnityEngine.RenderTexture dst)
    // Offset: 0x2362CB4
    void OnRenderImage(UnityEngine::RenderTexture* src, UnityEngine::RenderTexture* dst);
    // public System.Void .ctor()
    // Offset: 0x2362EBC
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RenderTextureFromPostEffect* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::RenderTextureFromPostEffect::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RenderTextureFromPostEffect*, creationType>()));
    }
  }; // RenderTextureFromPostEffect
  #pragma pack(pop)
  static check_size<sizeof(RenderTextureFromPostEffect), 32 + sizeof(UnityEngine::Camera*)> __GlobalNamespace_RenderTextureFromPostEffectSizeCheck;
  static_assert(sizeof(RenderTextureFromPostEffect) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::RenderTextureFromPostEffect*, "", "RenderTextureFromPostEffect");
// Writing includes for template specializations
#include "UnityEngine/RenderTexture.hpp"
// Writing MetadataGetter for method: GlobalNamespace::RenderTextureFromPostEffect::get_targetTexture
// Il2CppName: get_targetTexture
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::RenderTexture* (GlobalNamespace::RenderTextureFromPostEffect::*)()>(&GlobalNamespace::RenderTextureFromPostEffect::get_targetTexture)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RenderTextureFromPostEffect*), "get_targetTexture", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RenderTextureFromPostEffect::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RenderTextureFromPostEffect::*)()>(&GlobalNamespace::RenderTextureFromPostEffect::Awake)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RenderTextureFromPostEffect*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RenderTextureFromPostEffect::OnRenderImage
// Il2CppName: OnRenderImage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RenderTextureFromPostEffect::*)(UnityEngine::RenderTexture*, UnityEngine::RenderTexture*)>(&GlobalNamespace::RenderTextureFromPostEffect::OnRenderImage)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RenderTextureFromPostEffect*), "OnRenderImage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::RenderTexture*>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::RenderTexture*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RenderTextureFromPostEffect::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
