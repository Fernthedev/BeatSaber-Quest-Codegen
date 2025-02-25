// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVRSimpleJSON.JSONNode
#include "OVRSimpleJSON/JSONNode.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: OVRSimpleJSON
namespace OVRSimpleJSON {
  // Forward declaring type: JSONNodeType
  struct JSONNodeType;
  // Forward declaring type: JSONTextMode
  struct JSONTextMode;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Completed forward declares
// Type namespace: OVRSimpleJSON
namespace OVRSimpleJSON {
  // Size: 0x19
  #pragma pack(push, 1)
  // Autogenerated type: OVRSimpleJSON.JSONArray
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: DF26FC
  class JSONArray : public OVRSimpleJSON::JSONNode {
    public:
    // Nested type: OVRSimpleJSON::JSONArray::$get_Children$d__22
    class $get_Children$d__22;
    // private System.Collections.Generic.List`1<OVRSimpleJSON.JSONNode> m_List
    // Size: 0x8
    // Offset: 0x10
    System::Collections::Generic::List_1<OVRSimpleJSON::JSONNode*>* m_List;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<OVRSimpleJSON::JSONNode*>*) == 0x8);
    // private System.Boolean inline
    // Size: 0x1
    // Offset: 0x18
    bool _inline;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: JSONArray
    JSONArray(System::Collections::Generic::List_1<OVRSimpleJSON::JSONNode*>* m_List_ = {}, bool _inline_ = {}) noexcept : m_List{m_List_}, _inline{_inline_} {}
    // Get instance field reference: private System.Collections.Generic.List`1<OVRSimpleJSON.JSONNode> m_List
    System::Collections::Generic::List_1<OVRSimpleJSON::JSONNode*>*& dyn_m_List();
    // Get instance field reference: private System.Boolean inline
    bool& dyn_inline();
    // public override System.Boolean get_Inline()
    // Offset: 0x1640638
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: System.Boolean JSONNode::get_Inline()
    bool get_Inline();
    // public override System.Void set_Inline(System.Boolean value)
    // Offset: 0x1640640
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: System.Void JSONNode::set_Inline(System.Boolean value)
    void set_Inline(bool value);
    // public override OVRSimpleJSON.JSONNodeType get_Tag()
    // Offset: 0x164064C
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: OVRSimpleJSON.JSONNodeType JSONNode::get_Tag()
    OVRSimpleJSON::JSONNodeType get_Tag();
    // public override System.Boolean get_IsArray()
    // Offset: 0x1640654
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: System.Boolean JSONNode::get_IsArray()
    bool get_IsArray();
    // public override OVRSimpleJSON.JSONNode get_Item(System.Int32 aIndex)
    // Offset: 0x16406F0
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: OVRSimpleJSON.JSONNode JSONNode::get_Item(System.Int32 aIndex)
    OVRSimpleJSON::JSONNode* get_Item(int aIndex);
    // public override System.Void set_Item(System.Int32 aIndex, OVRSimpleJSON.JSONNode value)
    // Offset: 0x1640810
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: System.Void JSONNode::set_Item(System.Int32 aIndex, OVRSimpleJSON.JSONNode value)
    void set_Item(int aIndex, OVRSimpleJSON::JSONNode* value);
    // public override OVRSimpleJSON.JSONNode get_Item(System.String aKey)
    // Offset: 0x1640AA0
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: OVRSimpleJSON.JSONNode JSONNode::get_Item(System.String aKey)
    OVRSimpleJSON::JSONNode* get_Item(::Il2CppString* aKey);
    // public override System.Void set_Item(System.String aKey, OVRSimpleJSON.JSONNode value)
    // Offset: 0x1640B00
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: System.Void JSONNode::set_Item(System.String aKey, OVRSimpleJSON.JSONNode value)
    void set_Item(::Il2CppString* aKey, OVRSimpleJSON::JSONNode* value);
    // public override System.Int32 get_Count()
    // Offset: 0x1640BC4
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: System.Int32 JSONNode::get_Count()
    int get_Count();
    // public override System.Collections.Generic.IEnumerable`1<OVRSimpleJSON.JSONNode> get_Children()
    // Offset: 0x1640DF4
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: System.Collections.Generic.IEnumerable`1<OVRSimpleJSON.JSONNode> JSONNode::get_Children()
    System::Collections::Generic::IEnumerable_1<OVRSimpleJSON::JSONNode*>* get_Children();
    // public System.Void .ctor()
    // Offset: 0x1641024
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: System.Void JSONNode::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static JSONArray* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("OVRSimpleJSON::JSONArray::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<JSONArray*, creationType>()));
    }
    // public override OVRSimpleJSON.JSONNode/OVRSimpleJSON.Enumerator GetEnumerator()
    // Offset: 0x164065C
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: OVRSimpleJSON.JSONNode/OVRSimpleJSON.Enumerator JSONNode::GetEnumerator()
    OVRSimpleJSON::JSONNode::Enumerator GetEnumerator();
    // public override System.Void Add(System.String aKey, OVRSimpleJSON.JSONNode aItem)
    // Offset: 0x1640C14
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: System.Void JSONNode::Add(System.String aKey, OVRSimpleJSON.JSONNode aItem)
    void Add(::Il2CppString* aKey, OVRSimpleJSON::JSONNode* aItem);
    // public override OVRSimpleJSON.JSONNode Remove(System.Int32 aIndex)
    // Offset: 0x1640CD8
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: OVRSimpleJSON.JSONNode JSONNode::Remove(System.Int32 aIndex)
    OVRSimpleJSON::JSONNode* Remove(int aIndex);
    // public override OVRSimpleJSON.JSONNode Remove(OVRSimpleJSON.JSONNode aNode)
    // Offset: 0x1640D84
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: OVRSimpleJSON.JSONNode JSONNode::Remove(OVRSimpleJSON.JSONNode aNode)
    OVRSimpleJSON::JSONNode* Remove(OVRSimpleJSON::JSONNode* aNode);
    // override System.Void WriteToStringBuilder(System.Text.StringBuilder aSB, System.Int32 aIndent, System.Int32 aIndentInc, OVRSimpleJSON.JSONTextMode aMode)
    // Offset: 0x1640EAC
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: System.Void JSONNode::WriteToStringBuilder(System.Text.StringBuilder aSB, System.Int32 aIndent, System.Int32 aIndentInc, OVRSimpleJSON.JSONTextMode aMode)
    void WriteToStringBuilder(System::Text::StringBuilder* aSB, int aIndent, int aIndentInc, OVRSimpleJSON::JSONTextMode aMode);
  }; // OVRSimpleJSON.JSONArray
  #pragma pack(pop)
  static check_size<sizeof(JSONArray), 24 + sizeof(bool)> __OVRSimpleJSON_JSONArraySizeCheck;
  static_assert(sizeof(JSONArray) == 0x19);
}
DEFINE_IL2CPP_ARG_TYPE(OVRSimpleJSON::JSONArray*, "OVRSimpleJSON", "JSONArray");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OVRSimpleJSON::JSONArray::get_Inline
// Il2CppName: get_Inline
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVRSimpleJSON::JSONArray::*)()>(&OVRSimpleJSON::JSONArray::get_Inline)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVRSimpleJSON::JSONArray*), "get_Inline", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVRSimpleJSON::JSONArray::set_Inline
// Il2CppName: set_Inline
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVRSimpleJSON::JSONArray::*)(bool)>(&OVRSimpleJSON::JSONArray::set_Inline)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVRSimpleJSON::JSONArray*), "set_Inline", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: OVRSimpleJSON::JSONArray::get_Tag
// Il2CppName: get_Tag
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVRSimpleJSON::JSONNodeType (OVRSimpleJSON::JSONArray::*)()>(&OVRSimpleJSON::JSONArray::get_Tag)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVRSimpleJSON::JSONArray*), "get_Tag", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVRSimpleJSON::JSONArray::get_IsArray
// Il2CppName: get_IsArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVRSimpleJSON::JSONArray::*)()>(&OVRSimpleJSON::JSONArray::get_IsArray)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVRSimpleJSON::JSONArray*), "get_IsArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVRSimpleJSON::JSONArray::get_Item
// Il2CppName: get_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVRSimpleJSON::JSONNode* (OVRSimpleJSON::JSONArray::*)(int)>(&OVRSimpleJSON::JSONArray::get_Item)> {
  static const MethodInfo* get() {
    static auto* aIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVRSimpleJSON::JSONArray*), "get_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{aIndex});
  }
};
// Writing MetadataGetter for method: OVRSimpleJSON::JSONArray::set_Item
// Il2CppName: set_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVRSimpleJSON::JSONArray::*)(int, OVRSimpleJSON::JSONNode*)>(&OVRSimpleJSON::JSONArray::set_Item)> {
  static const MethodInfo* get() {
    static auto* aIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("OVRSimpleJSON", "JSONNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVRSimpleJSON::JSONArray*), "set_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{aIndex, value});
  }
};
// Writing MetadataGetter for method: OVRSimpleJSON::JSONArray::get_Item
// Il2CppName: get_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVRSimpleJSON::JSONNode* (OVRSimpleJSON::JSONArray::*)(::Il2CppString*)>(&OVRSimpleJSON::JSONArray::get_Item)> {
  static const MethodInfo* get() {
    static auto* aKey = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVRSimpleJSON::JSONArray*), "get_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{aKey});
  }
};
// Writing MetadataGetter for method: OVRSimpleJSON::JSONArray::set_Item
// Il2CppName: set_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVRSimpleJSON::JSONArray::*)(::Il2CppString*, OVRSimpleJSON::JSONNode*)>(&OVRSimpleJSON::JSONArray::set_Item)> {
  static const MethodInfo* get() {
    static auto* aKey = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("OVRSimpleJSON", "JSONNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVRSimpleJSON::JSONArray*), "set_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{aKey, value});
  }
};
// Writing MetadataGetter for method: OVRSimpleJSON::JSONArray::get_Count
// Il2CppName: get_Count
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (OVRSimpleJSON::JSONArray::*)()>(&OVRSimpleJSON::JSONArray::get_Count)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVRSimpleJSON::JSONArray*), "get_Count", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVRSimpleJSON::JSONArray::get_Children
// Il2CppName: get_Children
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerable_1<OVRSimpleJSON::JSONNode*>* (OVRSimpleJSON::JSONArray::*)()>(&OVRSimpleJSON::JSONArray::get_Children)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVRSimpleJSON::JSONArray*), "get_Children", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVRSimpleJSON::JSONArray::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVRSimpleJSON::JSONArray::GetEnumerator
// Il2CppName: GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVRSimpleJSON::JSONNode::Enumerator (OVRSimpleJSON::JSONArray::*)()>(&OVRSimpleJSON::JSONArray::GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVRSimpleJSON::JSONArray*), "GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVRSimpleJSON::JSONArray::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVRSimpleJSON::JSONArray::*)(::Il2CppString*, OVRSimpleJSON::JSONNode*)>(&OVRSimpleJSON::JSONArray::Add)> {
  static const MethodInfo* get() {
    static auto* aKey = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* aItem = &::il2cpp_utils::GetClassFromName("OVRSimpleJSON", "JSONNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVRSimpleJSON::JSONArray*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{aKey, aItem});
  }
};
// Writing MetadataGetter for method: OVRSimpleJSON::JSONArray::Remove
// Il2CppName: Remove
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVRSimpleJSON::JSONNode* (OVRSimpleJSON::JSONArray::*)(int)>(&OVRSimpleJSON::JSONArray::Remove)> {
  static const MethodInfo* get() {
    static auto* aIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVRSimpleJSON::JSONArray*), "Remove", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{aIndex});
  }
};
// Writing MetadataGetter for method: OVRSimpleJSON::JSONArray::Remove
// Il2CppName: Remove
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVRSimpleJSON::JSONNode* (OVRSimpleJSON::JSONArray::*)(OVRSimpleJSON::JSONNode*)>(&OVRSimpleJSON::JSONArray::Remove)> {
  static const MethodInfo* get() {
    static auto* aNode = &::il2cpp_utils::GetClassFromName("OVRSimpleJSON", "JSONNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVRSimpleJSON::JSONArray*), "Remove", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{aNode});
  }
};
// Writing MetadataGetter for method: OVRSimpleJSON::JSONArray::WriteToStringBuilder
// Il2CppName: WriteToStringBuilder
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVRSimpleJSON::JSONArray::*)(System::Text::StringBuilder*, int, int, OVRSimpleJSON::JSONTextMode)>(&OVRSimpleJSON::JSONArray::WriteToStringBuilder)> {
  static const MethodInfo* get() {
    static auto* aSB = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->byval_arg;
    static auto* aIndent = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* aIndentInc = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* aMode = &::il2cpp_utils::GetClassFromName("OVRSimpleJSON", "JSONTextMode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVRSimpleJSON::JSONArray*), "WriteToStringBuilder", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{aSB, aIndent, aIndentInc, aMode});
  }
};
