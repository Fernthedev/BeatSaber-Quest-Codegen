// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Rect
#include "UnityEngine/Rect.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x49
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ScrollViewState
  // [TokenAttribute] Offset: FFFFFFFF
  class ScrollViewState : public ::Il2CppObject {
    public:
    // public UnityEngine.Rect position
    // Size: 0x10
    // Offset: 0x10
    UnityEngine::Rect position;
    // Field size check
    static_assert(sizeof(UnityEngine::Rect) == 0x10);
    // public UnityEngine.Rect visibleRect
    // Size: 0x10
    // Offset: 0x20
    UnityEngine::Rect visibleRect;
    // Field size check
    static_assert(sizeof(UnityEngine::Rect) == 0x10);
    // public UnityEngine.Rect viewRect
    // Size: 0x10
    // Offset: 0x30
    UnityEngine::Rect viewRect;
    // Field size check
    static_assert(sizeof(UnityEngine::Rect) == 0x10);
    // public UnityEngine.Vector2 scrollPosition
    // Size: 0x8
    // Offset: 0x40
    UnityEngine::Vector2 scrollPosition;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector2) == 0x8);
    // public System.Boolean apply
    // Size: 0x1
    // Offset: 0x48
    bool apply;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: ScrollViewState
    ScrollViewState(UnityEngine::Rect position_ = {}, UnityEngine::Rect visibleRect_ = {}, UnityEngine::Rect viewRect_ = {}, UnityEngine::Vector2 scrollPosition_ = {}, bool apply_ = {}) noexcept : position{position_}, visibleRect{visibleRect_}, viewRect{viewRect_}, scrollPosition{scrollPosition_}, apply{apply_} {}
    // Get instance field: public UnityEngine.Rect position
    UnityEngine::Rect _get_position();
    // Set instance field: public UnityEngine.Rect position
    void _set_position(UnityEngine::Rect value);
    // Get instance field: public UnityEngine.Rect visibleRect
    UnityEngine::Rect _get_visibleRect();
    // Set instance field: public UnityEngine.Rect visibleRect
    void _set_visibleRect(UnityEngine::Rect value);
    // Get instance field: public UnityEngine.Rect viewRect
    UnityEngine::Rect _get_viewRect();
    // Set instance field: public UnityEngine.Rect viewRect
    void _set_viewRect(UnityEngine::Rect value);
    // Get instance field: public UnityEngine.Vector2 scrollPosition
    UnityEngine::Vector2 _get_scrollPosition();
    // Set instance field: public UnityEngine.Vector2 scrollPosition
    void _set_scrollPosition(UnityEngine::Vector2 value);
    // Get instance field: public System.Boolean apply
    bool _get_apply();
    // Set instance field: public System.Boolean apply
    void _set_apply(bool value);
    // public System.Void .ctor()
    // Offset: 0x1B35AF8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ScrollViewState* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ScrollViewState::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ScrollViewState*, creationType>()));
    }
  }; // UnityEngine.ScrollViewState
  #pragma pack(pop)
  static check_size<sizeof(ScrollViewState), 72 + sizeof(bool)> __UnityEngine_ScrollViewStateSizeCheck;
  static_assert(sizeof(ScrollViewState) == 0x49);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ScrollViewState*, "UnityEngine", "ScrollViewState");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ScrollViewState::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
