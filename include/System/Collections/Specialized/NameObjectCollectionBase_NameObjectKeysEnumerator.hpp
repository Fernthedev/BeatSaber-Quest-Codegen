// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Collections.Specialized.NameObjectCollectionBase
#include "System/Collections/Specialized/NameObjectCollectionBase.hpp"
// Including type: System.Collections.IEnumerator
#include "System/Collections/IEnumerator.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Collections.Specialized
namespace System::Collections::Specialized {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: System.Collections.Specialized.NameObjectCollectionBase/System.Collections.Specialized.NameObjectKeysEnumerator
  // [TokenAttribute] Offset: FFFFFFFF
  class NameObjectCollectionBase::NameObjectKeysEnumerator : public ::Il2CppObject/*, public System::Collections::IEnumerator*/ {
    public:
    // private System.Int32 _pos
    // Size: 0x4
    // Offset: 0x10
    int pos;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: pos and: coll
    char __padding0[0x4] = {};
    // private System.Collections.Specialized.NameObjectCollectionBase _coll
    // Size: 0x8
    // Offset: 0x18
    System::Collections::Specialized::NameObjectCollectionBase* coll;
    // Field size check
    static_assert(sizeof(System::Collections::Specialized::NameObjectCollectionBase*) == 0x8);
    // private System.Int32 _version
    // Size: 0x4
    // Offset: 0x20
    int version;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: NameObjectKeysEnumerator
    NameObjectKeysEnumerator(int pos_ = {}, System::Collections::Specialized::NameObjectCollectionBase* coll_ = {}, int version_ = {}) noexcept : pos{pos_}, coll{coll_}, version{version_} {}
    // Creating interface conversion operator: operator System::Collections::IEnumerator
    operator System::Collections::IEnumerator() noexcept {
      return *reinterpret_cast<System::Collections::IEnumerator*>(this);
    }
    // Get instance field: private System.Int32 _pos
    int _get__pos();
    // Set instance field: private System.Int32 _pos
    void _set__pos(int value);
    // Get instance field: private System.Collections.Specialized.NameObjectCollectionBase _coll
    System::Collections::Specialized::NameObjectCollectionBase* _get__coll();
    // Set instance field: private System.Collections.Specialized.NameObjectCollectionBase _coll
    void _set__coll(System::Collections::Specialized::NameObjectCollectionBase* value);
    // Get instance field: private System.Int32 _version
    int _get__version();
    // Set instance field: private System.Int32 _version
    void _set__version(int value);
    // public System.Object get_Current()
    // Offset: 0x18ACD80
    ::Il2CppObject* get_Current();
    // System.Void .ctor(System.Collections.Specialized.NameObjectCollectionBase coll)
    // Offset: 0x18AC7C4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NameObjectCollectionBase::NameObjectKeysEnumerator* New_ctor(System::Collections::Specialized::NameObjectCollectionBase* coll) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::Specialized::NameObjectCollectionBase::NameObjectKeysEnumerator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NameObjectCollectionBase::NameObjectKeysEnumerator*, creationType>(coll)));
    }
    // public System.Boolean MoveNext()
    // Offset: 0x18ACBF4
    bool MoveNext();
    // public System.Void Reset()
    // Offset: 0x18ACCDC
    void Reset();
  }; // System.Collections.Specialized.NameObjectCollectionBase/System.Collections.Specialized.NameObjectKeysEnumerator
  #pragma pack(pop)
  static check_size<sizeof(NameObjectCollectionBase::NameObjectKeysEnumerator), 32 + sizeof(int)> __System_Collections_Specialized_NameObjectCollectionBase_NameObjectKeysEnumeratorSizeCheck;
  static_assert(sizeof(NameObjectCollectionBase::NameObjectKeysEnumerator) == 0x24);
}
DEFINE_IL2CPP_ARG_TYPE(System::Collections::Specialized::NameObjectCollectionBase::NameObjectKeysEnumerator*, "System.Collections.Specialized", "NameObjectCollectionBase/NameObjectKeysEnumerator");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Collections::Specialized::NameObjectCollectionBase::NameObjectKeysEnumerator::get_Current
// Il2CppName: get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Collections::Specialized::NameObjectCollectionBase::NameObjectKeysEnumerator::*)()>(&System::Collections::Specialized::NameObjectCollectionBase::NameObjectKeysEnumerator::get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Specialized::NameObjectCollectionBase::NameObjectKeysEnumerator*), "get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::Specialized::NameObjectCollectionBase::NameObjectKeysEnumerator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Collections::Specialized::NameObjectCollectionBase::NameObjectKeysEnumerator::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Collections::Specialized::NameObjectCollectionBase::NameObjectKeysEnumerator::*)()>(&System::Collections::Specialized::NameObjectCollectionBase::NameObjectKeysEnumerator::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Specialized::NameObjectCollectionBase::NameObjectKeysEnumerator*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::Specialized::NameObjectCollectionBase::NameObjectKeysEnumerator::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Specialized::NameObjectCollectionBase::NameObjectKeysEnumerator::*)()>(&System::Collections::Specialized::NameObjectCollectionBase::NameObjectKeysEnumerator::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Specialized::NameObjectCollectionBase::NameObjectKeysEnumerator*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
