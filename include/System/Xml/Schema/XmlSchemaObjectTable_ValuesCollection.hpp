// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Xml.Schema.XmlSchemaObjectTable
#include "System/Xml/Schema/XmlSchemaObjectTable.hpp"
// Including type: System.Collections.ICollection
#include "System/Collections/ICollection.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Array
  class Array;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(System::Xml::Schema::XmlSchemaObjectTable::ValuesCollection);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::Schema::XmlSchemaObjectTable::ValuesCollection*, "System.Xml.Schema", "XmlSchemaObjectTable/ValuesCollection");
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Schema.XmlSchemaObjectTable/System.Xml.Schema.ValuesCollection
  // [TokenAttribute] Offset: FFFFFFFF
  class XmlSchemaObjectTable::ValuesCollection : public ::Il2CppObject/*, public System::Collections::ICollection*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private System.Collections.Generic.List`1<System.Xml.Schema.XmlSchemaObjectTable/System.Xml.Schema.XmlSchemaObjectEntry> entries
    // Size: 0x8
    // Offset: 0x10
    System::Collections::Generic::List_1<System::Xml::Schema::XmlSchemaObjectTable::XmlSchemaObjectEntry>* entries;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<System::Xml::Schema::XmlSchemaObjectTable::XmlSchemaObjectEntry>*) == 0x8);
    // private System.Int32 size
    // Size: 0x4
    // Offset: 0x18
    int size;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating interface conversion operator: operator System::Collections::ICollection
    operator System::Collections::ICollection() noexcept {
      return *reinterpret_cast<System::Collections::ICollection*>(this);
    }
    // Get instance field reference: private System.Collections.Generic.List`1<System.Xml.Schema.XmlSchemaObjectTable/System.Xml.Schema.XmlSchemaObjectEntry> entries
    System::Collections::Generic::List_1<System::Xml::Schema::XmlSchemaObjectTable::XmlSchemaObjectEntry>*& dyn_entries();
    // Get instance field reference: private System.Int32 size
    int& dyn_size();
    // public System.Int32 get_Count()
    // Offset: 0x18BE878
    int get_Count();
    // public System.Object get_SyncRoot()
    // Offset: 0x18BE880
    ::Il2CppObject* get_SyncRoot();
    // System.Void .ctor(System.Collections.Generic.List`1<System.Xml.Schema.XmlSchemaObjectTable/System.Xml.Schema.XmlSchemaObjectEntry> entries, System.Int32 size)
    // Offset: 0x18BE750
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlSchemaObjectTable::ValuesCollection* New_ctor(System::Collections::Generic::List_1<System::Xml::Schema::XmlSchemaObjectTable::XmlSchemaObjectEntry>* entries, int size) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Xml::Schema::XmlSchemaObjectTable::ValuesCollection::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlSchemaObjectTable::ValuesCollection*, creationType>(entries, size)));
    }
    // public System.Void CopyTo(System.Array array, System.Int32 arrayIndex)
    // Offset: 0x18BE934
    void CopyTo(System::Array* array, int arrayIndex);
    // public System.Collections.IEnumerator GetEnumerator()
    // Offset: 0x18BEA6C
    System::Collections::IEnumerator* GetEnumerator();
  }; // System.Xml.Schema.XmlSchemaObjectTable/System.Xml.Schema.ValuesCollection
  #pragma pack(pop)
  static check_size<sizeof(XmlSchemaObjectTable::ValuesCollection), 24 + sizeof(int)> __System_Xml_Schema_XmlSchemaObjectTable_ValuesCollectionSizeCheck;
  static_assert(sizeof(XmlSchemaObjectTable::ValuesCollection) == 0x1C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaObjectTable::ValuesCollection::get_Count
// Il2CppName: get_Count
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Xml::Schema::XmlSchemaObjectTable::ValuesCollection::*)()>(&System::Xml::Schema::XmlSchemaObjectTable::ValuesCollection::get_Count)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaObjectTable::ValuesCollection*), "get_Count", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaObjectTable::ValuesCollection::get_SyncRoot
// Il2CppName: get_SyncRoot
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Xml::Schema::XmlSchemaObjectTable::ValuesCollection::*)()>(&System::Xml::Schema::XmlSchemaObjectTable::ValuesCollection::get_SyncRoot)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaObjectTable::ValuesCollection*), "get_SyncRoot", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaObjectTable::ValuesCollection::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaObjectTable::ValuesCollection::CopyTo
// Il2CppName: CopyTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::XmlSchemaObjectTable::ValuesCollection::*)(System::Array*, int)>(&System::Xml::Schema::XmlSchemaObjectTable::ValuesCollection::CopyTo)> {
  static const MethodInfo* get() {
    static auto* array = &::il2cpp_utils::GetClassFromName("System", "Array")->byval_arg;
    static auto* arrayIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaObjectTable::ValuesCollection*), "CopyTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{array, arrayIndex});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaObjectTable::ValuesCollection::GetEnumerator
// Il2CppName: GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator* (System::Xml::Schema::XmlSchemaObjectTable::ValuesCollection::*)()>(&System::Xml::Schema::XmlSchemaObjectTable::ValuesCollection::GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaObjectTable::ValuesCollection*), "GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
