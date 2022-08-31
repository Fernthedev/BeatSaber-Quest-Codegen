// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Xml.XmlNamedNodeMap
#include "System/Xml/XmlNamedNodeMap.hpp"
// Including type: System.Collections.ICollection
#include "System/Collections/ICollection.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Xml
namespace System::Xml {
  // Forward declaring type: XmlAttribute
  class XmlAttribute;
  // Forward declaring type: XmlNode
  class XmlNode;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Array
  class Array;
}
// Completed forward declares
// Type namespace: System.Xml
namespace System::Xml {
  // Forward declaring type: XmlAttributeCollection
  class XmlAttributeCollection;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::XmlAttributeCollection);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlAttributeCollection*, "System.Xml", "XmlAttributeCollection");
// Type namespace: System.Xml
namespace System::Xml {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.XmlAttributeCollection
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: 104D040
  class XmlAttributeCollection : public ::System::Xml::XmlNamedNodeMap/*, public ::System::Collections::ICollection*/ {
    public:
    // Creating interface conversion operator: operator ::System::Collections::ICollection
    operator ::System::Collections::ICollection() noexcept {
      return *reinterpret_cast<::System::Collections::ICollection*>(this);
    }
    // Creating interface conversion operator: i_ICollection
    inline ::System::Collections::ICollection* i_ICollection() noexcept {
      return reinterpret_cast<::System::Collections::ICollection*>(this);
    }
    // public System.Xml.XmlAttribute get_ItemOf(System.Int32 i)
    // Offset: 0x1BB8A9C
    ::System::Xml::XmlAttribute* get_ItemOf(int i);
    // private System.Object System.Collections.ICollection.get_SyncRoot()
    // Offset: 0x1BB9360
    ::Il2CppObject* System_Collections_ICollection_get_SyncRoot();
    // private System.Int32 System.Collections.ICollection.get_Count()
    // Offset: 0x1BB9364
    int System_Collections_ICollection_get_Count();
    // public System.Xml.XmlAttribute Append(System.Xml.XmlAttribute node)
    // Offset: 0x1BB8E3C
    ::System::Xml::XmlAttribute* Append(::System::Xml::XmlAttribute* node);
    // public System.Xml.XmlAttribute Remove(System.Xml.XmlAttribute node)
    // Offset: 0x1BB9134
    ::System::Xml::XmlAttribute* Remove(::System::Xml::XmlAttribute* node);
    // public System.Xml.XmlAttribute RemoveAt(System.Int32 i)
    // Offset: 0x1BB91C8
    ::System::Xml::XmlAttribute* RemoveAt(int i);
    // public System.Void RemoveAll()
    // Offset: 0x1BB9284
    void RemoveAll();
    // private System.Void System.Collections.ICollection.CopyTo(System.Array array, System.Int32 index)
    // Offset: 0x1BB92D0
    void System_Collections_ICollection_CopyTo(::System::Array* array, int index);
    // System.Void Detach(System.Xml.XmlAttribute attr)
    // Offset: 0x1BB8F80
    void Detach(::System::Xml::XmlAttribute* attr);
    // System.Void InsertParentIntoElementIdAttrMap(System.Xml.XmlAttribute attr)
    // Offset: 0x1BB8FD4
    void InsertParentIntoElementIdAttrMap(::System::Xml::XmlAttribute* attr);
    // System.Void RemoveParentFromElementIdAttrMap(System.Xml.XmlAttribute attr)
    // Offset: 0x1BB97C8
    void RemoveParentFromElementIdAttrMap(::System::Xml::XmlAttribute* attr);
    // System.Int32 RemoveDuplicateAttribute(System.Xml.XmlAttribute attr)
    // Offset: 0x1BB9458
    int RemoveDuplicateAttribute(::System::Xml::XmlAttribute* attr);
    // System.Boolean PrepareParentInElementIdAttrMap(System.String attrPrefix, System.String attrLocalName)
    // Offset: 0x1BB8390
    bool PrepareParentInElementIdAttrMap(::StringW attrPrefix, ::StringW attrLocalName);
    // System.Void ResetParentInElementIdAttrMap(System.String oldVal, System.String newVal)
    // Offset: 0x1BB848C
    void ResetParentInElementIdAttrMap(::StringW oldVal, ::StringW newVal);
    // System.Xml.XmlAttribute InternalAppendAttribute(System.Xml.XmlAttribute node)
    // Offset: 0x1BB8D8C
    ::System::Xml::XmlAttribute* InternalAppendAttribute(::System::Xml::XmlAttribute* node);
    // System.Void .ctor(System.Xml.XmlNode parent)
    // Offset: 0x1BB8A94
    // Implemented from: System.Xml.XmlNamedNodeMap
    // Base method: System.Void XmlNamedNodeMap::.ctor(System.Xml.XmlNode parent)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlAttributeCollection* New_ctor(::System::Xml::XmlNode* parent) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::XmlAttributeCollection::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlAttributeCollection*, creationType>(parent)));
    }
    // public override System.Xml.XmlNode SetNamedItem(System.Xml.XmlNode node)
    // Offset: 0x1BB8BF0
    // Implemented from: System.Xml.XmlNamedNodeMap
    // Base method: System.Xml.XmlNode XmlNamedNodeMap::SetNamedItem(System.Xml.XmlNode node)
    ::System::Xml::XmlNode* SetNamedItem(::System::Xml::XmlNode* node);
    // override System.Xml.XmlNode AddNode(System.Xml.XmlNode node)
    // Offset: 0x1BB936C
    // Implemented from: System.Xml.XmlNamedNodeMap
    // Base method: System.Xml.XmlNode XmlNamedNodeMap::AddNode(System.Xml.XmlNode node)
    ::System::Xml::XmlNode* AddNode(::System::Xml::XmlNode* node);
    // override System.Xml.XmlNode InsertNodeAt(System.Int32 i, System.Xml.XmlNode node)
    // Offset: 0x1BB956C
    // Implemented from: System.Xml.XmlNamedNodeMap
    // Base method: System.Xml.XmlNode XmlNamedNodeMap::InsertNodeAt(System.Int32 i, System.Xml.XmlNode node)
    ::System::Xml::XmlNode* InsertNodeAt(int i, ::System::Xml::XmlNode* node);
    // override System.Xml.XmlNode RemoveNodeAt(System.Int32 i)
    // Offset: 0x1BB9624
    // Implemented from: System.Xml.XmlNamedNodeMap
    // Base method: System.Xml.XmlNode XmlNamedNodeMap::RemoveNodeAt(System.Int32 i)
    ::System::Xml::XmlNode* RemoveNodeAt(int i);
  }; // System.Xml.XmlAttributeCollection
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::XmlAttributeCollection::get_ItemOf
// Il2CppName: get_ItemOf
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlAttribute* (System::Xml::XmlAttributeCollection::*)(int)>(&System::Xml::XmlAttributeCollection::get_ItemOf)> {
  static const MethodInfo* get() {
    static auto* i = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlAttributeCollection*), "get_ItemOf", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{i});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlAttributeCollection::System_Collections_ICollection_get_SyncRoot
