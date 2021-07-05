// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: ListSettingsController
#include "GlobalNamespace/ListSettingsController.hpp"
// Including type: HMUI.IValueChanger`1
#include "HMUI/IValueChanger_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: NamedIntListController
  class NamedIntListController : public GlobalNamespace::ListSettingsController/*, public HMUI::IValueChanger_1<int>*/ {
    public:
    // Nested type: GlobalNamespace::NamedIntListController::TextValuePair
    class TextValuePair;
    // private NamedIntListController/TextValuePair[] _textValuePairs
    // Size: 0x8
    // Offset: 0x28
    ::Array<GlobalNamespace::NamedIntListController::TextValuePair*>* textValuePairs;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::NamedIntListController::TextValuePair*>*) == 0x8);
    // private System.Int32 _value
    // Size: 0x4
    // Offset: 0x30
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: value and: valueChangedEvent
    char __padding1[0x4] = {};
    // [CompilerGeneratedAttribute] Offset: 0xE21A88
    // private System.Action`1<System.Int32> valueChangedEvent
    // Size: 0x8
    // Offset: 0x38
    System::Action_1<int>* valueChangedEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<int>*) == 0x8);
    // Creating value type constructor for type: NamedIntListController
    NamedIntListController(::Array<GlobalNamespace::NamedIntListController::TextValuePair*>* textValuePairs_ = {}, int value_ = {}, System::Action_1<int>* valueChangedEvent_ = {}) noexcept : textValuePairs{textValuePairs_}, value{value_}, valueChangedEvent{valueChangedEvent_} {}
    // Creating interface conversion operator: operator HMUI::IValueChanger_1<int>
    operator HMUI::IValueChanger_1<int>() noexcept {
      return *reinterpret_cast<HMUI::IValueChanger_1<int>*>(this);
    }
    // public System.Void add_valueChangedEvent(System.Action`1<System.Int32> value)
    // Offset: 0x1015304
    void add_valueChangedEvent(System::Action_1<int>* value);
    // public System.Void remove_valueChangedEvent(System.Action`1<System.Int32> value)
    // Offset: 0x10153A8
    void remove_valueChangedEvent(System::Action_1<int>* value);
    // public System.Void InitValues(NamedIntListController/TextValuePair[] values)
    // Offset: 0x101544C
    void InitValues(::Array<GlobalNamespace::NamedIntListController::TextValuePair*>* values);
    // public System.Void SetValue(System.Int32 value)
    // Offset: 0x101545C
    void SetValue(int value);
    // protected override System.Boolean GetInitValues(out System.Int32 idx, out System.Int32 numberOfElements)
    // Offset: 0x101546C
    // Implemented from: ListSettingsController
    // Base method: System.Boolean ListSettingsController::GetInitValues(out System.Int32 idx, out System.Int32 numberOfElements)
    bool GetInitValues(int& idx, int& numberOfElements);
    // protected override System.Void ApplyValue(System.Int32 idx)
    // Offset: 0x1015508
    // Implemented from: ListSettingsController
    // Base method: System.Void ListSettingsController::ApplyValue(System.Int32 idx)
    void ApplyValue(int idx);
    // protected override System.String TextForValue(System.Int32 idx)
    // Offset: 0x1015580
    // Implemented from: ListSettingsController
    // Base method: System.String ListSettingsController::TextForValue(System.Int32 idx)
    ::Il2CppString* TextForValue(int idx);
    // public System.Void .ctor()
    // Offset: 0x10155D4
    // Implemented from: ListSettingsController
    // Base method: System.Void ListSettingsController::.ctor()
    // Base method: System.Void IncDecSettingsController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NamedIntListController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::NamedIntListController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NamedIntListController*, creationType>()));
    }
  }; // NamedIntListController
  #pragma pack(pop)
  static check_size<sizeof(NamedIntListController), 56 + sizeof(System::Action_1<int>*)> __GlobalNamespace_NamedIntListControllerSizeCheck;
  static_assert(sizeof(NamedIntListController) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NamedIntListController*, "", "NamedIntListController");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::NamedIntListController::add_valueChangedEvent
// Il2CppName: add_valueChangedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NamedIntListController::*)(System::Action_1<int>*)>(&GlobalNamespace::NamedIntListController::add_valueChangedEvent)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NamedIntListController*), "add_valueChangedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NamedIntListController::remove_valueChangedEvent
// Il2CppName: remove_valueChangedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NamedIntListController::*)(System::Action_1<int>*)>(&GlobalNamespace::NamedIntListController::remove_valueChangedEvent)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NamedIntListController*), "remove_valueChangedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NamedIntListController::InitValues
// Il2CppName: InitValues
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NamedIntListController::*)(::Array<GlobalNamespace::NamedIntListController::TextValuePair*>*)>(&GlobalNamespace::NamedIntListController::InitValues)> {
  const MethodInfo* get() {
    static auto* values = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("", "NamedIntListController/TextValuePair"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NamedIntListController*), "InitValues", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{values});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NamedIntListController::SetValue
// Il2CppName: SetValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NamedIntListController::*)(int)>(&GlobalNamespace::NamedIntListController::SetValue)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NamedIntListController*), "SetValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NamedIntListController::GetInitValues
// Il2CppName: GetInitValues
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::NamedIntListController::*)(int&, int&)>(&GlobalNamespace::NamedIntListController::GetInitValues)> {
  const MethodInfo* get() {
    static auto* idx = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* numberOfElements = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NamedIntListController*), "GetInitValues", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{idx, numberOfElements});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NamedIntListController::ApplyValue
// Il2CppName: ApplyValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NamedIntListController::*)(int)>(&GlobalNamespace::NamedIntListController::ApplyValue)> {
  const MethodInfo* get() {
    static auto* idx = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NamedIntListController*), "ApplyValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{idx});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NamedIntListController::TextForValue
// Il2CppName: TextForValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::NamedIntListController::*)(int)>(&GlobalNamespace::NamedIntListController::TextForValue)> {
  const MethodInfo* get() {
    static auto* idx = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NamedIntListController*), "TextForValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{idx});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NamedIntListController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
