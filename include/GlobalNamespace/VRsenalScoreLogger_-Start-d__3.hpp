// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: VRsenalScoreLogger
#include "GlobalNamespace/VRsenalScoreLogger.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: YieldInstruction
  class YieldInstruction;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: VRsenalScoreLogger/<Start>d__3
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class VRsenalScoreLogger::$Start$d__3 : public ::Il2CppObject/*, public System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*/ {
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
    // public VRsenalScoreLogger <>4__this
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::VRsenalScoreLogger* $$4__this;
    // Field size check
    static_assert(sizeof(GlobalNamespace::VRsenalScoreLogger*) == 0x8);
    // private UnityEngine.YieldInstruction <yieldInstruction>5__2
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::YieldInstruction* $yieldInstruction$5__2;
    // Field size check
    static_assert(sizeof(UnityEngine::YieldInstruction*) == 0x8);
    // Creating value type constructor for type: $Start$d__3
    $Start$d__3(int $$1__state_ = {}, ::Il2CppObject* $$2__current_ = {}, GlobalNamespace::VRsenalScoreLogger* $$4__this_ = {}, UnityEngine::YieldInstruction* $yieldInstruction$5__2_ = {}) noexcept : $$1__state{$$1__state_}, $$2__current{$$2__current_}, $$4__this{$$4__this_}, $yieldInstruction$5__2{$yieldInstruction$5__2_} {}
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>
    operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*>(this);
    }
    // Get instance field reference: private System.Int32 <>1__state
    int& dyn_$$1__state();
    // Get instance field reference: private System.Object <>2__current
    ::Il2CppObject*& dyn_$$2__current();
    // Get instance field reference: public VRsenalScoreLogger <>4__this
    GlobalNamespace::VRsenalScoreLogger*& dyn_$$4__this();
    // Get instance field reference: private UnityEngine.YieldInstruction <yieldInstruction>5__2
    UnityEngine::YieldInstruction*& dyn_$yieldInstruction$5__2();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0x12A2EC8
    ::Il2CppObject* System_Collections_Generic_IEnumerator$System_Object$_get_Current();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x12A2F30
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x12A25F4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VRsenalScoreLogger::$Start$d__3* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::VRsenalScoreLogger::$Start$d__3::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VRsenalScoreLogger::$Start$d__3*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x12A284C
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x12A2850
    bool MoveNext();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x12A2ED0
    void System_Collections_IEnumerator_Reset();
  }; // VRsenalScoreLogger/<Start>d__3
  #pragma pack(pop)
  static check_size<sizeof(VRsenalScoreLogger::$Start$d__3), 40 + sizeof(UnityEngine::YieldInstruction*)> __GlobalNamespace_VRsenalScoreLogger_$Start$d__3SizeCheck;
  static_assert(sizeof(VRsenalScoreLogger::$Start$d__3) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::VRsenalScoreLogger::$Start$d__3*, "", "VRsenalScoreLogger/<Start>d__3");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::VRsenalScoreLogger::$Start$d__3::System_Collections_Generic_IEnumerator$System_Object$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<System.Object>.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (GlobalNamespace::VRsenalScoreLogger::$Start$d__3::*)()>(&GlobalNamespace::VRsenalScoreLogger::$Start$d__3::System_Collections_Generic_IEnumerator$System_Object$_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VRsenalScoreLogger::$Start$d__3*), "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VRsenalScoreLogger::$Start$d__3::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (GlobalNamespace::VRsenalScoreLogger::$Start$d__3::*)()>(&GlobalNamespace::VRsenalScoreLogger::$Start$d__3::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VRsenalScoreLogger::$Start$d__3*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VRsenalScoreLogger::$Start$d__3::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::VRsenalScoreLogger::$Start$d__3::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::VRsenalScoreLogger::$Start$d__3::*)()>(&GlobalNamespace::VRsenalScoreLogger::$Start$d__3::System_IDisposable_Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VRsenalScoreLogger::$Start$d__3*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VRsenalScoreLogger::$Start$d__3::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::VRsenalScoreLogger::$Start$d__3::*)()>(&GlobalNamespace::VRsenalScoreLogger::$Start$d__3::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VRsenalScoreLogger::$Start$d__3*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VRsenalScoreLogger::$Start$d__3::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::VRsenalScoreLogger::$Start$d__3::*)()>(&GlobalNamespace::VRsenalScoreLogger::$Start$d__3::System_Collections_IEnumerator_Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VRsenalScoreLogger::$Start$d__3*), "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
