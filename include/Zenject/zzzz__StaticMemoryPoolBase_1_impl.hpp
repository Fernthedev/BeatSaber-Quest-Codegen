#pragma once
#include "Zenject/zzzz__StaticMemoryPoolBaseBase_1_impl.hpp"
#include "Zenject/zzzz__StaticMemoryPoolBase_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline ::Zenject::StaticMemoryPoolBase_1<TValue>* Zenject::StaticMemoryPoolBase_1<TValue>::New_ctor(::System::Action_1<TValue>*  onDespawnedMethod)  {
return THROW_UNLESS(::il2cpp_utils::New<::Zenject::StaticMemoryPoolBase_1<TValue>*>(onDespawnedMethod));
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline void Zenject::StaticMemoryPoolBase_1<TValue>::_ctor(::System::Action_1<TValue>*  onDespawnedMethod)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::StaticMemoryPoolBase_1<TValue>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<TValue>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, onDespawnedMethod);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline TValue Zenject::StaticMemoryPoolBase_1<TValue>::Alloc()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::StaticMemoryPoolBase_1<TValue>*>::get(),
                            "Alloc",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
