// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: LightWithIds
#include "GlobalNamespace/LightWithIds.hpp"
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
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: LightmapLightWithIds
  // [TokenAttribute] Offset: FFFFFFFF
  class LightmapLightWithIds : public GlobalNamespace::LightWithIds {
    public:
    // Writing base type padding for base size: 0x21 to desired offset: 0x24
    char ___base_padding[0x3] = {};
    // Nested type: GlobalNamespace::LightmapLightWithIds::LightIntensitiesData
    class LightIntensitiesData;
    // private System.Single _maxTotalIntensity
    // Size: 0x4
    // Offset: 0x24
    float maxTotalIntensity;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private LightmapLightWithIds/LightIntensitiesData[] _lightIntensityData
    // Size: 0x8
    // Offset: 0x28
    ::Array<GlobalNamespace::LightmapLightWithIds::LightIntensitiesData*>* lightIntensityData;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::LightmapLightWithIds::LightIntensitiesData*>*) == 0x8);
    // private System.Action`1<System.Single> globalIntensityDidChangeEvent
    // Size: 0x8
    // Offset: 0x30
    System::Action_1<float>* globalIntensityDidChangeEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<float>*) == 0x8);
    // Creating value type constructor for type: LightmapLightWithIds
    LightmapLightWithIds(float maxTotalIntensity_ = {}, ::Array<GlobalNamespace::LightmapLightWithIds::LightIntensitiesData*>* lightIntensityData_ = {}, System::Action_1<float>* globalIntensityDidChangeEvent_ = {}) noexcept : maxTotalIntensity{maxTotalIntensity_}, lightIntensityData{lightIntensityData_}, globalIntensityDidChangeEvent{globalIntensityDidChangeEvent_} {}
    // Get instance field reference: private System.Single _maxTotalIntensity
    float& dyn__maxTotalIntensity();
    // Get instance field reference: private LightmapLightWithIds/LightIntensitiesData[] _lightIntensityData
    ::Array<GlobalNamespace::LightmapLightWithIds::LightIntensitiesData*>*& dyn__lightIntensityData();
    // Get instance field reference: private System.Action`1<System.Single> globalIntensityDidChangeEvent
    System::Action_1<float>*& dyn_globalIntensityDidChangeEvent();
    // public System.Single get_maxTotalIntensity()
    // Offset: 0x1E1AFE8
    float get_maxTotalIntensity();
    // public System.Void set_maxTotalIntensity(System.Single value)
    // Offset: 0x1E1AFF0
    void set_maxTotalIntensity(float value);
    // public System.Void add_globalIntensityDidChangeEvent(System.Action`1<System.Single> value)
    // Offset: 0x1E1AFF8
    void add_globalIntensityDidChangeEvent(System::Action_1<float>* value);
    // public System.Void remove_globalIntensityDidChangeEvent(System.Action`1<System.Single> value)
    // Offset: 0x1E1B09C
    void remove_globalIntensityDidChangeEvent(System::Action_1<float>* value);
    // protected override System.Collections.Generic.IEnumerable`1<LightWithIds/LightData> get_lightIntensityData()
    // Offset: 0x1E1B140
    // Implemented from: LightWithIds
    // Base method: System.Collections.Generic.IEnumerable`1<LightWithIds/LightData> LightWithIds::get_lightIntensityData()
    System::Collections::Generic::IEnumerable_1<GlobalNamespace::LightWithIds::LightData*>* get_lightIntensityData();
    // public System.Void .ctor()
    // Offset: 0x1E1B4FC
    // Implemented from: LightWithIds
    // Base method: System.Void LightWithIds::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LightmapLightWithIds* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LightmapLightWithIds::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LightmapLightWithIds*, creationType>()));
    }
    // protected override System.Void HandleLightManagerDidChangeSomeColorsThisFrame()
    // Offset: 0x1E1B148
    // Implemented from: LightWithIds
    // Base method: System.Void LightWithIds::HandleLightManagerDidChangeSomeColorsThisFrame()
    void HandleLightManagerDidChangeSomeColorsThisFrame();
  }; // LightmapLightWithIds
  #pragma pack(pop)
  static check_size<sizeof(LightmapLightWithIds), 48 + sizeof(System::Action_1<float>*)> __GlobalNamespace_LightmapLightWithIdsSizeCheck;
  static_assert(sizeof(LightmapLightWithIds) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LightmapLightWithIds*, "", "LightmapLightWithIds");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::LightmapLightWithIds::get_maxTotalIntensity
// Il2CppName: get_maxTotalIntensity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::LightmapLightWithIds::*)()>(&GlobalNamespace::LightmapLightWithIds::get_maxTotalIntensity)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightmapLightWithIds*), "get_maxTotalIntensity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightmapLightWithIds::set_maxTotalIntensity
// Il2CppName: set_maxTotalIntensity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightmapLightWithIds::*)(float)>(&GlobalNamespace::LightmapLightWithIds::set_maxTotalIntensity)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightmapLightWithIds*), "set_maxTotalIntensity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightmapLightWithIds::add_globalIntensityDidChangeEvent
// Il2CppName: add_globalIntensityDidChangeEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightmapLightWithIds::*)(System::Action_1<float>*)>(&GlobalNamespace::LightmapLightWithIds::add_globalIntensityDidChangeEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Single")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightmapLightWithIds*), "add_globalIntensityDidChangeEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightmapLightWithIds::remove_globalIntensityDidChangeEvent
// Il2CppName: remove_globalIntensityDidChangeEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightmapLightWithIds::*)(System::Action_1<float>*)>(&GlobalNamespace::LightmapLightWithIds::remove_globalIntensityDidChangeEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Single")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightmapLightWithIds*), "remove_globalIntensityDidChangeEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightmapLightWithIds::get_lightIntensityData
// Il2CppName: get_lightIntensityData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerable_1<GlobalNamespace::LightWithIds::LightData*>* (GlobalNamespace::LightmapLightWithIds::*)()>(&GlobalNamespace::LightmapLightWithIds::get_lightIntensityData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightmapLightWithIds*), "get_lightIntensityData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightmapLightWithIds::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::LightmapLightWithIds::HandleLightManagerDidChangeSomeColorsThisFrame
// Il2CppName: HandleLightManagerDidChangeSomeColorsThisFrame
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightmapLightWithIds::*)()>(&GlobalNamespace::LightmapLightWithIds::HandleLightManagerDidChangeSomeColorsThisFrame)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightmapLightWithIds*), "HandleLightManagerDidChangeSomeColorsThisFrame", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
