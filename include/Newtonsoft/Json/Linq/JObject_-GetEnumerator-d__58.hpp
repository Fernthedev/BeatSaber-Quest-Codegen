// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Newtonsoft.Json.Linq.JObject
#include "Newtonsoft/Json/Linq/JObject.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
// Including type: System.Collections.Generic.KeyValuePair`2
#include "System/Collections/Generic/KeyValuePair_2.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Newtonsoft::Json::Linq
namespace Newtonsoft::Json::Linq {
  // Forward declaring type: JToken
  class JToken;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Newtonsoft::Json::Linq::JObject::$GetEnumerator$d__58);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Linq::JObject::$GetEnumerator$d__58*, "Newtonsoft.Json.Linq", "JObject/<GetEnumerator>d__58");
// Type namespace: Newtonsoft.Json.Linq
namespace Newtonsoft::Json::Linq {
  // WARNING Size may be invalid!
  // Autogenerated type: Newtonsoft.Json.Linq.JObject/Newtonsoft.Json.Linq.<GetEnumerator>d__58
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class JObject::$GetEnumerator$d__58 : public ::Il2CppObject/*, public ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::Newtonsoft::Json::Linq::JToken*>>*/ {
    public:
    public:
    // private System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x10
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Collections.Generic.KeyValuePair`2<System.String,Newtonsoft.Json.Linq.JToken> <>2__current
    // Size: 0xFFFFFFFF
    // Offset: 0x18
    ::System::Collections::Generic::KeyValuePair_2<::StringW, ::Newtonsoft::Json::Linq::JToken*> $$2__current;
    // public Newtonsoft.Json.Linq.JObject <>4__this
    // Size: 0x8
    // Offset: 0x28
    ::Newtonsoft::Json::Linq::JObject* $$4__this;
    // Field size check
    static_assert(sizeof(::Newtonsoft::Json::Linq::JObject*) == 0x8);
    // private System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Linq.JToken> <>7__wrap1
    // Size: 0x8
    // Offset: 0x30
    ::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>* $$7__wrap1;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::Newtonsoft::Json::Linq::JToken*>>
    operator ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::Newtonsoft::Json::Linq::JToken*>>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::Newtonsoft::Json::Linq::JToken*>>*>(this);
    }
    // Creating interface conversion operator: i_JToken
    inline ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::Newtonsoft::Json::Linq::JToken*>>* i_JToken() noexcept {
      return reinterpret_cast<::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::Newtonsoft::Json::Linq::JToken*>>*>(this);
    }
    // Get instance field reference: private System.Int32 <>1__state
    [[deprecated("Use field access instead!")]] int& dyn_$$1__state();
    // Get instance field reference: private System.Collections.Generic.KeyValuePair`2<System.String,Newtonsoft.Json.Linq.JToken> <>2__current
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::KeyValuePair_2<::StringW, ::Newtonsoft::Json::Linq::JToken*>& dyn_$$2__current();
    // Get instance field reference: public Newtonsoft.Json.Linq.JObject <>4__this
    [[deprecated("Use field access instead!")]] ::Newtonsoft::Json::Linq::JObject*& dyn_$$4__this();
    // Get instance field reference: private System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Linq.JToken> <>7__wrap1
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>*& dyn_$$7__wrap1();
    // private System.Collections.Generic.KeyValuePair`2<System.String,Newtonsoft.Json.Linq.JToken> System.Collections.Generic.IEnumerator<System.Collections.Generic.KeyValuePair<System.String,Newtonsoft.Json.Linq.JToken>>.get_Current()
    // Offset: 0x1755E88
    ::System::Collections::Generic::KeyValuePair_2<::StringW, ::Newtonsoft::Json::Linq::JToken*> System_Collections_Generic_IEnumerator$System_Collections_Generic_KeyValuePair$System_String_Newtonsoft_Json_Linq_JToken$$_get_Current();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x1755EF4
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x175588C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static JObject::$GetEnumerator$d__58* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Linq::JObject::$GetEnumerator$d__58::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<JObject::$GetEnumerator$d__58*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x1755B10
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x1755BEC
    bool MoveNext();
    // private System.Void <>m__Finally1()
    // Offset: 0x1755B2C
    void $$m__Finally1();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x1755E94
    void System_Collections_IEnumerator_Reset();
  }; // Newtonsoft.Json.Linq.JObject/Newtonsoft.Json.Linq.<GetEnumerator>d__58
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JObject::$GetEnumerator$d__58::System_Collections_Generic_IEnumerator$System_Collections_Generic_KeyValuePair$System_String_Newtonsoft_Json_Linq_JToken$$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<System.Collections.Generic.KeyValuePair<System.String,Newtonsoft.Json.Linq.JToken>>.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::KeyValuePair_2<::StringW, ::Newtonsoft::Json::Linq::JToken*> (Newtonsoft::Json::Linq::JObject::$GetEnumerator$d__58::*)()>(&Newtonsoft::Json::Linq::JObject::$GetEnumerator$d__58::System_Collections_Generic_IEnumerator$System_Collections_Generic_KeyValuePair$System_String_Newtonsoft_Json_Linq_JToken$$_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JObject::$GetEnumerator$d__58*), "System.Collections.Generic.IEnumerator<System.Collections.Generic.KeyValuePair<System.String,Newtonsoft.Json.Linq.JToken>>.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JObject::$GetEnumerator$d__58::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (Newtonsoft::Json::Linq::JObject::$GetEnumerator$d__58::*)()>(&Newtonsoft::Json::Linq::JObject::$GetEnumerator$d__58::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JObject::$GetEnumerator$d__58*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JObject::$GetEnumerator$d__58::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JObject::$GetEnumerator$d__58::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Linq::JObject::$GetEnumerator$d__58::*)()>(&Newtonsoft::Json::Linq::JObject::$GetEnumerator$d__58::System_IDisposable_Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JObject::$GetEnumerator$d__58*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JObject::$GetEnumerator$d__58::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Newtonsoft::Json::Linq::JObject::$GetEnumerator$d__58::*)()>(&Newtonsoft::Json::Linq::JObject::$GetEnumerator$d__58::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JObject::$GetEnumerator$d__58*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JObject::$GetEnumerator$d__58::$$m__Finally1
// Il2CppName: <>m__Finally1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Linq::JObject::$GetEnumerator$d__58::*)()>(&Newtonsoft::Json::Linq::JObject::$GetEnumerator$d__58::$$m__Finally1)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JObject::$GetEnumerator$d__58*), "<>m__Finally1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JObject::$GetEnumerator$d__58::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Linq::JObject::$GetEnumerator$d__58::*)()>(&Newtonsoft::Json::Linq::JObject::$GetEnumerator$d__58::System_Collections_IEnumerator_Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JObject::$GetEnumerator$d__58*), "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