// Il2CppName: System.Collections.ICollection.get_SyncRoot
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Xml::XmlAttributeCollection::*)()>(&System::Xml::XmlAttributeCollection::System_Collections_ICollection_get_SyncRoot)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlAttributeCollection*), "System.Collections.ICollection.get_SyncRoot", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlAttributeCollection::System_Collections_ICollection_get_Count
// Il2CppName: System.Collections.ICollection.get_Count
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Xml::XmlAttributeCollection::*)()>(&System::Xml::XmlAttributeCollection::System_Collections_ICollection_get_Count)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlAttributeCollection*), "System.Collections.ICollection.get_Count", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlAttributeCollection::Append
// Il2CppName: Append
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlAttribute* (System::Xml::XmlAttributeCollection::*)(::System::Xml::XmlAttribute*)>(&System::Xml::XmlAttributeCollection::Append)> {
  static const MethodInfo* get() {
    static auto* node = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlAttribute")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlAttributeCollection*), "Append", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{node});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlAttributeCollection::Remove
// Il2CppName: Remove
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlAttribute* (System::Xml::XmlAttributeCollection::*)(::System::Xml::XmlAttribute*)>(&System::Xml::XmlAttributeCollection::Remove)> {
  static const MethodInfo* get() {
    static auto* node = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlAttribute")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlAttributeCollection*), "Remove", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{node});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlAttributeCollection::RemoveAt
// Il2CppName: RemoveAt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlAttribute* (System::Xml::XmlAttributeCollection::*)(int)>(&System::Xml::XmlAttributeCollection::RemoveAt)> {
  static const MethodInfo* get() {
    static auto* i = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlAttributeCollection*), "RemoveAt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{i});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlAttributeCollection::RemoveAll
// Il2CppName: RemoveAll
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlAttributeCollection::*)()>(&System::Xml::XmlAttributeCollection::RemoveAll)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlAttributeCollection*), "RemoveAll", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlAttributeCollection::System_Collections_ICollection_CopyTo
// Il2CppName: System.Collections.ICollection.CopyTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlAttributeCollection::*)(::System::Array*, int)>(&System::Xml::XmlAttributeCollection::System_Collections_ICollection_CopyTo)> {
  static const MethodInfo* get() {
    static auto* array = &::il2cpp_utils::GetClassFromName("System", "Array")->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlAttributeCollection*), "System.Collections.ICollection.CopyTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{array, index});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlAttributeCollection::Detach
// Il2CppName: Detach
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlAttributeCollection::*)(::System::Xml::XmlAttribute*)>(&System::Xml::XmlAttributeCollection::Detach)> {
  static const MethodInfo* get() {
    static auto* attr = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlAttribute")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlAttributeCollection*), "Detach", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{attr});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlAttributeCollection::InsertParentIntoElementIdAttrMap
// Il2CppName: InsertParentIntoElementIdAttrMap
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlAttributeCollection::*)(::System::Xml::XmlAttribute*)>(&System::Xml::XmlAttributeCollection::InsertParentIntoElementIdAttrMap)> {
  static const MethodInfo* get() {
    static auto* attr = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlAttribute")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlAttributeCollection*), "InsertParentIntoElementIdAttrMap", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{attr});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlAttributeCollection::RemoveParentFromElementIdAttrMap
// Il2CppName: RemoveParentFromElementIdAttrMap
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlAttributeCollection::*)(::System::Xml::XmlAttribute*)>(&System::Xml::XmlAttributeCollection::RemoveParentFromElementIdAttrMap)> {
  static const MethodInfo* get() {
    static auto* attr = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlAttribute")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlAttributeCollection*), "RemoveParentFromElementIdAttrMap", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{attr});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlAttributeCollection::RemoveDuplicateAttribute
// Il2CppName: RemoveDuplicateAttribute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Xml::XmlAttributeCollection::*)(::System::Xml::XmlAttribute*)>(&System::Xml::XmlAttributeCollection::RemoveDuplicateAttribute)> {
  static const MethodInfo* get() {
    static auto* attr = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlAttribute")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlAttributeCollection*), "RemoveDuplicateAttribute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{attr});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlAttributeCollection::PrepareParentInElementIdAttrMap
// Il2CppName: PrepareParentInElementIdAttrMap
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::XmlAttributeCollection::*)(::StringW, ::StringW)>(&System::Xml::XmlAttributeCollection::PrepareParentInElementIdAttrMap)> {
  static const MethodInfo* get() {
    static auto* attrPrefix = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* attrLocalName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlAttributeCollection*), "PrepareParentInElementIdAttrMap", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{attrPrefix, attrLocalName});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlAttributeCollection::ResetParentInElementIdAttrMap
// Il2CppName: ResetParentInElementIdAttrMap
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlAttributeCollection::*)(::StringW, ::StringW)>(&System::Xml::XmlAttributeCollection::ResetParentInElementIdAttrMap)> {
  static const MethodInfo* get() {
    static auto* oldVal = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* newVal = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlAttributeCollection*), "ResetParentInElementIdAttrMap", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{oldVal, newVal});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlAttributeCollection::InternalAppendAttribute
// Il2CppName: InternalAppendAttribute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlAttribute* (System::Xml::XmlAttributeCollection::*)(::System::Xml::XmlAttribute*)>(&System::Xml::XmlAttributeCollection::InternalAppendAttribute)> {
  static const MethodInfo* get() {
    static auto* node = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlAttribute")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlAttributeCollection*), "InternalAppendAttribute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{node});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlAttributeCollection::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::XmlAttributeCollection::SetNamedItem
// Il2CppName: SetNamedItem
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlNode* (System::Xml::XmlAttributeCollection::*)(::System::Xml::XmlNode*)>(&System::Xml::XmlAttributeCollection::SetNamedItem)> {
  static const MethodInfo* get() {
    static auto* node = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlAttributeCollection*), "SetNamedItem", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{node});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlAttributeCollection::AddNode
// Il2CppName: AddNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlNode* (System::Xml::XmlAttributeCollection::*)(::System::Xml::XmlNode*)>(&System::Xml::XmlAttributeCollection::AddNode)> {
  static const MethodInfo* get() {
    static auto* node = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlAttributeCollection*), "AddNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{node});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlAttributeCollection::InsertNodeAt
// Il2CppName: InsertNodeAt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlNode* (System::Xml::XmlAttributeCollection::*)(int, ::System::Xml::XmlNode*)>(&System::Xml::XmlAttributeCollection::InsertNodeAt)> {
  static const MethodInfo* get() {
    static auto* i = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* node = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlAttributeCollection*), "InsertNodeAt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{i, node});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlAttributeCollection::RemoveNodeAt
// Il2CppName: RemoveNodeAt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlNode* (System::Xml::XmlAttributeCollection::*)(int)>(&System::Xml::XmlAttributeCollection::RemoveNodeAt)> {
  static const MethodInfo* get() {
    static auto* i = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlAttributeCollection*), "RemoveNodeAt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{i});
  }
};
