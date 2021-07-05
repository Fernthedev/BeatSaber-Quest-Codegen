// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BaseTransitionSO
#include "GlobalNamespace/BaseTransitionSO.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x26
  #pragma pack(push, 1)
  // Autogenerated type: EnabledTransitionSO
  class EnabledTransitionSO : public GlobalNamespace::BaseTransitionSO {
    public:
    // private System.Boolean _normalState
    // Size: 0x1
    // Offset: 0x20
    bool normalState;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _highlightedState
    // Size: 0x1
    // Offset: 0x21
    bool highlightedState;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _pressedState
    // Size: 0x1
    // Offset: 0x22
    bool pressedState;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _disabledState
    // Size: 0x1
    // Offset: 0x23
    bool disabledState;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _selectedState
    // Size: 0x1
    // Offset: 0x24
    bool selectedState;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _selectedAndHighlightedState
    // Size: 0x1
    // Offset: 0x25
    bool selectedAndHighlightedState;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: EnabledTransitionSO
    EnabledTransitionSO(bool normalState_ = {}, bool highlightedState_ = {}, bool pressedState_ = {}, bool disabledState_ = {}, bool selectedState_ = {}, bool selectedAndHighlightedState_ = {}) noexcept : normalState{normalState_}, highlightedState{highlightedState_}, pressedState{pressedState_}, disabledState{disabledState_}, selectedState{selectedState_}, selectedAndHighlightedState{selectedAndHighlightedState_} {}
    // public System.Boolean get_normalState()
    // Offset: 0x103C4B8
    bool get_normalState();
    // public System.Boolean get_highlightedState()
    // Offset: 0x103C4C0
    bool get_highlightedState();
    // public System.Boolean get_pressedState()
    // Offset: 0x103C4C8
    bool get_pressedState();
    // public System.Boolean get_disabledState()
    // Offset: 0x103C4D0
    bool get_disabledState();
    // public System.Boolean get_selectedState()
    // Offset: 0x103C4D8
    bool get_selectedState();
    // public System.Boolean get_selectedAndHighlightedState()
    // Offset: 0x103C4E0
    bool get_selectedAndHighlightedState();
    // public System.Void .ctor()
    // Offset: 0x103C4E8
    // Implemented from: BaseTransitionSO
    // Base method: System.Void BaseTransitionSO::.ctor()
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EnabledTransitionSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::EnabledTransitionSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EnabledTransitionSO*, creationType>()));
    }
  }; // EnabledTransitionSO
  #pragma pack(pop)
  static check_size<sizeof(EnabledTransitionSO), 37 + sizeof(bool)> __GlobalNamespace_EnabledTransitionSOSizeCheck;
  static_assert(sizeof(EnabledTransitionSO) == 0x26);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::EnabledTransitionSO*, "", "EnabledTransitionSO");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::EnabledTransitionSO::get_normalState
// Il2CppName: get_normalState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::EnabledTransitionSO::*)()>(&GlobalNamespace::EnabledTransitionSO::get_normalState)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EnabledTransitionSO*), "get_normalState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EnabledTransitionSO::get_highlightedState
// Il2CppName: get_highlightedState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::EnabledTransitionSO::*)()>(&GlobalNamespace::EnabledTransitionSO::get_highlightedState)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EnabledTransitionSO*), "get_highlightedState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EnabledTransitionSO::get_pressedState
// Il2CppName: get_pressedState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::EnabledTransitionSO::*)()>(&GlobalNamespace::EnabledTransitionSO::get_pressedState)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EnabledTransitionSO*), "get_pressedState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EnabledTransitionSO::get_disabledState
// Il2CppName: get_disabledState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::EnabledTransitionSO::*)()>(&GlobalNamespace::EnabledTransitionSO::get_disabledState)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EnabledTransitionSO*), "get_disabledState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EnabledTransitionSO::get_selectedState
// Il2CppName: get_selectedState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::EnabledTransitionSO::*)()>(&GlobalNamespace::EnabledTransitionSO::get_selectedState)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EnabledTransitionSO*), "get_selectedState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EnabledTransitionSO::get_selectedAndHighlightedState
// Il2CppName: get_selectedAndHighlightedState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::EnabledTransitionSO::*)()>(&GlobalNamespace::EnabledTransitionSO::get_selectedAndHighlightedState)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EnabledTransitionSO*), "get_selectedAndHighlightedState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EnabledTransitionSO::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
