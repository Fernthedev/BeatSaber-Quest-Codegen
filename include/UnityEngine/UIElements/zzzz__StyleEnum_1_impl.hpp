#pragma once
#include "UnityEngine/UIElements/zzzz__StyleEnum_1_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleKeyword_def.hpp"
#include "UnityEngine/UIElements/zzzz__IStyleValue_1_def.hpp"
/// @brief Convert operator to "::UnityEngine::UIElements::IStyleValue_1<T>"
template<::cordl_internals::is_or_is_backed_by<int32_t> T>
constexpr  UnityEngine::UIElements::StyleEnum_1<T>::operator ::UnityEngine::UIElements::IStyleValue_1<T>*()  {
return static_cast<::UnityEngine::UIElements::IStyleValue_1<T>*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::StyleEnum_1<T>>"
template<::cordl_internals::is_or_is_backed_by<int32_t> T>
constexpr  UnityEngine::UIElements::StyleEnum_1<T>::operator ::System::IEquatable_1<::UnityEngine::UIElements::StyleEnum_1<T>>*()  {
return static_cast<::System::IEquatable_1<::UnityEngine::UIElements::StyleEnum_1<T>>*>(static_cast<void*>(::cordl_internals::Box(this)));
}
template<::cordl_internals::is_or_is_backed_by<int32_t> T>
constexpr void UnityEngine::UIElements::StyleEnum_1<T>::__set_m_Value(T  value)  {
::cordl_internals::setInstanceField<T, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<T>(value));
}
template<::cordl_internals::is_or_is_backed_by<int32_t> T>
constexpr T& UnityEngine::UIElements::StyleEnum_1<T>::__get_m_Value()  {
return ::cordl_internals::getInstanceField<T, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> T>
constexpr T const& UnityEngine::UIElements::StyleEnum_1<T>::__get_m_Value() const {
return ::cordl_internals::getInstanceField<T, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> T>
constexpr void UnityEngine::UIElements::StyleEnum_1<T>::__set_m_Keyword(::UnityEngine::UIElements::StyleKeyword  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::StyleKeyword, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::UIElements::StyleKeyword>(value));
}
template<::cordl_internals::is_or_is_backed_by<int32_t> T>
constexpr ::UnityEngine::UIElements::StyleKeyword& UnityEngine::UIElements::StyleEnum_1<T>::__get_m_Keyword()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::StyleKeyword, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> T>
constexpr ::UnityEngine::UIElements::StyleKeyword const& UnityEngine::UIElements::StyleEnum_1<T>::__get_m_Keyword() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::StyleKeyword, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> T>
inline T UnityEngine::UIElements::StyleEnum_1<T>::get_value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleEnum_1<T>>::get(),
                            "get_value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(*this, ___internal_method);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> T>
inline ::UnityEngine::UIElements::StyleKeyword UnityEngine::UIElements::StyleEnum_1<T>::get_keyword()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleEnum_1<T>>::get(),
                            "get_keyword",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleKeyword, false>(*this, ___internal_method);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> T>
inline void UnityEngine::UIElements::StyleEnum_1<T>::_ctor(T  v)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleEnum_1<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, v);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> T>
inline void UnityEngine::UIElements::StyleEnum_1<T>::_ctor(::UnityEngine::UIElements::StyleKeyword  keyword)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleEnum_1<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleKeyword>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, keyword);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> T>
inline void UnityEngine::UIElements::StyleEnum_1<T>::_ctor(T  v, ::UnityEngine::UIElements::StyleKeyword  keyword)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleEnum_1<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleKeyword>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, v, keyword);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> T>
inline bool UnityEngine::UIElements::StyleEnum_1<T>::op_Equality(::UnityEngine::UIElements::StyleEnum_1<T>  lhs, ::UnityEngine::UIElements::StyleEnum_1<T>  rhs)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleEnum_1<T>>::get(),
                            "op_Equality",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleEnum_1<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleEnum_1<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, lhs, rhs);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> T>
inline bool UnityEngine::UIElements::StyleEnum_1<T>::op_Inequality(::UnityEngine::UIElements::StyleEnum_1<T>  lhs, ::UnityEngine::UIElements::StyleEnum_1<T>  rhs)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleEnum_1<T>>::get(),
                            "op_Inequality",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleEnum_1<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleEnum_1<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, lhs, rhs);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> T>
inline ::UnityEngine::UIElements::StyleEnum_1<T> UnityEngine::UIElements::StyleEnum_1<T>::op_Implicit___UnityEngine__UIElements__StyleEnum_1_T_(::UnityEngine::UIElements::StyleKeyword  keyword)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleEnum_1<T>>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleKeyword>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleEnum_1<T>, false>(nullptr, ___internal_method, keyword);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> T>
inline ::UnityEngine::UIElements::StyleEnum_1<T> UnityEngine::UIElements::StyleEnum_1<T>::op_Implicit___UnityEngine__UIElements__StyleEnum_1_T_(T  v)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleEnum_1<T>>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleEnum_1<T>, false>(nullptr, ___internal_method, v);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> T>
inline bool UnityEngine::UIElements::StyleEnum_1<T>::Equals(::UnityEngine::UIElements::StyleEnum_1<T>  other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleEnum_1<T>>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleEnum_1<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, other);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> T>
inline bool UnityEngine::UIElements::StyleEnum_1<T>::Equals(::System::Object*  obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleEnum_1<T>>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, obj);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> T>
inline int32_t UnityEngine::UIElements::StyleEnum_1<T>::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleEnum_1<T>>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> T>
inline ::StringW UnityEngine::UIElements::StyleEnum_1<T>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleEnum_1<T>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_Value", ty: "T", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Keyword", ty: "::UnityEngine::UIElements::StyleKeyword", modifiers: "", def_value: Some("{}") }]
template<::cordl_internals::is_or_is_backed_by<int32_t> T>
constexpr ::UnityEngine::UIElements::StyleEnum_1<T>::StyleEnum_1(T  m_Value, ::UnityEngine::UIElements::StyleKeyword  m_Keyword) noexcept : ::bs_hook::ValueTypeWrapper<0x8>() {this->m_Value = m_Value;
this->m_Keyword = m_Keyword;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
