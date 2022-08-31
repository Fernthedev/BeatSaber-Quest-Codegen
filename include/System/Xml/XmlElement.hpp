// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Xml.XmlLinkedNode
#include "System/Xml/XmlLinkedNode.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Xml
namespace System::Xml {
  // Forward declaring type: XmlName
  class XmlName;
  // Forward declaring type: XmlAttributeCollection
  class XmlAttributeCollection;
  // Forward declaring type: XmlDocument
  class XmlDocument;
  // Forward declaring type: XmlAttribute
  class XmlAttribute;
  // Forward declaring type: XmlNodeType
  struct XmlNodeType;
  // Skipping declaration: XmlNode because it is already included!
}
// Completed forward declares
// Type namespace: System.Xml
namespace System::Xml {
  // Forward declaring type: XmlElement
  class XmlElement;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::XmlElement);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlElement*, "System.Xml", "XmlElement");
// Type namespace: System.Xml
namespace System::Xml {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.XmlElement
  // [TokenAttribute] Offset: FFFFFFFF
  class XmlElement : public ::System::Xml::XmlLinkedNode {
    public:
    public:
    // private System.Xml.XmlName name
    // Size: 0x8
    // Offset: 0x20
    ::System::Xml::XmlName* name;
    // Field size check
    static_assert(sizeof(::System::Xml::XmlName*) == 0x8);
    // private System.Xml.XmlAttributeCollection attributes
    // Size: 0x8
    // Offset: 0x28
    ::System::Xml::XmlAttributeCollection* attributes;
    // Field size check
    static_assert(sizeof(::System::Xml::XmlAttributeCollection*) == 0x8);
    // private System.Xml.XmlLinkedNode lastChild
    // Size: 0x8
    // Offset: 0x30
    ::System::Xml::XmlLinkedNode* lastChild;
    // Field size check
    static_assert(sizeof(::System::Xml::XmlLinkedNode*) == 0x8);
    public:
    // Get instance field reference: private System.Xml.XmlName name
    [[deprecated("Use field access instead!")]] ::System::Xml::XmlName*& dyn_name();
    // Get instance field reference: private System.Xml.XmlAttributeCollection attributes
    [[deprecated("Use field access instead!")]] ::System::Xml::XmlAttributeCollection*& dyn_attributes();
    // Get instance field reference: private System.Xml.XmlLinkedNode lastChild
    [[deprecated("Use field access instead!")]] ::System::Xml::XmlLinkedNode*& dyn_lastChild();
    // System.Xml.XmlName get_XmlName()
    // Offset: 0x1BC659C
    ::System::Xml::XmlName* get_XmlName();
    // System.Void set_XmlName(System.Xml.XmlName value)
    // Offset: 0x1BC65A4
    void set_XmlName(::System::Xml::XmlName* value);
    // public System.Boolean get_IsEmpty()
    // Offset: 0x1BC6A90
    bool get_IsEmpty();
    // public System.Void set_IsEmpty(System.Boolean value)
    // Offset: 0x1BC6AA0
    void set_IsEmpty(bool value);
    // public System.Boolean get_HasAttributes()
    // Offset: 0x1BC6E60
    bool get_HasAttributes();
    // System.Void .ctor(System.Xml.XmlName name, System.Boolean empty, System.Xml.XmlDocument doc)
    // Offset: 0x1BC465C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlElement* New_ctor(::System::Xml::XmlName* name, bool empty, ::System::Xml::XmlDocument* doc) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::XmlElement::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlElement*, creationType>(name, empty, doc)));
    }
    // protected internal System.Void .ctor(System.String prefix, System.String localName, System.String namespaceURI, System.Xml.XmlDocument doc)
    // Offset: 0x1BC6550
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlElement* New_ctor(::StringW prefix, ::StringW localName, ::StringW namespaceURI, ::System::Xml::XmlDocument* doc) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::XmlElement::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlElement*, creationType>(prefix, localName, namespaceURI, doc)));
    }
    // public System.Xml.XmlAttribute SetAttributeNode(System.Xml.XmlAttribute newAttr)
    // Offset: 0x1BC6E8C
    ::System::Xml::XmlAttribute* SetAttributeNode(::System::Xml::XmlAttribute* newAttr);
    // public System.Void RemoveAllAttributes()
    // Offset: 0x1BC6FAC
    void RemoveAllAttributes();
    // System.Void RemoveAllChildren()
    // Offset: 0x1BC6D0C
    void RemoveAllChildren();
    // public override System.String get_Name()
    // Offset: 0x1BC6AE8
    // Implemented from: System.Xml.XmlNode
    // Base method: System.String XmlNode::get_Name()
    ::StringW get_Name();
    // public override System.String get_LocalName()
    // Offset: 0x1BC6B04
    // Implemented from: System.Xml.XmlNode
    // Base method: System.String XmlNode::get_LocalName()
    ::StringW get_LocalName();
    // public override System.String get_NamespaceURI()
    // Offset: 0x1BC6B20
    // Implemented from: System.Xml.XmlNode
    // Base method: System.String XmlNode::get_NamespaceURI()
    ::StringW get_NamespaceURI();
    // public override System.String get_Prefix()
    // Offset: 0x1BC6B3C
    // Implemented from: System.Xml.XmlNode
    // Base method: System.String XmlNode::get_Prefix()
    ::StringW get_Prefix();
    // public override System.Xml.XmlNodeType get_NodeType()
    // Offset: 0x1BC6B58
    // Implemented from: System.Xml.XmlNode
    // Base method: System.Xml.XmlNodeType XmlNode::get_NodeType()
    ::System::Xml::XmlNodeType get_NodeType();
    // public override System.Xml.XmlNode get_ParentNode()
    // Offset: 0x1BC6B60
    // Implemented from: System.Xml.XmlNode
    // Base method: System.Xml.XmlNode XmlNode::get_ParentNode()
    ::System::Xml::XmlNode* get_ParentNode();
    // public override System.Xml.XmlDocument get_OwnerDocument()
    // Offset: 0x1BC6B68
    // Implemented from: System.Xml.XmlNode
    // Base method: System.Xml.XmlDocument XmlNode::get_OwnerDocument()
    ::System::Xml::XmlDocument* get_OwnerDocument();
    // override System.Boolean get_IsContainer()
    // Offset: 0x1BC6B84
    // Implemented from: System.Xml.XmlNode
    // Base method: System.Boolean XmlNode::get_IsContainer()
    bool get_IsContainer();
    // override System.Xml.XmlLinkedNode get_LastNode()
    // Offset: 0x1BC6D14
    // Implemented from: System.Xml.XmlNode
    // Base method: System.Xml.XmlLinkedNode XmlNode::get_LastNode()
    ::System::Xml::XmlLinkedNode* get_LastNode();
    // override System.Void set_LastNode(System.Xml.XmlLinkedNode value)
    // Offset: 0x1BC6D24
    // Implemented from: System.Xml.XmlNode
    // Base method: System.Void XmlNode::set_LastNode(System.Xml.XmlLinkedNode value)
    void set_LastNode(::System::Xml::XmlLinkedNode* value);
    // public override System.Xml.XmlAttributeCollection get_Attributes()
    // Offset: 0x1BC6D50
    // Implemented from: System.Xml.XmlNode
    // Base method: System.Xml.XmlAttributeCollection XmlNode::get_Attributes()
    ::System::Xml::XmlAttributeCollection* get_Attributes();
    // public override System.Void set_InnerXml(System.String value)
    // Offset: 0x1BC7028
    // Implemented from: System.Xml.XmlNode
    // Base method: System.Void XmlNode::set_InnerXml(System.String value)
    void set_InnerXml(::StringW value);
    // public override System.String get_InnerText()
    // Offset: 0x1BC70B4
    // Implemented from: System.Xml.XmlNode
    // Base method: System.String XmlNode::get_InnerText()
    ::StringW get_InnerText();
    // public override System.Void set_InnerText(System.String value)
    // Offset: 0x1BC70BC
    // Implemented from: System.Xml.XmlNode
    // Base method: System.Void XmlNode::set_InnerText(System.String value)
    void set_InnerText(::StringW value);
    // public override System.Xml.XmlNode get_NextSibling()
    // Offset: 0x1BC7184
    // Implemented from: System.Xml.XmlLinkedNode
    // Base method: System.Xml.XmlNode XmlLinkedNode::get_NextSibling()
    ::System::Xml::XmlNode* get_NextSibling();
    // public override System.Xml.XmlNode CloneNode(System.Boolean deep)
    // Offset: 0x1BC65AC
    // Implemented from: System.Xml.XmlNode
    // Base method: System.Xml.XmlNode XmlNode::CloneNode(System.Boolean deep)
    ::System::Xml::XmlNode* CloneNode(bool deep);
    // override System.Xml.XmlNode AppendChildForLoad(System.Xml.XmlNode newChild, System.Xml.XmlDocument doc)
    // Offset: 0x1BC6B8C
    // Implemented from: System.Xml.XmlNode
    // Base method: System.Xml.XmlNode XmlNode::AppendChildForLoad(System.Xml.XmlNode newChild, System.Xml.XmlDocument doc)
    ::System::Xml::XmlNode* AppendChildForLoad(::System::Xml::XmlNode* newChild, ::System::Xml::XmlDocument* doc);
    // override System.Boolean IsValidChildType(System.Xml.XmlNodeType type)
    // Offset: 0x1BC6D2C
    // Implemented from: System.Xml.XmlNode
    // Base method: System.Boolean XmlNode::IsValidChildType(System.Xml.XmlNodeType type)
    bool IsValidChildType(::System::Xml::XmlNodeType type);
    // public override System.Void RemoveAll()
    // Offset: 0x1BC6FF4
    // Implemented from: System.Xml.XmlNode
    // Base method: System.Void XmlNode::RemoveAll()
    void RemoveAll();
    // override System.Void SetParent(System.Xml.XmlNode node)
    // Offset: 0x1BC71CC
    // Implemented from: System.Xml.XmlNode
    // Base method: System.Void XmlNode::SetParent(System.Xml.XmlNode node)
    void SetParent(::System::Xml::XmlNode* node);
  }; // System.Xml.XmlElement
  #pragma pack(pop)
  static check_size<sizeof(XmlElement), 48 + sizeof(::System::Xml::XmlLinkedNode*)> __System_Xml_XmlElementSizeCheck;
  static_assert(sizeof(XmlElement) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::XmlElement::get_XmlName
// Il2CppName: get_XmlName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlName* (System::Xml::XmlElement::*)()>(&System::Xml::XmlElement::get_XmlName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlElement*), "get_XmlName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlElement::set_XmlName
// Il2CppName: set_XmlName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlElement::*)(::System::Xml::XmlName*)>(&System::Xml::XmlElement::set_XmlName)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlName")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlElement*), "set_XmlName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlElement::get_IsEmpty
// Il2CppName: get_IsEmpty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::XmlElement::*)()>(&System::Xml::XmlElement::get_IsEmpty)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlElement*), "get_IsEmpty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlElement::set_IsEmpty
// Il2CppName: set_IsEmpty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlElement::*)(bool)>(&System::Xml::XmlElement::set_IsEmpty)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlElement*), "set_IsEmpty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlElement::get_HasAttributes
// Il2CppName: get_HasAttributes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::XmlElement::*)()>(&System::Xml::XmlElement::get_HasAttributes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlElement*), "get_HasAttributes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlElement::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::XmlElement::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::XmlElement::SetAttributeNode
// Il2CppName: SetAttributeNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlAttribute* (System::Xml::XmlElement::*)(::System::Xml::XmlAttribute*)>(&System::Xml::XmlElement::SetAttributeNode)> {
  static const MethodInfo* get() {
    static auto* newAttr = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlAttribute")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlElement*), "SetAttributeNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{newAttr});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlElement::RemoveAllAttributes
// Il2CppName: RemoveAllAttributes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlElement::*)()>(&System::Xml::XmlElement::RemoveAllAttributes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlElement*), "RemoveAllAttributes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlElement::RemoveAllChildren
// Il2CppName: RemoveAllChildren
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlElement::*)()>(&System::Xml::XmlElement::RemoveAllChildren)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlElement*), "RemoveAllChildren", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlElement::get_Name
// Il2CppName: get_Name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::XmlElement::*)()>(&System::Xml::XmlElement::get_Name)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlElement*), "get_Name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlElement::get_LocalName
// Il2CppName: get_LocalName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::XmlElement::*)()>(&System::Xml::XmlElement::get_LocalName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlElement*), "get_LocalName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlElement::get_NamespaceURI
// Il2CppName: get_NamespaceURI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::XmlElement::*)()>(&System::Xml::XmlElement::get_NamespaceURI)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlElement*), "get_NamespaceURI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlElement::get_Prefix
// Il2CppName: get_Prefix
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::XmlElement::*)()>(&System::Xml::XmlElement::get_Prefix)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlElement*), "get_Prefix", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlElement::get_NodeType
// Il2CppName: get_NodeType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlNodeType (System::Xml::XmlElement::*)()>(&System::Xml::XmlElement::get_NodeType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlElement*), "get_NodeType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlElement::get_ParentNode
// Il2CppName: get_ParentNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlNode* (System::Xml::XmlElement::*)()>(&System::Xml::XmlElement::get_ParentNode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlElement*), "get_ParentNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlElement::get_OwnerDocument
// Il2CppName: get_OwnerDocument
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlDocument* (System::Xml::XmlElement::*)()>(&System::Xml::XmlElement::get_OwnerDocument)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlElement*), "get_OwnerDocument", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlElement::get_IsContainer
// Il2CppName: get_IsContainer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::XmlElement::*)()>(&System::Xml::XmlElement::get_IsContainer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlElement*), "get_IsContainer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlElement::get_LastNode
// Il2CppName: get_LastNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlLinkedNode* (System::Xml::XmlElement::*)()>(&System::Xml::XmlElement::get_LastNode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlElement*), "get_LastNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlElement::set_LastNode
// Il2CppName: set_LastNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlElement::*)(::System::Xml::XmlLinkedNode*)>(&System::Xml::XmlElement::set_LastNode)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlLinkedNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlElement*), "set_LastNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlElement::get_Attributes
// Il2CppName: get_Attributes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlAttributeCollection* (System::Xml::XmlElement::*)()>(&System::Xml::XmlElement::get_Attributes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlElement*), "get_Attributes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlElement::set_InnerXml
// Il2CppName: set_InnerXml
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlElement::*)(::StringW)>(&System::Xml::XmlElement::set_InnerXml)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlElement*), "set_InnerXml", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlElement::get_InnerText
// Il2CppName: get_InnerText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::XmlElement::*)()>(&System::Xml::XmlElement::get_InnerText)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlElement*), "get_InnerText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlElement::set_InnerText
// Il2CppName: set_InnerText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlElement::*)(::StringW)>(&System::Xml::XmlElement::set_InnerText)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlElement*), "set_InnerText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlElement::get_NextSibling
// Il2CppName: get_NextSibling
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlNode* (System::Xml::XmlElement::*)()>(&System::Xml::XmlElement::get_NextSibling)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlElement*), "get_NextSibling", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlElement::CloneNode
// Il2CppName: CloneNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlNode* (System::Xml::XmlElement::*)(bool)>(&System::Xml::XmlElement::CloneNode)> {
  static const MethodInfo* get() {
    static auto* deep = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlElement*), "CloneNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{deep});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlElement::AppendChildForLoad
// Il2CppName: AppendChildForLoad
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlNode* (System::Xml::XmlElement::*)(::System::Xml::XmlNode*, ::System::Xml::XmlDocument*)>(&System::Xml::XmlElement::AppendChildForLoad)> {
  static const MethodInfo* get() {
    static auto* newChild = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlNode")->byval_arg;
    static auto* doc = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlDocument")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlElement*), "AppendChildForLoad", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{newChild, doc});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlElement::IsValidChildType
// Il2CppName: IsValidChildType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::XmlElement::*)(::System::Xml::XmlNodeType)>(&System::Xml::XmlElement::IsValidChildType)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlNodeType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlElement*), "IsValidChildType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlElement::RemoveAll
// Il2CppName: RemoveAll
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlElement::*)()>(&System::Xml::XmlElement::RemoveAll)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlElement*), "RemoveAll", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlElement::SetParent
// Il2CppName: SetParent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlElement::*)(::System::Xml::XmlNode*)>(&System::Xml::XmlElement::SetParent)> {
  static const MethodInfo* get() {
    static auto* node = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlElement*), "SetParent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{node});
  }
};
