// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NUnit.Framework.Internal.Reflect
#include "NUnit/Framework/Internal/Reflect.hpp"
// Including type: System.Collections.Generic.IComparer`1
#include "System/Collections/Generic/IComparer_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodInfo
  class MethodInfo;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Internal
namespace NUnit::Framework::Internal {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Internal.Reflect/BaseTypesFirstComparer
  class Reflect::BaseTypesFirstComparer : public ::Il2CppObject/*, public System::Collections::Generic::IComparer_1<System::Reflection::MethodInfo*>*/ {
    public:
    // Creating value type constructor for type: BaseTypesFirstComparer
    BaseTypesFirstComparer() noexcept {}
    // Creating interface conversion operator: operator System::Collections::Generic::IComparer_1<System::Reflection::MethodInfo*>
    operator System::Collections::Generic::IComparer_1<System::Reflection::MethodInfo*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IComparer_1<System::Reflection::MethodInfo*>*>(this);
    }
    // public System.Int32 Compare(System.Reflection.MethodInfo m1, System.Reflection.MethodInfo m2)
    // Offset: 0x22ADCCC
    int Compare(System::Reflection::MethodInfo* m1, System::Reflection::MethodInfo* m2);
    // public System.Void .ctor()
    // Offset: 0x22AD424
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Reflect::BaseTypesFirstComparer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Framework::Internal::Reflect::BaseTypesFirstComparer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Reflect::BaseTypesFirstComparer*, creationType>()));
    }
  }; // NUnit.Framework.Internal.Reflect/BaseTypesFirstComparer
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Internal::Reflect::BaseTypesFirstComparer*, "NUnit.Framework.Internal", "Reflect/BaseTypesFirstComparer");
// Writing includes for template specializations
#include "System/Reflection/MethodInfo.hpp"
// Writing MetadataGetter for method: NUnit::Framework::Internal::Reflect::BaseTypesFirstComparer::Compare
// Il2CppName: Compare
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (NUnit::Framework::Internal::Reflect::BaseTypesFirstComparer::*)(System::Reflection::MethodInfo*, System::Reflection::MethodInfo*)>(&NUnit::Framework::Internal::Reflect::BaseTypesFirstComparer::Compare)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::Reflect::BaseTypesFirstComparer*), "Compare", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Reflection::MethodInfo*>(), ::il2cpp_utils::ExtractIndependentType<System::Reflection::MethodInfo*>()});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::Reflect::BaseTypesFirstComparer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
