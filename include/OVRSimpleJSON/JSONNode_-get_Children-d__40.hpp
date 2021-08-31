// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVRSimpleJSON.JSONNode
#include "OVRSimpleJSON/JSONNode.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Skipping declaration: IEnumerator because it is already included!
}
// Completed forward declares
// Type namespace: OVRSimpleJSON
namespace OVRSimpleJSON {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: OVRSimpleJSON.JSONNode/OVRSimpleJSON.<get_Children>d__40
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class JSONNode::$get_Children$d__40 : public ::Il2CppObject/*, public System::Collections::Generic::IEnumerable_1<OVRSimpleJSON::JSONNode*>, public System::Collections::Generic::IEnumerator_1<OVRSimpleJSON::JSONNode*>*/ {
    public:
    // private System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x10
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $$1__state and: $$2__current
    char __padding0[0x4] = {};
    // private OVRSimpleJSON.JSONNode <>2__current
    // Size: 0x8
    // Offset: 0x18
    OVRSimpleJSON::JSONNode* $$2__current;
    // Field size check
    static_assert(sizeof(OVRSimpleJSON::JSONNode*) == 0x8);
    // private System.Int32 <>l__initialThreadId
    // Size: 0x4
    // Offset: 0x20
    int $$l__initialThreadId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: $get_Children$d__40
    $get_Children$d__40(int $$1__state_ = {}, OVRSimpleJSON::JSONNode* $$2__current_ = {}, int $$l__initialThreadId_ = {}) noexcept : $$1__state{$$1__state_}, $$2__current{$$2__current_}, $$l__initialThreadId{$$l__initialThreadId_} {}
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerable_1<OVRSimpleJSON::JSONNode*>
    operator System::Collections::Generic::IEnumerable_1<OVRSimpleJSON::JSONNode*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerable_1<OVRSimpleJSON::JSONNode*>*>(this);
    }
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerator_1<OVRSimpleJSON::JSONNode*>
    operator System::Collections::Generic::IEnumerator_1<OVRSimpleJSON::JSONNode*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerator_1<OVRSimpleJSON::JSONNode*>*>(this);
    }
    // Get instance field: private System.Int32 <>1__state
    int _get_$$1__state();
    // Set instance field: private System.Int32 <>1__state
    void _set_$$1__state(int value);
    // Get instance field: private OVRSimpleJSON.JSONNode <>2__current
    OVRSimpleJSON::JSONNode* _get_$$2__current();
    // Set instance field: private OVRSimpleJSON.JSONNode <>2__current
    void _set_$$2__current(OVRSimpleJSON::JSONNode* value);
    // Get instance field: private System.Int32 <>l__initialThreadId
    int _get_$$l__initialThreadId();
    // Set instance field: private System.Int32 <>l__initialThreadId
    void _set_$$l__initialThreadId(int value);
    // private OVRSimpleJSON.JSONNode System.Collections.Generic.IEnumerator<OVRSimpleJSON.JSONNode>.get_Current()
    // Offset: 0x163E3EC
    OVRSimpleJSON::JSONNode* System_Collections_Generic_IEnumerator$OVRSimpleJSON_JSONNode$_get_Current();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x163E454
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x163AB44
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static JSONNode::$get_Children$d__40* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVRSimpleJSON::JSONNode::$get_Children$d__40::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<JSONNode::$get_Children$d__40*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x163E3D0
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x163E3D4
    bool MoveNext();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x163E3F4
    void System_Collections_IEnumerator_Reset();
    // private System.Collections.Generic.IEnumerator`1<OVRSimpleJSON.JSONNode> System.Collections.Generic.IEnumerable<OVRSimpleJSON.JSONNode>.GetEnumerator()
    // Offset: 0x163E45C
    System::Collections::Generic::IEnumerator_1<OVRSimpleJSON::JSONNode*>* System_Collections_Generic_IEnumerable$OVRSimpleJSON_JSONNode$_GetEnumerator();
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x163E4F4
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
  }; // OVRSimpleJSON.JSONNode/OVRSimpleJSON.<get_Children>d__40
  #pragma pack(pop)
  static check_size<sizeof(JSONNode::$get_Children$d__40), 32 + sizeof(int)> __OVRSimpleJSON_JSONNode_$get_Children$d__40SizeCheck;
  static_assert(sizeof(JSONNode::$get_Children$d__40) == 0x24);
}
DEFINE_IL2CPP_ARG_TYPE(OVRSimpleJSON::JSONNode::$get_Children$d__40*, "OVRSimpleJSON", "JSONNode/<get_Children>d__40");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OVRSimpleJSON::JSONNode::$get_Children$d__40::System_Collections_Generic_IEnumerator$OVRSimpleJSON_JSONNode$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<OVRSimpleJSON.JSONNode>.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVRSimpleJSON::JSONNode* (OVRSimpleJSON::JSONNode::$get_Children$d__40::*)()>(&OVRSimpleJSON::JSONNode::$get_Children$d__40::System_Collections_Generic_IEnumerator$OVRSimpleJSON_JSONNode$_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVRSimpleJSON::JSONNode::$get_Children$d__40*), "System.Collections.Generic.IEnumerator<OVRSimpleJSON.JSONNode>.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVRSimpleJSON::JSONNode::$get_Children$d__40::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (OVRSimpleJSON::JSONNode::$get_Children$d__40::*)()>(&OVRSimpleJSON::JSONNode::$get_Children$d__40::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVRSimpleJSON::JSONNode::$get_Children$d__40*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVRSimpleJSON::JSONNode::$get_Children$d__40::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVRSimpleJSON::JSONNode::$get_Children$d__40::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVRSimpleJSON::JSONNode::$get_Children$d__40::*)()>(&OVRSimpleJSON::JSONNode::$get_Children$d__40::System_IDisposable_Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVRSimpleJSON::JSONNode::$get_Children$d__40*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVRSimpleJSON::JSONNode::$get_Children$d__40::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVRSimpleJSON::JSONNode::$get_Children$d__40::*)()>(&OVRSimpleJSON::JSONNode::$get_Children$d__40::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVRSimpleJSON::JSONNode::$get_Children$d__40*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVRSimpleJSON::JSONNode::$get_Children$d__40::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVRSimpleJSON::JSONNode::$get_Children$d__40::*)()>(&OVRSimpleJSON::JSONNode::$get_Children$d__40::System_Collections_IEnumerator_Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVRSimpleJSON::JSONNode::$get_Children$d__40*), "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVRSimpleJSON::JSONNode::$get_Children$d__40::System_Collections_Generic_IEnumerable$OVRSimpleJSON_JSONNode$_GetEnumerator
// Il2CppName: System.Collections.Generic.IEnumerable<OVRSimpleJSON.JSONNode>.GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerator_1<OVRSimpleJSON::JSONNode*>* (OVRSimpleJSON::JSONNode::$get_Children$d__40::*)()>(&OVRSimpleJSON::JSONNode::$get_Children$d__40::System_Collections_Generic_IEnumerable$OVRSimpleJSON_JSONNode$_GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVRSimpleJSON::JSONNode::$get_Children$d__40*), "System.Collections.Generic.IEnumerable<OVRSimpleJSON.JSONNode>.GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVRSimpleJSON::JSONNode::$get_Children$d__40::System_Collections_IEnumerable_GetEnumerator
// Il2CppName: System.Collections.IEnumerable.GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator* (OVRSimpleJSON::JSONNode::$get_Children$d__40::*)()>(&OVRSimpleJSON::JSONNode::$get_Children$d__40::System_Collections_IEnumerable_GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVRSimpleJSON::JSONNode::$get_Children$d__40*), "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
