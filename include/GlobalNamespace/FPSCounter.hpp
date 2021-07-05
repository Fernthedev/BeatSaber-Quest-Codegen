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
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x34
  #pragma pack(push, 1)
  // Autogenerated type: FPSCounter
  class FPSCounter : public UnityEngine::MonoBehaviour {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xE206BC
    // private System.Int32 <currentFPS>k__BackingField
    // Size: 0x4
    // Offset: 0x18
    int currentFPS;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xE206CC
    // private System.Int32 <lowestFPS>k__BackingField
    // Size: 0x4
    // Offset: 0x1C
    int lowestFPS;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xE206DC
    // private System.Int32 <highestFPS>k__BackingField
    // Size: 0x4
    // Offset: 0x20
    int highestFPS;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xE206EC
    // private System.Int32 <droppedFrames>k__BackingField
    // Size: 0x4
    // Offset: 0x24
    int droppedFrames;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Single _timeBuffer
    // Size: 0x4
    // Offset: 0x28
    float timeBuffer;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Int32 _frameCounter
    // Size: 0x4
    // Offset: 0x2C
    int frameCounter;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Single _minDeltaTime
    // Size: 0x4
    // Offset: 0x30
    float minDeltaTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: FPSCounter
    FPSCounter(int currentFPS_ = {}, int lowestFPS_ = {}, int highestFPS_ = {}, int droppedFrames_ = {}, float timeBuffer_ = {}, int frameCounter_ = {}, float minDeltaTime_ = {}) noexcept : currentFPS{currentFPS_}, lowestFPS{lowestFPS_}, highestFPS{highestFPS_}, droppedFrames{droppedFrames_}, timeBuffer{timeBuffer_}, frameCounter{frameCounter_}, minDeltaTime{minDeltaTime_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Int32 get_currentFPS()
    // Offset: 0x1041124
    int get_currentFPS();
    // private System.Void set_currentFPS(System.Int32 value)
    // Offset: 0x104112C
    void set_currentFPS(int value);
    // public System.Int32 get_lowestFPS()
    // Offset: 0x1041134
    int get_lowestFPS();
    // private System.Void set_lowestFPS(System.Int32 value)
    // Offset: 0x104113C
    void set_lowestFPS(int value);
    // public System.Int32 get_highestFPS()
    // Offset: 0x1041144
    int get_highestFPS();
    // private System.Void set_highestFPS(System.Int32 value)
    // Offset: 0x104114C
    void set_highestFPS(int value);
    // public System.Int32 get_droppedFrames()
    // Offset: 0x1041154
    int get_droppedFrames();
    // private System.Void set_droppedFrames(System.Int32 value)
    // Offset: 0x104115C
    void set_droppedFrames(int value);
    // protected System.Void Awake()
    // Offset: 0x1041164
    void Awake();
    // protected System.Void Update()
    // Offset: 0x1041174
    void Update();
    // public System.Void .ctor()
    // Offset: 0x10412D4
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FPSCounter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::FPSCounter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FPSCounter*, creationType>()));
    }
  }; // FPSCounter
  #pragma pack(pop)
  static check_size<sizeof(FPSCounter), 48 + sizeof(float)> __GlobalNamespace_FPSCounterSizeCheck;
  static_assert(sizeof(FPSCounter) == 0x34);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FPSCounter*, "", "FPSCounter");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::FPSCounter::get_currentFPS
// Il2CppName: get_currentFPS
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::FPSCounter::*)()>(&GlobalNamespace::FPSCounter::get_currentFPS)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FPSCounter*), "get_currentFPS", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FPSCounter::set_currentFPS
// Il2CppName: set_currentFPS
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FPSCounter::*)(int)>(&GlobalNamespace::FPSCounter::set_currentFPS)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FPSCounter*), "set_currentFPS", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FPSCounter::get_lowestFPS
// Il2CppName: get_lowestFPS
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::FPSCounter::*)()>(&GlobalNamespace::FPSCounter::get_lowestFPS)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FPSCounter*), "get_lowestFPS", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FPSCounter::set_lowestFPS
// Il2CppName: set_lowestFPS
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FPSCounter::*)(int)>(&GlobalNamespace::FPSCounter::set_lowestFPS)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FPSCounter*), "set_lowestFPS", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FPSCounter::get_highestFPS
// Il2CppName: get_highestFPS
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::FPSCounter::*)()>(&GlobalNamespace::FPSCounter::get_highestFPS)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FPSCounter*), "get_highestFPS", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FPSCounter::set_highestFPS
// Il2CppName: set_highestFPS
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FPSCounter::*)(int)>(&GlobalNamespace::FPSCounter::set_highestFPS)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FPSCounter*), "set_highestFPS", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FPSCounter::get_droppedFrames
// Il2CppName: get_droppedFrames
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::FPSCounter::*)()>(&GlobalNamespace::FPSCounter::get_droppedFrames)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FPSCounter*), "get_droppedFrames", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FPSCounter::set_droppedFrames
// Il2CppName: set_droppedFrames
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FPSCounter::*)(int)>(&GlobalNamespace::FPSCounter::set_droppedFrames)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FPSCounter*), "set_droppedFrames", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FPSCounter::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FPSCounter::*)()>(&GlobalNamespace::FPSCounter::Awake)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FPSCounter*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FPSCounter::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FPSCounter::*)()>(&GlobalNamespace::FPSCounter::Update)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FPSCounter*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FPSCounter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
