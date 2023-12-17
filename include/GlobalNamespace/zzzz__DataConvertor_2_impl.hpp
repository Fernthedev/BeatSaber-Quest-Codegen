#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__DataConvertor_2_def.hpp"
#include "GlobalNamespace/zzzz__DataItemConvertor_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Type_def.hpp"
template<::il2cpp_utils::il2cpp_reference_type T,::il2cpp_utils::il2cpp_reference_type TParam>
constexpr void GlobalNamespace::DataConvertor_2<T,TParam>::__set__convertors(::System::Collections::Generic::Dictionary_2<::System::Type*,::GlobalNamespace::DataItemConvertor_2<T,TParam>*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Dictionary_2<::System::Type*,::GlobalNamespace::DataItemConvertor_2<T,TParam>*>*, 0x10>(this, std::forward<::System::Collections::Generic::Dictionary_2<::System::Type*,::GlobalNamespace::DataItemConvertor_2<T,TParam>*>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T,::il2cpp_utils::il2cpp_reference_type TParam>
constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*,::GlobalNamespace::DataItemConvertor_2<T,TParam>*>* GlobalNamespace::DataConvertor_2<T,TParam>::__get__convertors()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::System::Type*,::GlobalNamespace::DataItemConvertor_2<T,TParam>*>*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T,::il2cpp_utils::il2cpp_reference_type TParam>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::System::Type*,::GlobalNamespace::DataItemConvertor_2<T,TParam>*>*> GlobalNamespace::DataConvertor_2<T,TParam>::__get__convertors() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::System::Type*,::GlobalNamespace::DataItemConvertor_2<T,TParam>*>*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T,::il2cpp_utils::il2cpp_reference_type TParam>
inline T GlobalNamespace::DataConvertor_2<T,TParam>::ProcessItem(::System::Object*  item, TParam  param)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DataConvertor_2<T,TParam>*>::get(),
                            "ProcessItem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(*this, ___internal_method, item, param);
}
template<::il2cpp_utils::il2cpp_reference_type T,::il2cpp_utils::il2cpp_reference_type TParam>
inline void GlobalNamespace::DataConvertor_2<T,TParam>::AddConvertor(::GlobalNamespace::DataItemConvertor_2<T,TParam>*  dataItemConvertor)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DataConvertor_2<T,TParam>*>::get(),
                            "AddConvertor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::DataItemConvertor_2<T,TParam>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, dataItemConvertor);
}
template<::il2cpp_utils::il2cpp_reference_type T,::il2cpp_utils::il2cpp_reference_type TParam>
inline ::GlobalNamespace::DataConvertor_2<T,TParam>* GlobalNamespace::DataConvertor_2<T,TParam>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::DataConvertor_2<T,TParam>*>());
}
template<::il2cpp_utils::il2cpp_reference_type T,::il2cpp_utils::il2cpp_reference_type TParam>
inline void GlobalNamespace::DataConvertor_2<T,TParam>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DataConvertor_2<T,TParam>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
