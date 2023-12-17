#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__DataItemConvertor_2_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/zzzz__Object_def.hpp"
template<::il2cpp_utils::il2cpp_reference_type TOut,::il2cpp_utils::il2cpp_reference_type TParam>
inline TOut GlobalNamespace::DataItemConvertor_2<TOut,TParam>::Convert(::System::Object*  item, TParam  param)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DataItemConvertor_2<TOut,TParam>*>::get(),
                            "Convert",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<TOut, false>(*this, ___internal_method, item, param);
}
template<::il2cpp_utils::il2cpp_reference_type TOut,::il2cpp_utils::il2cpp_reference_type TParam>
inline ::System::Type* GlobalNamespace::DataItemConvertor_2<TOut,TParam>::get_inputDataType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DataItemConvertor_2<TOut,TParam>*>::get(),
                            "get_inputDataType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TOut,::il2cpp_utils::il2cpp_reference_type TParam>
inline ::GlobalNamespace::DataItemConvertor_2<TOut,TParam>* GlobalNamespace::DataItemConvertor_2<TOut,TParam>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::DataItemConvertor_2<TOut,TParam>*>());
}
template<::il2cpp_utils::il2cpp_reference_type TOut,::il2cpp_utils::il2cpp_reference_type TParam>
inline void GlobalNamespace::DataItemConvertor_2<TOut,TParam>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DataItemConvertor_2<TOut,TParam>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
