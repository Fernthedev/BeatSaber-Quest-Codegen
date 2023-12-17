#pragma once
#include "UnityEngine/UIElements/zzzz__StyleValueCollection_impl.hpp"
#include "UnityEngine/UIElements/zzzz__InlineStyleAccess_def.hpp"
#include "UnityEngine/UIElements/zzzz__IStyle_def.hpp"
#include "UnityEngine/UIElements/StyleSheets/zzzz__StyleValueManaged_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleTextShadow_def.hpp"
#include "UnityEngine/UIElements/zzzz__Position_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleTranslate_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleTransformOrigin_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleCursor_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleScale_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleLength_def.hpp"
#include "UnityEngine/UIElements/zzzz__DisplayStyle_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleRotate_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleEnum_1_def.hpp"
#include "UnityEngine/UIElements/StyleSheets/zzzz__StylePropertyReader_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleColor_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleFloat_def.hpp"
#include "UnityEngine/UIElements/zzzz__FlexDirection_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleSheet_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleRule_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__InlineStyleAccess_def.hpp"
#include "UnityEngine/UIElements/StyleSheets/zzzz__StyleValue_def.hpp"
#include "UnityEngine/UIElements/zzzz__Visibility_def.hpp"
#include "UnityEngine/UIElements/StyleSheets/zzzz__StylePropertyId_def.hpp"
#include "UnityEngine/UIElements/zzzz__ComputedStyle_def.hpp"
constexpr void UnityEngine::UIElements::__InlineStyleAccess__InlineRule::__set_sheet(::UnityEngine::UIElements::StyleSheet*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::StyleSheet*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::UIElements::StyleSheet*>(value));
}
constexpr ::UnityEngine::UIElements::StyleSheet* UnityEngine::UIElements::__InlineStyleAccess__InlineRule::__get_sheet()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::StyleSheet*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::StyleSheet*> UnityEngine::UIElements::__InlineStyleAccess__InlineRule::__get_sheet() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::StyleSheet*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::UIElements::__InlineStyleAccess__InlineRule::__set_rule(::UnityEngine::UIElements::StyleRule*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::StyleRule*, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::UIElements::StyleRule*>(value));
}
constexpr ::UnityEngine::UIElements::StyleRule* UnityEngine::UIElements::__InlineStyleAccess__InlineRule::__get_rule()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::StyleRule*, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::StyleRule*> UnityEngine::UIElements::__InlineStyleAccess__InlineRule::__get_rule() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::StyleRule*, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::UIElements::__InlineStyleAccess__InlineRule::__set_propertyIds(::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>>(value));
}
constexpr ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>& UnityEngine::UIElements::__InlineStyleAccess__InlineRule::__get_propertyIds()  {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*> const& UnityEngine::UIElements::__InlineStyleAccess__InlineRule::__get_propertyIds() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "sheet", ty: "::UnityEngine::UIElements::StyleSheet*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "rule", ty: "::UnityEngine::UIElements::StyleRule*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "propertyIds", ty: "::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>", modifiers: "", def_value: Some("csnull") }]
constexpr ::UnityEngine::UIElements::__InlineStyleAccess__InlineRule::__InlineStyleAccess__InlineRule(::UnityEngine::UIElements::StyleSheet*  sheet, ::UnityEngine::UIElements::StyleRule*  rule, ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>  propertyIds) noexcept : ::bs_hook::ValueTypeWrapper<0x18>() {this->sheet = sheet;
this->rule = rule;
this->propertyIds = propertyIds;
}
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.get_ve
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::VisualElement* (::UnityEngine::UIElements::InlineStyleAccess::*)()>(&::UnityEngine::UIElements::InlineStyleAccess::get_ve)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e7209c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                            "get_ve",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.set_ve
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::VisualElement*)>(&::UnityEngine::UIElements::InlineStyleAccess::set_ve)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e720a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                            "set_ve",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::VisualElement*)>(&::UnityEngine::UIElements::InlineStyleAccess::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2e720ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.Finalize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)()>(&::UnityEngine::UIElements::InlineStyleAccess::Finalize)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x2e720d0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.SetInlineRule
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleSheet*, ::UnityEngine::UIElements::StyleRule*)>(&::UnityEngine::UIElements::InlineStyleAccess::SetInlineRule)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2e72218;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                            "SetInlineRule",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheet*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleRule*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.IsValueSet
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleSheets::StylePropertyId)>(&::UnityEngine::UIElements::InlineStyleAccess::IsValueSet)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x2e72cc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                            "IsValueSet",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StylePropertyId>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.ApplyInlineStyles
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(ByRef<::UnityEngine::UIElements::ComputedStyle>)>(&::UnityEngine::UIElements::InlineStyleAccess::ApplyInlineStyles)> {
  constexpr static std::size_t size = 0xa14;
  constexpr static std::size_t addrs = 0x2e722ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                            "ApplyInlineStyles",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::UIElements::ComputedStyle>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_cursor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::StyleCursor (::UnityEngine::UIElements::InlineStyleAccess::*)()>(&::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_cursor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2e730a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                            "UnityEngine.UIElements.IStyle.get_cursor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_textShadow
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::StyleTextShadow (::UnityEngine::UIElements::InlineStyleAccess::*)()>(&::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_textShadow)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2e7311c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                            "UnityEngine.UIElements.IStyle.get_textShadow",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_transformOrigin
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::StyleTransformOrigin (::UnityEngine::UIElements::InlineStyleAccess::*)()>(&::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_transformOrigin)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2e731b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                            "UnityEngine.UIElements.IStyle.get_transformOrigin",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_translate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::StyleTranslate (::UnityEngine::UIElements::InlineStyleAccess::*)()>(&::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_translate)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2e7322c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                            "UnityEngine.UIElements.IStyle.get_translate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_translate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleTranslate)>(&::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_translate)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2e732ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                            "UnityEngine.UIElements.IStyle.set_translate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleTranslate>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_rotate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::StyleRotate (::UnityEngine::UIElements::InlineStyleAccess::*)()>(&::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_rotate)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2e7343c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                            "UnityEngine.UIElements.IStyle.get_rotate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_scale
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::StyleScale (::UnityEngine::UIElements::InlineStyleAccess::*)()>(&::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_scale)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2e734cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                            "UnityEngine.UIElements.IStyle.get_scale",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.SetStyleValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleSheets::StylePropertyId, ::UnityEngine::UIElements::StyleLength)>(&::UnityEngine::UIElements::InlineStyleAccess::SetStyleValue)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x2e73528;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                            "SetStyleValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StylePropertyId>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleLength>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.SetStyleValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleSheets::StylePropertyId, ::UnityEngine::UIElements::StyleFloat)>(&::UnityEngine::UIElements::InlineStyleAccess::SetStyleValue)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x2e73a24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                            "SetStyleValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StylePropertyId>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleFloat>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.SetStyleValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleSheets::StylePropertyId, ::UnityEngine::UIElements::StyleColor)>(&::UnityEngine::UIElements::InlineStyleAccess::SetStyleValue)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x2e73b34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                            "SetStyleValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StylePropertyId>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleColor>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.SetInlineTranslate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleTranslate)>(&::UnityEngine::UIElements::InlineStyleAccess::SetInlineTranslate)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x2e73300;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                            "SetInlineTranslate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleTranslate>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.ApplyStyleTranslate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleTranslate)>(&::UnityEngine::UIElements::InlineStyleAccess::ApplyStyleTranslate)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x2e73c70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                            "ApplyStyleTranslate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleTranslate>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.ApplyStyleValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleSheets::StyleValue)>(&::UnityEngine::UIElements::InlineStyleAccess::ApplyStyleValue)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x2e73744;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                            "ApplyStyleValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StyleValue>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.RemoveInlineStyle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleSheets::StylePropertyId)>(&::UnityEngine::UIElements::InlineStyleAccess::RemoveInlineStyle)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x2e73654;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                            "RemoveInlineStyle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StylePropertyId>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.ApplyFromComputedStyle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleSheets::StylePropertyId, ByRef<::UnityEngine::UIElements::ComputedStyle>)>(&::UnityEngine::UIElements::InlineStyleAccess::ApplyFromComputedStyle)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x2e73ea4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                            "ApplyFromComputedStyle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StylePropertyId>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::UIElements::ComputedStyle>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.TryGetInlineCursor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::InlineStyleAccess::*)(ByRef<::UnityEngine::UIElements::StyleCursor>)>(&::UnityEngine::UIElements::InlineStyleAccess::TryGetInlineCursor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2e730fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                            "TryGetInlineCursor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::UIElements::StyleCursor>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.TryGetInlineTextShadow
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::InlineStyleAccess::*)(ByRef<::UnityEngine::UIElements::StyleTextShadow>)>(&::UnityEngine::UIElements::InlineStyleAccess::TryGetInlineTextShadow)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2e73174;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                            "TryGetInlineTextShadow",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::UIElements::StyleTextShadow>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.TryGetInlineTransformOrigin
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::InlineStyleAccess::*)(ByRef<::UnityEngine::UIElements::StyleTransformOrigin>)>(&::UnityEngine::UIElements::InlineStyleAccess::TryGetInlineTransformOrigin)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2e731f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                            "TryGetInlineTransformOrigin",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::UIElements::StyleTransformOrigin>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.TryGetInlineTranslate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::InlineStyleAccess::*)(ByRef<::UnityEngine::UIElements::StyleTranslate>)>(&::UnityEngine::UIElements::InlineStyleAccess::TryGetInlineTranslate)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2e7327c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                            "TryGetInlineTranslate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::UIElements::StyleTranslate>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.TryGetInlineRotate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::InlineStyleAccess::*)(ByRef<::UnityEngine::UIElements::StyleRotate>)>(&::UnityEngine::UIElements::InlineStyleAccess::TryGetInlineRotate)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2e7348c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                            "TryGetInlineRotate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::UIElements::StyleRotate>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.TryGetInlineScale
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::InlineStyleAccess::*)(ByRef<::UnityEngine::UIElements::StyleScale>)>(&::UnityEngine::UIElements::InlineStyleAccess::TryGetInlineScale)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2e73500;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                            "TryGetInlineScale",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::UIElements::StyleScale>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_backgroundColor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleColor)>(&::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_backgroundColor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2e740c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                            "UnityEngine.UIElements.IStyle.set_backgroundColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleColor>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_borderBottomColor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleColor)>(&::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_borderBottomColor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2e7411c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                            "UnityEngine.UIElements.IStyle.set_borderBottomColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleColor>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_borderBottomLeftRadius
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleLength)>(&::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_borderBottomLeftRadius)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2e74178;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                            "UnityEngine.UIElements.IStyle.set_borderBottomLeftRadius",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleLength>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_borderBottomRightRadius
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleLength)>(&::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_borderBottomRightRadius)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2e741c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                            "UnityEngine.UIElements.IStyle.set_borderBottomRightRadius",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleLength>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_borderBottomWidth
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleFloat)>(&::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_borderBottomWidth)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2e74208;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                            "UnityEngine.UIElements.IStyle.set_borderBottomWidth",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleFloat>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_borderLeftColor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleColor)>(&::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_borderLeftColor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2e74274;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                            "UnityEngine.UIElements.IStyle.set_borderLeftColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleColor>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_borderLeftWidth
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleFloat)>(&::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_borderLeftWidth)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2e742d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                            "UnityEngine.UIElements.IStyle.set_borderLeftWidth",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleFloat>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_borderRightColor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleColor)>(&::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_borderRightColor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2e7433c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                            "UnityEngine.UIElements.IStyle.set_borderRightColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleColor>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_borderRightWidth
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleFloat)>(&::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_borderRightWidth)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2e74398;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                            "UnityEngine.UIElements.IStyle.set_borderRightWidth",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleFloat>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_borderTopColor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleColor)>(&::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_borderTopColor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2e74404;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                            "UnityEngine.UIElements.IStyle.set_borderTopColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleColor>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_borderTopLeftRadius
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleLength)>(&::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_borderTopLeftRadius)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2e7445c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                            "UnityEngine.UIElements.IStyle.set_borderTopLeftRadius",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleLength>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_borderTopRightRadius
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleLength)>(&::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_borderTopRightRadius)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2e744a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                            "UnityEngine.UIElements.IStyle.set_borderTopRightRadius",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleLength>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_borderTopWidth
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleFloat)>(&::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_borderTopWidth)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2e744ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                            "UnityEngine.UIElements.IStyle.set_borderTopWidth",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleFloat>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_bottom
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleLength)>(&::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_bottom)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2e74558;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                            "UnityEngine.UIElements.IStyle.set_bottom",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleLength>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_color
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleColor)>(&::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_color)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2e745d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                            "UnityEngine.UIElements.IStyle.set_color",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleColor>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_display
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::DisplayStyle> (::UnityEngine::UIElements::InlineStyleAccess::*)()>(&::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_display)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2e7462c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                            "UnityEngine.UIElements.IStyle.get_display",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_display
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::DisplayStyle>)>(&::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_display)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2e746c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                            "UnityEngine.UIElements.IStyle.set_display",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::DisplayStyle>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_flexBasis
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleLength)>(&::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_flexBasis)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2e74780;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                            "UnityEngine.UIElements.IStyle.set_flexBasis",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleLength>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_flexDirection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::FlexDirection>)>(&::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_flexDirection)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2e747fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                            "UnityEngine.UIElements.IStyle.set_flexDirection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::FlexDirection>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_flexGrow
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleFloat)>(&::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_flexGrow)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2e748b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                            "UnityEngine.UIElements.IStyle.set_flexGrow",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleFloat>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_flexShrink
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleFloat)>(&::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_flexShrink)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2e74924;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                            "UnityEngine.UIElements.IStyle.set_flexShrink",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleFloat>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_fontSize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleLength)>(&::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_fontSize)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2e74990;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                            "UnityEngine.UIElements.IStyle.set_fontSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleLength>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_height
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::StyleLength (::UnityEngine::UIElements::InlineStyleAccess::*)()>(&::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_height)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2e749d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                            "UnityEngine.UIElements.IStyle.get_height",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_height
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleLength)>(&::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_height)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2e749f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                            "UnityEngine.UIElements.IStyle.set_height",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleLength>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_left
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleLength)>(&::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_left)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2e74a6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                            "UnityEngine.UIElements.IStyle.set_left",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleLength>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_marginBottom
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleLength)>(&::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_marginBottom)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2e74ae8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                            "UnityEngine.UIElements.IStyle.set_marginBottom",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleLength>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_marginLeft
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleLength)>(&::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_marginLeft)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2e74b64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                            "UnityEngine.UIElements.IStyle.set_marginLeft",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleLength>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_marginRight
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleLength)>(&::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_marginRight)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2e74be0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                            "UnityEngine.UIElements.IStyle.set_marginRight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleLength>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_marginTop
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleLength)>(&::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_marginTop)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2e74c5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                            "UnityEngine.UIElements.IStyle.set_marginTop",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleLength>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_minWidth
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleLength)>(&::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_minWidth)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2e74cd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                            "UnityEngine.UIElements.IStyle.set_minWidth",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleLength>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_opacity
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleFloat)>(&::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_opacity)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2e74d54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                            "UnityEngine.UIElements.IStyle.set_opacity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleFloat>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_paddingBottom
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleLength)>(&::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_paddingBottom)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2e74d94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                            "UnityEngine.UIElements.IStyle.set_paddingBottom",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleLength>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_paddingLeft
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleLength)>(&::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_paddingLeft)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2e74e10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                            "UnityEngine.UIElements.IStyle.set_paddingLeft",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleLength>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_paddingRight
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleLength)>(&::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_paddingRight)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2e74e8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                            "UnityEngine.UIElements.IStyle.set_paddingRight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleLength>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_paddingTop
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::StyleLength (::UnityEngine::UIElements::InlineStyleAccess::*)()>(&::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_paddingTop)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2e74f08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                            "UnityEngine.UIElements.IStyle.get_paddingTop",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_paddingTop
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleLength)>(&::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_paddingTop)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2e74f24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                            "UnityEngine.UIElements.IStyle.set_paddingTop",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleLength>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_position
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Position>)>(&::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_position)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2e74fa0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                            "UnityEngine.UIElements.IStyle.set_position",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Position>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_right
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleLength)>(&::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_right)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2e7505c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                            "UnityEngine.UIElements.IStyle.set_right",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleLength>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_top
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleLength)>(&::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_top)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2e750d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                            "UnityEngine.UIElements.IStyle.set_top",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleLength>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_unityBackgroundImageTintColor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleColor)>(&::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_unityBackgroundImageTintColor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2e75154;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                            "UnityEngine.UIElements.IStyle.set_unityBackgroundImageTintColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleColor>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_visibility
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Visibility>)>(&::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_visibility)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2e751b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                            "UnityEngine.UIElements.IStyle.set_visibility",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Visibility>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_width
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::StyleLength (::UnityEngine::UIElements::InlineStyleAccess::*)()>(&::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_width)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2e7523c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                            "UnityEngine.UIElements.IStyle.get_width",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_width
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleLength)>(&::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_width)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2e75258;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                            "UnityEngine.UIElements.IStyle.set_width",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleLength>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::UIElements::IStyle"
constexpr  UnityEngine::UIElements::InlineStyleAccess::operator ::UnityEngine::UIElements::IStyle*() noexcept {
return static_cast<::UnityEngine::UIElements::IStyle*>(static_cast<void*>(this));
}
inline void UnityEngine::UIElements::InlineStyleAccess::setStaticF_s_StylePropertyReader(::UnityEngine::UIElements::StyleSheets::StylePropertyReader*  value)  {
::cordl_internals::setStaticField<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*, "s_StylePropertyReader", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get>(std::forward<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>(value));
}
inline ::UnityEngine::UIElements::StyleSheets::StylePropertyReader* UnityEngine::UIElements::InlineStyleAccess::getStaticF_s_StylePropertyReader()  {
return ::cordl_internals::getStaticField<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*, "s_StylePropertyReader", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get>();
}
constexpr void UnityEngine::UIElements::InlineStyleAccess::__set_m_ValuesManaged(::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StyleValueManaged>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StyleValueManaged>*, 0x18>(this, std::forward<::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StyleValueManaged>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StyleValueManaged>* UnityEngine::UIElements::InlineStyleAccess::__get_m_ValuesManaged()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StyleValueManaged>*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StyleValueManaged>*> UnityEngine::UIElements::InlineStyleAccess::__get_m_ValuesManaged() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StyleValueManaged>*, 0x18>(this);
}
constexpr void UnityEngine::UIElements::InlineStyleAccess::__set__ve_k__BackingField(::UnityEngine::UIElements::VisualElement*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::VisualElement*, 0x20>(this, std::forward<::UnityEngine::UIElements::VisualElement*>(value));
}
constexpr ::UnityEngine::UIElements::VisualElement* UnityEngine::UIElements::InlineStyleAccess::__get__ve_k__BackingField()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::VisualElement*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> UnityEngine::UIElements::InlineStyleAccess::__get__ve_k__BackingField() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::VisualElement*, 0x20>(this);
}
constexpr void UnityEngine::UIElements::InlineStyleAccess::__set_m_HasInlineCursor(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x28>(this, std::forward<bool>(value));
}
constexpr bool& UnityEngine::UIElements::InlineStyleAccess::__get_m_HasInlineCursor()  {
return ::cordl_internals::getInstanceField<bool, 0x28>(this);
}
constexpr bool const& UnityEngine::UIElements::InlineStyleAccess::__get_m_HasInlineCursor() const {
return ::cordl_internals::getInstanceField<bool, 0x28>(this);
}
constexpr void UnityEngine::UIElements::InlineStyleAccess::__set_m_InlineCursor(::UnityEngine::UIElements::StyleCursor  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::StyleCursor, 0x30>(this, std::forward<::UnityEngine::UIElements::StyleCursor>(value));
}
constexpr ::UnityEngine::UIElements::StyleCursor& UnityEngine::UIElements::InlineStyleAccess::__get_m_InlineCursor()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::StyleCursor, 0x30>(this);
}
constexpr ::UnityEngine::UIElements::StyleCursor const& UnityEngine::UIElements::InlineStyleAccess::__get_m_InlineCursor() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::StyleCursor, 0x30>(this);
}
constexpr void UnityEngine::UIElements::InlineStyleAccess::__set_m_HasInlineTextShadow(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x50>(this, std::forward<bool>(value));
}
constexpr bool& UnityEngine::UIElements::InlineStyleAccess::__get_m_HasInlineTextShadow()  {
return ::cordl_internals::getInstanceField<bool, 0x50>(this);
}
constexpr bool const& UnityEngine::UIElements::InlineStyleAccess::__get_m_HasInlineTextShadow() const {
return ::cordl_internals::getInstanceField<bool, 0x50>(this);
}
constexpr void UnityEngine::UIElements::InlineStyleAccess::__set_m_InlineTextShadow(::UnityEngine::UIElements::StyleTextShadow  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::StyleTextShadow, 0x54>(this, std::forward<::UnityEngine::UIElements::StyleTextShadow>(value));
}
constexpr ::UnityEngine::UIElements::StyleTextShadow& UnityEngine::UIElements::InlineStyleAccess::__get_m_InlineTextShadow()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::StyleTextShadow, 0x54>(this);
}
constexpr ::UnityEngine::UIElements::StyleTextShadow const& UnityEngine::UIElements::InlineStyleAccess::__get_m_InlineTextShadow() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::StyleTextShadow, 0x54>(this);
}
constexpr void UnityEngine::UIElements::InlineStyleAccess::__set_m_HasInlineTransformOrigin(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x74>(this, std::forward<bool>(value));
}
constexpr bool& UnityEngine::UIElements::InlineStyleAccess::__get_m_HasInlineTransformOrigin()  {
return ::cordl_internals::getInstanceField<bool, 0x74>(this);
}
constexpr bool const& UnityEngine::UIElements::InlineStyleAccess::__get_m_HasInlineTransformOrigin() const {
return ::cordl_internals::getInstanceField<bool, 0x74>(this);
}
constexpr void UnityEngine::UIElements::InlineStyleAccess::__set_m_InlineTransformOrigin(::UnityEngine::UIElements::StyleTransformOrigin  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::StyleTransformOrigin, 0x78>(this, std::forward<::UnityEngine::UIElements::StyleTransformOrigin>(value));
}
constexpr ::UnityEngine::UIElements::StyleTransformOrigin& UnityEngine::UIElements::InlineStyleAccess::__get_m_InlineTransformOrigin()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::StyleTransformOrigin, 0x78>(this);
}
constexpr ::UnityEngine::UIElements::StyleTransformOrigin const& UnityEngine::UIElements::InlineStyleAccess::__get_m_InlineTransformOrigin() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::StyleTransformOrigin, 0x78>(this);
}
constexpr void UnityEngine::UIElements::InlineStyleAccess::__set_m_HasInlineTranslate(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x90>(this, std::forward<bool>(value));
}
constexpr bool& UnityEngine::UIElements::InlineStyleAccess::__get_m_HasInlineTranslate()  {
return ::cordl_internals::getInstanceField<bool, 0x90>(this);
}
constexpr bool const& UnityEngine::UIElements::InlineStyleAccess::__get_m_HasInlineTranslate() const {
return ::cordl_internals::getInstanceField<bool, 0x90>(this);
}
constexpr void UnityEngine::UIElements::InlineStyleAccess::__set_m_InlineTranslateOperation(::UnityEngine::UIElements::StyleTranslate  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::StyleTranslate, 0x94>(this, std::forward<::UnityEngine::UIElements::StyleTranslate>(value));
}
constexpr ::UnityEngine::UIElements::StyleTranslate& UnityEngine::UIElements::InlineStyleAccess::__get_m_InlineTranslateOperation()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::StyleTranslate, 0x94>(this);
}
constexpr ::UnityEngine::UIElements::StyleTranslate const& UnityEngine::UIElements::InlineStyleAccess::__get_m_InlineTranslateOperation() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::StyleTranslate, 0x94>(this);
}
constexpr void UnityEngine::UIElements::InlineStyleAccess::__set_m_HasInlineRotate(bool  value)  {
::cordl_internals::setInstanceField<bool, 0xb0>(this, std::forward<bool>(value));
}
constexpr bool& UnityEngine::UIElements::InlineStyleAccess::__get_m_HasInlineRotate()  {
return ::cordl_internals::getInstanceField<bool, 0xb0>(this);
}
constexpr bool const& UnityEngine::UIElements::InlineStyleAccess::__get_m_HasInlineRotate() const {
return ::cordl_internals::getInstanceField<bool, 0xb0>(this);
}
constexpr void UnityEngine::UIElements::InlineStyleAccess::__set_m_InlineRotateOperation(::UnityEngine::UIElements::StyleRotate  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::StyleRotate, 0xb4>(this, std::forward<::UnityEngine::UIElements::StyleRotate>(value));
}
constexpr ::UnityEngine::UIElements::StyleRotate& UnityEngine::UIElements::InlineStyleAccess::__get_m_InlineRotateOperation()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::StyleRotate, 0xb4>(this);
}
constexpr ::UnityEngine::UIElements::StyleRotate const& UnityEngine::UIElements::InlineStyleAccess::__get_m_InlineRotateOperation() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::StyleRotate, 0xb4>(this);
}
constexpr void UnityEngine::UIElements::InlineStyleAccess::__set_m_HasInlineScale(bool  value)  {
::cordl_internals::setInstanceField<bool, 0xd0>(this, std::forward<bool>(value));
}
constexpr bool& UnityEngine::UIElements::InlineStyleAccess::__get_m_HasInlineScale()  {
return ::cordl_internals::getInstanceField<bool, 0xd0>(this);
}
constexpr bool const& UnityEngine::UIElements::InlineStyleAccess::__get_m_HasInlineScale() const {
return ::cordl_internals::getInstanceField<bool, 0xd0>(this);
}
constexpr void UnityEngine::UIElements::InlineStyleAccess::__set_m_InlineScale(::UnityEngine::UIElements::StyleScale  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::StyleScale, 0xd4>(this, std::forward<::UnityEngine::UIElements::StyleScale>(value));
}
constexpr ::UnityEngine::UIElements::StyleScale& UnityEngine::UIElements::InlineStyleAccess::__get_m_InlineScale()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::StyleScale, 0xd4>(this);
}
constexpr ::UnityEngine::UIElements::StyleScale const& UnityEngine::UIElements::InlineStyleAccess::__get_m_InlineScale() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::StyleScale, 0xd4>(this);
}
constexpr void UnityEngine::UIElements::InlineStyleAccess::__set_m_InlineRule(::UnityEngine::UIElements::__InlineStyleAccess__InlineRule  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::__InlineStyleAccess__InlineRule, 0xe8>(this, std::forward<::UnityEngine::UIElements::__InlineStyleAccess__InlineRule>(value));
}
constexpr ::UnityEngine::UIElements::__InlineStyleAccess__InlineRule& UnityEngine::UIElements::InlineStyleAccess::__get_m_InlineRule()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::__InlineStyleAccess__InlineRule, 0xe8>(this);
}
constexpr ::UnityEngine::UIElements::__InlineStyleAccess__InlineRule const& UnityEngine::UIElements::InlineStyleAccess::__get_m_InlineRule() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::__InlineStyleAccess__InlineRule, 0xe8>(this);
}
inline ::UnityEngine::UIElements::VisualElement* UnityEngine::UIElements::InlineStyleAccess::get_ve()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                            "get_ve",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualElement*, false>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::set_ve(::UnityEngine::UIElements::VisualElement*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                            "set_ve",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::InlineStyleAccess* UnityEngine::UIElements::InlineStyleAccess::New_ctor(::UnityEngine::UIElements::VisualElement*  ve)  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::UIElements::InlineStyleAccess*>(ve));
}
inline void UnityEngine::UIElements::InlineStyleAccess::_ctor(::UnityEngine::UIElements::VisualElement*  ve)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, ve);
}
inline void UnityEngine::UIElements::InlineStyleAccess::Finalize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                            "Finalize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::SetInlineRule(::UnityEngine::UIElements::StyleSheet*  sheet, ::UnityEngine::UIElements::StyleRule*  rule)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                            "SetInlineRule",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheet*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleRule*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, sheet, rule);
}
inline bool UnityEngine::UIElements::InlineStyleAccess::IsValueSet(::UnityEngine::UIElements::StyleSheets::StylePropertyId  id)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                            "IsValueSet",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StylePropertyId>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, id);
}
inline void UnityEngine::UIElements::InlineStyleAccess::ApplyInlineStyles(ByRef<::UnityEngine::UIElements::ComputedStyle>  computedStyle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                            "ApplyInlineStyles",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::UIElements::ComputedStyle>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, computedStyle);
}
inline ::UnityEngine::UIElements::StyleCursor UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_cursor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                            "UnityEngine.UIElements.IStyle.get_cursor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleCursor, false>(*this, ___internal_method);
}
inline ::UnityEngine::UIElements::StyleTextShadow UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_textShadow()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                            "UnityEngine.UIElements.IStyle.get_textShadow",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleTextShadow, false>(*this, ___internal_method);
}
inline ::UnityEngine::UIElements::StyleTransformOrigin UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_transformOrigin()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                            "UnityEngine.UIElements.IStyle.get_transformOrigin",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleTransformOrigin, false>(*this, ___internal_method);
}
inline ::UnityEngine::UIElements::StyleTranslate UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_translate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                            "UnityEngine.UIElements.IStyle.get_translate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleTranslate, false>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_translate(::UnityEngine::UIElements::StyleTranslate  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                            "UnityEngine.UIElements.IStyle.set_translate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleTranslate>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleRotate UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_rotate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                            "UnityEngine.UIElements.IStyle.get_rotate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleRotate, false>(*this, ___internal_method);
}
inline ::UnityEngine::UIElements::StyleScale UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_scale()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                            "UnityEngine.UIElements.IStyle.get_scale",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleScale, false>(*this, ___internal_method);
}
inline bool UnityEngine::UIElements::InlineStyleAccess::SetStyleValue(::UnityEngine::UIElements::StyleSheets::StylePropertyId  id, ::UnityEngine::UIElements::StyleLength  inlineValue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                            "SetStyleValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StylePropertyId>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleLength>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, id, inlineValue);
}
inline bool UnityEngine::UIElements::InlineStyleAccess::SetStyleValue(::UnityEngine::UIElements::StyleSheets::StylePropertyId  id, ::UnityEngine::UIElements::StyleFloat  inlineValue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                            "SetStyleValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StylePropertyId>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleFloat>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, id, inlineValue);
}
inline bool UnityEngine::UIElements::InlineStyleAccess::SetStyleValue(::UnityEngine::UIElements::StyleSheets::StylePropertyId  id, ::UnityEngine::UIElements::StyleColor  inlineValue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                            "SetStyleValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StylePropertyId>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleColor>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, id, inlineValue);
}
template<typename T>
inline bool UnityEngine::UIElements::InlineStyleAccess::SetStyleValue(::UnityEngine::UIElements::StyleSheets::StylePropertyId  id, ::UnityEngine::UIElements::StyleEnum_1<T>  inlineValue)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                        "SetStyleValue",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StylePropertyId>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleEnum_1<T>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, id, inlineValue);
}
inline bool UnityEngine::UIElements::InlineStyleAccess::SetInlineTranslate(::UnityEngine::UIElements::StyleTranslate  inlineValue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                            "SetInlineTranslate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleTranslate>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, inlineValue);
}
inline void UnityEngine::UIElements::InlineStyleAccess::ApplyStyleTranslate(::UnityEngine::UIElements::StyleTranslate  translate)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                            "ApplyStyleTranslate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleTranslate>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, translate);
}
inline void UnityEngine::UIElements::InlineStyleAccess::ApplyStyleValue(::UnityEngine::UIElements::StyleSheets::StyleValue  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                            "ApplyStyleValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StyleValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline bool UnityEngine::UIElements::InlineStyleAccess::RemoveInlineStyle(::UnityEngine::UIElements::StyleSheets::StylePropertyId  id)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                            "RemoveInlineStyle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StylePropertyId>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, id);
}
inline void UnityEngine::UIElements::InlineStyleAccess::ApplyFromComputedStyle(::UnityEngine::UIElements::StyleSheets::StylePropertyId  id, ByRef<::UnityEngine::UIElements::ComputedStyle>  newStyle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                            "ApplyFromComputedStyle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StylePropertyId>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::UIElements::ComputedStyle>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, id, newStyle);
}
inline bool UnityEngine::UIElements::InlineStyleAccess::TryGetInlineCursor(ByRef<::UnityEngine::UIElements::StyleCursor>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                            "TryGetInlineCursor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::UIElements::StyleCursor>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, value);
}
inline bool UnityEngine::UIElements::InlineStyleAccess::TryGetInlineTextShadow(ByRef<::UnityEngine::UIElements::StyleTextShadow>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                            "TryGetInlineTextShadow",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::UIElements::StyleTextShadow>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, value);
}
inline bool UnityEngine::UIElements::InlineStyleAccess::TryGetInlineTransformOrigin(ByRef<::UnityEngine::UIElements::StyleTransformOrigin>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                            "TryGetInlineTransformOrigin",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::UIElements::StyleTransformOrigin>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, value);
}
inline bool UnityEngine::UIElements::InlineStyleAccess::TryGetInlineTranslate(ByRef<::UnityEngine::UIElements::StyleTranslate>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                            "TryGetInlineTranslate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::UIElements::StyleTranslate>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, value);
}
inline bool UnityEngine::UIElements::InlineStyleAccess::TryGetInlineRotate(ByRef<::UnityEngine::UIElements::StyleRotate>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                            "TryGetInlineRotate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::UIElements::StyleRotate>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, value);
}
inline bool UnityEngine::UIElements::InlineStyleAccess::TryGetInlineScale(ByRef<::UnityEngine::UIElements::StyleScale>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                            "TryGetInlineScale",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::UIElements::StyleScale>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, value);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_backgroundColor(::UnityEngine::UIElements::StyleColor  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                            "UnityEngine.UIElements.IStyle.set_backgroundColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleColor>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_borderBottomColor(::UnityEngine::UIElements::StyleColor  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                            "UnityEngine.UIElements.IStyle.set_borderBottomColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleColor>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_borderBottomLeftRadius(::UnityEngine::UIElements::StyleLength  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                            "UnityEngine.UIElements.IStyle.set_borderBottomLeftRadius",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleLength>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_borderBottomRightRadius(::UnityEngine::UIElements::StyleLength  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                            "UnityEngine.UIElements.IStyle.set_borderBottomRightRadius",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleLength>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_borderBottomWidth(::UnityEngine::UIElements::StyleFloat  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                            "UnityEngine.UIElements.IStyle.set_borderBottomWidth",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleFloat>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_borderLeftColor(::UnityEngine::UIElements::StyleColor  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                            "UnityEngine.UIElements.IStyle.set_borderLeftColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleColor>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_borderLeftWidth(::UnityEngine::UIElements::StyleFloat  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                            "UnityEngine.UIElements.IStyle.set_borderLeftWidth",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleFloat>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_borderRightColor(::UnityEngine::UIElements::StyleColor  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                            "UnityEngine.UIElements.IStyle.set_borderRightColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleColor>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_borderRightWidth(::UnityEngine::UIElements::StyleFloat  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                            "UnityEngine.UIElements.IStyle.set_borderRightWidth",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleFloat>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_borderTopColor(::UnityEngine::UIElements::StyleColor  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                            "UnityEngine.UIElements.IStyle.set_borderTopColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleColor>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_borderTopLeftRadius(::UnityEngine::UIElements::StyleLength  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                            "UnityEngine.UIElements.IStyle.set_borderTopLeftRadius",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleLength>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_borderTopRightRadius(::UnityEngine::UIElements::StyleLength  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                            "UnityEngine.UIElements.IStyle.set_borderTopRightRadius",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleLength>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_borderTopWidth(::UnityEngine::UIElements::StyleFloat  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                            "UnityEngine.UIElements.IStyle.set_borderTopWidth",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleFloat>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_bottom(::UnityEngine::UIElements::StyleLength  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                            "UnityEngine.UIElements.IStyle.set_bottom",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleLength>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_color(::UnityEngine::UIElements::StyleColor  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                            "UnityEngine.UIElements.IStyle.set_color",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleColor>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::DisplayStyle> UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_display()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                            "UnityEngine.UIElements.IStyle.get_display",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::DisplayStyle>, false>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_display(::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::DisplayStyle>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                            "UnityEngine.UIElements.IStyle.set_display",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::DisplayStyle>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_flexBasis(::UnityEngine::UIElements::StyleLength  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                            "UnityEngine.UIElements.IStyle.set_flexBasis",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleLength>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_flexDirection(::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::FlexDirection>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                            "UnityEngine.UIElements.IStyle.set_flexDirection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::FlexDirection>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_flexGrow(::UnityEngine::UIElements::StyleFloat  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                            "UnityEngine.UIElements.IStyle.set_flexGrow",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleFloat>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_flexShrink(::UnityEngine::UIElements::StyleFloat  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                            "UnityEngine.UIElements.IStyle.set_flexShrink",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleFloat>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_fontSize(::UnityEngine::UIElements::StyleLength  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                            "UnityEngine.UIElements.IStyle.set_fontSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleLength>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleLength UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_height()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                            "UnityEngine.UIElements.IStyle.get_height",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleLength, false>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_height(::UnityEngine::UIElements::StyleLength  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                            "UnityEngine.UIElements.IStyle.set_height",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleLength>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_left(::UnityEngine::UIElements::StyleLength  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                            "UnityEngine.UIElements.IStyle.set_left",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleLength>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_marginBottom(::UnityEngine::UIElements::StyleLength  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                            "UnityEngine.UIElements.IStyle.set_marginBottom",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleLength>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_marginLeft(::UnityEngine::UIElements::StyleLength  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                            "UnityEngine.UIElements.IStyle.set_marginLeft",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleLength>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_marginRight(::UnityEngine::UIElements::StyleLength  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                            "UnityEngine.UIElements.IStyle.set_marginRight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleLength>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_marginTop(::UnityEngine::UIElements::StyleLength  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                            "UnityEngine.UIElements.IStyle.set_marginTop",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleLength>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_minWidth(::UnityEngine::UIElements::StyleLength  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                            "UnityEngine.UIElements.IStyle.set_minWidth",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleLength>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_opacity(::UnityEngine::UIElements::StyleFloat  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                            "UnityEngine.UIElements.IStyle.set_opacity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleFloat>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_paddingBottom(::UnityEngine::UIElements::StyleLength  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                            "UnityEngine.UIElements.IStyle.set_paddingBottom",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleLength>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_paddingLeft(::UnityEngine::UIElements::StyleLength  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                            "UnityEngine.UIElements.IStyle.set_paddingLeft",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleLength>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_paddingRight(::UnityEngine::UIElements::StyleLength  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                            "UnityEngine.UIElements.IStyle.set_paddingRight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleLength>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleLength UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_paddingTop()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                            "UnityEngine.UIElements.IStyle.get_paddingTop",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleLength, false>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_paddingTop(::UnityEngine::UIElements::StyleLength  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                            "UnityEngine.UIElements.IStyle.set_paddingTop",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleLength>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_position(::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Position>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                            "UnityEngine.UIElements.IStyle.set_position",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Position>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_right(::UnityEngine::UIElements::StyleLength  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                            "UnityEngine.UIElements.IStyle.set_right",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleLength>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_top(::UnityEngine::UIElements::StyleLength  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                            "UnityEngine.UIElements.IStyle.set_top",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleLength>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_unityBackgroundImageTintColor(::UnityEngine::UIElements::StyleColor  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                            "UnityEngine.UIElements.IStyle.set_unityBackgroundImageTintColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleColor>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_visibility(::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Visibility>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                            "UnityEngine.UIElements.IStyle.set_visibility",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Visibility>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleLength UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_width()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                            "UnityEngine.UIElements.IStyle.get_width",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleLength, false>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_width(::UnityEngine::UIElements::StyleLength  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                            "UnityEngine.UIElements.IStyle.set_width",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleLength>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
