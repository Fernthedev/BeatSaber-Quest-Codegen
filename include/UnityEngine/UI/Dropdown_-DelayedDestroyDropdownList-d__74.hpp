// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.UI.Dropdown
#include "UnityEngine/UI/Dropdown.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UI::Dropdown::$DelayedDestroyDropdownList$d__74);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::Dropdown::$DelayedDestroyDropdownList$d__74*, "UnityEngine.UI", "Dropdown/<DelayedDestroyDropdownList>d__74");
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UI.Dropdown/UnityEngine.UI.<DelayedDestroyDropdownList>d__74
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class Dropdown::$DelayedDestroyDropdownList$d__74 : public ::Il2CppObject/*, public ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*/ {
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
    // private System.Object <>2__current
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppObject* $$2__current;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // public System.Single delay
    // Size: 0x4
    // Offset: 0x20
    float delay;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: delay and: $$4__this
    char __padding2[0x4] = {};
    // public UnityEngine.UI.Dropdown <>4__this
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::UI::Dropdown* $$4__this;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Dropdown*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>
    operator ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*>(this);
    }
    // Creating interface conversion operator: i_Il2CppObject
    inline ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>* i_Il2CppObject() noexcept {
      return reinterpret_cast<::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*>(this);
    }
    // Get instance field reference: private System.Int32 <>1__state
    [[deprecated("Use field access instead!")]] int& dyn_$$1__state();
    // Get instance field reference: private System.Object <>2__current
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn_$$2__current();
    // Get instance field reference: public System.Single delay
    [[deprecated("Use field access instead!")]] float& dyn_delay();
    // Get instance field reference: public UnityEngine.UI.Dropdown <>4__this
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Dropdown*& dyn_$$4__this();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0x1E4FB1C
    ::Il2CppObject* System_Collections_Generic_IEnumerator$System_Object$_get_Current();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x1E4FB84
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x1E4FA38
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Dropdown::$DelayedDestroyDropdownList$d__74* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UI::Dropdown::$DelayedDestroyDropdownList$d__74::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Dropdown::$DelayedDestroyDropdownList$d__74*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x1E4FA64
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x1E4FA68
    bool MoveNext();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x1E4FB24
    void System_Collections_IEnumerator_Reset();
  }; // UnityEngine.UI.Dropdown/UnityEngine.UI.<DelayedDestroyDropdownList>d__74
  #pragma pack(pop)
  static check_size<sizeof(Dropdown::$DelayedDestroyDropdownList$d__74), 40 + sizeof(::UnityEngine::UI::Dropdown*)> __UnityEngine_UI_Dropdown_$DelayedDestroyDropdownList$d__74SizeCheck;
  static_assert(sizeof(Dropdown::$DelayedDestroyDropdownList$d__74) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UI::Dropdown::$DelayedDestroyDropdownList$d__74::System_Collections_Generic_IEnumerator$System_Object$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<System.Object>.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (UnityEngine::UI::Dropdown::$DelayedDestroyDropdownList$d__74::*)()>(&UnityEngine::UI::Dropdown::$DelayedDestroyDropdownList$d__74::System_Collections_Generic_IEnumerator$System_Object$_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::Dropdown::$DelayedDestroyDropdownList$d__74*), "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::Dropdown::$DelayedDestroyDropdownList$d__74::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (UnityEngine::UI::Dropdown::$DelayedDestroyDropdownList$d__74::*)()>(&UnityEngine::UI::Dropdown::$DelayedDestroyDropdownList$d__74::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::Dropdown::$DelayedDestroyDropdownList$d__74*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::Dropdown::$DelayedDestroyDropdownList$d__74::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::UI::Dropdown::$DelayedDestroyDropdownList$d__74::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::Dropdown::$DelayedDestroyDropdownList$d__74::*)()>(&UnityEngine::UI::Dropdown::$DelayedDestroyDropdownList$d__74::System_IDisposable_Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::Dropdown::$DelayedDestroyDropdownList$d__74*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::Dropdown::$DelayedDestroyDropdownList$d__74::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UI::Dropdown::$DelayedDestroyDropdownList$d__74::*)()>(&UnityEngine::UI::Dropdown::$DelayedDestroyDropdownList$d__74::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::Dropdown::$DelayedDestroyDropdownList$d__74*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::Dropdown::$DelayedDestroyDropdownList$d__74::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::Dropdown::$DelayedDestroyDropdownList$d__74::*)()>(&UnityEngine::UI::Dropdown::$DelayedDestroyDropdownList$d__74::System_Collections_IEnumerator_Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::Dropdown::$DelayedDestroyDropdownList$d__74*), "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
