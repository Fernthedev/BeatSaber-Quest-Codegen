#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Microsoft/Win32/SafeHandles/zzzz__SafeHandleCache_1_def.hpp"
#include "System/Runtime/InteropServices/zzzz__SafeHandle_def.hpp"
template<::il2cpp_utils::il2cpp_reference_type T>
inline void Microsoft::Win32::SafeHandles::SafeHandleCache_1<T>::setStaticF_s_invalidHandle(T  value)  {
::cordl_internals::setStaticField<T, "s_invalidHandle", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Microsoft::Win32::SafeHandles::SafeHandleCache_1<T>*>::get>(std::forward<T>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline T Microsoft::Win32::SafeHandles::SafeHandleCache_1<T>::getStaticF_s_invalidHandle()  {
return ::cordl_internals::getStaticField<T, "s_invalidHandle", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Microsoft::Win32::SafeHandles::SafeHandleCache_1<T>*>::get>();
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline bool Microsoft::Win32::SafeHandles::SafeHandleCache_1<T>::IsCachedInvalidHandle(::System::Runtime::InteropServices::SafeHandle*  handle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Microsoft::Win32::SafeHandles::SafeHandleCache_1<T>*>::get(),
                            "IsCachedInvalidHandle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::InteropServices::SafeHandle*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, handle);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
