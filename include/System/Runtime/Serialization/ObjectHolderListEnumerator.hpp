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
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: ObjectHolderList
  class ObjectHolderList;
  // Forward declaring type: ObjectHolder
  class ObjectHolder;
}
// Completed forward declares
// Type namespace: System.Runtime.Serialization
namespace System::Runtime::Serialization {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Serialization.ObjectHolderListEnumerator
  // [TokenAttribute] Offset: FFFFFFFF
  class ObjectHolderListEnumerator : public ::Il2CppObject {
    public:
    // private System.Boolean m_isFixupEnumerator
    // Size: 0x1
    // Offset: 0x10
    bool m_isFixupEnumerator;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_isFixupEnumerator and: m_list
    char __padding0[0x7] = {};
    // private System.Runtime.Serialization.ObjectHolderList m_list
    // Size: 0x8
    // Offset: 0x18
    System::Runtime::Serialization::ObjectHolderList* m_list;
    // Field size check
    static_assert(sizeof(System::Runtime::Serialization::ObjectHolderList*) == 0x8);
    // private System.Int32 m_startingVersion
    // Size: 0x4
    // Offset: 0x20
    int m_startingVersion;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 m_currPos
    // Size: 0x4
    // Offset: 0x24
    int m_currPos;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: ObjectHolderListEnumerator
    ObjectHolderListEnumerator(bool m_isFixupEnumerator_ = {}, System::Runtime::Serialization::ObjectHolderList* m_list_ = {}, int m_startingVersion_ = {}, int m_currPos_ = {}) noexcept : m_isFixupEnumerator{m_isFixupEnumerator_}, m_list{m_list_}, m_startingVersion{m_startingVersion_}, m_currPos{m_currPos_} {}
    // Get instance field reference: private System.Boolean m_isFixupEnumerator
    bool& dyn_m_isFixupEnumerator();
    // Get instance field reference: private System.Runtime.Serialization.ObjectHolderList m_list
    System::Runtime::Serialization::ObjectHolderList*& dyn_m_list();
    // Get instance field reference: private System.Int32 m_startingVersion
    int& dyn_m_startingVersion();
    // Get instance field reference: private System.Int32 m_currPos
    int& dyn_m_currPos();
    // System.Runtime.Serialization.ObjectHolder get_Current()
    // Offset: 0x16BE130
    System::Runtime::Serialization::ObjectHolder* get_Current();
    // System.Void .ctor(System.Runtime.Serialization.ObjectHolderList list, System.Boolean isFixupEnumerator)
    // Offset: 0x16BE018
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ObjectHolderListEnumerator* New_ctor(System::Runtime::Serialization::ObjectHolderList* list, bool isFixupEnumerator) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Serialization::ObjectHolderListEnumerator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ObjectHolderListEnumerator*, creationType>(list, isFixupEnumerator)));
    }
    // System.Boolean MoveNext()
    // Offset: 0x16BE07C
    bool MoveNext();
  }; // System.Runtime.Serialization.ObjectHolderListEnumerator
  #pragma pack(pop)
  static check_size<sizeof(ObjectHolderListEnumerator), 36 + sizeof(int)> __System_Runtime_Serialization_ObjectHolderListEnumeratorSizeCheck;
  static_assert(sizeof(ObjectHolderListEnumerator) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::ObjectHolderListEnumerator*, "System.Runtime.Serialization", "ObjectHolderListEnumerator");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Serialization::ObjectHolderListEnumerator::get_Current
// Il2CppName: get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::Serialization::ObjectHolder* (System::Runtime::Serialization::ObjectHolderListEnumerator::*)()>(&System::Runtime::Serialization::ObjectHolderListEnumerator::get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::ObjectHolderListEnumerator*), "get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::ObjectHolderListEnumerator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Runtime::Serialization::ObjectHolderListEnumerator::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Runtime::Serialization::ObjectHolderListEnumerator::*)()>(&System::Runtime::Serialization::ObjectHolderListEnumerator::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::ObjectHolderListEnumerator*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
