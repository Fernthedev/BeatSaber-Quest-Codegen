#pragma once
#include "System/Threading/zzzz__SparselyPopulatedArrayAddInfo_1_def.hpp"
#include "System/Threading/zzzz__SparselyPopulatedArrayFragment_1_def.hpp"
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void System::Threading::SparselyPopulatedArrayAddInfo_1<T>::__set__source(::System::Threading::SparselyPopulatedArrayFragment_1<T>*  value)  {
::cordl_internals::setInstanceField<::System::Threading::SparselyPopulatedArrayFragment_1<T>*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Threading::SparselyPopulatedArrayFragment_1<T>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Threading::SparselyPopulatedArrayFragment_1<T>* System::Threading::SparselyPopulatedArrayAddInfo_1<T>::__get__source()  {
return ::cordl_internals::getInstanceField<::System::Threading::SparselyPopulatedArrayFragment_1<T>*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::cordl_internals::to_const_pointer<::System::Threading::SparselyPopulatedArrayFragment_1<T>*> System::Threading::SparselyPopulatedArrayAddInfo_1<T>::__get__source() const {
return ::cordl_internals::getInstanceField<::System::Threading::SparselyPopulatedArrayFragment_1<T>*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void System::Threading::SparselyPopulatedArrayAddInfo_1<T>::__set__index(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t& System::Threading::SparselyPopulatedArrayAddInfo_1<T>::__get__index()  {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t const& System::Threading::SparselyPopulatedArrayAddInfo_1<T>::__get__index() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void System::Threading::SparselyPopulatedArrayAddInfo_1<T>::_ctor(::System::Threading::SparselyPopulatedArrayFragment_1<T>*  source, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SparselyPopulatedArrayAddInfo_1<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::SparselyPopulatedArrayFragment_1<T>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, source, index);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::System::Threading::SparselyPopulatedArrayFragment_1<T>* System::Threading::SparselyPopulatedArrayAddInfo_1<T>::get_Source()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SparselyPopulatedArrayAddInfo_1<T>>::get(),
                            "get_Source",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::SparselyPopulatedArrayFragment_1<T>*, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline int32_t System::Threading::SparselyPopulatedArrayAddInfo_1<T>::get_Index()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SparselyPopulatedArrayAddInfo_1<T>>::get(),
                            "get_Index",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_source", ty: "::System::Threading::SparselyPopulatedArrayFragment_1<T>*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_index", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Threading::SparselyPopulatedArrayAddInfo_1<T>::SparselyPopulatedArrayAddInfo_1(::System::Threading::SparselyPopulatedArrayFragment_1<T>*  _source, int32_t  _index) noexcept : ::bs_hook::ValueTypeWrapper<0x10>() {this->_source = _source;
this->_index = _index;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
