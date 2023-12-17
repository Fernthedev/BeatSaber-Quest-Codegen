#pragma once
#include "Newtonsoft/Json/Linq/zzzz__JEnumerable_1_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JToken_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__IJEnumerable_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
/// @brief Convert operator to "::Newtonsoft::Json::Linq::IJEnumerable_1<T>"
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr  Newtonsoft::Json::Linq::JEnumerable_1<T>::operator ::Newtonsoft::Json::Linq::IJEnumerable_1<T>*()  {
return static_cast<::Newtonsoft::Json::Linq::IJEnumerable_1<T>*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr  Newtonsoft::Json::Linq::JEnumerable_1<T>::operator ::System::Collections::Generic::IEnumerable_1<T>*()  {
return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr  Newtonsoft::Json::Linq::JEnumerable_1<T>::operator ::System::Collections::IEnumerable*()  {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(::cordl_internals::Box(this)));
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void Newtonsoft::Json::Linq::JEnumerable_1<T>::setStaticF_Empty(::Newtonsoft::Json::Linq::JEnumerable_1<T>  value)  {
::cordl_internals::setStaticField<::Newtonsoft::Json::Linq::JEnumerable_1<T>, "Empty", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JEnumerable_1<T>>::get>(std::forward<::Newtonsoft::Json::Linq::JEnumerable_1<T>>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::Newtonsoft::Json::Linq::JEnumerable_1<T> Newtonsoft::Json::Linq::JEnumerable_1<T>::getStaticF_Empty()  {
return ::cordl_internals::getStaticField<::Newtonsoft::Json::Linq::JEnumerable_1<T>, "Empty", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JEnumerable_1<T>>::get>();
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void Newtonsoft::Json::Linq::JEnumerable_1<T>::__set__enumerable(::System::Collections::Generic::IEnumerable_1<T>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::IEnumerable_1<T>*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Collections::Generic::IEnumerable_1<T>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Collections::Generic::IEnumerable_1<T>* Newtonsoft::Json::Linq::JEnumerable_1<T>::__get__enumerable()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IEnumerable_1<T>*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<T>*> Newtonsoft::Json::Linq::JEnumerable_1<T>::__get__enumerable() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IEnumerable_1<T>*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void Newtonsoft::Json::Linq::JEnumerable_1<T>::_ctor(::System::Collections::Generic::IEnumerable_1<T>*  enumerable)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JEnumerable_1<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<T>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, enumerable);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::System::Collections::Generic::IEnumerator_1<T>* Newtonsoft::Json::Linq::JEnumerable_1<T>::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JEnumerable_1<T>>::get(),
                            "GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<T>*, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::System::Collections::IEnumerator* Newtonsoft::Json::Linq::JEnumerable_1<T>::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JEnumerable_1<T>>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::Newtonsoft::Json::Linq::IJEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* Newtonsoft::Json::Linq::JEnumerable_1<T>::get_Item(::System::Object*  key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JEnumerable_1<T>>::get(),
                            "get_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::IJEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*, false>(*this, ___internal_method, key);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline bool Newtonsoft::Json::Linq::JEnumerable_1<T>::Equals(::Newtonsoft::Json::Linq::JEnumerable_1<T>  other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JEnumerable_1<T>>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JEnumerable_1<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, other);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline bool Newtonsoft::Json::Linq::JEnumerable_1<T>::Equals(::System::Object*  obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JEnumerable_1<T>>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, obj);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline int32_t Newtonsoft::Json::Linq::JEnumerable_1<T>::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JEnumerable_1<T>>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_enumerable", ty: "::System::Collections::Generic::IEnumerable_1<T>*", modifiers: "", def_value: Some("csnull") }]
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::Newtonsoft::Json::Linq::JEnumerable_1<T>::JEnumerable_1(::System::Collections::Generic::IEnumerable_1<T>*  _enumerable) noexcept : ::bs_hook::ValueTypeWrapper<0x8>() {this->_enumerable = _enumerable;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
