// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: LocalDataStoreElement
  class LocalDataStoreElement;
  // Forward declaring type: LocalDataStoreMgr
  class LocalDataStoreMgr;
  // Forward declaring type: LocalDataStoreSlot
  class LocalDataStoreSlot;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.LocalDataStore
  // [TokenAttribute] Offset: FFFFFFFF
  class LocalDataStore : public ::Il2CppObject {
    public:
    // private System.LocalDataStoreElement[] m_DataTable
    // Size: 0x8
    // Offset: 0x10
    ::Array<System::LocalDataStoreElement*>* m_DataTable;
    // Field size check
    static_assert(sizeof(::Array<System::LocalDataStoreElement*>*) == 0x8);
    // private System.LocalDataStoreMgr m_Manager
    // Size: 0x8
    // Offset: 0x18
    System::LocalDataStoreMgr* m_Manager;
    // Field size check
    static_assert(sizeof(System::LocalDataStoreMgr*) == 0x8);
    // Creating value type constructor for type: LocalDataStore
    LocalDataStore(::Array<System::LocalDataStoreElement*>* m_DataTable_ = {}, System::LocalDataStoreMgr* m_Manager_ = {}) noexcept : m_DataTable{m_DataTable_}, m_Manager{m_Manager_} {}
    // Get instance field: private System.LocalDataStoreElement[] m_DataTable
    ::Array<System::LocalDataStoreElement*>* _get_m_DataTable();
    // Set instance field: private System.LocalDataStoreElement[] m_DataTable
    void _set_m_DataTable(::Array<System::LocalDataStoreElement*>* value);
    // Get instance field: private System.LocalDataStoreMgr m_Manager
    System::LocalDataStoreMgr* _get_m_Manager();
    // Set instance field: private System.LocalDataStoreMgr m_Manager
    void _set_m_Manager(System::LocalDataStoreMgr* value);
    // public System.Void .ctor(System.LocalDataStoreMgr mgr, System.Int32 InitialCapacity)
    // Offset: 0x183502C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LocalDataStore* New_ctor(System::LocalDataStoreMgr* mgr, int InitialCapacity) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::LocalDataStore::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LocalDataStore*, creationType>(mgr, InitialCapacity)));
    }
    // System.Void Dispose()
    // Offset: 0x18350A4
    void Dispose();
    // public System.Object GetData(System.LocalDataStoreSlot slot)
    // Offset: 0x1835190
    ::Il2CppObject* GetData(System::LocalDataStoreSlot* slot);
    // public System.Void SetData(System.LocalDataStoreSlot slot, System.Object data)
    // Offset: 0x1835344
    void SetData(System::LocalDataStoreSlot* slot, ::Il2CppObject* data);
    // System.Void FreeData(System.Int32 slot, System.Int64 cookie)
    // Offset: 0x18356E4
    void FreeData(int slot, int64_t cookie);
    // private System.LocalDataStoreElement PopulateElement(System.LocalDataStoreSlot slot)
    // Offset: 0x1835458
    System::LocalDataStoreElement* PopulateElement(System::LocalDataStoreSlot* slot);
  }; // System.LocalDataStore
  #pragma pack(pop)
  static check_size<sizeof(LocalDataStore), 24 + sizeof(System::LocalDataStoreMgr*)> __System_LocalDataStoreSizeCheck;
  static_assert(sizeof(LocalDataStore) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(System::LocalDataStore*, "System", "LocalDataStore");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::LocalDataStore::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::LocalDataStore::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::LocalDataStore::*)()>(&System::LocalDataStore::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::LocalDataStore*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::LocalDataStore::GetData
// Il2CppName: GetData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::LocalDataStore::*)(System::LocalDataStoreSlot*)>(&System::LocalDataStore::GetData)> {
  static const MethodInfo* get() {
    static auto* slot = &::il2cpp_utils::GetClassFromName("System", "LocalDataStoreSlot")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::LocalDataStore*), "GetData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{slot});
  }
};
// Writing MetadataGetter for method: System::LocalDataStore::SetData
// Il2CppName: SetData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::LocalDataStore::*)(System::LocalDataStoreSlot*, ::Il2CppObject*)>(&System::LocalDataStore::SetData)> {
  static const MethodInfo* get() {
    static auto* slot = &::il2cpp_utils::GetClassFromName("System", "LocalDataStoreSlot")->byval_arg;
    static auto* data = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::LocalDataStore*), "SetData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{slot, data});
  }
};
// Writing MetadataGetter for method: System::LocalDataStore::FreeData
// Il2CppName: FreeData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::LocalDataStore::*)(int, int64_t)>(&System::LocalDataStore::FreeData)> {
  static const MethodInfo* get() {
    static auto* slot = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* cookie = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::LocalDataStore*), "FreeData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{slot, cookie});
  }
};
// Writing MetadataGetter for method: System::LocalDataStore::PopulateElement
// Il2CppName: PopulateElement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::LocalDataStoreElement* (System::LocalDataStore::*)(System::LocalDataStoreSlot*)>(&System::LocalDataStore::PopulateElement)> {
  static const MethodInfo* get() {
    static auto* slot = &::il2cpp_utils::GetClassFromName("System", "LocalDataStoreSlot")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::LocalDataStore*), "PopulateElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{slot});
  }
};
