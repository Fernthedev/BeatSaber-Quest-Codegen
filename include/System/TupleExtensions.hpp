// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Tuple`2<T1, T2>
  template<typename T1, typename T2>
  class Tuple_2;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Forward declaring type: TupleExtensions
  class TupleExtensions;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(System::TupleExtensions);
DEFINE_IL2CPP_ARG_TYPE(System::TupleExtensions*, "System", "TupleExtensions");
// Type namespace: System
namespace System {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.TupleExtensions
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: 1186534
  class TupleExtensions : public ::Il2CppObject {
    public:
    // static public System.Void Deconstruct(System.Tuple`2<T1,T2> value, out T1 item1, out T2 item2)
    // Offset: 0xFFFFFFFF
    template<class T1, class T2>
    static void Deconstruct(System::Tuple_2<T1, T2>* value, ByRef<T1> item1, ByRef<T2> item2) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::TupleExtensions::Deconstruct");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("System", "TupleExtensions", "Deconstruct", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T2>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value), ::il2cpp_utils::ExtractIndependentType<T1&>(), ::il2cpp_utils::ExtractIndependentType<T2&>()})));
      static auto* ___generic__method = THROW_UNLESS((::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T2>::get()})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, value, byref(item1), byref(item2));
    }
  }; // System.TupleExtensions
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::TupleExtensions::Deconstruct
// Il2CppName: Deconstruct
// Cannot write MetadataGetter for generic methods!
