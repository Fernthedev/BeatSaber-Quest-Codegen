#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__DataConvertor_1_def.hpp"
#include "GlobalNamespace/zzzz__DataItemConvertor_1_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/zzzz__Object_def.hpp"
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::DataConvertor_1<T>::__set__convertors(::System::Collections::Generic::Dictionary_2<::System::Type*,::GlobalNamespace::DataItemConvertor_1<T>*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Dictionary_2<::System::Type*,::GlobalNamespace::DataItemConvertor_1<T>*>*, 0x10>(this, std::forward<::System::Collections::Generic::Dictionary_2<::System::Type*,::GlobalNamespace::DataItemConvertor_1<T>*>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*,::GlobalNamespace::DataItemConvertor_1<T>*>* GlobalNamespace::DataConvertor_1<T>::__get__convertors()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::System::Type*,::GlobalNamespace::DataItemConvertor_1<T>*>*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::System::Type*,::GlobalNamespace::DataItemConvertor_1<T>*>*> GlobalNamespace::DataConvertor_1<T>::__get__convertors() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::System::Type*,::GlobalNamespace::DataItemConvertor_1<T>*>*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline T GlobalNamespace::DataConvertor_1<T>::ProcessItem(::System::Object*  item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DataConvertor_1<T>*>::get(),
                            "ProcessItem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(*this, ___internal_method, item);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void GlobalNamespace::DataConvertor_1<T>::AddConvertor(::GlobalNamespace::DataItemConvertor_1<T>*  dataItemConvertor)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DataConvertor_1<T>*>::get(),
                            "AddConvertor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::DataItemConvertor_1<T>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, dataItemConvertor);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::GlobalNamespace::DataConvertor_1<T>* GlobalNamespace::DataConvertor_1<T>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::DataConvertor_1<T>*>());
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void GlobalNamespace::DataConvertor_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DataConvertor_1<T>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
