// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVRSimpleJSON.JSONNode
#include "OVRSimpleJSON/JSONNode.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
// Including type: System.Collections.Generic.KeyValuePair`2
#include "System/Collections/Generic/KeyValuePair_2.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: OVRSimpleJSON.JSONNode/OVRSimpleJSON.Enumerator
#include "OVRSimpleJSON/JSONNode_Enumerator.hpp"
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
  // WARNING Size may be invalid!
  // Autogenerated type: OVRSimpleJSON.JSONNode/OVRSimpleJSON.LinqEnumerator
  // [TokenAttribute] Offset: FFFFFFFF
  class JSONNode::LinqEnumerator : public ::Il2CppObject/*, public System::Collections::Generic::IEnumerator_1<System::Collections::Generic::KeyValuePair_2<::Il2CppString*, OVRSimpleJSON::JSONNode*>>, public System::Collections::Generic::IEnumerable_1<System::Collections::Generic::KeyValuePair_2<::Il2CppString*, OVRSimpleJSON::JSONNode*>>*/ {
    public:
    // private OVRSimpleJSON.JSONNode m_Node
    // Size: 0x8
    // Offset: 0x10
    OVRSimpleJSON::JSONNode* m_Node;
    // Field size check
    static_assert(sizeof(OVRSimpleJSON::JSONNode*) == 0x8);
    // private OVRSimpleJSON.JSONNode/OVRSimpleJSON.Enumerator m_Enumerator
    // Size: 0xFFFFFFFF
    // Offset: 0x18
    OVRSimpleJSON::JSONNode::Enumerator m_Enumerator;
    // Creating value type constructor for type: LinqEnumerator
    LinqEnumerator(OVRSimpleJSON::JSONNode* m_Node_ = {}, OVRSimpleJSON::JSONNode::Enumerator m_Enumerator_ = {}) noexcept : m_Node{m_Node_}, m_Enumerator{m_Enumerator_} {}
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerator_1<System::Collections::Generic::KeyValuePair_2<::Il2CppString*, OVRSimpleJSON::JSONNode*>>
    operator System::Collections::Generic::IEnumerator_1<System::Collections::Generic::KeyValuePair_2<::Il2CppString*, OVRSimpleJSON::JSONNode*>>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerator_1<System::Collections::Generic::KeyValuePair_2<::Il2CppString*, OVRSimpleJSON::JSONNode*>>*>(this);
    }
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerable_1<System::Collections::Generic::KeyValuePair_2<::Il2CppString*, OVRSimpleJSON::JSONNode*>>
    operator System::Collections::Generic::IEnumerable_1<System::Collections::Generic::KeyValuePair_2<::Il2CppString*, OVRSimpleJSON::JSONNode*>>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerable_1<System::Collections::Generic::KeyValuePair_2<::Il2CppString*, OVRSimpleJSON::JSONNode*>>*>(this);
    }
    // Get instance field: private OVRSimpleJSON.JSONNode m_Node
    OVRSimpleJSON::JSONNode* _get_m_Node();
    // Set instance field: private OVRSimpleJSON.JSONNode m_Node
    void _set_m_Node(OVRSimpleJSON::JSONNode* value);
    // Get instance field: private OVRSimpleJSON.JSONNode/OVRSimpleJSON.Enumerator m_Enumerator
    OVRSimpleJSON::JSONNode::Enumerator _get_m_Enumerator();
    // Set instance field: private OVRSimpleJSON.JSONNode/OVRSimpleJSON.Enumerator m_Enumerator
    void _set_m_Enumerator(OVRSimpleJSON::JSONNode::Enumerator value);
    // public System.Collections.Generic.KeyValuePair`2<System.String,OVRSimpleJSON.JSONNode> get_Current()
    // Offset: 0x1F43A28
    System::Collections::Generic::KeyValuePair_2<::Il2CppString*, OVRSimpleJSON::JSONNode*> get_Current();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x1F43A30
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // System.Void .ctor(OVRSimpleJSON.JSONNode aNode)
    // Offset: 0x1F43960
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static JSONNode::LinqEnumerator* New_ctor(OVRSimpleJSON::JSONNode* aNode) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVRSimpleJSON::JSONNode::LinqEnumerator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<JSONNode::LinqEnumerator*, creationType>(aNode)));
    }
    // public System.Boolean MoveNext()
    // Offset: 0x1F43A9C
    bool MoveNext();
    // public System.Void Dispose()
    // Offset: 0x1F43AA4
    void Dispose();
    // public System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,OVRSimpleJSON.JSONNode>> GetEnumerator()
    // Offset: 0x1F43AC4
    System::Collections::Generic::IEnumerator_1<System::Collections::Generic::KeyValuePair_2<::Il2CppString*, OVRSimpleJSON::JSONNode*>>* GetEnumerator();
    // public System.Void Reset()
    // Offset: 0x1F43B28
    void Reset();
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x1F43BD8
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
  }; // OVRSimpleJSON.JSONNode/OVRSimpleJSON.LinqEnumerator
  // WARNING Not writing size check since size may be invalid!
}
DEFINE_IL2CPP_ARG_TYPE(OVRSimpleJSON::JSONNode::LinqEnumerator*, "OVRSimpleJSON", "JSONNode/LinqEnumerator");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OVRSimpleJSON::JSONNode::LinqEnumerator::get_Current
// Il2CppName: get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::KeyValuePair_2<::Il2CppString*, OVRSimpleJSON::JSONNode*> (OVRSimpleJSON::JSONNode::LinqEnumerator::*)()>(&OVRSimpleJSON::JSONNode::LinqEnumerator::get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVRSimpleJSON::JSONNode::LinqEnumerator*), "get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVRSimpleJSON::JSONNode::LinqEnumerator::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (OVRSimpleJSON::JSONNode::LinqEnumerator::*)()>(&OVRSimpleJSON::JSONNode::LinqEnumerator::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVRSimpleJSON::JSONNode::LinqEnumerator*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVRSimpleJSON::JSONNode::LinqEnumerator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVRSimpleJSON::JSONNode::LinqEnumerator::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVRSimpleJSON::JSONNode::LinqEnumerator::*)()>(&OVRSimpleJSON::JSONNode::LinqEnumerator::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVRSimpleJSON::JSONNode::LinqEnumerator*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVRSimpleJSON::JSONNode::LinqEnumerator::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVRSimpleJSON::JSONNode::LinqEnumerator::*)()>(&OVRSimpleJSON::JSONNode::LinqEnumerator::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVRSimpleJSON::JSONNode::LinqEnumerator*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVRSimpleJSON::JSONNode::LinqEnumerator::GetEnumerator
// Il2CppName: GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerator_1<System::Collections::Generic::KeyValuePair_2<::Il2CppString*, OVRSimpleJSON::JSONNode*>>* (OVRSimpleJSON::JSONNode::LinqEnumerator::*)()>(&OVRSimpleJSON::JSONNode::LinqEnumerator::GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVRSimpleJSON::JSONNode::LinqEnumerator*), "GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVRSimpleJSON::JSONNode::LinqEnumerator::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVRSimpleJSON::JSONNode::LinqEnumerator::*)()>(&OVRSimpleJSON::JSONNode::LinqEnumerator::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVRSimpleJSON::JSONNode::LinqEnumerator*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVRSimpleJSON::JSONNode::LinqEnumerator::System_Collections_IEnumerable_GetEnumerator
// Il2CppName: System.Collections.IEnumerable.GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator* (OVRSimpleJSON::JSONNode::LinqEnumerator::*)()>(&OVRSimpleJSON::JSONNode::LinqEnumerator::System_Collections_IEnumerable_GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVRSimpleJSON::JSONNode::LinqEnumerator*), "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
