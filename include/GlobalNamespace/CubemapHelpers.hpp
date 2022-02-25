// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
// Including type: UnityEngine.CubemapFace
#include "UnityEngine/CubemapFace.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Material
  class Material;
  // Forward declaring type: Texture
  class Texture;
  // Forward declaring type: RenderTexture
  class RenderTexture;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: CubemapHelpers
  class CubemapHelpers;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::CubemapHelpers);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::CubemapHelpers*, "", "CubemapHelpers");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: CubemapHelpers
  // [TokenAttribute] Offset: FFFFFFFF
  class CubemapHelpers : public ::Il2CppObject {
    public:
    // static field const value: static private System.String kCubemapHelpersShaderName
    static constexpr const char* kCubemapHelpersShaderName = "Hidden/CubemapHelpers";
    // Get static field: static private System.String kCubemapHelpersShaderName
    static ::StringW _get_kCubemapHelpersShaderName();
    // Set static field: static private System.String kCubemapHelpersShaderName
    static void _set_kCubemapHelpersShaderName(::StringW value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0x124F9F0
    // Get static field: static private UnityEngine.Material _cubemapHelpersMaterial
    static UnityEngine::Material* _get__cubemapHelpersMaterial();
    // Set static field: static private UnityEngine.Material _cubemapHelpersMaterial
    static void _set__cubemapHelpersMaterial(UnityEngine::Material* value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0x124FA00
    // Get static field: static private readonly System.Int32 _cubePropertyId
    static int _get__cubePropertyId();
    // Set static field: static private readonly System.Int32 _cubePropertyId
    static void _set__cubePropertyId(int value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0x124FA10
    // Get static field: static private readonly System.Int32 _cubeFaceNumberId
    static int _get__cubeFaceNumberId();
    // Set static field: static private readonly System.Int32 _cubeFaceNumberId
    static void _set__cubeFaceNumberId(int value);
    // static field const value: static private System.Int32 kCubemapDownsamplePass
    static constexpr const int kCubemapDownsamplePass = 0;
    // Get static field: static private System.Int32 kCubemapDownsamplePass
    static int _get_kCubemapDownsamplePass();
    // Set static field: static private System.Int32 kCubemapDownsamplePass
    static void _set_kCubemapDownsamplePass(int value);
    // static field const value: static private System.Int32 kCubemapTo2DTexturePass
    static constexpr const int kCubemapTo2DTexturePass = 1;
    // Get static field: static private System.Int32 kCubemapTo2DTexturePass
    static int _get_kCubemapTo2DTexturePass();
    // Set static field: static private System.Int32 kCubemapTo2DTexturePass
    static void _set_kCubemapTo2DTexturePass(int value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0x124FA20
    // Get static field: static private readonly System.Collections.Generic.Dictionary`2<UnityEngine.CubemapFace,System.Int32> _cubemapFaceToCubeFaceNumberDict
    static System::Collections::Generic::Dictionary_2<UnityEngine::CubemapFace, int>* _get__cubemapFaceToCubeFaceNumberDict();
    // Set static field: static private readonly System.Collections.Generic.Dictionary`2<UnityEngine.CubemapFace,System.Int32> _cubemapFaceToCubeFaceNumberDict
    static void _set__cubemapFaceToCubeFaceNumberDict(System::Collections::Generic::Dictionary_2<UnityEngine::CubemapFace, int>* value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0x124FA30
    // Get static field: static private readonly UnityEngine.CubemapFace[] _cubemapFaces
    static ::ArrayW<UnityEngine::CubemapFace> _get__cubemapFaces();
    // Set static field: static private readonly UnityEngine.CubemapFace[] _cubemapFaces
    static void _set__cubemapFaces(::ArrayW<UnityEngine::CubemapFace> value);
    // static private UnityEngine.Material get_cubemapHelpersMaterial()
    // Offset: 0x13C619C
    static UnityEngine::Material* get_cubemapHelpersMaterial();
    // static private System.Void .cctor()
    // Offset: 0x13C68FC
    static void _cctor();
    // static private System.Void Downsample(UnityEngine.Texture src, UnityEngine.RenderTexture dest)
    // Offset: 0x13C62C8
    static void Downsample(UnityEngine::Texture* src, UnityEngine::RenderTexture* dest);
    // static public UnityEngine.RenderTexture CreateDownsampledCubemap(UnityEngine.RenderTexture src, System.Int32 count)
    // Offset: 0x13C65BC
    static UnityEngine::RenderTexture* CreateDownsampledCubemap(UnityEngine::RenderTexture* src, int count);
    // static public UnityEngine.RenderTexture Create2DTextureFromCubemap(UnityEngine.RenderTexture src)
    // Offset: 0x13C67A8
    static UnityEngine::RenderTexture* Create2DTextureFromCubemap(UnityEngine::RenderTexture* src);
    // static private System.Void DrawCubemapFace(UnityEngine.Texture cubemap, UnityEngine.CubemapFace cubemapFace)
    // Offset: 0x13C6408
    static void DrawCubemapFace(UnityEngine::Texture* cubemap, UnityEngine::CubemapFace cubemapFace);
  }; // CubemapHelpers
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::CubemapHelpers::get_cubemapHelpersMaterial
// Il2CppName: get_cubemapHelpersMaterial
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Material* (*)()>(&GlobalNamespace::CubemapHelpers::get_cubemapHelpersMaterial)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CubemapHelpers*), "get_cubemapHelpersMaterial", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CubemapHelpers::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::CubemapHelpers::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CubemapHelpers*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CubemapHelpers::Downsample
// Il2CppName: Downsample
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::Texture*, UnityEngine::RenderTexture*)>(&GlobalNamespace::CubemapHelpers::Downsample)> {
  static const MethodInfo* get() {
    static auto* src = &::il2cpp_utils::GetClassFromName("UnityEngine", "Texture")->byval_arg;
    static auto* dest = &::il2cpp_utils::GetClassFromName("UnityEngine", "RenderTexture")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CubemapHelpers*), "Downsample", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{src, dest});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CubemapHelpers::CreateDownsampledCubemap
// Il2CppName: CreateDownsampledCubemap
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::RenderTexture* (*)(UnityEngine::RenderTexture*, int)>(&GlobalNamespace::CubemapHelpers::CreateDownsampledCubemap)> {
  static const MethodInfo* get() {
    static auto* src = &::il2cpp_utils::GetClassFromName("UnityEngine", "RenderTexture")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CubemapHelpers*), "CreateDownsampledCubemap", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{src, count});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CubemapHelpers::Create2DTextureFromCubemap
// Il2CppName: Create2DTextureFromCubemap
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::RenderTexture* (*)(UnityEngine::RenderTexture*)>(&GlobalNamespace::CubemapHelpers::Create2DTextureFromCubemap)> {
  static const MethodInfo* get() {
    static auto* src = &::il2cpp_utils::GetClassFromName("UnityEngine", "RenderTexture")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CubemapHelpers*), "Create2DTextureFromCubemap", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{src});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CubemapHelpers::DrawCubemapFace
// Il2CppName: DrawCubemapFace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::Texture*, UnityEngine::CubemapFace)>(&GlobalNamespace::CubemapHelpers::DrawCubemapFace)> {
  static const MethodInfo* get() {
    static auto* cubemap = &::il2cpp_utils::GetClassFromName("UnityEngine", "Texture")->byval_arg;
    static auto* cubemapFace = &::il2cpp_utils::GetClassFromName("UnityEngine", "CubemapFace")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CubemapHelpers*), "DrawCubemapFace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cubemap, cubemapFace});
  }
};
