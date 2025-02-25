// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IScoreController
  class IScoreController;
  // Forward declaring type: AudioTimeSyncController
  class AudioTimeSyncController;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: MultiplierValuesRecorder
  // [TokenAttribute] Offset: FFFFFFFF
  class MultiplierValuesRecorder : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::MultiplierValuesRecorder::MultiplierValue
    struct MultiplierValue;
    // Size: 0x8
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: MultiplierValuesRecorder/MultiplierValue
    // [TokenAttribute] Offset: FFFFFFFF
    struct MultiplierValue/*, public System::ValueType*/ {
      public:
      // public readonly System.Int32 multiplier
      // Size: 0x4
      // Offset: 0x0
      int multiplier;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // public readonly System.Single time
      // Size: 0x4
      // Offset: 0x4
      float time;
      // Field size check
      static_assert(sizeof(float) == 0x4);
      // Creating value type constructor for type: MultiplierValue
      constexpr MultiplierValue(int multiplier_ = {}, float time_ = {}) noexcept : multiplier{multiplier_}, time{time_} {}
      // Creating interface conversion operator: operator System::ValueType
      operator System::ValueType() noexcept {
        return *reinterpret_cast<System::ValueType*>(this);
      }
      // Get instance field reference: public readonly System.Int32 multiplier
      int& dyn_multiplier();
      // Get instance field reference: public readonly System.Single time
      float& dyn_time();
      // public System.Void .ctor(System.Int32 multiplier, System.Single time)
      // Offset: 0x1045594
      // template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
      // ABORTED: conflicts with another method.  MultiplierValue(int multiplier, float time)
    }; // MultiplierValuesRecorder/MultiplierValue
    #pragma pack(pop)
    static check_size<sizeof(MultiplierValuesRecorder::MultiplierValue), 4 + sizeof(float)> __GlobalNamespace_MultiplierValuesRecorder_MultiplierValueSizeCheck;
    static_assert(sizeof(MultiplierValuesRecorder::MultiplierValue) == 0x8);
    // [InjectAttribute] Offset: 0xE41D28
    // private IScoreController _scoreController
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::IScoreController* scoreController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IScoreController*) == 0x8);
    // [InjectAttribute] Offset: 0xE41D38
    // private AudioTimeSyncController _audioTimeSyncController
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::AudioTimeSyncController* audioTimeSyncController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AudioTimeSyncController*) == 0x8);
    // private System.Collections.Generic.List`1<MultiplierValuesRecorder/MultiplierValue> _multiplierValues
    // Size: 0x8
    // Offset: 0x28
    System::Collections::Generic::List_1<GlobalNamespace::MultiplierValuesRecorder::MultiplierValue>* multiplierValues;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<GlobalNamespace::MultiplierValuesRecorder::MultiplierValue>*) == 0x8);
    // Creating value type constructor for type: MultiplierValuesRecorder
    MultiplierValuesRecorder(GlobalNamespace::IScoreController* scoreController_ = {}, GlobalNamespace::AudioTimeSyncController* audioTimeSyncController_ = {}, System::Collections::Generic::List_1<GlobalNamespace::MultiplierValuesRecorder::MultiplierValue>* multiplierValues_ = {}) noexcept : scoreController{scoreController_}, audioTimeSyncController{audioTimeSyncController_}, multiplierValues{multiplierValues_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private IScoreController _scoreController
    GlobalNamespace::IScoreController*& dyn__scoreController();
    // Get instance field reference: private AudioTimeSyncController _audioTimeSyncController
    GlobalNamespace::AudioTimeSyncController*& dyn__audioTimeSyncController();
    // Get instance field reference: private System.Collections.Generic.List`1<MultiplierValuesRecorder/MultiplierValue> _multiplierValues
    System::Collections::Generic::List_1<GlobalNamespace::MultiplierValuesRecorder::MultiplierValue>*& dyn__multiplierValues();
    // public System.Collections.Generic.List`1<MultiplierValuesRecorder/MultiplierValue> get_multiplierValues()
    // Offset: 0x10452F0
    System::Collections::Generic::List_1<GlobalNamespace::MultiplierValuesRecorder::MultiplierValue>* get_multiplierValues();
    // protected System.Void Start()
    // Offset: 0x10452F8
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x10453EC
    void OnDestroy();
    // private System.Void HandleScoreControllerMultiplierDidChange(System.Int32 multiplier, System.Single multiplierProgress)
    // Offset: 0x10454EC
    void HandleScoreControllerMultiplierDidChange(int multiplier, float multiplierProgress);
    // public System.Void .ctor()
    // Offset: 0x10455A0
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplierValuesRecorder* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplierValuesRecorder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplierValuesRecorder*, creationType>()));
    }
  }; // MultiplierValuesRecorder
  #pragma pack(pop)
  static check_size<sizeof(MultiplierValuesRecorder), 40 + sizeof(System::Collections::Generic::List_1<GlobalNamespace::MultiplierValuesRecorder::MultiplierValue>*)> __GlobalNamespace_MultiplierValuesRecorderSizeCheck;
  static_assert(sizeof(MultiplierValuesRecorder) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplierValuesRecorder*, "", "MultiplierValuesRecorder");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplierValuesRecorder::MultiplierValue, "", "MultiplierValuesRecorder/MultiplierValue");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MultiplierValuesRecorder::get_multiplierValues
// Il2CppName: get_multiplierValues
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<GlobalNamespace::MultiplierValuesRecorder::MultiplierValue>* (GlobalNamespace::MultiplierValuesRecorder::*)()>(&GlobalNamespace::MultiplierValuesRecorder::get_multiplierValues)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplierValuesRecorder*), "get_multiplierValues", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplierValuesRecorder::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplierValuesRecorder::*)()>(&GlobalNamespace::MultiplierValuesRecorder::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplierValuesRecorder*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplierValuesRecorder::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplierValuesRecorder::*)()>(&GlobalNamespace::MultiplierValuesRecorder::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplierValuesRecorder*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplierValuesRecorder::HandleScoreControllerMultiplierDidChange
// Il2CppName: HandleScoreControllerMultiplierDidChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplierValuesRecorder::*)(int, float)>(&GlobalNamespace::MultiplierValuesRecorder::HandleScoreControllerMultiplierDidChange)> {
  static const MethodInfo* get() {
    static auto* multiplier = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* multiplierProgress = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplierValuesRecorder*), "HandleScoreControllerMultiplierDidChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{multiplier, multiplierProgress});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplierValuesRecorder::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
