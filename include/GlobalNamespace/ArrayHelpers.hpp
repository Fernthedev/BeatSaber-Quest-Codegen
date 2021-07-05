// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: ArrayHelpers
  class ArrayHelpers : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: ArrayHelpers
    ArrayHelpers() noexcept {}
    // static public T[] CreateOrEnlargeArray(T[] array, System.Int32 minimumCapacity)
    // Offset: 0xFFFFFFFF
    template<class T>
    static ::Array<T>* CreateOrEnlargeArray(::Array<T>* array, int minimumCapacity) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ArrayHelpers::CreateOrEnlargeArray");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("", "ArrayHelpers", "CreateOrEnlargeArray", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(array), ::il2cpp_utils::ExtractType(minimumCapacity)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<::Array<T>*, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, array, minimumCapacity);
    }
  }; // ArrayHelpers
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ArrayHelpers*, "", "ArrayHelpers");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ArrayHelpers::CreateOrEnlargeArray
// Il2CppName: CreateOrEnlargeArray
// Cannot write MetadataGetter for generic methods!
