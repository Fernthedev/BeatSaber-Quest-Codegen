#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/Http/Headers/zzzz__HttpHeaderValueCollection_1_def.hpp"
#include "System/zzzz__Predicate_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Net/Http/Headers/zzzz__HttpHeaders_def.hpp"
#include "System/Net/Http/Headers/zzzz__HeaderInfo_def.hpp"
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
/// @brief Convert operator to "::System::Collections::Generic::ICollection_1<T>"
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr  System::Net::Http::Headers::HttpHeaderValueCollection_1<T>::operator ::System::Collections::Generic::ICollection_1<T>*() noexcept {
return static_cast<::System::Collections::Generic::ICollection_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr  System::Net::Http::Headers::HttpHeaderValueCollection_1<T>::operator ::System::Collections::Generic::IEnumerable_1<T>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr  System::Net::Http::Headers::HttpHeaderValueCollection_1<T>::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void System::Net::Http::Headers::HttpHeaderValueCollection_1<T>::__set_list(::System::Collections::Generic::List_1<T>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<T>*, 0x10>(this, std::forward<::System::Collections::Generic::List_1<T>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Collections::Generic::List_1<T>* System::Net::Http::Headers::HttpHeaderValueCollection_1<T>::__get_list()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<T>*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<T>*> System::Net::Http::Headers::HttpHeaderValueCollection_1<T>::__get_list() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<T>*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void System::Net::Http::Headers::HttpHeaderValueCollection_1<T>::__set_headers(::System::Net::Http::Headers::HttpHeaders*  value)  {
::cordl_internals::setInstanceField<::System::Net::Http::Headers::HttpHeaders*, 0x18>(this, std::forward<::System::Net::Http::Headers::HttpHeaders*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Net::Http::Headers::HttpHeaders* System::Net::Http::Headers::HttpHeaderValueCollection_1<T>::__get_headers()  {
return ::cordl_internals::getInstanceField<::System::Net::Http::Headers::HttpHeaders*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::cordl_internals::to_const_pointer<::System::Net::Http::Headers::HttpHeaders*> System::Net::Http::Headers::HttpHeaderValueCollection_1<T>::__get_headers() const {
return ::cordl_internals::getInstanceField<::System::Net::Http::Headers::HttpHeaders*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void System::Net::Http::Headers::HttpHeaderValueCollection_1<T>::__set_headerInfo(::System::Net::Http::Headers::HeaderInfo*  value)  {
::cordl_internals::setInstanceField<::System::Net::Http::Headers::HeaderInfo*, 0x20>(this, std::forward<::System::Net::Http::Headers::HeaderInfo*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Net::Http::Headers::HeaderInfo* System::Net::Http::Headers::HttpHeaderValueCollection_1<T>::__get_headerInfo()  {
return ::cordl_internals::getInstanceField<::System::Net::Http::Headers::HeaderInfo*, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::cordl_internals::to_const_pointer<::System::Net::Http::Headers::HeaderInfo*> System::Net::Http::Headers::HttpHeaderValueCollection_1<T>::__get_headerInfo() const {
return ::cordl_internals::getInstanceField<::System::Net::Http::Headers::HeaderInfo*, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void System::Net::Http::Headers::HttpHeaderValueCollection_1<T>::__set_invalidValues(::System::Collections::Generic::List_1<::StringW>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::StringW>*, 0x28>(this, std::forward<::System::Collections::Generic::List_1<::StringW>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Collections::Generic::List_1<::StringW>* System::Net::Http::Headers::HttpHeaderValueCollection_1<T>::__get_invalidValues()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::StringW>*, 0x28>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> System::Net::Http::Headers::HttpHeaderValueCollection_1<T>::__get_invalidValues() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::StringW>*, 0x28>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::System::Net::Http::Headers::HttpHeaderValueCollection_1<T>* System::Net::Http::Headers::HttpHeaderValueCollection_1<T>::New_ctor(::System::Net::Http::Headers::HttpHeaders*  headers, ::System::Net::Http::Headers::HeaderInfo*  headerInfo)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Net::Http::Headers::HttpHeaderValueCollection_1<T>*>(headers, headerInfo));
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void System::Net::Http::Headers::HttpHeaderValueCollection_1<T>::_ctor(::System::Net::Http::Headers::HttpHeaders*  headers, ::System::Net::Http::Headers::HeaderInfo*  headerInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::Headers::HttpHeaderValueCollection_1<T>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Http::Headers::HttpHeaders*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Http::Headers::HeaderInfo*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, headers, headerInfo);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline int32_t System::Net::Http::Headers::HttpHeaderValueCollection_1<T>::get_Count()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::Headers::HttpHeaderValueCollection_1<T>*>::get(),
                            "get_Count",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::System::Collections::Generic::List_1<::StringW>* System::Net::Http::Headers::HttpHeaderValueCollection_1<T>::get_InvalidValues()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::Headers::HttpHeaderValueCollection_1<T>*>::get(),
                            "get_InvalidValues",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::StringW>*, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline bool System::Net::Http::Headers::HttpHeaderValueCollection_1<T>::get_IsReadOnly()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::Headers::HttpHeaderValueCollection_1<T>*>::get(),
                            "get_IsReadOnly",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void System::Net::Http::Headers::HttpHeaderValueCollection_1<T>::Add(T  item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::Headers::HttpHeaderValueCollection_1<T>*>::get(),
                            "Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, item);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void System::Net::Http::Headers::HttpHeaderValueCollection_1<T>::AddRange(::System::Collections::Generic::List_1<T>*  values)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::Headers::HttpHeaderValueCollection_1<T>*>::get(),
                            "AddRange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<T>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, values);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void System::Net::Http::Headers::HttpHeaderValueCollection_1<T>::AddInvalidValue(::StringW  invalidValue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::Headers::HttpHeaderValueCollection_1<T>*>::get(),
                            "AddInvalidValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, invalidValue);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void System::Net::Http::Headers::HttpHeaderValueCollection_1<T>::Clear()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::Headers::HttpHeaderValueCollection_1<T>*>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline bool System::Net::Http::Headers::HttpHeaderValueCollection_1<T>::Contains(T  item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::Headers::HttpHeaderValueCollection_1<T>*>::get(),
                            "Contains",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, item);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void System::Net::Http::Headers::HttpHeaderValueCollection_1<T>::CopyTo(::ArrayW<T,::Array<T>*>  array, int32_t  arrayIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::Headers::HttpHeaderValueCollection_1<T>*>::get(),
                            "CopyTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T,::Array<T>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, array, arrayIndex);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline bool System::Net::Http::Headers::HttpHeaderValueCollection_1<T>::Remove(T  item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::Headers::HttpHeaderValueCollection_1<T>*>::get(),
                            "Remove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, item);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::StringW System::Net::Http::Headers::HttpHeaderValueCollection_1<T>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::Headers::HttpHeaderValueCollection_1<T>*>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::System::Collections::Generic::IEnumerator_1<T>* System::Net::Http::Headers::HttpHeaderValueCollection_1<T>::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::Headers::HttpHeaderValueCollection_1<T>*>::get(),
                            "GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<T>*, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::System::Collections::IEnumerator* System::Net::Http::Headers::HttpHeaderValueCollection_1<T>::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::Headers::HttpHeaderValueCollection_1<T>*>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline T System::Net::Http::Headers::HttpHeaderValueCollection_1<T>::Find(::System::Predicate_1<T>*  predicate)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::Headers::HttpHeaderValueCollection_1<T>*>::get(),
                            "Find",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Predicate_1<T>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(*this, ___internal_method, predicate);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
