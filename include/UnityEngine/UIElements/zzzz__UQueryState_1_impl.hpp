#pragma once
#include "UnityEngine/UIElements/zzzz__UQuery_impl.hpp"
#include "UnityEngine/UIElements/zzzz__UQueryState_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__RuleMatcher_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__UQueryState_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__UQuery_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
template<::il2cpp_utils::il2cpp_reference_type T,::il2cpp_utils::il2cpp_reference_type TElement>
constexpr void UnityEngine::UIElements::__UQueryState_1__ListQueryMatcher_1<T,TElement>::__set__matches_k__BackingField(::System::Collections::Generic::List_1<TElement>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<TElement>*, 0x18>(this, std::forward<::System::Collections::Generic::List_1<TElement>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T,::il2cpp_utils::il2cpp_reference_type TElement>
constexpr ::System::Collections::Generic::List_1<TElement>* UnityEngine::UIElements::__UQueryState_1__ListQueryMatcher_1<T,TElement>::__get__matches_k__BackingField()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<TElement>*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T,::il2cpp_utils::il2cpp_reference_type TElement>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<TElement>*> UnityEngine::UIElements::__UQueryState_1__ListQueryMatcher_1<T,TElement>::__get__matches_k__BackingField() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<TElement>*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T,::il2cpp_utils::il2cpp_reference_type TElement>
inline ::System::Collections::Generic::List_1<TElement>* UnityEngine::UIElements::__UQueryState_1__ListQueryMatcher_1<T,TElement>::get_matches()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__UQueryState_1__ListQueryMatcher_1<T,TElement>*>::get(),
                            "get_matches",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<TElement>*, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T,::il2cpp_utils::il2cpp_reference_type TElement>
inline void UnityEngine::UIElements::__UQueryState_1__ListQueryMatcher_1<T,TElement>::set_matches(::System::Collections::Generic::List_1<TElement>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__UQueryState_1__ListQueryMatcher_1<T,TElement>*>::get(),
                            "set_matches",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<TElement>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
template<::il2cpp_utils::il2cpp_reference_type T,::il2cpp_utils::il2cpp_reference_type TElement>
inline bool UnityEngine::UIElements::__UQueryState_1__ListQueryMatcher_1<T,TElement>::OnRuleMatchedElement(::UnityEngine::UIElements::RuleMatcher  matcher, ::UnityEngine::UIElements::VisualElement*  element)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__UQueryState_1__ListQueryMatcher_1<T,TElement>*>::get(),
                            "OnRuleMatchedElement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::RuleMatcher>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, matcher, element);
}
template<::il2cpp_utils::il2cpp_reference_type T,::il2cpp_utils::il2cpp_reference_type TElement>
inline void UnityEngine::UIElements::__UQueryState_1__ListQueryMatcher_1<T,TElement>::Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__UQueryState_1__ListQueryMatcher_1<T,TElement>*>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T,::il2cpp_utils::il2cpp_reference_type TElement>
inline ::UnityEngine::UIElements::__UQueryState_1__ListQueryMatcher_1<T,TElement>* UnityEngine::UIElements::__UQueryState_1__ListQueryMatcher_1<T,TElement>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::UIElements::__UQueryState_1__ListQueryMatcher_1<T,TElement>*>());
}
template<::il2cpp_utils::il2cpp_reference_type T,::il2cpp_utils::il2cpp_reference_type TElement>
inline void UnityEngine::UIElements::__UQueryState_1__ListQueryMatcher_1<T,TElement>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__UQueryState_1__ListQueryMatcher_1<T,TElement>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void UnityEngine::UIElements::__UQueryState_1__ActionQueryMatcher<T>::__set__callBack_k__BackingField(::System::Action_1<T>*  value)  {
::cordl_internals::setInstanceField<::System::Action_1<T>*, 0x18>(this, std::forward<::System::Action_1<T>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Action_1<T>* UnityEngine::UIElements::__UQueryState_1__ActionQueryMatcher<T>::__get__callBack_k__BackingField()  {
return ::cordl_internals::getInstanceField<::System::Action_1<T>*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<T>*> UnityEngine::UIElements::__UQueryState_1__ActionQueryMatcher<T>::__get__callBack_k__BackingField() const {
return ::cordl_internals::getInstanceField<::System::Action_1<T>*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::System::Action_1<T>* UnityEngine::UIElements::__UQueryState_1__ActionQueryMatcher<T>::get_callBack()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__UQueryState_1__ActionQueryMatcher<T>*>::get(),
                            "get_callBack",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Action_1<T>*, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline bool UnityEngine::UIElements::__UQueryState_1__ActionQueryMatcher<T>::OnRuleMatchedElement(::UnityEngine::UIElements::RuleMatcher  matcher, ::UnityEngine::UIElements::VisualElement*  element)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__UQueryState_1__ActionQueryMatcher<T>*>::get(),
                            "OnRuleMatchedElement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::RuleMatcher>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, matcher, element);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::UnityEngine::UIElements::__UQueryState_1__ActionQueryMatcher<T>* UnityEngine::UIElements::__UQueryState_1__ActionQueryMatcher<T>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::UIElements::__UQueryState_1__ActionQueryMatcher<T>*>());
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void UnityEngine::UIElements::__UQueryState_1__ActionQueryMatcher<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__UQueryState_1__ActionQueryMatcher<T>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<T>"
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr  UnityEngine::UIElements::__UQueryState_1__Enumerator<T>::operator ::System::Collections::Generic::IEnumerator_1<T>*()  {
return static_cast<::System::Collections::Generic::IEnumerator_1<T>*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr  UnityEngine::UIElements::__UQueryState_1__Enumerator<T>::operator ::System::Collections::IEnumerator*()  {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert operator to "::System::IDisposable"
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr  UnityEngine::UIElements::__UQueryState_1__Enumerator<T>::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::cordl_internals::Box(this)));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void UnityEngine::UIElements::__UQueryState_1__Enumerator<T>::__set_iterationList(::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* UnityEngine::UIElements::__UQueryState_1__Enumerator<T>::__get_iterationList()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*> UnityEngine::UIElements::__UQueryState_1__Enumerator<T>::__get_iterationList() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void UnityEngine::UIElements::__UQueryState_1__Enumerator<T>::__set_currentIndex(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t& UnityEngine::UIElements::__UQueryState_1__Enumerator<T>::__get_currentIndex()  {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t const& UnityEngine::UIElements::__UQueryState_1__Enumerator<T>::__get_currentIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void UnityEngine::UIElements::__UQueryState_1__Enumerator<T>::_ctor(::UnityEngine::UIElements::UQueryState_1<T>  queryState)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__UQueryState_1__Enumerator<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UQueryState_1<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, queryState);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline T UnityEngine::UIElements::__UQueryState_1__Enumerator<T>::get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__UQueryState_1__Enumerator<T>>::get(),
                            "get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::System::Object* UnityEngine::UIElements::__UQueryState_1__Enumerator<T>::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__UQueryState_1__Enumerator<T>>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline bool UnityEngine::UIElements::__UQueryState_1__Enumerator<T>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__UQueryState_1__Enumerator<T>>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void UnityEngine::UIElements::__UQueryState_1__Enumerator<T>::Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__UQueryState_1__Enumerator<T>>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void UnityEngine::UIElements::__UQueryState_1__Enumerator<T>::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__UQueryState_1__Enumerator<T>>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "iterationList", ty: "::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "currentIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::UnityEngine::UIElements::__UQueryState_1__Enumerator<T>::__UQueryState_1__Enumerator(::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*  iterationList, int32_t  currentIndex) noexcept : ::bs_hook::ValueTypeWrapper<0x10>() {this->iterationList = iterationList;
this->currentIndex = currentIndex;
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr  UnityEngine::UIElements::UQueryState_1<T>::operator ::System::Collections::Generic::IEnumerable_1<T>*()  {
return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr  UnityEngine::UIElements::UQueryState_1<T>::operator ::System::Collections::IEnumerable*()  {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::UQueryState_1<T>>"
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr  UnityEngine::UIElements::UQueryState_1<T>::operator ::System::IEquatable_1<::UnityEngine::UIElements::UQueryState_1<T>>*()  {
return static_cast<::System::IEquatable_1<::UnityEngine::UIElements::UQueryState_1<T>>*>(static_cast<void*>(::cordl_internals::Box(this)));
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void UnityEngine::UIElements::UQueryState_1<T>::setStaticF_s_Action(::UnityEngine::UIElements::__UQueryState_1__ActionQueryMatcher<T>*  value)  {
::cordl_internals::setStaticField<::UnityEngine::UIElements::__UQueryState_1__ActionQueryMatcher<T>*, "s_Action", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UQueryState_1<T>>::get>(std::forward<::UnityEngine::UIElements::__UQueryState_1__ActionQueryMatcher<T>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::UnityEngine::UIElements::__UQueryState_1__ActionQueryMatcher<T>* UnityEngine::UIElements::UQueryState_1<T>::getStaticF_s_Action()  {
return ::cordl_internals::getStaticField<::UnityEngine::UIElements::__UQueryState_1__ActionQueryMatcher<T>*, "s_Action", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UQueryState_1<T>>::get>();
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void UnityEngine::UIElements::UQueryState_1<T>::__set_m_Element(::UnityEngine::UIElements::VisualElement*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::VisualElement*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::UIElements::VisualElement*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::UnityEngine::UIElements::VisualElement* UnityEngine::UIElements::UQueryState_1<T>::__get_m_Element()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::VisualElement*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> UnityEngine::UIElements::UQueryState_1<T>::__get_m_Element() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::VisualElement*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void UnityEngine::UIElements::UQueryState_1<T>::__set_m_Matchers(::System::Collections::Generic::List_1<::UnityEngine::UIElements::RuleMatcher>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::UnityEngine::UIElements::RuleMatcher>*, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Collections::Generic::List_1<::UnityEngine::UIElements::RuleMatcher>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::RuleMatcher>* UnityEngine::UIElements::UQueryState_1<T>::__get_m_Matchers()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::UnityEngine::UIElements::RuleMatcher>*, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::UIElements::RuleMatcher>*> UnityEngine::UIElements::UQueryState_1<T>::__get_m_Matchers() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::UnityEngine::UIElements::RuleMatcher>*, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void UnityEngine::UIElements::UQueryState_1<T>::setStaticF_s_List(::UnityEngine::UIElements::__UQueryState_1__ListQueryMatcher_1<T,T>*  value)  {
::cordl_internals::setStaticField<::UnityEngine::UIElements::__UQueryState_1__ListQueryMatcher_1<T,T>*, "s_List", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UQueryState_1<T>>::get>(std::forward<::UnityEngine::UIElements::__UQueryState_1__ListQueryMatcher_1<T,T>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::UnityEngine::UIElements::__UQueryState_1__ListQueryMatcher_1<T,T>* UnityEngine::UIElements::UQueryState_1<T>::getStaticF_s_List()  {
return ::cordl_internals::getStaticField<::UnityEngine::UIElements::__UQueryState_1__ListQueryMatcher_1<T,T>*, "s_List", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UQueryState_1<T>>::get>();
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void UnityEngine::UIElements::UQueryState_1<T>::setStaticF_s_EnumerationList(::UnityEngine::UIElements::__UQueryState_1__ListQueryMatcher_1<T,::UnityEngine::UIElements::VisualElement*>*  value)  {
::cordl_internals::setStaticField<::UnityEngine::UIElements::__UQueryState_1__ListQueryMatcher_1<T,::UnityEngine::UIElements::VisualElement*>*, "s_EnumerationList", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UQueryState_1<T>>::get>(std::forward<::UnityEngine::UIElements::__UQueryState_1__ListQueryMatcher_1<T,::UnityEngine::UIElements::VisualElement*>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::UnityEngine::UIElements::__UQueryState_1__ListQueryMatcher_1<T,::UnityEngine::UIElements::VisualElement*>* UnityEngine::UIElements::UQueryState_1<T>::getStaticF_s_EnumerationList()  {
return ::cordl_internals::getStaticField<::UnityEngine::UIElements::__UQueryState_1__ListQueryMatcher_1<T,::UnityEngine::UIElements::VisualElement*>*, "s_EnumerationList", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UQueryState_1<T>>::get>();
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void UnityEngine::UIElements::UQueryState_1<T>::_ctor(::UnityEngine::UIElements::VisualElement*  element, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::RuleMatcher>*  matchers)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UQueryState_1<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::UIElements::RuleMatcher>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, element, matchers);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::UnityEngine::UIElements::UQueryState_1<T> UnityEngine::UIElements::UQueryState_1<T>::RebuildOn(::UnityEngine::UIElements::VisualElement*  element)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UQueryState_1<T>>::get(),
                            "RebuildOn",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UQueryState_1<T>, false>(*this, ___internal_method, element);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline T UnityEngine::UIElements::UQueryState_1<T>::Single(::UnityEngine::UIElements::__UQuery__SingleQueryMatcher*  matcher)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UQueryState_1<T>>::get(),
                            "Single",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__UQuery__SingleQueryMatcher*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(*this, ___internal_method, matcher);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline T UnityEngine::UIElements::UQueryState_1<T>::First()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UQueryState_1<T>>::get(),
                            "First",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void UnityEngine::UIElements::UQueryState_1<T>::ToList(::System::Collections::Generic::List_1<T>*  results)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UQueryState_1<T>>::get(),
                            "ToList",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<T>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, results);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::UnityEngine::UIElements::__UQueryState_1__Enumerator<T> UnityEngine::UIElements::UQueryState_1<T>::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UQueryState_1<T>>::get(),
                            "GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::__UQueryState_1__Enumerator<T>, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::System::Collections::Generic::IEnumerator_1<T>* UnityEngine::UIElements::UQueryState_1<T>::System_Collections_Generic_IEnumerable_T__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UQueryState_1<T>>::get(),
                            "System.Collections.Generic.IEnumerable<T>.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<T>*, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::System::Collections::IEnumerator* UnityEngine::UIElements::UQueryState_1<T>::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UQueryState_1<T>>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline bool UnityEngine::UIElements::UQueryState_1<T>::Equals(::UnityEngine::UIElements::UQueryState_1<T>  other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UQueryState_1<T>>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UQueryState_1<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, other);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline bool UnityEngine::UIElements::UQueryState_1<T>::Equals(::System::Object*  obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UQueryState_1<T>>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, obj);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline int32_t UnityEngine::UIElements::UQueryState_1<T>::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UQueryState_1<T>>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_Element", ty: "::UnityEngine::UIElements::VisualElement*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "m_Matchers", ty: "::System::Collections::Generic::List_1<::UnityEngine::UIElements::RuleMatcher>*", modifiers: "", def_value: Some("csnull") }]
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::UnityEngine::UIElements::UQueryState_1<T>::UQueryState_1(::UnityEngine::UIElements::VisualElement*  m_Element, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::RuleMatcher>*  m_Matchers) noexcept : ::bs_hook::ValueTypeWrapper<0x10>() {this->m_Element = m_Element;
this->m_Matchers = m_Matchers;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
