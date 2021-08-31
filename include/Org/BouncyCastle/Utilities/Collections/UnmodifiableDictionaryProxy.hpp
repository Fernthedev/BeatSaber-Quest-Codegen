// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Utilities.Collections.UnmodifiableDictionary
#include "Org/BouncyCastle/Utilities/Collections/UnmodifiableDictionary.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Skipping declaration: IDictionary because it is already included!
  // Skipping declaration: ICollection because it is already included!
  // Forward declaring type: IDictionaryEnumerator
  class IDictionaryEnumerator;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Array
  class Array;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Utilities.Collections
namespace Org::BouncyCastle::Utilities::Collections {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Utilities.Collections.UnmodifiableDictionaryProxy
  // [TokenAttribute] Offset: FFFFFFFF
  class UnmodifiableDictionaryProxy : public Org::BouncyCastle::Utilities::Collections::UnmodifiableDictionary {
    public:
    // private readonly System.Collections.IDictionary d
    // Size: 0x8
    // Offset: 0x10
    System::Collections::IDictionary* d;
    // Field size check
    static_assert(sizeof(System::Collections::IDictionary*) == 0x8);
    // Creating value type constructor for type: UnmodifiableDictionaryProxy
    UnmodifiableDictionaryProxy(System::Collections::IDictionary* d_ = {}) noexcept : d{d_} {}
    // Creating conversion operator: operator System::Collections::IDictionary*
    constexpr operator System::Collections::IDictionary*() const noexcept {
      return d;
    }
    // Get instance field reference: private readonly System.Collections.IDictionary d
    System::Collections::IDictionary*& dyn_d();
    // public System.Void .ctor(System.Collections.IDictionary d)
    // Offset: 0x1FEB834
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnmodifiableDictionaryProxy* New_ctor(System::Collections::IDictionary* d) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Utilities::Collections::UnmodifiableDictionaryProxy::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnmodifiableDictionaryProxy*, creationType>(d)));
    }
    // public override System.Int32 get_Count()
    // Offset: 0x1FEB9EC
    // Implemented from: Org.BouncyCastle.Utilities.Collections.UnmodifiableDictionary
    // Base method: System.Int32 UnmodifiableDictionary::get_Count()
    int get_Count();
    // public override System.Collections.ICollection get_Keys()
    // Offset: 0x1FEBB54
    // Implemented from: Org.BouncyCastle.Utilities.Collections.UnmodifiableDictionary
    // Base method: System.Collections.ICollection UnmodifiableDictionary::get_Keys()
    System::Collections::ICollection* get_Keys();
    // public override System.Boolean Contains(System.Object k)
    // Offset: 0x1FEB860
    // Implemented from: Org.BouncyCastle.Utilities.Collections.UnmodifiableDictionary
    // Base method: System.Boolean UnmodifiableDictionary::Contains(System.Object k)
    bool Contains(::Il2CppObject* k);
    // public override System.Void CopyTo(System.Array array, System.Int32 index)
    // Offset: 0x1FEB924
    // Implemented from: Org.BouncyCastle.Utilities.Collections.UnmodifiableDictionary
    // Base method: System.Void UnmodifiableDictionary::CopyTo(System.Array array, System.Int32 index)
    void CopyTo(System::Array* array, int index);
    // public override System.Collections.IDictionaryEnumerator GetEnumerator()
    // Offset: 0x1FEBAA0
    // Implemented from: Org.BouncyCastle.Utilities.Collections.UnmodifiableDictionary
    // Base method: System.Collections.IDictionaryEnumerator UnmodifiableDictionary::GetEnumerator()
    System::Collections::IDictionaryEnumerator* GetEnumerator();
    // protected override System.Object GetValue(System.Object k)
    // Offset: 0x1FEBC08
    // Implemented from: Org.BouncyCastle.Utilities.Collections.UnmodifiableDictionary
    // Base method: System.Object UnmodifiableDictionary::GetValue(System.Object k)
    ::Il2CppObject* GetValue(::Il2CppObject* k);
  }; // Org.BouncyCastle.Utilities.Collections.UnmodifiableDictionaryProxy
  #pragma pack(pop)
  static check_size<sizeof(UnmodifiableDictionaryProxy), 16 + sizeof(System::Collections::IDictionary*)> __Org_BouncyCastle_Utilities_Collections_UnmodifiableDictionaryProxySizeCheck;
  static_assert(sizeof(UnmodifiableDictionaryProxy) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Utilities::Collections::UnmodifiableDictionaryProxy*, "Org.BouncyCastle.Utilities.Collections", "UnmodifiableDictionaryProxy");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Utilities::Collections::UnmodifiableDictionaryProxy::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Utilities::Collections::UnmodifiableDictionaryProxy::get_Count
// Il2CppName: get_Count
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Utilities::Collections::UnmodifiableDictionaryProxy::*)()>(&Org::BouncyCastle::Utilities::Collections::UnmodifiableDictionaryProxy::get_Count)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Utilities::Collections::UnmodifiableDictionaryProxy*), "get_Count", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Utilities::Collections::UnmodifiableDictionaryProxy::get_Keys
// Il2CppName: get_Keys
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::ICollection* (Org::BouncyCastle::Utilities::Collections::UnmodifiableDictionaryProxy::*)()>(&Org::BouncyCastle::Utilities::Collections::UnmodifiableDictionaryProxy::get_Keys)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Utilities::Collections::UnmodifiableDictionaryProxy*), "get_Keys", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Utilities::Collections::UnmodifiableDictionaryProxy::Contains
// Il2CppName: Contains
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Utilities::Collections::UnmodifiableDictionaryProxy::*)(::Il2CppObject*)>(&Org::BouncyCastle::Utilities::Collections::UnmodifiableDictionaryProxy::Contains)> {
  static const MethodInfo* get() {
    static auto* k = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Utilities::Collections::UnmodifiableDictionaryProxy*), "Contains", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{k});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Utilities::Collections::UnmodifiableDictionaryProxy::CopyTo
// Il2CppName: CopyTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Utilities::Collections::UnmodifiableDictionaryProxy::*)(System::Array*, int)>(&Org::BouncyCastle::Utilities::Collections::UnmodifiableDictionaryProxy::CopyTo)> {
  static const MethodInfo* get() {
    static auto* array = &::il2cpp_utils::GetClassFromName("System", "Array")->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Utilities::Collections::UnmodifiableDictionaryProxy*), "CopyTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{array, index});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Utilities::Collections::UnmodifiableDictionaryProxy::GetEnumerator
// Il2CppName: GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IDictionaryEnumerator* (Org::BouncyCastle::Utilities::Collections::UnmodifiableDictionaryProxy::*)()>(&Org::BouncyCastle::Utilities::Collections::UnmodifiableDictionaryProxy::GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Utilities::Collections::UnmodifiableDictionaryProxy*), "GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Utilities::Collections::UnmodifiableDictionaryProxy::GetValue
// Il2CppName: GetValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (Org::BouncyCastle::Utilities::Collections::UnmodifiableDictionaryProxy::*)(::Il2CppObject*)>(&Org::BouncyCastle::Utilities::Collections::UnmodifiableDictionaryProxy::GetValue)> {
  static const MethodInfo* get() {
    static auto* k = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Utilities::Collections::UnmodifiableDictionaryProxy*), "GetValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{k});
  }
};
