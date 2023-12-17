#pragma once
#include "System/Collections/Generic/zzzz__IComparer_1_def.hpp"
template<typename T>
inline int32_t System::Collections::Generic::IComparer_1<T>::Compare(T  x, T  y)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::IComparer_1<T>*>::get(),
                            "Compare",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, x, y);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
