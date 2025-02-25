// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: ListSettingsController
#include "GlobalNamespace/ListSettingsController.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: IntListSettingsController
  // [TokenAttribute] Offset: FFFFFFFF
  class IntListSettingsController : public GlobalNamespace::ListSettingsController {
    public:
    // private System.Int32 _customNumberOfElements
    // Size: 0x4
    // Offset: 0x28
    int customNumberOfElements;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _customIndex
    // Size: 0x4
    // Offset: 0x2C
    int customIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Action`1<System.Int32> valueChangedEvent
    // Size: 0x8
    // Offset: 0x30
    System::Action_1<int>* valueChangedEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<int>*) == 0x8);
    // Creating value type constructor for type: IntListSettingsController
    IntListSettingsController(int customNumberOfElements_ = {}, int customIndex_ = {}, System::Action_1<int>* valueChangedEvent_ = {}) noexcept : customNumberOfElements{customNumberOfElements_}, customIndex{customIndex_}, valueChangedEvent{valueChangedEvent_} {}
    // Get instance field reference: private System.Int32 _customNumberOfElements
    int& dyn__customNumberOfElements();
    // Get instance field reference: private System.Int32 _customIndex
    int& dyn__customIndex();
    // Get instance field reference: private System.Action`1<System.Int32> valueChangedEvent
    System::Action_1<int>*& dyn_valueChangedEvent();
    // public System.Void add_valueChangedEvent(System.Action`1<System.Int32> value)
    // Offset: 0x1189370
    void add_valueChangedEvent(System::Action_1<int>* value);
    // public System.Void remove_valueChangedEvent(System.Action`1<System.Int32> value)
    // Offset: 0x1189414
    void remove_valueChangedEvent(System::Action_1<int>* value);
    // public System.Void InitValues(System.Int32 numberOfElements, System.Int32 index)
    // Offset: 0x11894B8
    void InitValues(int numberOfElements, int index);
    // public System.Void .ctor()
    // Offset: 0x1189608
    // Implemented from: ListSettingsController
    // Base method: System.Void ListSettingsController::.ctor()
    // Base method: System.Void IncDecSettingsController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IntListSettingsController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::IntListSettingsController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IntListSettingsController*, creationType>()));
    }
    // protected override System.Boolean GetInitValues(out System.Int32 idx, out System.Int32 numberOfElements)
    // Offset: 0x1189550
    // Implemented from: ListSettingsController
    // Base method: System.Boolean ListSettingsController::GetInitValues(out System.Int32 idx, out System.Int32 numberOfElements)
    bool GetInitValues(ByRef<int> idx, ByRef<int> numberOfElements);
    // protected override System.Void ApplyValue(System.Int32 idx)
    // Offset: 0x1189568
    // Implemented from: ListSettingsController
    // Base method: System.Void ListSettingsController::ApplyValue(System.Int32 idx)
    void ApplyValue(int idx);
    // protected override System.String TextForValue(System.Int32 idx)
    // Offset: 0x11895E0
    // Implemented from: ListSettingsController
    // Base method: System.String ListSettingsController::TextForValue(System.Int32 idx)
    ::Il2CppString* TextForValue(int idx);
  }; // IntListSettingsController
  #pragma pack(pop)
  static check_size<sizeof(IntListSettingsController), 48 + sizeof(System::Action_1<int>*)> __GlobalNamespace_IntListSettingsControllerSizeCheck;
  static_assert(sizeof(IntListSettingsController) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::IntListSettingsController*, "", "IntListSettingsController");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::IntListSettingsController::add_valueChangedEvent
// Il2CppName: add_valueChangedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IntListSettingsController::*)(System::Action_1<int>*)>(&GlobalNamespace::IntListSettingsController::add_valueChangedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IntListSettingsController*), "add_valueChangedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IntListSettingsController::remove_valueChangedEvent
// Il2CppName: remove_valueChangedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IntListSettingsController::*)(System::Action_1<int>*)>(&GlobalNamespace::IntListSettingsController::remove_valueChangedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IntListSettingsController*), "remove_valueChangedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IntListSettingsController::InitValues
// Il2CppName: InitValues
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IntListSettingsController::*)(int, int)>(&GlobalNamespace::IntListSettingsController::InitValues)> {
  static const MethodInfo* get() {
    static auto* numberOfElements = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IntListSettingsController*), "InitValues", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{numberOfElements, index});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IntListSettingsController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::IntListSettingsController::GetInitValues
// Il2CppName: GetInitValues
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::IntListSettingsController::*)(ByRef<int>, ByRef<int>)>(&GlobalNamespace::IntListSettingsController::GetInitValues)> {
  static const MethodInfo* get() {
    static auto* idx = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* numberOfElements = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IntListSettingsController*), "GetInitValues", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{idx, numberOfElements});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IntListSettingsController::ApplyValue
// Il2CppName: ApplyValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IntListSettingsController::*)(int)>(&GlobalNamespace::IntListSettingsController::ApplyValue)> {
  static const MethodInfo* get() {
    static auto* idx = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IntListSettingsController*), "ApplyValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{idx});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IntListSettingsController::TextForValue
// Il2CppName: TextForValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::IntListSettingsController::*)(int)>(&GlobalNamespace::IntListSettingsController::TextForValue)> {
  static const MethodInfo* get() {
    static auto* idx = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IntListSettingsController*), "TextForValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{idx});
  }
};
