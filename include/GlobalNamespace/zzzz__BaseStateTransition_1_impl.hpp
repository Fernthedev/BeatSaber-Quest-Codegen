#pragma once
#include "GlobalNamespace/zzzz__BaseStateTransition_impl.hpp"
#include "GlobalNamespace/zzzz__BaseStateTransition_1_def.hpp"
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::BaseStateTransition_1<T>::__set__component(T  value)  {
::cordl_internals::setInstanceField<T, 0x20>(this, std::forward<T>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr T& GlobalNamespace::BaseStateTransition_1<T>::__get__component()  {
return ::cordl_internals::getInstanceField<T, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr T const& GlobalNamespace::BaseStateTransition_1<T>::__get__component() const {
return ::cordl_internals::getInstanceField<T, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::GlobalNamespace::BaseStateTransition_1<T>* GlobalNamespace::BaseStateTransition_1<T>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::BaseStateTransition_1<T>*>());
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void GlobalNamespace::BaseStateTransition_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BaseStateTransition_1<T>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
