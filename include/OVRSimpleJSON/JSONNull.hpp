// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
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
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Completed forward declares
// Type namespace: OVRSimpleJSON
namespace OVRSimpleJSON {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: OVRSimpleJSON.JSONNull
  class JSONNull : public OVRSimpleJSON::JSONNode {
    public:
    // Creating value type constructor for type: JSONNull
    JSONNull() noexcept {}
    // Get static field: static private OVRSimpleJSON.JSONNull m_StaticInstance
    static OVRSimpleJSON::JSONNull* _get_m_StaticInstance();
    // Set static field: static private OVRSimpleJSON.JSONNull m_StaticInstance
    static void _set_m_StaticInstance(OVRSimpleJSON::JSONNull* value);
    // Get static field: static public System.Boolean reuseSameInstance
    static bool _get_reuseSameInstance();
    // Set static field: static public System.Boolean reuseSameInstance
    static void _set_reuseSameInstance(bool value);
    // static public OVRSimpleJSON.JSONNull CreateOrGet()
    // Offset: 0x1ECF6EC
    static OVRSimpleJSON::JSONNull* CreateOrGet();
    // private System.Void .ctor()
    // Offset: 0x1ECF78C
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: System.Void JSONNode::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static JSONNull* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("OVRSimpleJSON::JSONNull::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<JSONNull*, creationType>()));
    }
    // public override OVRSimpleJSON.JSONNodeType get_Tag()
    // Offset: 0x1ECF7F4
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: OVRSimpleJSON.JSONNodeType JSONNode::get_Tag()
    OVRSimpleJSON::JSONNodeType get_Tag();
    // public override System.Boolean get_IsNull()
    // Offset: 0x1ECF7FC
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: System.Boolean JSONNode::get_IsNull()
    bool get_IsNull();
    // public override OVRSimpleJSON.JSONNode/Enumerator GetEnumerator()
    // Offset: 0x1ECF804
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: OVRSimpleJSON.JSONNode/Enumerator JSONNode::GetEnumerator()
    OVRSimpleJSON::JSONNode::Enumerator GetEnumerator();
    // public override System.String get_Value()
    // Offset: 0x1ECF824
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: System.String JSONNode::get_Value()
    ::Il2CppString* get_Value();
    // public override System.Void set_Value(System.String value)
    // Offset: 0x1ECF86C
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: System.Void JSONNode::set_Value(System.String value)
    void set_Value(::Il2CppString* value);
    // public override System.Boolean get_AsBool()
    // Offset: 0x1ECF870
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: System.Boolean JSONNode::get_AsBool()
    bool get_AsBool();
    // public override System.Void set_AsBool(System.Boolean value)
    // Offset: 0x1ECF878
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: System.Void JSONNode::set_AsBool(System.Boolean value)
    void set_AsBool(bool value);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x1ECF87C
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: System.Boolean JSONNode::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x1ECF918
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: System.Int32 JSONNode::GetHashCode()
    int GetHashCode();
    // override System.Void WriteToStringBuilder(System.Text.StringBuilder aSB, System.Int32 aIndent, System.Int32 aIndentInc, OVRSimpleJSON.JSONTextMode aMode)
    // Offset: 0x1ECF920
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: System.Void JSONNode::WriteToStringBuilder(System.Text.StringBuilder aSB, System.Int32 aIndent, System.Int32 aIndentInc, OVRSimpleJSON.JSONTextMode aMode)
    void WriteToStringBuilder(System::Text::StringBuilder* aSB, int aIndent, int aIndentInc, OVRSimpleJSON::JSONTextMode aMode);
    // static private System.Void .cctor()
    // Offset: 0x1ECF97C
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: System.Void JSONNode::.cctor()
    static void _cctor();
  }; // OVRSimpleJSON.JSONNull
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(OVRSimpleJSON::JSONNull*, "OVRSimpleJSON", "JSONNull");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OVRSimpleJSON::JSONNull::CreateOrGet
// Il2CppName: CreateOrGet
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVRSimpleJSON::JSONNull* (*)()>(&OVRSimpleJSON::JSONNull::CreateOrGet)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVRSimpleJSON::JSONNull*), "CreateOrGet", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVRSimpleJSON::JSONNull::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVRSimpleJSON::JSONNull::get_Tag
// Il2CppName: get_Tag
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVRSimpleJSON::JSONNodeType (OVRSimpleJSON::JSONNull::*)()>(&OVRSimpleJSON::JSONNull::get_Tag)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVRSimpleJSON::JSONNull*), "get_Tag", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVRSimpleJSON::JSONNull::get_IsNull
// Il2CppName: get_IsNull
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVRSimpleJSON::JSONNull::*)()>(&OVRSimpleJSON::JSONNull::get_IsNull)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVRSimpleJSON::JSONNull*), "get_IsNull", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVRSimpleJSON::JSONNull::GetEnumerator
// Il2CppName: GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVRSimpleJSON::JSONNode::Enumerator (OVRSimpleJSON::JSONNull::*)()>(&OVRSimpleJSON::JSONNull::GetEnumerator)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVRSimpleJSON::JSONNull*), "GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVRSimpleJSON::JSONNull::get_Value
// Il2CppName: get_Value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (OVRSimpleJSON::JSONNull::*)()>(&OVRSimpleJSON::JSONNull::get_Value)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVRSimpleJSON::JSONNull*), "get_Value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVRSimpleJSON::JSONNull::set_Value
// Il2CppName: set_Value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVRSimpleJSON::JSONNull::*)(::Il2CppString*)>(&OVRSimpleJSON::JSONNull::set_Value)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVRSimpleJSON::JSONNull*), "set_Value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: OVRSimpleJSON::JSONNull::get_AsBool
// Il2CppName: get_AsBool
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVRSimpleJSON::JSONNull::*)()>(&OVRSimpleJSON::JSONNull::get_AsBool)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVRSimpleJSON::JSONNull*), "get_AsBool", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVRSimpleJSON::JSONNull::set_AsBool
// Il2CppName: set_AsBool
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVRSimpleJSON::JSONNull::*)(bool)>(&OVRSimpleJSON::JSONNull::set_AsBool)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVRSimpleJSON::JSONNull*), "set_AsBool", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: OVRSimpleJSON::JSONNull::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVRSimpleJSON::JSONNull::*)(::Il2CppObject*)>(&OVRSimpleJSON::JSONNull::Equals)> {
  const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVRSimpleJSON::JSONNull*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: OVRSimpleJSON::JSONNull::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (OVRSimpleJSON::JSONNull::*)()>(&OVRSimpleJSON::JSONNull::GetHashCode)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVRSimpleJSON::JSONNull*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVRSimpleJSON::JSONNull::WriteToStringBuilder
// Il2CppName: WriteToStringBuilder
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVRSimpleJSON::JSONNull::*)(System::Text::StringBuilder*, int, int, OVRSimpleJSON::JSONTextMode)>(&OVRSimpleJSON::JSONNull::WriteToStringBuilder)> {
  const MethodInfo* get() {
    static auto* aSB = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->byval_arg;
    static auto* aIndent = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* aIndentInc = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* aMode = &::il2cpp_utils::GetClassFromName("OVRSimpleJSON", "JSONTextMode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVRSimpleJSON::JSONNull*), "WriteToStringBuilder", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{aSB, aIndent, aIndentInc, aMode});
  }
};
// Writing MetadataGetter for method: OVRSimpleJSON::JSONNull::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&OVRSimpleJSON::JSONNull::_cctor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVRSimpleJSON::JSONNull*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
