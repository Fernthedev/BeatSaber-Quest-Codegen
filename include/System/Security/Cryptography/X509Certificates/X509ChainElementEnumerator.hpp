// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Collections.IEnumerator
#include "System/Collections/IEnumerator.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::Cryptography::X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Forward declaring type: X509ChainElement
  class X509ChainElement;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerable
  class IEnumerable;
}
// Completed forward declares
// Type namespace: System.Security.Cryptography.X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.X509Certificates.X509ChainElementEnumerator
  // [TokenAttribute] Offset: FFFFFFFF
  class X509ChainElementEnumerator : public ::Il2CppObject/*, public System::Collections::IEnumerator*/ {
    public:
    // private System.Collections.IEnumerator enumerator
    // Size: 0x8
    // Offset: 0x10
    System::Collections::IEnumerator* enumerator;
    // Field size check
    static_assert(sizeof(System::Collections::IEnumerator*) == 0x8);
    // Creating value type constructor for type: X509ChainElementEnumerator
    X509ChainElementEnumerator(System::Collections::IEnumerator* enumerator_ = {}) noexcept : enumerator{enumerator_} {}
    // Creating interface conversion operator: operator System::Collections::IEnumerator
    operator System::Collections::IEnumerator() noexcept {
      return *reinterpret_cast<System::Collections::IEnumerator*>(this);
    }
    // Creating conversion operator: operator System::Collections::IEnumerator*
    constexpr operator System::Collections::IEnumerator*() const noexcept {
      return enumerator;
    }
    // Get instance field reference: private System.Collections.IEnumerator enumerator
    System::Collections::IEnumerator*& dyn_enumerator();
    // public System.Security.Cryptography.X509Certificates.X509ChainElement get_Current()
    // Offset: 0x18687F8
    System::Security::Cryptography::X509Certificates::X509ChainElement* get_Current();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x18688EC
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // System.Void .ctor(System.Collections.IEnumerable enumerable)
    // Offset: 0x1868504
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static X509ChainElementEnumerator* New_ctor(System::Collections::IEnumerable* enumerable) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Cryptography::X509Certificates::X509ChainElementEnumerator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<X509ChainElementEnumerator*, creationType>(enumerable)));
    }
    // public System.Boolean MoveNext()
    // Offset: 0x18689A0
    bool MoveNext();
    // public System.Void Reset()
    // Offset: 0x1868A50
    void Reset();
  }; // System.Security.Cryptography.X509Certificates.X509ChainElementEnumerator
  #pragma pack(pop)
  static check_size<sizeof(X509ChainElementEnumerator), 16 + sizeof(System::Collections::IEnumerator*)> __System_Security_Cryptography_X509Certificates_X509ChainElementEnumeratorSizeCheck;
  static_assert(sizeof(X509ChainElementEnumerator) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::X509Certificates::X509ChainElementEnumerator*, "System.Security.Cryptography.X509Certificates", "X509ChainElementEnumerator");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509ChainElementEnumerator::get_Current
// Il2CppName: get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::Cryptography::X509Certificates::X509ChainElement* (System::Security::Cryptography::X509Certificates::X509ChainElementEnumerator::*)()>(&System::Security::Cryptography::X509Certificates::X509ChainElementEnumerator::get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509ChainElementEnumerator*), "get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509ChainElementEnumerator::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Security::Cryptography::X509Certificates::X509ChainElementEnumerator::*)()>(&System::Security::Cryptography::X509Certificates::X509ChainElementEnumerator::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509ChainElementEnumerator*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509ChainElementEnumerator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509ChainElementEnumerator::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Security::Cryptography::X509Certificates::X509ChainElementEnumerator::*)()>(&System::Security::Cryptography::X509Certificates::X509ChainElementEnumerator::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509ChainElementEnumerator*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509ChainElementEnumerator::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::X509Certificates::X509ChainElementEnumerator::*)()>(&System::Security::Cryptography::X509Certificates::X509ChainElementEnumerator::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509ChainElementEnumerator*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
