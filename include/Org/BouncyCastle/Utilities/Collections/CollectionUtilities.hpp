// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IDictionary
  class IDictionary;
  // Forward declaring type: IEnumerator
  class IEnumerator;
  // Forward declaring type: IEnumerable
  class IEnumerable;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Utilities.Collections
namespace Org::BouncyCastle::Utilities::Collections {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Utilities.Collections.CollectionUtilities
  class CollectionUtilities : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: CollectionUtilities
    CollectionUtilities() noexcept {}
    // static public System.Collections.IDictionary ReadOnly(System.Collections.IDictionary d)
    // Offset: 0x137EFF8
    static System::Collections::IDictionary* ReadOnly(System::Collections::IDictionary* d);
    // static public System.Object RequireNext(System.Collections.IEnumerator e)
    // Offset: 0x137F05C
    static ::Il2CppObject* RequireNext(System::Collections::IEnumerator* e);
    // static public System.String ToString(System.Collections.IEnumerable c)
    // Offset: 0x137F1A0
    static ::Il2CppString* ToString(System::Collections::IEnumerable* c);
  }; // Org.BouncyCastle.Utilities.Collections.CollectionUtilities
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Utilities::Collections::CollectionUtilities*, "Org.BouncyCastle.Utilities.Collections", "CollectionUtilities");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Utilities::Collections::CollectionUtilities::ReadOnly
// Il2CppName: ReadOnly
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IDictionary* (*)(System::Collections::IDictionary*)>(&Org::BouncyCastle::Utilities::Collections::CollectionUtilities::ReadOnly)> {
  const MethodInfo* get() {
    static auto* d = &::il2cpp_utils::GetClassFromName("System.Collections", "IDictionary")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Utilities::Collections::CollectionUtilities*), "ReadOnly", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{d});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Utilities::Collections::CollectionUtilities::RequireNext
// Il2CppName: RequireNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (*)(System::Collections::IEnumerator*)>(&Org::BouncyCastle::Utilities::Collections::CollectionUtilities::RequireNext)> {
  const MethodInfo* get() {
    static auto* e = &::il2cpp_utils::GetClassFromName("System.Collections", "IEnumerator")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Utilities::Collections::CollectionUtilities*), "RequireNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{e});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Utilities::Collections::CollectionUtilities::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(System::Collections::IEnumerable*)>(&Org::BouncyCastle::Utilities::Collections::CollectionUtilities::ToString)> {
  const MethodInfo* get() {
    static auto* c = &::il2cpp_utils::GetClassFromName("System.Collections", "IEnumerable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Utilities::Collections::CollectionUtilities*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c});
  }
};
