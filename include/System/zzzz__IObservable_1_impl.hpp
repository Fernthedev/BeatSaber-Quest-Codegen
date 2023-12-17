#pragma once
#include "System/zzzz__IObservable_1_def.hpp"
#include "System/zzzz__IObserver_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
template<typename T>
inline ::System::IDisposable* System::IObservable_1<T>::Subscribe(::System::IObserver_1<T>*  observer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IObservable_1<T>*>::get(),
                            "Subscribe",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IObserver_1<T>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IDisposable*, false>(*this, ___internal_method, observer);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
