// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.EventSystems.RaycastResult
#include "UnityEngine/EventSystems/RaycastResult.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Canvas
  class Canvas;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: HMUI.RaycastUITopLevelChecker
  // [TokenAttribute] Offset: FFFFFFFF
  class RaycastUITopLevelChecker : public UnityEngine::MonoBehaviour {
    public:
    // private System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult> results
    // Size: 0x8
    // Offset: 0x18
    System::Collections::Generic::List_1<UnityEngine::EventSystems::RaycastResult>* results;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<UnityEngine::EventSystems::RaycastResult>*) == 0x8);
    // private UnityEngine.Canvas _canvas
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::Canvas* canvas;
    // Field size check
    static_assert(sizeof(UnityEngine::Canvas*) == 0x8);
    // Creating value type constructor for type: RaycastUITopLevelChecker
    RaycastUITopLevelChecker(System::Collections::Generic::List_1<UnityEngine::EventSystems::RaycastResult>* results_ = {}, UnityEngine::Canvas* canvas_ = {}) noexcept : results{results_}, canvas{canvas_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field: private System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult> results
    System::Collections::Generic::List_1<UnityEngine::EventSystems::RaycastResult>* _get_results();
    // Set instance field: private System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult> results
    void _set_results(System::Collections::Generic::List_1<UnityEngine::EventSystems::RaycastResult>* value);
    // Get instance field: private UnityEngine.Canvas _canvas
    UnityEngine::Canvas* _get__canvas();
    // Set instance field: private UnityEngine.Canvas _canvas
    void _set__canvas(UnityEngine::Canvas* value);
    // public System.Boolean get_isOnTop()
    // Offset: 0x12FA968
    bool get_isOnTop();
    // protected System.Void Awake()
    // Offset: 0x12FA8E4
    void Awake();
    // public System.Void .ctor()
    // Offset: 0x12FAB88
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RaycastUITopLevelChecker* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::RaycastUITopLevelChecker::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RaycastUITopLevelChecker*, creationType>()));
    }
  }; // HMUI.RaycastUITopLevelChecker
  #pragma pack(pop)
  static check_size<sizeof(RaycastUITopLevelChecker), 32 + sizeof(UnityEngine::Canvas*)> __HMUI_RaycastUITopLevelCheckerSizeCheck;
  static_assert(sizeof(RaycastUITopLevelChecker) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(HMUI::RaycastUITopLevelChecker*, "HMUI", "RaycastUITopLevelChecker");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HMUI::RaycastUITopLevelChecker::get_isOnTop
// Il2CppName: get_isOnTop
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HMUI::RaycastUITopLevelChecker::*)()>(&HMUI::RaycastUITopLevelChecker::get_isOnTop)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::RaycastUITopLevelChecker*), "get_isOnTop", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::RaycastUITopLevelChecker::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::RaycastUITopLevelChecker::*)()>(&HMUI::RaycastUITopLevelChecker::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::RaycastUITopLevelChecker*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::RaycastUITopLevelChecker::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
