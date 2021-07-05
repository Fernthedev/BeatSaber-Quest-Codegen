// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: SteamVR_LoadLevel
#include "GlobalNamespace/SteamVR_LoadLevel.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
// Including type: SteamVR_Controller
#include "GlobalNamespace/SteamVR_Controller.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
  // Forward declaring type: CVROverlay
  class CVROverlay;
  // Forward declaring type: CVRCompositor
  class CVRCompositor;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: SteamVR_LoadLevel/<LoadLevel>d__45
  // [CompilerGeneratedAttribute] Offset: DD31B8
  class SteamVR_LoadLevel::$LoadLevel$d__45 : public ::Il2CppObject/*, public System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*/ {
    public:
    // private System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x10
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $$1__state and: $$2__current
    char __padding0[0x4] = {};
    // private System.Object <>2__current
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppObject* $$2__current;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // public SteamVR_LoadLevel <>4__this
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::SteamVR_LoadLevel* $$4__this;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SteamVR_LoadLevel*) == 0x8);
    // private Valve.VR.CVROverlay <overlay>5__2
    // Size: 0x8
    // Offset: 0x28
    Valve::VR::CVROverlay* $overlay$5__2;
    // Field size check
    static_assert(sizeof(Valve::VR::CVROverlay*) == 0x8);
    // private System.Boolean <fadedForeground>5__3
    // Size: 0x1
    // Offset: 0x30
    bool $fadedForeground$5__3;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: $fadedForeground$5__3 and: $compositor$5__4
    char __padding4[0x7] = {};
    // private Valve.VR.CVRCompositor <compositor>5__4
    // Size: 0x8
    // Offset: 0x38
    Valve::VR::CVRCompositor* $compositor$5__4;
    // Field size check
    static_assert(sizeof(Valve::VR::CVRCompositor*) == 0x8);
    // private SteamVR_Controller/Device <hmd>5__5
    // Size: 0x8
    // Offset: 0x40
    GlobalNamespace::SteamVR_Controller::Device* $hmd$5__5;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SteamVR_Controller::Device*) == 0x8);
    // Creating value type constructor for type: $LoadLevel$d__45
    $LoadLevel$d__45(int $$1__state_ = {}, ::Il2CppObject* $$2__current_ = {}, GlobalNamespace::SteamVR_LoadLevel* $$4__this_ = {}, Valve::VR::CVROverlay* $overlay$5__2_ = {}, bool $fadedForeground$5__3_ = {}, Valve::VR::CVRCompositor* $compositor$5__4_ = {}, GlobalNamespace::SteamVR_Controller::Device* $hmd$5__5_ = {}) noexcept : $$1__state{$$1__state_}, $$2__current{$$2__current_}, $$4__this{$$4__this_}, $overlay$5__2{$overlay$5__2_}, $fadedForeground$5__3{$fadedForeground$5__3_}, $compositor$5__4{$compositor$5__4_}, $hmd$5__5{$hmd$5__5_} {}
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>
    operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*>(this);
    }
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x13D39D4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SteamVR_LoadLevel::$LoadLevel$d__45* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SteamVR_LoadLevel::$LoadLevel$d__45::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SteamVR_LoadLevel::$LoadLevel$d__45*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x13D3B50
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x13D3B54
    bool MoveNext();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0x13D4DB0
    ::Il2CppObject* System_Collections_Generic_IEnumerator$System_Object$_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x13D4DB8
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x13D4E18
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
  }; // SteamVR_LoadLevel/<LoadLevel>d__45
  #pragma pack(pop)
  static check_size<sizeof(SteamVR_LoadLevel::$LoadLevel$d__45), 64 + sizeof(GlobalNamespace::SteamVR_Controller::Device*)> __GlobalNamespace_SteamVR_LoadLevel_$LoadLevel$d__45SizeCheck;
  static_assert(sizeof(SteamVR_LoadLevel::$LoadLevel$d__45) == 0x48);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SteamVR_LoadLevel::$LoadLevel$d__45*, "", "SteamVR_LoadLevel/<LoadLevel>d__45");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_LoadLevel::$LoadLevel$d__45::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_LoadLevel::$LoadLevel$d__45::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamVR_LoadLevel::$LoadLevel$d__45::*)()>(&GlobalNamespace::SteamVR_LoadLevel::$LoadLevel$d__45::System_IDisposable_Dispose)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_LoadLevel::$LoadLevel$d__45*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_LoadLevel::$LoadLevel$d__45::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::SteamVR_LoadLevel::$LoadLevel$d__45::*)()>(&GlobalNamespace::SteamVR_LoadLevel::$LoadLevel$d__45::MoveNext)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_LoadLevel::$LoadLevel$d__45*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_LoadLevel::$LoadLevel$d__45::System_Collections_Generic_IEnumerator$System_Object$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<System.Object>.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (GlobalNamespace::SteamVR_LoadLevel::$LoadLevel$d__45::*)()>(&GlobalNamespace::SteamVR_LoadLevel::$LoadLevel$d__45::System_Collections_Generic_IEnumerator$System_Object$_get_Current)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_LoadLevel::$LoadLevel$d__45*), "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_LoadLevel::$LoadLevel$d__45::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamVR_LoadLevel::$LoadLevel$d__45::*)()>(&GlobalNamespace::SteamVR_LoadLevel::$LoadLevel$d__45::System_Collections_IEnumerator_Reset)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_LoadLevel::$LoadLevel$d__45*), "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_LoadLevel::$LoadLevel$d__45::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (GlobalNamespace::SteamVR_LoadLevel::$LoadLevel$d__45::*)()>(&GlobalNamespace::SteamVR_LoadLevel::$LoadLevel$d__45::System_Collections_IEnumerator_get_Current)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_LoadLevel::$LoadLevel$d__45*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
