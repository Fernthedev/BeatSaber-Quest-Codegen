// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Collections.IEqualityComparer
#include "System/Collections/IEqualityComparer.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IComparer
  class IComparer;
  // Forward declaring type: IHashCodeProvider
  class IHashCodeProvider;
}
// Completed forward declares
// Type namespace: System.Collections.Specialized
namespace System::Collections::Specialized {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Collections.Specialized.CompatibleComparer
  class CompatibleComparer : public ::Il2CppObject/*, public System::Collections::IEqualityComparer*/ {
    public:
    // private System.Collections.IComparer _comparer
    // Size: 0x8
    // Offset: 0x10
    System::Collections::IComparer* comparer;
    // Field size check
    static_assert(sizeof(System::Collections::IComparer*) == 0x8);
    // private System.Collections.IHashCodeProvider _hcp
    // Size: 0x8
    // Offset: 0x18
    System::Collections::IHashCodeProvider* hcp;
    // Field size check
    static_assert(sizeof(System::Collections::IHashCodeProvider*) == 0x8);
    // Creating value type constructor for type: CompatibleComparer
    CompatibleComparer(System::Collections::IComparer* comparer_ = {}, System::Collections::IHashCodeProvider* hcp_ = {}) noexcept : comparer{comparer_}, hcp{hcp_} {}
    // Creating interface conversion operator: operator System::Collections::IEqualityComparer
    operator System::Collections::IEqualityComparer() noexcept {
      return *reinterpret_cast<System::Collections::IEqualityComparer*>(this);
    }
    // Get static field: static private System.Collections.IComparer defaultComparer
    static System::Collections::IComparer* _get_defaultComparer();
    // Set static field: static private System.Collections.IComparer defaultComparer
    static void _set_defaultComparer(System::Collections::IComparer* value);
    // Get static field: static private System.Collections.IHashCodeProvider defaultHashProvider
    static System::Collections::IHashCodeProvider* _get_defaultHashProvider();
    // Set static field: static private System.Collections.IHashCodeProvider defaultHashProvider
    static void _set_defaultHashProvider(System::Collections::IHashCodeProvider* value);
    // System.Void .ctor(System.Collections.IComparer comparer, System.Collections.IHashCodeProvider hashCodeProvider)
    // Offset: 0x1861608
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CompatibleComparer* New_ctor(System::Collections::IComparer* comparer, System::Collections::IHashCodeProvider* hashCodeProvider) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::Specialized::CompatibleComparer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CompatibleComparer*, creationType>(comparer, hashCodeProvider)));
    }
    // public System.Boolean Equals(System.Object a, System.Object b)
    // Offset: 0x1861640
    bool Equals(::Il2CppObject* a, ::Il2CppObject* b);
    // public System.Int32 GetHashCode(System.Object obj)
    // Offset: 0x186184C
    int GetHashCode(::Il2CppObject* obj);
    // public System.Collections.IComparer get_Comparer()
    // Offset: 0x1861964
    System::Collections::IComparer* get_Comparer();
    // public System.Collections.IHashCodeProvider get_HashCodeProvider()
    // Offset: 0x186196C
    System::Collections::IHashCodeProvider* get_HashCodeProvider();
    // static public System.Collections.IComparer get_DefaultComparer()
    // Offset: 0x1861974
    static System::Collections::IComparer* get_DefaultComparer();
    // static public System.Collections.IHashCodeProvider get_DefaultHashCodeProvider()
    // Offset: 0x1861A48
    static System::Collections::IHashCodeProvider* get_DefaultHashCodeProvider();
  }; // System.Collections.Specialized.CompatibleComparer
  #pragma pack(pop)
  static check_size<sizeof(CompatibleComparer), 24 + sizeof(System::Collections::IHashCodeProvider*)> __System_Collections_Specialized_CompatibleComparerSizeCheck;
  static_assert(sizeof(CompatibleComparer) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(System::Collections::Specialized::CompatibleComparer*, "System.Collections.Specialized", "CompatibleComparer");
// Writing includes for template specializations
#include "System/Collections/IComparer.hpp"
#include "System/Collections/IHashCodeProvider.hpp"
// Writing MetadataGetter for method: System::Collections::Specialized::CompatibleComparer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Collections::Specialized::CompatibleComparer::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Collections::Specialized::CompatibleComparer::*)(::Il2CppObject*, ::Il2CppObject*)>(&System::Collections::Specialized::CompatibleComparer::Equals)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Specialized::CompatibleComparer*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>()});
  }
};
// Writing MetadataGetter for method: System::Collections::Specialized::CompatibleComparer::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Collections::Specialized::CompatibleComparer::*)(::Il2CppObject*)>(&System::Collections::Specialized::CompatibleComparer::GetHashCode)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Specialized::CompatibleComparer*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>()});
  }
};
// Writing MetadataGetter for method: System::Collections::Specialized::CompatibleComparer::get_Comparer
// Il2CppName: get_Comparer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IComparer* (System::Collections::Specialized::CompatibleComparer::*)()>(&System::Collections::Specialized::CompatibleComparer::get_Comparer)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Specialized::CompatibleComparer*), "get_Comparer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::Specialized::CompatibleComparer::get_HashCodeProvider
// Il2CppName: get_HashCodeProvider
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IHashCodeProvider* (System::Collections::Specialized::CompatibleComparer::*)()>(&System::Collections::Specialized::CompatibleComparer::get_HashCodeProvider)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Specialized::CompatibleComparer*), "get_HashCodeProvider", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::Specialized::CompatibleComparer::get_DefaultComparer
// Il2CppName: get_DefaultComparer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IComparer* (*)()>(&System::Collections::Specialized::CompatibleComparer::get_DefaultComparer)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Specialized::CompatibleComparer*), "get_DefaultComparer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::Specialized::CompatibleComparer::get_DefaultHashCodeProvider
// Il2CppName: get_DefaultHashCodeProvider
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IHashCodeProvider* (*)()>(&System::Collections::Specialized::CompatibleComparer::get_DefaultHashCodeProvider)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Specialized::CompatibleComparer*), "get_DefaultHashCodeProvider", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
