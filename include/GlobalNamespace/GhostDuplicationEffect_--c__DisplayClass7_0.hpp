// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: GhostDuplicationEffect
#include "GlobalNamespace/GhostDuplicationEffect.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: GhostDuplicationEffect/<>c__DisplayClass7_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class GhostDuplicationEffect::$$c__DisplayClass7_0 : public ::Il2CppObject {
    public:
    // public GhostDuplicationEffect <>4__this
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::GhostDuplicationEffect* $$4__this;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GhostDuplicationEffect*) == 0x8);
    // public UnityEngine.Vector3 direction
    // Size: 0xC
    // Offset: 0x18
    UnityEngine::Vector3 direction;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // Creating value type constructor for type: $$c__DisplayClass7_0
    $$c__DisplayClass7_0(GlobalNamespace::GhostDuplicationEffect* $$4__this_ = {}, UnityEngine::Vector3 direction_ = {}) noexcept : $$4__this{$$4__this_}, direction{direction_} {}
    // Get instance field reference: public GhostDuplicationEffect <>4__this
    GlobalNamespace::GhostDuplicationEffect*& dyn_$$4__this();
    // Get instance field reference: public UnityEngine.Vector3 direction
    UnityEngine::Vector3& dyn_direction();
    // System.Void <Animate>b__0(System.Single val)
    // Offset: 0x1104EA4
    void $Animate$b__0(float val);
    // System.Void <Animate>b__1(System.Single val)
    // Offset: 0x1104EBC
    void $Animate$b__1(float val);
    // System.Void <Animate>b__2(UnityEngine.Vector3 pos)
    // Offset: 0x1104F44
    void $Animate$b__2(UnityEngine::Vector3 pos);
    // System.Void <Animate>b__3(System.Single val)
    // Offset: 0x1104F98
    void $Animate$b__3(float val);
    // public System.Void .ctor()
    // Offset: 0x1104AE4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GhostDuplicationEffect::$$c__DisplayClass7_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::GhostDuplicationEffect::$$c__DisplayClass7_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GhostDuplicationEffect::$$c__DisplayClass7_0*, creationType>()));
    }
  }; // GhostDuplicationEffect/<>c__DisplayClass7_0
  #pragma pack(pop)
  static check_size<sizeof(GhostDuplicationEffect::$$c__DisplayClass7_0), 24 + sizeof(UnityEngine::Vector3)> __GlobalNamespace_GhostDuplicationEffect_$$c__DisplayClass7_0SizeCheck;
  static_assert(sizeof(GhostDuplicationEffect::$$c__DisplayClass7_0) == 0x24);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GhostDuplicationEffect::$$c__DisplayClass7_0*, "", "GhostDuplicationEffect/<>c__DisplayClass7_0");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::GhostDuplicationEffect::$$c__DisplayClass7_0::$Animate$b__0
// Il2CppName: <Animate>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GhostDuplicationEffect::$$c__DisplayClass7_0::*)(float)>(&GlobalNamespace::GhostDuplicationEffect::$$c__DisplayClass7_0::$Animate$b__0)> {
  static const MethodInfo* get() {
    static auto* val = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GhostDuplicationEffect::$$c__DisplayClass7_0*), "<Animate>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{val});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GhostDuplicationEffect::$$c__DisplayClass7_0::$Animate$b__1
// Il2CppName: <Animate>b__1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GhostDuplicationEffect::$$c__DisplayClass7_0::*)(float)>(&GlobalNamespace::GhostDuplicationEffect::$$c__DisplayClass7_0::$Animate$b__1)> {
  static const MethodInfo* get() {
    static auto* val = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GhostDuplicationEffect::$$c__DisplayClass7_0*), "<Animate>b__1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{val});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GhostDuplicationEffect::$$c__DisplayClass7_0::$Animate$b__2
// Il2CppName: <Animate>b__2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GhostDuplicationEffect::$$c__DisplayClass7_0::*)(UnityEngine::Vector3)>(&GlobalNamespace::GhostDuplicationEffect::$$c__DisplayClass7_0::$Animate$b__2)> {
  static const MethodInfo* get() {
    static auto* pos = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GhostDuplicationEffect::$$c__DisplayClass7_0*), "<Animate>b__2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pos});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GhostDuplicationEffect::$$c__DisplayClass7_0::$Animate$b__3
// Il2CppName: <Animate>b__3
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GhostDuplicationEffect::$$c__DisplayClass7_0::*)(float)>(&GlobalNamespace::GhostDuplicationEffect::$$c__DisplayClass7_0::$Animate$b__3)> {
  static const MethodInfo* get() {
    static auto* val = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GhostDuplicationEffect::$$c__DisplayClass7_0*), "<Animate>b__3", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{val});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GhostDuplicationEffect::$$c__DisplayClass7_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
