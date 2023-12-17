#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/UIElements/zzzz__IUxmlAttributes_def.hpp"
#include "UnityEngine/UIElements/zzzz__CreationContext_def.hpp"
#include "UnityEngine/UIElements/zzzz__IUxmlFactory_def.hpp"
/// @brief Convert operator to "::UnityEngine::UIElements::IUxmlFactory"
template<::il2cpp_utils::il2cpp_reference_type TCreatedType,::il2cpp_utils::il2cpp_reference_type TTraits>
constexpr  UnityEngine::UIElements::UxmlFactory_2<TCreatedType,TTraits>::operator ::UnityEngine::UIElements::IUxmlFactory*() noexcept {
return static_cast<::UnityEngine::UIElements::IUxmlFactory*>(static_cast<void*>(this));
}
template<::il2cpp_utils::il2cpp_reference_type TCreatedType,::il2cpp_utils::il2cpp_reference_type TTraits>
constexpr void UnityEngine::UIElements::UxmlFactory_2<TCreatedType,TTraits>::__set_m_Traits(TTraits  value)  {
::cordl_internals::setInstanceField<TTraits, 0x10>(this, std::forward<TTraits>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TCreatedType,::il2cpp_utils::il2cpp_reference_type TTraits>
constexpr TTraits& UnityEngine::UIElements::UxmlFactory_2<TCreatedType,TTraits>::__get_m_Traits()  {
return ::cordl_internals::getInstanceField<TTraits, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TCreatedType,::il2cpp_utils::il2cpp_reference_type TTraits>
constexpr TTraits const& UnityEngine::UIElements::UxmlFactory_2<TCreatedType,TTraits>::__get_m_Traits() const {
return ::cordl_internals::getInstanceField<TTraits, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TCreatedType,::il2cpp_utils::il2cpp_reference_type TTraits>
inline ::UnityEngine::UIElements::UxmlFactory_2<TCreatedType,TTraits>* UnityEngine::UIElements::UxmlFactory_2<TCreatedType,TTraits>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::UIElements::UxmlFactory_2<TCreatedType,TTraits>*>());
}
template<::il2cpp_utils::il2cpp_reference_type TCreatedType,::il2cpp_utils::il2cpp_reference_type TTraits>
inline void UnityEngine::UIElements::UxmlFactory_2<TCreatedType,TTraits>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UxmlFactory_2<TCreatedType,TTraits>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TCreatedType,::il2cpp_utils::il2cpp_reference_type TTraits>
inline ::StringW UnityEngine::UIElements::UxmlFactory_2<TCreatedType,TTraits>::get_uxmlName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UxmlFactory_2<TCreatedType,TTraits>*>::get(),
                            "get_uxmlName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TCreatedType,::il2cpp_utils::il2cpp_reference_type TTraits>
inline ::StringW UnityEngine::UIElements::UxmlFactory_2<TCreatedType,TTraits>::get_uxmlNamespace()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UxmlFactory_2<TCreatedType,TTraits>*>::get(),
                            "get_uxmlNamespace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TCreatedType,::il2cpp_utils::il2cpp_reference_type TTraits>
inline ::StringW UnityEngine::UIElements::UxmlFactory_2<TCreatedType,TTraits>::get_uxmlQualifiedName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UxmlFactory_2<TCreatedType,TTraits>*>::get(),
                            "get_uxmlQualifiedName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TCreatedType,::il2cpp_utils::il2cpp_reference_type TTraits>
inline bool UnityEngine::UIElements::UxmlFactory_2<TCreatedType,TTraits>::AcceptsAttributeBag(::UnityEngine::UIElements::IUxmlAttributes*  bag, ::UnityEngine::UIElements::CreationContext  cc)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UxmlFactory_2<TCreatedType,TTraits>*>::get(),
                            "AcceptsAttributeBag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IUxmlAttributes*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::CreationContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, bag, cc);
}
template<::il2cpp_utils::il2cpp_reference_type TCreatedType,::il2cpp_utils::il2cpp_reference_type TTraits>
inline ::UnityEngine::UIElements::VisualElement* UnityEngine::UIElements::UxmlFactory_2<TCreatedType,TTraits>::Create(::UnityEngine::UIElements::IUxmlAttributes*  bag, ::UnityEngine::UIElements::CreationContext  cc)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UxmlFactory_2<TCreatedType,TTraits>*>::get(),
                            "Create",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IUxmlAttributes*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::CreationContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualElement*, false>(*this, ___internal_method, bag, cc);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
