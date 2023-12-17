#pragma once
#include "UnityEngine/zzzz__IExposedPropertyTable_def.hpp"
#include "UnityEngine/zzzz__PropertyName_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::UnityEngine::IExposedPropertyTable.GetReferenceValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Object* (::UnityEngine::IExposedPropertyTable::*)(::UnityEngine::PropertyName, ByRef<bool>)>(&::UnityEngine::IExposedPropertyTable::GetReferenceValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::IExposedPropertyTable*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::IExposedPropertyTable*>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
inline ::UnityEngine::Object* UnityEngine::IExposedPropertyTable::GetReferenceValue(::UnityEngine::PropertyName  id, ByRef<bool>  idValid)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::IExposedPropertyTable*>::get(),
                            "GetReferenceValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::PropertyName>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Object*, false>(*this, ___internal_method, id, idValid);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
