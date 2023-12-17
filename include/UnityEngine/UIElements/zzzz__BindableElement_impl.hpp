#pragma once
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_impl.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_impl.hpp"
#include "UnityEngine/UIElements/zzzz__BindableElement_def.hpp"
#include "UnityEngine/UIElements/zzzz__BindableElement_def.hpp"
#include "UnityEngine/UIElements/zzzz__IBindable_def.hpp"
#include "UnityEngine/UIElements/zzzz__IBinding_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlStringAttributeDescription_def.hpp"
#include "UnityEngine/UIElements/zzzz__IUxmlAttributes_def.hpp"
#include "UnityEngine/UIElements/zzzz__CreationContext_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::__BindableElement__UxmlTraits._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__BindableElement__UxmlTraits::*)()>(&::UnityEngine::UIElements::__BindableElement__UxmlTraits::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2db972c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__BindableElement__UxmlTraits*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__BindableElement__UxmlTraits.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__BindableElement__UxmlTraits::*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::IUxmlAttributes*, ::UnityEngine::UIElements::CreationContext)>(&::UnityEngine::UIElements::__BindableElement__UxmlTraits::Init)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x2db9570;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__BindableElement__UxmlTraits*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__BindableElement__UxmlTraits*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
constexpr void UnityEngine::UIElements::__BindableElement__UxmlTraits::__set_m_PropertyPath(::UnityEngine::UIElements::UxmlStringAttributeDescription*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::UxmlStringAttributeDescription*, 0x70>(this, std::forward<::UnityEngine::UIElements::UxmlStringAttributeDescription*>(value));
}
constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription* UnityEngine::UIElements::__BindableElement__UxmlTraits::__get_m_PropertyPath()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::UxmlStringAttributeDescription*, 0x70>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlStringAttributeDescription*> UnityEngine::UIElements::__BindableElement__UxmlTraits::__get_m_PropertyPath() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::UxmlStringAttributeDescription*, 0x70>(this);
}
inline ::UnityEngine::UIElements::__BindableElement__UxmlTraits* UnityEngine::UIElements::__BindableElement__UxmlTraits::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::UIElements::__BindableElement__UxmlTraits*>());
}
inline void UnityEngine::UIElements::__BindableElement__UxmlTraits::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__BindableElement__UxmlTraits*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::__BindableElement__UxmlTraits::Init(::UnityEngine::UIElements::VisualElement*  ve, ::UnityEngine::UIElements::IUxmlAttributes*  bag, ::UnityEngine::UIElements::CreationContext  cc)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__BindableElement__UxmlTraits*>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IUxmlAttributes*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::CreationContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, ve, bag, cc);
}
//  Writing Method size for method: ::UnityEngine::UIElements::BindableElement.get_binding
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::IBinding* (::UnityEngine::UIElements::BindableElement::*)()>(&::UnityEngine::UIElements::BindableElement::get_binding)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2dbcf00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BindableElement*>::get(),
                            "get_binding",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BindableElement.set_bindingPath
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BindableElement::*)(::StringW)>(&::UnityEngine::UIElements::BindableElement::set_bindingPath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2dbcf08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BindableElement*>::get(),
                            "set_bindingPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BindableElement._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BindableElement::*)()>(&::UnityEngine::UIElements::BindableElement::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2db9070;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BindableElement*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::UIElements::IBindable"
constexpr  UnityEngine::UIElements::BindableElement::operator ::UnityEngine::UIElements::IBindable*() noexcept {
return static_cast<::UnityEngine::UIElements::IBindable*>(static_cast<void*>(this));
}
constexpr void UnityEngine::UIElements::BindableElement::__set__binding_k__BackingField(::UnityEngine::UIElements::IBinding*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::IBinding*, 0x3b0>(this, std::forward<::UnityEngine::UIElements::IBinding*>(value));
}
constexpr ::UnityEngine::UIElements::IBinding* UnityEngine::UIElements::BindableElement::__get__binding_k__BackingField()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::IBinding*, 0x3b0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::IBinding*> UnityEngine::UIElements::BindableElement::__get__binding_k__BackingField() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::IBinding*, 0x3b0>(this);
}
constexpr void UnityEngine::UIElements::BindableElement::__set__bindingPath_k__BackingField(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x3b8>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& UnityEngine::UIElements::BindableElement::__get__bindingPath_k__BackingField()  {
return ::cordl_internals::getInstanceField<::StringW, 0x3b8>(this);
}
constexpr ::StringW const& UnityEngine::UIElements::BindableElement::__get__bindingPath_k__BackingField() const {
return ::cordl_internals::getInstanceField<::StringW, 0x3b8>(this);
}
inline ::UnityEngine::UIElements::IBinding* UnityEngine::UIElements::BindableElement::get_binding()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BindableElement*>::get(),
                            "get_binding",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::IBinding*, false>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::BindableElement::set_bindingPath(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BindableElement*>::get(),
                            "set_bindingPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::BindableElement* UnityEngine::UIElements::BindableElement::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::UIElements::BindableElement*>());
}
inline void UnityEngine::UIElements::BindableElement::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BindableElement*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::UnityEngine::UIElements::__BindableElement__UxmlFactory._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__BindableElement__UxmlFactory::*)()>(&::UnityEngine::UIElements::__BindableElement__UxmlFactory::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2dbcf10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__BindableElement__UxmlFactory*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
inline ::UnityEngine::UIElements::__BindableElement__UxmlFactory* UnityEngine::UIElements::__BindableElement__UxmlFactory::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::UIElements::__BindableElement__UxmlFactory*>());
}
inline void UnityEngine::UIElements::__BindableElement__UxmlFactory::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__BindableElement__UxmlFactory*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
