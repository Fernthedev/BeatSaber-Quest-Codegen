// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: FlickeringNeonSign
#include "GlobalNamespace/FlickeringNeonSign.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: FlickeringNeonSign/<FlickeringCoroutine>d__16
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class FlickeringNeonSign::$FlickeringCoroutine$d__16 : public ::Il2CppObject/*, public System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*/ {
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
    // public FlickeringNeonSign <>4__this
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::FlickeringNeonSign* $$4__this;
    // Field size check
    static_assert(sizeof(GlobalNamespace::FlickeringNeonSign*) == 0x8);
    // Creating value type constructor for type: $FlickeringCoroutine$d__16
    $FlickeringCoroutine$d__16(int $$1__state_ = {}, ::Il2CppObject* $$2__current_ = {}, GlobalNamespace::FlickeringNeonSign* $$4__this_ = {}) noexcept : $$1__state{$$1__state_}, $$2__current{$$2__current_}, $$4__this{$$4__this_} {}
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>
    operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*>(this);
    }
    // Get instance field: private System.Int32 <>1__state
    int _get_$$1__state();
    // Set instance field: private System.Int32 <>1__state
    void _set_$$1__state(int value);
    // Get instance field: private System.Object <>2__current
    ::Il2CppObject* _get_$$2__current();
    // Set instance field: private System.Object <>2__current
    void _set_$$2__current(::Il2CppObject* value);
    // Get instance field: public FlickeringNeonSign <>4__this
    GlobalNamespace::FlickeringNeonSign* _get_$$4__this();
    // Set instance field: public FlickeringNeonSign <>4__this
    void _set_$$4__this(GlobalNamespace::FlickeringNeonSign* value);
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0x1059E74
    ::Il2CppObject* System_Collections_Generic_IEnumerator$System_Object$_get_Current();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x1059EDC
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x1059BEC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FlickeringNeonSign::$FlickeringCoroutine$d__16* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::FlickeringNeonSign::$FlickeringCoroutine$d__16::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FlickeringNeonSign::$FlickeringCoroutine$d__16*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x1059D48
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x1059D4C
    bool MoveNext();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x1059E7C
    void System_Collections_IEnumerator_Reset();
  }; // FlickeringNeonSign/<FlickeringCoroutine>d__16
  #pragma pack(pop)
  static check_size<sizeof(FlickeringNeonSign::$FlickeringCoroutine$d__16), 32 + sizeof(GlobalNamespace::FlickeringNeonSign*)> __GlobalNamespace_FlickeringNeonSign_$FlickeringCoroutine$d__16SizeCheck;
  static_assert(sizeof(FlickeringNeonSign::$FlickeringCoroutine$d__16) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FlickeringNeonSign::$FlickeringCoroutine$d__16*, "", "FlickeringNeonSign/<FlickeringCoroutine>d__16");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::FlickeringNeonSign::$FlickeringCoroutine$d__16::System_Collections_Generic_IEnumerator$System_Object$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<System.Object>.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (GlobalNamespace::FlickeringNeonSign::$FlickeringCoroutine$d__16::*)()>(&GlobalNamespace::FlickeringNeonSign::$FlickeringCoroutine$d__16::System_Collections_Generic_IEnumerator$System_Object$_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FlickeringNeonSign::$FlickeringCoroutine$d__16*), "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FlickeringNeonSign::$FlickeringCoroutine$d__16::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (GlobalNamespace::FlickeringNeonSign::$FlickeringCoroutine$d__16::*)()>(&GlobalNamespace::FlickeringNeonSign::$FlickeringCoroutine$d__16::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FlickeringNeonSign::$FlickeringCoroutine$d__16*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FlickeringNeonSign::$FlickeringCoroutine$d__16::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::FlickeringNeonSign::$FlickeringCoroutine$d__16::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FlickeringNeonSign::$FlickeringCoroutine$d__16::*)()>(&GlobalNamespace::FlickeringNeonSign::$FlickeringCoroutine$d__16::System_IDisposable_Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FlickeringNeonSign::$FlickeringCoroutine$d__16*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FlickeringNeonSign::$FlickeringCoroutine$d__16::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::FlickeringNeonSign::$FlickeringCoroutine$d__16::*)()>(&GlobalNamespace::FlickeringNeonSign::$FlickeringCoroutine$d__16::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FlickeringNeonSign::$FlickeringCoroutine$d__16*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FlickeringNeonSign::$FlickeringCoroutine$d__16::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FlickeringNeonSign::$FlickeringCoroutine$d__16::*)()>(&GlobalNamespace::FlickeringNeonSign::$FlickeringCoroutine$d__16::System_Collections_IEnumerator_Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FlickeringNeonSign::$FlickeringCoroutine$d__16*), "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
