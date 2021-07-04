// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
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
  // [RequireComponent] Offset: D90BC8
  // [NativeTypeAttribute] Offset: D90BC8
  class SpriteRenderer : public UnityEngine::Renderer {
    public:
    // Creating value type constructor for type: SpriteRenderer
    SpriteRenderer() noexcept {}
    // public System.Void set_sprite(UnityEngine.Sprite value)
    // Offset: 0x2317418
    void set_sprite(UnityEngine::Sprite* value);
    // public UnityEngine.Color get_color()
    // Offset: 0x2317468
    UnityEngine::Color get_color();
    // public System.Void set_color(UnityEngine.Color value)
    // Offset: 0x2317514
    void set_color(UnityEngine::Color value);
    // private System.Void get_color_Injected(out UnityEngine.Color ret)
    // Offset: 0x23174C4
    void get_color_Injected(UnityEngine::Color& ret);
    // private System.Void set_color_Injected(ref UnityEngine.Color value)
    // Offset: 0x231756C
    void set_color_Injected(UnityEngine::Color& value);
  }; // UnityEngine.SpriteRenderer
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::SpriteRenderer*, "UnityEngine", "SpriteRenderer");
// Writing includes for template specializations
#include "UnityEngine/Sprite.hpp"
#include "UnityEngine/Color.hpp"
// Writing MetadataGetter for method: UnityEngine::SpriteRenderer::set_sprite
// Il2CppName: set_sprite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::SpriteRenderer::*)(UnityEngine::Sprite*)>(&UnityEngine::SpriteRenderer::set_sprite)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SpriteRenderer*), "set_sprite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Sprite*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::SpriteRenderer::get_color
// Il2CppName: get_color
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Color (UnityEngine::SpriteRenderer::*)()>(&UnityEngine::SpriteRenderer::get_color)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SpriteRenderer*), "get_color", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::SpriteRenderer::set_color
// Il2CppName: set_color
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::SpriteRenderer::*)(UnityEngine::Color)>(&UnityEngine::SpriteRenderer::set_color)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SpriteRenderer*), "set_color", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Color>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::SpriteRenderer::get_color_Injected
// Il2CppName: get_color_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::SpriteRenderer::*)(UnityEngine::Color&)>(&UnityEngine::SpriteRenderer::get_color_Injected)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SpriteRenderer*), "get_color_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Color&>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::SpriteRenderer::set_color_Injected
// Il2CppName: set_color_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::SpriteRenderer::*)(UnityEngine::Color&)>(&UnityEngine::SpriteRenderer::set_color_Injected)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SpriteRenderer*), "set_color_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Color&>()});
  }
};
