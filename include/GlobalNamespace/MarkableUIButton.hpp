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
  // Forward declaring type: Animator
  class Animator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: MarkableUIButton
  class MarkableUIButton : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.Animator _animator
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::Animator* animator;
    // Field size check
    static_assert(sizeof(UnityEngine::Animator*) == 0x8);
    // private System.Boolean _marked
    // Size: 0x1
    // Offset: 0x20
    bool marked;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: marked and: markedTriggerId
    char __padding1[0x3] = {};
    // private System.Int32 _markedTriggerId
    // Size: 0x4
    // Offset: 0x24
    int markedTriggerId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: MarkableUIButton
    MarkableUIButton(UnityEngine::Animator* animator_ = {}, bool marked_ = {}, int markedTriggerId_ = {}) noexcept : animator{animator_}, marked{marked_}, markedTriggerId{markedTriggerId_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Boolean get_marked()
    // Offset: 0x124C90C
    bool get_marked();
    // public System.Void set_marked(System.Boolean value)
    // Offset: 0x124C914
    void set_marked(bool value);
    // protected System.Void Awake()
    // Offset: 0x124C940
    void Awake();
    // public System.Void ToggleMarked()
    // Offset: 0x124C998
    void ToggleMarked();
    // public System.Void .ctor()
    // Offset: 0x124C9A8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MarkableUIButton* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MarkableUIButton::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MarkableUIButton*, creationType>()));
    }
  }; // MarkableUIButton
  #pragma pack(pop)
  static check_size<sizeof(MarkableUIButton), 36 + sizeof(int)> __GlobalNamespace_MarkableUIButtonSizeCheck;
  static_assert(sizeof(MarkableUIButton) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MarkableUIButton*, "", "MarkableUIButton");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MarkableUIButton::get_marked
// Il2CppName: get_marked
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::MarkableUIButton::*)()>(&GlobalNamespace::MarkableUIButton::get_marked)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MarkableUIButton*), "get_marked", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MarkableUIButton::set_marked
// Il2CppName: set_marked
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MarkableUIButton::*)(bool)>(&GlobalNamespace::MarkableUIButton::set_marked)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MarkableUIButton*), "set_marked", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MarkableUIButton::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MarkableUIButton::*)()>(&GlobalNamespace::MarkableUIButton::Awake)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MarkableUIButton*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MarkableUIButton::ToggleMarked
// Il2CppName: ToggleMarked
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MarkableUIButton::*)()>(&GlobalNamespace::MarkableUIButton::ToggleMarked)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MarkableUIButton*), "ToggleMarked", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MarkableUIButton::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
