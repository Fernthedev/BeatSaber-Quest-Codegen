// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.DiContainer
#include "Zenject/DiContainer.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: InjectableInfo
  class InjectableInfo;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Skipping declaration: IEnumerator because it is already included!
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Zenject::DiContainer::$GetDependencyContracts$d__96);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::DiContainer::$GetDependencyContracts$d__96*, "Zenject", "DiContainer/<GetDependencyContracts>d__96");
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.DiContainer/Zenject.<GetDependencyContracts>d__96
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class DiContainer::$GetDependencyContracts$d__96 : public ::Il2CppObject/*, public ::System::Collections::Generic::IEnumerable_1<::System::Type*>, public ::System::Collections::Generic::IEnumerator_1<::System::Type*>*/ {
    public:
    public:
    // private System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x10
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $$1__state and: $$2__current
    char __padding0[0x4] = {};
    // private System.Type <>2__current
    // Size: 0x8
    // Offset: 0x18
    ::System::Type* $$2__current;
    // Field size check
    static_assert(sizeof(::System::Type*) == 0x8);
    // private System.Int32 <>l__initialThreadId
    // Size: 0x4
    // Offset: 0x20
    int $$l__initialThreadId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $$l__initialThreadId and: $$4__this
    char __padding2[0x4] = {};
    // public Zenject.DiContainer <>4__this
    // Size: 0x8
    // Offset: 0x28
    ::Zenject::DiContainer* $$4__this;
    // Field size check
    static_assert(sizeof(::Zenject::DiContainer*) == 0x8);
    // private System.Type contract
    // Size: 0x8
    // Offset: 0x30
    ::System::Type* contract;
    // Field size check
    static_assert(sizeof(::System::Type*) == 0x8);
    // public System.Type <>3__contract
    // Size: 0x8
    // Offset: 0x38
    ::System::Type* $$3__contract;
    // Field size check
    static_assert(sizeof(::System::Type*) == 0x8);
    // private System.Collections.Generic.IEnumerator`1<Zenject.InjectableInfo> <>7__wrap1
    // Size: 0x8
    // Offset: 0x40
    ::System::Collections::Generic::IEnumerator_1<::Zenject::InjectableInfo*>* $$7__wrap1;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::IEnumerator_1<::Zenject::InjectableInfo*>*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerable_1<::System::Type*>
    operator ::System::Collections::Generic::IEnumerable_1<::System::Type*>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerable_1<::System::Type*>*>(this);
    }
    // Creating interface conversion operator: i_Type
    inline ::System::Collections::Generic::IEnumerable_1<::System::Type*>* i_Type() noexcept {
      return reinterpret_cast<::System::Collections::Generic::IEnumerable_1<::System::Type*>*>(this);
    }
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerator_1<::System::Type*>
    operator ::System::Collections::Generic::IEnumerator_1<::System::Type*>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerator_1<::System::Type*>*>(this);
    }
    // Get instance field reference: private System.Int32 <>1__state
    [[deprecated("Use field access instead!")]] int& dyn_$$1__state();
    // Get instance field reference: private System.Type <>2__current
    [[deprecated("Use field access instead!")]] ::System::Type*& dyn_$$2__current();
    // Get instance field reference: private System.Int32 <>l__initialThreadId
    [[deprecated("Use field access instead!")]] int& dyn_$$l__initialThreadId();
    // Get instance field reference: public Zenject.DiContainer <>4__this
    [[deprecated("Use field access instead!")]] ::Zenject::DiContainer*& dyn_$$4__this();
    // Get instance field reference: private System.Type contract
    [[deprecated("Use field access instead!")]] ::System::Type*& dyn_contract();
    // Get instance field reference: public System.Type <>3__contract
    [[deprecated("Use field access instead!")]] ::System::Type*& dyn_$$3__contract();
    // Get instance field reference: private System.Collections.Generic.IEnumerator`1<Zenject.InjectableInfo> <>7__wrap1
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::IEnumerator_1<::Zenject::InjectableInfo*>*& dyn_$$7__wrap1();
    // private System.Type System.Collections.Generic.IEnumerator<System.Type>.get_Current()
    // Offset: 0x1E092C8
    ::System::Type* System_Collections_Generic_IEnumerator$System_Type$_get_Current();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x1E09330
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x1E08EE8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DiContainer::$GetDependencyContracts$d__96* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::DiContainer::$GetDependencyContracts$d__96::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DiContainer::$GetDependencyContracts$d__96*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x1E08F20
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x1E08FFC
    bool MoveNext();
    // private System.Void <>m__Finally1()
    // Offset: 0x1E08F3C
    void $$m__Finally1();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x1E092D0
    void System_Collections_IEnumerator_Reset();
    // private System.Collections.Generic.IEnumerator`1<System.Type> System.Collections.Generic.IEnumerable<System.Type>.GetEnumerator()
    // Offset: 0x1E09338
    ::System::Collections::Generic::IEnumerator_1<::System::Type*>* System_Collections_Generic_IEnumerable$System_Type$_GetEnumerator();
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x1E093EC
    ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
  }; // Zenject.DiContainer/Zenject.<GetDependencyContracts>d__96
  #pragma pack(pop)
  static check_size<sizeof(DiContainer::$GetDependencyContracts$d__96), 64 + sizeof(::System::Collections::Generic::IEnumerator_1<::Zenject::InjectableInfo*>*)> __Zenject_DiContainer_$GetDependencyContracts$d__96SizeCheck;
  static_assert(sizeof(DiContainer::$GetDependencyContracts$d__96) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::DiContainer::$GetDependencyContracts$d__96::System_Collections_Generic_IEnumerator$System_Type$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<System.Type>.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (Zenject::DiContainer::$GetDependencyContracts$d__96::*)()>(&Zenject::DiContainer::$GetDependencyContracts$d__96::System_Collections_Generic_IEnumerator$System_Type$_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::DiContainer::$GetDependencyContracts$d__96*), "System.Collections.Generic.IEnumerator<System.Type>.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::DiContainer::$GetDependencyContracts$d__96::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (Zenject::DiContainer::$GetDependencyContracts$d__96::*)()>(&Zenject::DiContainer::$GetDependencyContracts$d__96::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::DiContainer::$GetDependencyContracts$d__96*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::DiContainer::$GetDependencyContracts$d__96::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Zenject::DiContainer::$GetDependencyContracts$d__96::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::DiContainer::$GetDependencyContracts$d__96::*)()>(&Zenject::DiContainer::$GetDependencyContracts$d__96::System_IDisposable_Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::DiContainer::$GetDependencyContracts$d__96*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::DiContainer::$GetDependencyContracts$d__96::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Zenject::DiContainer::$GetDependencyContracts$d__96::*)()>(&Zenject::DiContainer::$GetDependencyContracts$d__96::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::DiContainer::$GetDependencyContracts$d__96*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::DiContainer::$GetDependencyContracts$d__96::$$m__Finally1
// Il2CppName: <>m__Finally1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::DiContainer::$GetDependencyContracts$d__96::*)()>(&Zenject::DiContainer::$GetDependencyContracts$d__96::$$m__Finally1)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::DiContainer::$GetDependencyContracts$d__96*), "<>m__Finally1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::DiContainer::$GetDependencyContracts$d__96::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::DiContainer::$GetDependencyContracts$d__96::*)()>(&Zenject::DiContainer::$GetDependencyContracts$d__96::System_Collections_IEnumerator_Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::DiContainer::$GetDependencyContracts$d__96*), "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::DiContainer::$GetDependencyContracts$d__96::System_Collections_Generic_IEnumerable$System_Type$_GetEnumerator
// Il2CppName: System.Collections.Generic.IEnumerable<System.Type>.GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerator_1<::System::Type*>* (Zenject::DiContainer::$GetDependencyContracts$d__96::*)()>(&Zenject::DiContainer::$GetDependencyContracts$d__96::System_Collections_Generic_IEnumerable$System_Type$_GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::DiContainer::$GetDependencyContracts$d__96*), "System.Collections.Generic.IEnumerable<System.Type>.GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::DiContainer::$GetDependencyContracts$d__96::System_Collections_IEnumerable_GetEnumerator
// Il2CppName: System.Collections.IEnumerable.GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (Zenject::DiContainer::$GetDependencyContracts$d__96::*)()>(&Zenject::DiContainer::$GetDependencyContracts$d__96::System_Collections_IEnumerable_GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::DiContainer::$GetDependencyContracts$d__96*), "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
