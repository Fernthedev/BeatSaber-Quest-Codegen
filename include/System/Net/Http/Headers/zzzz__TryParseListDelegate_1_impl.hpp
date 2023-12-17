#pragma once
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/Net/Http/Headers/zzzz__TryParseListDelegate_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::System::Net::Http::Headers::TryParseListDelegate_1<T>* System::Net::Http::Headers::TryParseListDelegate_1<T>::New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Net::Http::Headers::TryParseListDelegate_1<T>*>(object, method));
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void System::Net::Http::Headers::TryParseListDelegate_1<T>::_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::Headers::TryParseListDelegate_1<T>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, object, method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline bool System::Net::Http::Headers::TryParseListDelegate_1<T>::Invoke(::StringW  value, int32_t  minimalCount, ByRef<::System::Collections::Generic::List_1<T>*>  result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::Headers::TryParseListDelegate_1<T>*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Collections::Generic::List_1<T>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, value, minimalCount, result);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
