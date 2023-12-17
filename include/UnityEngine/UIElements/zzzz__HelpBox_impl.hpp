#pragma once
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_impl.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_impl.hpp"
#include "UnityEngine/UIElements/zzzz__HelpBox_def.hpp"
#include "UnityEngine/UIElements/zzzz__HelpBox_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/UIElements/zzzz__Label_def.hpp"
#include "UnityEngine/UIElements/zzzz__HelpBoxMessageType_def.hpp"
#include "UnityEngine/UIElements/zzzz__CreationContext_def.hpp"
#include "UnityEngine/UIElements/zzzz__IUxmlAttributes_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlStringAttributeDescription_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlEnumAttributeDescription_1_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::__HelpBox__UxmlTraits.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__HelpBox__UxmlTraits::*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::IUxmlAttributes*, ::UnityEngine::UIElements::CreationContext)>(&::UnityEngine::UIElements::__HelpBox__UxmlTraits::Init)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x2e374c8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__HelpBox__UxmlTraits*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__HelpBox__UxmlTraits*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__HelpBox__UxmlTraits._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__HelpBox__UxmlTraits::*)()>(&::UnityEngine::UIElements::__HelpBox__UxmlTraits::_ctor)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x2e3761c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__HelpBox__UxmlTraits*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::UIElements::__HelpBox__UxmlTraits::__set_m_Text(::UnityEngine::UIElements::UxmlStringAttributeDescription*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::UxmlStringAttributeDescription*, 0x70>(this, std::forward<::UnityEngine::UIElements::UxmlStringAttributeDescription*>(value));
}
constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription* UnityEngine::UIElements::__HelpBox__UxmlTraits::__get_m_Text()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::UxmlStringAttributeDescription*, 0x70>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlStringAttributeDescription*> UnityEngine::UIElements::__HelpBox__UxmlTraits::__get_m_Text() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::UxmlStringAttributeDescription*, 0x70>(this);
}
constexpr void UnityEngine::UIElements::__HelpBox__UxmlTraits::__set_m_MessageType(::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::HelpBoxMessageType>*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::HelpBoxMessageType>*, 0x78>(this, std::forward<::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::HelpBoxMessageType>*>(value));
}
constexpr ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::HelpBoxMessageType>* UnityEngine::UIElements::__HelpBox__UxmlTraits::__get_m_MessageType()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::HelpBoxMessageType>*, 0x78>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::HelpBoxMessageType>*> UnityEngine::UIElements::__HelpBox__UxmlTraits::__get_m_MessageType() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::HelpBoxMessageType>*, 0x78>(this);
}
inline void UnityEngine::UIElements::__HelpBox__UxmlTraits::Init(::UnityEngine::UIElements::VisualElement*  ve, ::UnityEngine::UIElements::IUxmlAttributes*  bag, ::UnityEngine::UIElements::CreationContext  cc)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__HelpBox__UxmlTraits*>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IUxmlAttributes*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::CreationContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, ve, bag, cc);
}
inline ::UnityEngine::UIElements::__HelpBox__UxmlTraits* UnityEngine::UIElements::__HelpBox__UxmlTraits::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::UIElements::__HelpBox__UxmlTraits*>());
}
inline void UnityEngine::UIElements::__HelpBox__UxmlTraits::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__HelpBox__UxmlTraits*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::UnityEngine::UIElements::HelpBox.set_text
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::HelpBox::*)(::StringW)>(&::UnityEngine::UIElements::HelpBox::set_text)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2e36fc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::HelpBox*>::get(),
                            "set_text",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::HelpBox.set_messageType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::HelpBox::*)(::UnityEngine::UIElements::HelpBoxMessageType)>(&::UnityEngine::UIElements::HelpBox::set_messageType)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2e36fec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::HelpBox*>::get(),
                            "set_messageType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::HelpBoxMessageType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::HelpBox._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::HelpBox::*)()>(&::UnityEngine::UIElements::HelpBox::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2e370b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::HelpBox*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::HelpBox._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::HelpBox::*)(::StringW, ::UnityEngine::UIElements::HelpBoxMessageType)>(&::UnityEngine::UIElements::HelpBox::_ctor)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x2e3710c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::HelpBox*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::HelpBoxMessageType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::HelpBox.GetIconClass
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::UIElements::HelpBox::*)(::UnityEngine::UIElements::HelpBoxMessageType)>(&::UnityEngine::UIElements::HelpBox::GetIconClass)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x2e3725c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::HelpBox*>::get(),
                            "GetIconClass",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::HelpBoxMessageType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::HelpBox.UpdateIcon
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::HelpBox::*)(::UnityEngine::UIElements::HelpBoxMessageType)>(&::UnityEngine::UIElements::HelpBox::UpdateIcon)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2e37004;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::HelpBox*>::get(),
                            "UpdateIcon",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::HelpBoxMessageType>::get()}
                        )));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::HelpBox::setStaticF_ussClassName(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "ussClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::HelpBox*>::get>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::HelpBox::getStaticF_ussClassName()  {
return ::cordl_internals::getStaticField<::StringW, "ussClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::HelpBox*>::get>();
}
inline void UnityEngine::UIElements::HelpBox::setStaticF_labelUssClassName(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "labelUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::HelpBox*>::get>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::HelpBox::getStaticF_labelUssClassName()  {
return ::cordl_internals::getStaticField<::StringW, "labelUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::HelpBox*>::get>();
}
inline void UnityEngine::UIElements::HelpBox::setStaticF_iconUssClassName(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "iconUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::HelpBox*>::get>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::HelpBox::getStaticF_iconUssClassName()  {
return ::cordl_internals::getStaticField<::StringW, "iconUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::HelpBox*>::get>();
}
inline void UnityEngine::UIElements::HelpBox::setStaticF_iconInfoUssClassName(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "iconInfoUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::HelpBox*>::get>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::HelpBox::getStaticF_iconInfoUssClassName()  {
return ::cordl_internals::getStaticField<::StringW, "iconInfoUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::HelpBox*>::get>();
}
inline void UnityEngine::UIElements::HelpBox::setStaticF_iconwarningUssClassName(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "iconwarningUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::HelpBox*>::get>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::HelpBox::getStaticF_iconwarningUssClassName()  {
return ::cordl_internals::getStaticField<::StringW, "iconwarningUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::HelpBox*>::get>();
}
inline void UnityEngine::UIElements::HelpBox::setStaticF_iconErrorUssClassName(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "iconErrorUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::HelpBox*>::get>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::HelpBox::getStaticF_iconErrorUssClassName()  {
return ::cordl_internals::getStaticField<::StringW, "iconErrorUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::HelpBox*>::get>();
}
constexpr void UnityEngine::UIElements::HelpBox::__set_m_HelpBoxMessageType(::UnityEngine::UIElements::HelpBoxMessageType  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::HelpBoxMessageType, 0x3b0>(this, std::forward<::UnityEngine::UIElements::HelpBoxMessageType>(value));
}
constexpr ::UnityEngine::UIElements::HelpBoxMessageType& UnityEngine::UIElements::HelpBox::__get_m_HelpBoxMessageType()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::HelpBoxMessageType, 0x3b0>(this);
}
constexpr ::UnityEngine::UIElements::HelpBoxMessageType const& UnityEngine::UIElements::HelpBox::__get_m_HelpBoxMessageType() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::HelpBoxMessageType, 0x3b0>(this);
}
constexpr void UnityEngine::UIElements::HelpBox::__set_m_Icon(::UnityEngine::UIElements::VisualElement*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::VisualElement*, 0x3b8>(this, std::forward<::UnityEngine::UIElements::VisualElement*>(value));
}
constexpr ::UnityEngine::UIElements::VisualElement* UnityEngine::UIElements::HelpBox::__get_m_Icon()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::VisualElement*, 0x3b8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> UnityEngine::UIElements::HelpBox::__get_m_Icon() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::VisualElement*, 0x3b8>(this);
}
constexpr void UnityEngine::UIElements::HelpBox::__set_m_IconClass(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x3c0>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& UnityEngine::UIElements::HelpBox::__get_m_IconClass()  {
return ::cordl_internals::getInstanceField<::StringW, 0x3c0>(this);
}
constexpr ::StringW const& UnityEngine::UIElements::HelpBox::__get_m_IconClass() const {
return ::cordl_internals::getInstanceField<::StringW, 0x3c0>(this);
}
constexpr void UnityEngine::UIElements::HelpBox::__set_m_Label(::UnityEngine::UIElements::Label*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::Label*, 0x3c8>(this, std::forward<::UnityEngine::UIElements::Label*>(value));
}
constexpr ::UnityEngine::UIElements::Label* UnityEngine::UIElements::HelpBox::__get_m_Label()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::Label*, 0x3c8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::Label*> UnityEngine::UIElements::HelpBox::__get_m_Label() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::Label*, 0x3c8>(this);
}
inline void UnityEngine::UIElements::HelpBox::set_text(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::HelpBox*>::get(),
                            "set_text",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void UnityEngine::UIElements::HelpBox::set_messageType(::UnityEngine::UIElements::HelpBoxMessageType  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::HelpBox*>::get(),
                            "set_messageType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::HelpBoxMessageType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::HelpBox* UnityEngine::UIElements::HelpBox::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::UIElements::HelpBox*>());
}
inline void UnityEngine::UIElements::HelpBox::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::HelpBox*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::UnityEngine::UIElements::HelpBox* UnityEngine::UIElements::HelpBox::New_ctor(::StringW  text, ::UnityEngine::UIElements::HelpBoxMessageType  messageType)  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::UIElements::HelpBox*>(text, messageType));
}
inline void UnityEngine::UIElements::HelpBox::_ctor(::StringW  text, ::UnityEngine::UIElements::HelpBoxMessageType  messageType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::HelpBox*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::HelpBoxMessageType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, text, messageType);
}
inline ::StringW UnityEngine::UIElements::HelpBox::GetIconClass(::UnityEngine::UIElements::HelpBoxMessageType  messageType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::HelpBox*>::get(),
                            "GetIconClass",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::HelpBoxMessageType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method, messageType);
}
inline void UnityEngine::UIElements::HelpBox::UpdateIcon(::UnityEngine::UIElements::HelpBoxMessageType  messageType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::HelpBox*>::get(),
                            "UpdateIcon",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::HelpBoxMessageType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, messageType);
}
//  Writing Method size for method: ::UnityEngine::UIElements::__HelpBox__UxmlFactory._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__HelpBox__UxmlFactory::*)()>(&::UnityEngine::UIElements::__HelpBox__UxmlFactory::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2e37480;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__HelpBox__UxmlFactory*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
inline ::UnityEngine::UIElements::__HelpBox__UxmlFactory* UnityEngine::UIElements::__HelpBox__UxmlFactory::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::UIElements::__HelpBox__UxmlFactory*>());
}
inline void UnityEngine::UIElements::__HelpBox__UxmlFactory::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__HelpBox__UxmlFactory*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
