// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Net.Http.Headers.HttpHeaders
#include "System/Net/Http/Headers/HttpHeaders.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
// Including type: System.Collections.Generic.KeyValuePair`2
#include "System/Collections/Generic/KeyValuePair_2.hpp"
// Including type: System.Collections.Generic.Dictionary`2/System.Collections.Generic.Enumerator
#include "System/Collections/Generic/Dictionary_2.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Completed forward declares
// Type namespace: System.Net.Http.Headers
namespace System::Net::Http::Headers {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Net.Http.Headers.HttpHeaders/System.Net.Http.Headers.<GetEnumerator>d__19
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class HttpHeaders::$GetEnumerator$d__19 : public ::Il2CppObject/*, public System::Collections::Generic::IEnumerator_1<System::Collections::Generic::KeyValuePair_2<::Il2CppString*, System::Collections::Generic::IEnumerable_1<::Il2CppString*>*>>*/ {
    public:
    // private System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x10
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IEnumerable`1<System.String>> <>2__current
    // Size: 0xFFFFFFFF
    // Offset: 0x18
    System::Collections::Generic::KeyValuePair_2<::Il2CppString*, System::Collections::Generic::IEnumerable_1<::Il2CppString*>*> $$2__current;
    // public System.Net.Http.Headers.HttpHeaders <>4__this
    // Size: 0x8
    // Offset: 0x28
    System::Net::Http::Headers::HttpHeaders* $$4__this;
    // Field size check
    static_assert(sizeof(System::Net::Http::Headers::HttpHeaders*) == 0x8);
    // private System.Collections.Generic.Dictionary`2/System.Collections.Generic.Enumerator<System.String,System.Net.Http.Headers.HttpHeaders/System.Net.Http.Headers.HeaderBucket> <>7__wrap1
    // Size: 0xFFFFFFFF
    // Offset: 0x30
    typename System::Collections::Generic::Dictionary_2<::Il2CppString*, System::Net::Http::Headers::HttpHeaders::HeaderBucket*>::Enumerator $$7__wrap1;
    // Creating value type constructor for type: $GetEnumerator$d__19
    $GetEnumerator$d__19(int $$1__state_ = {}, System::Collections::Generic::KeyValuePair_2<::Il2CppString*, System::Collections::Generic::IEnumerable_1<::Il2CppString*>*> $$2__current_ = {}, System::Net::Http::Headers::HttpHeaders* $$4__this_ = {}, typename System::Collections::Generic::Dictionary_2<::Il2CppString*, System::Net::Http::Headers::HttpHeaders::HeaderBucket*>::Enumerator $$7__wrap1_ = {}) noexcept : $$1__state{$$1__state_}, $$2__current{$$2__current_}, $$4__this{$$4__this_}, $$7__wrap1{$$7__wrap1_} {}
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerator_1<System::Collections::Generic::KeyValuePair_2<::Il2CppString*, System::Collections::Generic::IEnumerable_1<::Il2CppString*>*>>
    operator System::Collections::Generic::IEnumerator_1<System::Collections::Generic::KeyValuePair_2<::Il2CppString*, System::Collections::Generic::IEnumerable_1<::Il2CppString*>*>>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerator_1<System::Collections::Generic::KeyValuePair_2<::Il2CppString*, System::Collections::Generic::IEnumerable_1<::Il2CppString*>*>>*>(this);
    }
    // Get instance field: private System.Int32 <>1__state
    int _get_$$1__state();
    // Set instance field: private System.Int32 <>1__state
    void _set_$$1__state(int value);
    // Get instance field: private System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IEnumerable`1<System.String>> <>2__current
    System::Collections::Generic::KeyValuePair_2<::Il2CppString*, System::Collections::Generic::IEnumerable_1<::Il2CppString*>*> _get_$$2__current();
    // Set instance field: private System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IEnumerable`1<System.String>> <>2__current
    void _set_$$2__current(System::Collections::Generic::KeyValuePair_2<::Il2CppString*, System::Collections::Generic::IEnumerable_1<::Il2CppString*>*> value);
    // Get instance field: public System.Net.Http.Headers.HttpHeaders <>4__this
    System::Net::Http::Headers::HttpHeaders* _get_$$4__this();
    // Set instance field: public System.Net.Http.Headers.HttpHeaders <>4__this
    void _set_$$4__this(System::Net::Http::Headers::HttpHeaders* value);
    // Get instance field: private System.Collections.Generic.Dictionary`2/System.Collections.Generic.Enumerator<System.String,System.Net.Http.Headers.HttpHeaders/System.Net.Http.Headers.HeaderBucket> <>7__wrap1
    typename System::Collections::Generic::Dictionary_2<::Il2CppString*, System::Net::Http::Headers::HttpHeaders::HeaderBucket*>::Enumerator _get_$$7__wrap1();
    // Set instance field: private System.Collections.Generic.Dictionary`2/System.Collections.Generic.Enumerator<System.String,System.Net.Http.Headers.HttpHeaders/System.Net.Http.Headers.HeaderBucket> <>7__wrap1
    void _set_$$7__wrap1(typename System::Collections::Generic::Dictionary_2<::Il2CppString*, System::Net::Http::Headers::HttpHeaders::HeaderBucket*>::Enumerator value);
    // private System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IEnumerable`1<System.String>> System.Collections.Generic.IEnumerator<System.Collections.Generic.KeyValuePair<System.String,System.Collections.Generic.IEnumerable<System.String>>>.get_Current()
    // Offset: 0x15A2FC4
    System::Collections::Generic::KeyValuePair_2<::Il2CppString*, System::Collections::Generic::IEnumerable_1<::Il2CppString*>*> System_Collections_Generic_IEnumerator$System_Collections_Generic_KeyValuePair$System_String_System_Collections_Generic_IEnumerable$System_String$$$_get_Current();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x15A3030
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x15A22FC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HttpHeaders::$GetEnumerator$d__19* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::Http::Headers::HttpHeaders::$GetEnumerator$d__19::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HttpHeaders::$GetEnumerator$d__19*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x15A2CFC
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x15A2D70
    bool MoveNext();
    // private System.Void <>m__Finally1()
    // Offset: 0x15A2D18
    void $$m__Finally1();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x15A2FD0
    void System_Collections_IEnumerator_Reset();
  }; // System.Net.Http.Headers.HttpHeaders/System.Net.Http.Headers.<GetEnumerator>d__19
  // WARNING Not writing size check since size may be invalid!
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::Http::Headers::HttpHeaders::$GetEnumerator$d__19*, "System.Net.Http.Headers", "HttpHeaders/<GetEnumerator>d__19");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::Http::Headers::HttpHeaders::$GetEnumerator$d__19::System_Collections_Generic_IEnumerator$System_Collections_Generic_KeyValuePair$System_String_System_Collections_Generic_IEnumerable$System_String$$$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<System.Collections.Generic.KeyValuePair<System.String,System.Collections.Generic.IEnumerable<System.String>>>.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::KeyValuePair_2<::Il2CppString*, System::Collections::Generic::IEnumerable_1<::Il2CppString*>*> (System::Net::Http::Headers::HttpHeaders::$GetEnumerator$d__19::*)()>(&System::Net::Http::Headers::HttpHeaders::$GetEnumerator$d__19::System_Collections_Generic_IEnumerator$System_Collections_Generic_KeyValuePair$System_String_System_Collections_Generic_IEnumerable$System_String$$$_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::HttpHeaders::$GetEnumerator$d__19*), "System.Collections.Generic.IEnumerator<System.Collections.Generic.KeyValuePair<System.String,System.Collections.Generic.IEnumerable<System.String>>>.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::HttpHeaders::$GetEnumerator$d__19::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Net::Http::Headers::HttpHeaders::$GetEnumerator$d__19::*)()>(&System::Net::Http::Headers::HttpHeaders::$GetEnumerator$d__19::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::HttpHeaders::$GetEnumerator$d__19*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::HttpHeaders::$GetEnumerator$d__19::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::Http::Headers::HttpHeaders::$GetEnumerator$d__19::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Http::Headers::HttpHeaders::$GetEnumerator$d__19::*)()>(&System::Net::Http::Headers::HttpHeaders::$GetEnumerator$d__19::System_IDisposable_Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::HttpHeaders::$GetEnumerator$d__19*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::HttpHeaders::$GetEnumerator$d__19::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::Http::Headers::HttpHeaders::$GetEnumerator$d__19::*)()>(&System::Net::Http::Headers::HttpHeaders::$GetEnumerator$d__19::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::HttpHeaders::$GetEnumerator$d__19*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::HttpHeaders::$GetEnumerator$d__19::$$m__Finally1
// Il2CppName: <>m__Finally1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Http::Headers::HttpHeaders::$GetEnumerator$d__19::*)()>(&System::Net::Http::Headers::HttpHeaders::$GetEnumerator$d__19::$$m__Finally1)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::HttpHeaders::$GetEnumerator$d__19*), "<>m__Finally1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::HttpHeaders::$GetEnumerator$d__19::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Http::Headers::HttpHeaders::$GetEnumerator$d__19::*)()>(&System::Net::Http::Headers::HttpHeaders::$GetEnumerator$d__19::System_Collections_IEnumerator_Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::HttpHeaders::$GetEnumerator$d__19*), "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
