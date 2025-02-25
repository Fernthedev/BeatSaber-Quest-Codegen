// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Renderer
#include "UnityEngine/Renderer.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Sprite
  class Sprite;
  // Forward declaring type: Color
  struct Color;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.SpriteRenderer
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeTypeAttribute] Offset: DB5ED0
  // [RequireComponent] Offset: DB5ED0
  class SpriteRenderer : public UnityEngine::Renderer {
    public:
    // Creating value type constructor for type: SpriteRenderer
    SpriteRenderer() noexcept {}
    // public System.Void set_sprite(UnityEngine.Sprite value)
    // Offset: 0x2355BB0
    void set_sprite(UnityEngine::Sprite* value);
    // public UnityEngine.Color get_color()
    // Offset: 0x2355C00
    UnityEngine::Color get_color();
    // public System.Void set_color(UnityEngine.Color value)
    // Offset: 0x2355CAC
    void set_color(UnityEngine::Color value);
    // private System.Void get_color_Injected(out UnityEngine.Color ret)
    // Offset: 0x2355C5C
    void get_color_Injected(ByRef<UnityEngine::Color> ret);
    // private System.Void set_color_Injected(ref UnityEngine.Color value)
    // Offset: 0x2355D04
    void set_color_Injected(ByRef<UnityEngine::Color> value);
  }; // UnityEngine.SpriteRenderer
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::SpriteRenderer*, "UnityEngine", "SpriteRenderer");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::SpriteRenderer::set_sprite
// Il2CppName: set_sprite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::SpriteRenderer::*)(UnityEngine::Sprite*)>(&UnityEngine::SpriteRenderer::set_sprite)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Sprite")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SpriteRenderer*), "set_sprite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::SpriteRenderer::get_color
// Il2CppName: get_color
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Color (UnityEngine::SpriteRenderer::*)()>(&UnityEngine::SpriteRenderer::get_color)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SpriteRenderer*), "get_color", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::SpriteRenderer::set_color
// Il2CppName: set_color
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::SpriteRenderer::*)(UnityEngine::Color)>(&UnityEngine::SpriteRenderer::set_color)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SpriteRenderer*), "set_color", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::SpriteRenderer::get_color_Injected
// Il2CppName: get_color_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::SpriteRenderer::*)(ByRef<UnityEngine::Color>)>(&UnityEngine::SpriteRenderer::get_color_Injected)> {
  static const MethodInfo* get() {
    static auto* ret = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SpriteRenderer*), "get_color_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ret});
  }
};
// Writing MetadataGetter for method: UnityEngine::SpriteRenderer::set_color_Injected
// Il2CppName: set_color_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::SpriteRenderer::*)(ByRef<UnityEngine::Color>)>(&UnityEngine::SpriteRenderer::set_color_Injected)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SpriteRenderer*), "set_color_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
