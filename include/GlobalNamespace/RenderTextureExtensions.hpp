// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Texture2D
  class Texture2D;
  // Forward declaring type: RenderTexture
  class RenderTexture;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: RenderTextureExtensions
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class RenderTextureExtensions : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: RenderTextureExtensions
    RenderTextureExtensions() noexcept {}
    // static public UnityEngine.Texture2D GetTexture2D(UnityEngine.RenderTexture rt)
    // Offset: 0x12705E4
    static UnityEngine::Texture2D* GetTexture2D(UnityEngine::RenderTexture* rt);
  }; // RenderTextureExtensions
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::RenderTextureExtensions*, "", "RenderTextureExtensions");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::RenderTextureExtensions::GetTexture2D
// Il2CppName: GetTexture2D
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Texture2D* (*)(UnityEngine::RenderTexture*)>(&GlobalNamespace::RenderTextureExtensions::GetTexture2D)> {
  static const MethodInfo* get() {
    static auto* rt = &::il2cpp_utils::GetClassFromName("UnityEngine", "RenderTexture")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RenderTextureExtensions*), "GetTexture2D", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rt});
  }
};
