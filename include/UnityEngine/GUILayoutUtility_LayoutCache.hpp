// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.GUILayoutUtility
#include "UnityEngine/GUILayoutUtility.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GUILayoutGroup
  class GUILayoutGroup;
}
// Forward declaring namespace: UnityEngineInternal
namespace UnityEngineInternal {
  // Forward declaring type: GenericStack
  class GenericStack;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.GUILayoutUtility/UnityEngine.LayoutCache
  // [TokenAttribute] Offset: FFFFFFFF
  // [VisibleToOtherModulesAttribute] Offset: FFFFFFFF
  class GUILayoutUtility::LayoutCache : public ::Il2CppObject {
    public:
    // UnityEngine.GUILayoutGroup topLevel
    // Size: 0x8
    // Offset: 0x10
    UnityEngine::GUILayoutGroup* topLevel;
    // Field size check
    static_assert(sizeof(UnityEngine::GUILayoutGroup*) == 0x8);
    // UnityEngineInternal.GenericStack layoutGroups
    // Size: 0x8
    // Offset: 0x18
    UnityEngineInternal::GenericStack* layoutGroups;
    // Field size check
    static_assert(sizeof(UnityEngineInternal::GenericStack*) == 0x8);
    // UnityEngine.GUILayoutGroup windows
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::GUILayoutGroup* windows;
    // Field size check
    static_assert(sizeof(UnityEngine::GUILayoutGroup*) == 0x8);
    // Creating value type constructor for type: LayoutCache
    LayoutCache(UnityEngine::GUILayoutGroup* topLevel_ = {}, UnityEngineInternal::GenericStack* layoutGroups_ = {}, UnityEngine::GUILayoutGroup* windows_ = {}) noexcept : topLevel{topLevel_}, layoutGroups{layoutGroups_}, windows{windows_} {}
    // Get instance field reference: UnityEngine.GUILayoutGroup topLevel
    UnityEngine::GUILayoutGroup*& dyn_topLevel();
    // Get instance field reference: UnityEngineInternal.GenericStack layoutGroups
    UnityEngineInternal::GenericStack*& dyn_layoutGroups();
    // Get instance field reference: UnityEngine.GUILayoutGroup windows
    UnityEngine::GUILayoutGroup*& dyn_windows();
    // System.Void .ctor()
    // Offset: 0x1B32528
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GUILayoutUtility::LayoutCache* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::GUILayoutUtility::LayoutCache::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GUILayoutUtility::LayoutCache*, creationType>()));
    }
  }; // UnityEngine.GUILayoutUtility/UnityEngine.LayoutCache
  #pragma pack(pop)
  static check_size<sizeof(GUILayoutUtility::LayoutCache), 32 + sizeof(UnityEngine::GUILayoutGroup*)> __UnityEngine_GUILayoutUtility_LayoutCacheSizeCheck;
  static_assert(sizeof(GUILayoutUtility::LayoutCache) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::GUILayoutUtility::LayoutCache*, "UnityEngine", "GUILayoutUtility/LayoutCache");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::GUILayoutUtility::LayoutCache::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
