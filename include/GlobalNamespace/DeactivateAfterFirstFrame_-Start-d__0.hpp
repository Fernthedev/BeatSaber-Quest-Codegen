// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: DeactivateAfterFirstFrame
#include "GlobalNamespace/DeactivateAfterFirstFrame.hpp"
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
  // Autogenerated type: DeactivateAfterFirstFrame/<Start>d__0
  // [CompilerGeneratedAttribute] Offset: E12388
  class DeactivateAfterFirstFrame::$Start$d__0 : public ::Il2CppObject/*, public System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*/ {
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
    // public DeactivateAfterFirstFrame <>4__this
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::DeactivateAfterFirstFrame* $$4__this;
    // Field size check
    static_assert(sizeof(GlobalNamespace::DeactivateAfterFirstFrame*) == 0x8);
    // Creating value type constructor for type: $Start$d__0
    $Start$d__0(int $$1__state_ = {}, ::Il2CppObject* $$2__current_ = {}, GlobalNamespace::DeactivateAfterFirstFrame* $$4__this_ = {}) noexcept : $$1__state{$$1__state_}, $$2__current{$$2__current_}, $$4__this{$$4__this_} {}
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>
    operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*>(this);
    }
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x119CFB8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DeactivateAfterFirstFrame::$Start$d__0* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::DeactivateAfterFirstFrame::$Start$d__0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DeactivateAfterFirstFrame::$Start$d__0*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x119CFEC
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x119CFF0
    bool MoveNext();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0x119D058
    ::Il2CppObject* System_Collections_Generic_IEnumerator$System_Object$_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x119D060
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x119D0C0
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
  }; // DeactivateAfterFirstFrame/<Start>d__0
  #pragma pack(pop)
  static check_size<sizeof(DeactivateAfterFirstFrame::$Start$d__0), 32 + sizeof(GlobalNamespace::DeactivateAfterFirstFrame*)> __GlobalNamespace_DeactivateAfterFirstFrame_$Start$d__0SizeCheck;
  static_assert(sizeof(DeactivateAfterFirstFrame::$Start$d__0) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::DeactivateAfterFirstFrame::$Start$d__0*, "", "DeactivateAfterFirstFrame/<Start>d__0");
// Writing includes for template specializations
// Writing MetadataGetter for method: GlobalNamespace::DeactivateAfterFirstFrame::$Start$d__0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::DeactivateAfterFirstFrame::$Start$d__0::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DeactivateAfterFirstFrame::$Start$d__0::*)()>(&GlobalNamespace::DeactivateAfterFirstFrame::$Start$d__0::System_IDisposable_Dispose)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DeactivateAfterFirstFrame::$Start$d__0*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DeactivateAfterFirstFrame::$Start$d__0::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::DeactivateAfterFirstFrame::$Start$d__0::*)()>(&GlobalNamespace::DeactivateAfterFirstFrame::$Start$d__0::MoveNext)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DeactivateAfterFirstFrame::$Start$d__0*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DeactivateAfterFirstFrame::$Start$d__0::System_Collections_Generic_IEnumerator$System_Object$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<System.Object>.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (GlobalNamespace::DeactivateAfterFirstFrame::$Start$d__0::*)()>(&GlobalNamespace::DeactivateAfterFirstFrame::$Start$d__0::System_Collections_Generic_IEnumerator$System_Object$_get_Current)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DeactivateAfterFirstFrame::$Start$d__0*), "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DeactivateAfterFirstFrame::$Start$d__0::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DeactivateAfterFirstFrame::$Start$d__0::*)()>(&GlobalNamespace::DeactivateAfterFirstFrame::$Start$d__0::System_Collections_IEnumerator_Reset)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DeactivateAfterFirstFrame::$Start$d__0*), "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DeactivateAfterFirstFrame::$Start$d__0::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (GlobalNamespace::DeactivateAfterFirstFrame::$Start$d__0::*)()>(&GlobalNamespace::DeactivateAfterFirstFrame::$Start$d__0::System_Collections_IEnumerator_get_Current)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DeactivateAfterFirstFrame::$Start$d__0*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
