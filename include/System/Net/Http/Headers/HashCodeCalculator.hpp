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
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: ICollection`1<T>
  template<typename T>
  class ICollection_1;
}
// Completed forward declares
// Type namespace: System.Net.Http.Headers
namespace System::Net::Http::Headers {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.Http.Headers.HashCodeCalculator
  // [TokenAttribute] Offset: FFFFFFFF
  class HashCodeCalculator : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: HashCodeCalculator
    HashCodeCalculator() noexcept {}
    // static public System.Int32 Calculate(System.Collections.Generic.ICollection`1<T> list)
    // Offset: 0xFFFFFFFF
    template<class T>
    static int Calculate(System::Collections::Generic::ICollection_1<T>* list) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::Http::Headers::HashCodeCalculator::Calculate");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("System.Net.Http.Headers", "HashCodeCalculator", "Calculate", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(list)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<int, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, list);
    }
  }; // System.Net.Http.Headers.HashCodeCalculator
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::Http::Headers::HashCodeCalculator*, "System.Net.Http.Headers", "HashCodeCalculator");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::Http::Headers::HashCodeCalculator::Calculate
// Il2CppName: Calculate
// Cannot write MetadataGetter for generic methods!
