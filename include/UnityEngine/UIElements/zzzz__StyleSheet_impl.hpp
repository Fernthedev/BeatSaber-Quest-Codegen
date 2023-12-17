#pragma once
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "UnityEngine/UIElements/zzzz__StyleSheet_def.hpp"
#include "UnityEngine/UIElements/StyleSheets/zzzz__ScalableImage_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleRule_def.hpp"
#include "UnityEngine/UIElements/StyleSheets/zzzz__Dimension_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleSheet_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleValueKeyword_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleValueFunction_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleValueHandle_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleValueType_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleComplexSelector_def.hpp"
constexpr void UnityEngine::UIElements::__StyleSheet__ImportStruct::__set_styleSheet(::UnityEngine::UIElements::StyleSheet*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::StyleSheet*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::UIElements::StyleSheet*>(value));
}
constexpr ::UnityEngine::UIElements::StyleSheet* UnityEngine::UIElements::__StyleSheet__ImportStruct::__get_styleSheet()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::StyleSheet*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::StyleSheet*> UnityEngine::UIElements::__StyleSheet__ImportStruct::__get_styleSheet() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::StyleSheet*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::UIElements::__StyleSheet__ImportStruct::__set_mediaQueries(::ArrayW<::StringW,::Array<::StringW>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::StringW,::Array<::StringW>*>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::ArrayW<::StringW,::Array<::StringW>*>>(value));
}
constexpr ::ArrayW<::StringW,::Array<::StringW>*>& UnityEngine::UIElements::__StyleSheet__ImportStruct::__get_mediaQueries()  {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW,::Array<::StringW>*>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::ArrayW<::StringW,::Array<::StringW>*> const& UnityEngine::UIElements::__StyleSheet__ImportStruct::__get_mediaQueries() const {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW,::Array<::StringW>*>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "styleSheet", ty: "::UnityEngine::UIElements::StyleSheet*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "mediaQueries", ty: "::ArrayW<::StringW,::Array<::StringW>*>", modifiers: "", def_value: Some("csnull") }]
constexpr ::UnityEngine::UIElements::__StyleSheet__ImportStruct::__StyleSheet__ImportStruct(::UnityEngine::UIElements::StyleSheet*  styleSheet, ::ArrayW<::StringW,::Array<::StringW>*>  mediaQueries) noexcept : ::bs_hook::ValueTypeWrapper<0x10>() {this->styleSheet = styleSheet;
this->mediaQueries = mediaQueries;
}
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheet.get_importedWithErrors
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::StyleSheet::*)()>(&::UnityEngine::UIElements::StyleSheet::get_importedWithErrors)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e6b544;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheet*>::get(),
                            "get_importedWithErrors",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheet.set_importedWithErrors
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::StyleSheet::*)(bool)>(&::UnityEngine::UIElements::StyleSheet::set_importedWithErrors)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2e6b54c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheet*>::get(),
                            "set_importedWithErrors",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheet.get_importedWithWarnings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::StyleSheet::*)()>(&::UnityEngine::UIElements::StyleSheet::get_importedWithWarnings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e6b558;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheet*>::get(),
                            "get_importedWithWarnings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheet.set_importedWithWarnings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::StyleSheet::*)(bool)>(&::UnityEngine::UIElements::StyleSheet::set_importedWithWarnings)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2e6b560;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheet*>::get(),
                            "set_importedWithWarnings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheet.get_rules
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::UIElements::StyleRule*,::Array<::UnityEngine::UIElements::StyleRule*>*> (::UnityEngine::UIElements::StyleSheet::*)()>(&::UnityEngine::UIElements::StyleSheet::get_rules)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e6b56c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheet*>::get(),
                            "get_rules",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheet.set_rules
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::StyleSheet::*)(::ArrayW<::UnityEngine::UIElements::StyleRule*,::Array<::UnityEngine::UIElements::StyleRule*>*>)>(&::UnityEngine::UIElements::StyleSheet::set_rules)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e6b574;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheet*>::get(),
                            "set_rules",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::UIElements::StyleRule*,::Array<::UnityEngine::UIElements::StyleRule*>*>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheet.get_complexSelectors
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::UIElements::StyleComplexSelector*,::Array<::UnityEngine::UIElements::StyleComplexSelector*>*> (::UnityEngine::UIElements::StyleSheet::*)()>(&::UnityEngine::UIElements::StyleSheet::get_complexSelectors)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e6bad8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheet*>::get(),
                            "get_complexSelectors",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheet.set_complexSelectors
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::StyleSheet::*)(::ArrayW<::UnityEngine::UIElements::StyleComplexSelector*,::Array<::UnityEngine::UIElements::StyleComplexSelector*>*>)>(&::UnityEngine::UIElements::StyleSheet::set_complexSelectors)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e6bae0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheet*>::get(),
                            "set_complexSelectors",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::UIElements::StyleComplexSelector*,::Array<::UnityEngine::UIElements::StyleComplexSelector*>*>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheet.get_flattenedRecursiveImports
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheet*>* (::UnityEngine::UIElements::StyleSheet::*)()>(&::UnityEngine::UIElements::StyleSheet::get_flattenedRecursiveImports)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e6bae8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheet*>::get(),
                            "get_flattenedRecursiveImports",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheet.get_contentHash
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::UIElements::StyleSheet::*)()>(&::UnityEngine::UIElements::StyleSheet::get_contentHash)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e6baf0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheet*>::get(),
                            "get_contentHash",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheet.set_contentHash
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::StyleSheet::*)(int32_t)>(&::UnityEngine::UIElements::StyleSheet::set_contentHash)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e6baf8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheet*>::get(),
                            "set_contentHash",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheet.get_isDefaultStyleSheet
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::StyleSheet::*)()>(&::UnityEngine::UIElements::StyleSheet::get_isDefaultStyleSheet)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e6bb00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheet*>::get(),
                            "get_isDefaultStyleSheet",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheet.set_isDefaultStyleSheet
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::StyleSheet::*)(bool)>(&::UnityEngine::UIElements::StyleSheet::set_isDefaultStyleSheet)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x2e6b274;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheet*>::get(),
                            "set_isDefaultStyleSheet",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheet.OnEnable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::StyleSheet::*)()>(&::UnityEngine::UIElements::StyleSheet::OnEnable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2e6b3d4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheet*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheet*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheet.FlattenImportedStyleSheetsRecursive
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::StyleSheet::*)()>(&::UnityEngine::UIElements::StyleSheet::FlattenImportedStyleSheetsRecursive)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2e6bb08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheet*>::get(),
                            "FlattenImportedStyleSheetsRecursive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheet.FlattenImportedStyleSheetsRecursive
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::StyleSheet::*)(::UnityEngine::UIElements::StyleSheet*)>(&::UnityEngine::UIElements::StyleSheet::FlattenImportedStyleSheetsRecursive)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x2e6bb84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheet*>::get(),
                            "FlattenImportedStyleSheetsRecursive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheet*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheet.SetupReferences
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::StyleSheet::*)()>(&::UnityEngine::UIElements::StyleSheet::SetupReferences)> {
  constexpr static std::size_t size = 0x55c;
  constexpr static std::size_t addrs = 0x2e6b57c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheet*>::get(),
                            "SetupReferences",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheet.ReadKeyword
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::StyleValueKeyword (::UnityEngine::UIElements::StyleSheet::*)(::UnityEngine::UIElements::StyleValueHandle)>(&::UnityEngine::UIElements::StyleSheet::ReadKeyword)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e6bd90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheet*>::get(),
                            "ReadKeyword",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleValueHandle>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheet.ReadFloat
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::UIElements::StyleSheet::*)(::UnityEngine::UIElements::StyleValueHandle)>(&::UnityEngine::UIElements::StyleSheet::ReadFloat)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2e6ad70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheet*>::get(),
                            "ReadFloat",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleValueHandle>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheet.TryReadFloat
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::StyleSheet::*)(::UnityEngine::UIElements::StyleValueHandle, ByRef<float_t>)>(&::UnityEngine::UIElements::StyleSheet::TryReadFloat)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x2e6bd98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheet*>::get(),
                            "TryReadFloat",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleValueHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheet.ReadDimension
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::StyleSheets::Dimension (::UnityEngine::UIElements::StyleSheet::*)(::UnityEngine::UIElements::StyleValueHandle)>(&::UnityEngine::UIElements::StyleSheet::ReadDimension)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x2e6be8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheet*>::get(),
                            "ReadDimension",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleValueHandle>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheet.TryReadDimension
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::StyleSheet::*)(::UnityEngine::UIElements::StyleValueHandle, ByRef<::UnityEngine::UIElements::StyleSheets::Dimension>)>(&::UnityEngine::UIElements::StyleSheet::TryReadDimension)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x2e6bf7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheet*>::get(),
                            "TryReadDimension",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleValueHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::UIElements::StyleSheets::Dimension>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheet.ReadColor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (::UnityEngine::UIElements::StyleSheet::*)(::UnityEngine::UIElements::StyleValueHandle)>(&::UnityEngine::UIElements::StyleSheet::ReadColor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2e6c098;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheet*>::get(),
                            "ReadColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleValueHandle>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheet.TryReadColor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::StyleSheet::*)(::UnityEngine::UIElements::StyleValueHandle, ByRef<::UnityEngine::Color>)>(&::UnityEngine::UIElements::StyleSheet::TryReadColor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2e6c11c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheet*>::get(),
                            "TryReadColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleValueHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Color>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheet.ReadString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::UIElements::StyleSheet::*)(::UnityEngine::UIElements::StyleValueHandle)>(&::UnityEngine::UIElements::StyleSheet::ReadString)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2e6c1a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheet*>::get(),
                            "ReadString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleValueHandle>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheet.TryReadString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::StyleSheet::*)(::UnityEngine::UIElements::StyleValueHandle, ByRef<::StringW>)>(&::UnityEngine::UIElements::StyleSheet::TryReadString)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2e6c22c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheet*>::get(),
                            "TryReadString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleValueHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheet.ReadEnum
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::UIElements::StyleSheet::*)(::UnityEngine::UIElements::StyleValueHandle)>(&::UnityEngine::UIElements::StyleSheet::ReadEnum)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2e6c2b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheet*>::get(),
                            "ReadEnum",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleValueHandle>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheet.TryReadEnum
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::StyleSheet::*)(::UnityEngine::UIElements::StyleValueHandle, ByRef<::StringW>)>(&::UnityEngine::UIElements::StyleSheet::TryReadEnum)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2e6c33c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheet*>::get(),
                            "TryReadEnum",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleValueHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheet.ReadVariable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::UIElements::StyleSheet::*)(::UnityEngine::UIElements::StyleValueHandle)>(&::UnityEngine::UIElements::StyleSheet::ReadVariable)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2e6ae44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheet*>::get(),
                            "ReadVariable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleValueHandle>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheet.TryReadVariable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::StyleSheet::*)(::UnityEngine::UIElements::StyleValueHandle, ByRef<::StringW>)>(&::UnityEngine::UIElements::StyleSheet::TryReadVariable)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2e6c3c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheet*>::get(),
                            "TryReadVariable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleValueHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheet.ReadResourcePath
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::UIElements::StyleSheet::*)(::UnityEngine::UIElements::StyleValueHandle)>(&::UnityEngine::UIElements::StyleSheet::ReadResourcePath)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2e6c454;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheet*>::get(),
                            "ReadResourcePath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleValueHandle>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheet.TryReadResourcePath
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::StyleSheet::*)(::UnityEngine::UIElements::StyleValueHandle, ByRef<::StringW>)>(&::UnityEngine::UIElements::StyleSheet::TryReadResourcePath)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2e6c4d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheet*>::get(),
                            "TryReadResourcePath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleValueHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheet.ReadAssetReference
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Object* (::UnityEngine::UIElements::StyleSheet::*)(::UnityEngine::UIElements::StyleValueHandle)>(&::UnityEngine::UIElements::StyleSheet::ReadAssetReference)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2e6c564;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheet*>::get(),
                            "ReadAssetReference",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleValueHandle>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheet.ReadMissingAssetReferenceUrl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::UIElements::StyleSheet::*)(::UnityEngine::UIElements::StyleValueHandle)>(&::UnityEngine::UIElements::StyleSheet::ReadMissingAssetReferenceUrl)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2e6c5e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheet*>::get(),
                            "ReadMissingAssetReferenceUrl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleValueHandle>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheet.TryReadAssetReference
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::StyleSheet::*)(::UnityEngine::UIElements::StyleValueHandle, ByRef<::UnityEngine::Object*>)>(&::UnityEngine::UIElements::StyleSheet::TryReadAssetReference)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2e6c66c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheet*>::get(),
                            "TryReadAssetReference",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleValueHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Object*>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheet.ReadFunction
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::StyleValueFunction (::UnityEngine::UIElements::StyleSheet::*)(::UnityEngine::UIElements::StyleValueHandle)>(&::UnityEngine::UIElements::StyleSheet::ReadFunction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e6c6f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheet*>::get(),
                            "ReadFunction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleValueHandle>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheet.ReadFunctionName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::UIElements::StyleSheet::*)(::UnityEngine::UIElements::StyleValueHandle)>(&::UnityEngine::UIElements::StyleSheet::ReadFunctionName)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x2e6c700;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheet*>::get(),
                            "ReadFunctionName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleValueHandle>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheet.ReadScalableImage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::StyleSheets::ScalableImage (::UnityEngine::UIElements::StyleSheet::*)(::UnityEngine::UIElements::StyleValueHandle)>(&::UnityEngine::UIElements::StyleSheet::ReadScalableImage)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2e6c854;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheet*>::get(),
                            "ReadScalableImage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleValueHandle>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheet.CustomStartsWith
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ::StringW)>(&::UnityEngine::UIElements::StyleSheet::CustomStartsWith)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2e6bccc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheet*>::get(),
                            "CustomStartsWith",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheet._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::StyleSheet::*)()>(&::UnityEngine::UIElements::StyleSheet::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e6b430;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheet*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::UIElements::StyleSheet::__set_m_ImportedWithErrors(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x18>(this, std::forward<bool>(value));
}
constexpr bool& UnityEngine::UIElements::StyleSheet::__get_m_ImportedWithErrors()  {
return ::cordl_internals::getInstanceField<bool, 0x18>(this);
}
constexpr bool const& UnityEngine::UIElements::StyleSheet::__get_m_ImportedWithErrors() const {
return ::cordl_internals::getInstanceField<bool, 0x18>(this);
}
constexpr void UnityEngine::UIElements::StyleSheet::__set_m_ImportedWithWarnings(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x19>(this, std::forward<bool>(value));
}
constexpr bool& UnityEngine::UIElements::StyleSheet::__get_m_ImportedWithWarnings()  {
return ::cordl_internals::getInstanceField<bool, 0x19>(this);
}
constexpr bool const& UnityEngine::UIElements::StyleSheet::__get_m_ImportedWithWarnings() const {
return ::cordl_internals::getInstanceField<bool, 0x19>(this);
}
constexpr void UnityEngine::UIElements::StyleSheet::__set_m_Rules(::ArrayW<::UnityEngine::UIElements::StyleRule*,::Array<::UnityEngine::UIElements::StyleRule*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::UIElements::StyleRule*,::Array<::UnityEngine::UIElements::StyleRule*>*>, 0x20>(this, std::forward<::ArrayW<::UnityEngine::UIElements::StyleRule*,::Array<::UnityEngine::UIElements::StyleRule*>*>>(value));
}
constexpr ::ArrayW<::UnityEngine::UIElements::StyleRule*,::Array<::UnityEngine::UIElements::StyleRule*>*>& UnityEngine::UIElements::StyleSheet::__get_m_Rules()  {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::UIElements::StyleRule*,::Array<::UnityEngine::UIElements::StyleRule*>*>, 0x20>(this);
}
constexpr ::ArrayW<::UnityEngine::UIElements::StyleRule*,::Array<::UnityEngine::UIElements::StyleRule*>*> const& UnityEngine::UIElements::StyleSheet::__get_m_Rules() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::UIElements::StyleRule*,::Array<::UnityEngine::UIElements::StyleRule*>*>, 0x20>(this);
}
constexpr void UnityEngine::UIElements::StyleSheet::__set_m_ComplexSelectors(::ArrayW<::UnityEngine::UIElements::StyleComplexSelector*,::Array<::UnityEngine::UIElements::StyleComplexSelector*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::UIElements::StyleComplexSelector*,::Array<::UnityEngine::UIElements::StyleComplexSelector*>*>, 0x28>(this, std::forward<::ArrayW<::UnityEngine::UIElements::StyleComplexSelector*,::Array<::UnityEngine::UIElements::StyleComplexSelector*>*>>(value));
}
constexpr ::ArrayW<::UnityEngine::UIElements::StyleComplexSelector*,::Array<::UnityEngine::UIElements::StyleComplexSelector*>*>& UnityEngine::UIElements::StyleSheet::__get_m_ComplexSelectors()  {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::UIElements::StyleComplexSelector*,::Array<::UnityEngine::UIElements::StyleComplexSelector*>*>, 0x28>(this);
}
constexpr ::ArrayW<::UnityEngine::UIElements::StyleComplexSelector*,::Array<::UnityEngine::UIElements::StyleComplexSelector*>*> const& UnityEngine::UIElements::StyleSheet::__get_m_ComplexSelectors() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::UIElements::StyleComplexSelector*,::Array<::UnityEngine::UIElements::StyleComplexSelector*>*>, 0x28>(this);
}
constexpr void UnityEngine::UIElements::StyleSheet::__set_floats(::ArrayW<float_t,::Array<float_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<float_t,::Array<float_t>*>, 0x30>(this, std::forward<::ArrayW<float_t,::Array<float_t>*>>(value));
}
constexpr ::ArrayW<float_t,::Array<float_t>*>& UnityEngine::UIElements::StyleSheet::__get_floats()  {
return ::cordl_internals::getInstanceField<::ArrayW<float_t,::Array<float_t>*>, 0x30>(this);
}
constexpr ::ArrayW<float_t,::Array<float_t>*> const& UnityEngine::UIElements::StyleSheet::__get_floats() const {
return ::cordl_internals::getInstanceField<::ArrayW<float_t,::Array<float_t>*>, 0x30>(this);
}
constexpr void UnityEngine::UIElements::StyleSheet::__set_dimensions(::ArrayW<::UnityEngine::UIElements::StyleSheets::Dimension,::Array<::UnityEngine::UIElements::StyleSheets::Dimension>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::UIElements::StyleSheets::Dimension,::Array<::UnityEngine::UIElements::StyleSheets::Dimension>*>, 0x38>(this, std::forward<::ArrayW<::UnityEngine::UIElements::StyleSheets::Dimension,::Array<::UnityEngine::UIElements::StyleSheets::Dimension>*>>(value));
}
constexpr ::ArrayW<::UnityEngine::UIElements::StyleSheets::Dimension,::Array<::UnityEngine::UIElements::StyleSheets::Dimension>*>& UnityEngine::UIElements::StyleSheet::__get_dimensions()  {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::UIElements::StyleSheets::Dimension,::Array<::UnityEngine::UIElements::StyleSheets::Dimension>*>, 0x38>(this);
}
constexpr ::ArrayW<::UnityEngine::UIElements::StyleSheets::Dimension,::Array<::UnityEngine::UIElements::StyleSheets::Dimension>*> const& UnityEngine::UIElements::StyleSheet::__get_dimensions() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::UIElements::StyleSheets::Dimension,::Array<::UnityEngine::UIElements::StyleSheets::Dimension>*>, 0x38>(this);
}
constexpr void UnityEngine::UIElements::StyleSheet::__set_colors(::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>, 0x40>(this, std::forward<::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>>(value));
}
constexpr ::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>& UnityEngine::UIElements::StyleSheet::__get_colors()  {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>, 0x40>(this);
}
constexpr ::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*> const& UnityEngine::UIElements::StyleSheet::__get_colors() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>, 0x40>(this);
}
constexpr void UnityEngine::UIElements::StyleSheet::__set_strings(::ArrayW<::StringW,::Array<::StringW>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::StringW,::Array<::StringW>*>, 0x48>(this, std::forward<::ArrayW<::StringW,::Array<::StringW>*>>(value));
}
constexpr ::ArrayW<::StringW,::Array<::StringW>*>& UnityEngine::UIElements::StyleSheet::__get_strings()  {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW,::Array<::StringW>*>, 0x48>(this);
}
constexpr ::ArrayW<::StringW,::Array<::StringW>*> const& UnityEngine::UIElements::StyleSheet::__get_strings() const {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW,::Array<::StringW>*>, 0x48>(this);
}
constexpr void UnityEngine::UIElements::StyleSheet::__set_assets(::ArrayW<::UnityEngine::Object*,::Array<::UnityEngine::Object*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::Object*,::Array<::UnityEngine::Object*>*>, 0x50>(this, std::forward<::ArrayW<::UnityEngine::Object*,::Array<::UnityEngine::Object*>*>>(value));
}
constexpr ::ArrayW<::UnityEngine::Object*,::Array<::UnityEngine::Object*>*>& UnityEngine::UIElements::StyleSheet::__get_assets()  {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::Object*,::Array<::UnityEngine::Object*>*>, 0x50>(this);
}
constexpr ::ArrayW<::UnityEngine::Object*,::Array<::UnityEngine::Object*>*> const& UnityEngine::UIElements::StyleSheet::__get_assets() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::Object*,::Array<::UnityEngine::Object*>*>, 0x50>(this);
}
constexpr void UnityEngine::UIElements::StyleSheet::__set_imports(::ArrayW<::UnityEngine::UIElements::__StyleSheet__ImportStruct,::Array<::UnityEngine::UIElements::__StyleSheet__ImportStruct>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::UIElements::__StyleSheet__ImportStruct,::Array<::UnityEngine::UIElements::__StyleSheet__ImportStruct>*>, 0x58>(this, std::forward<::ArrayW<::UnityEngine::UIElements::__StyleSheet__ImportStruct,::Array<::UnityEngine::UIElements::__StyleSheet__ImportStruct>*>>(value));
}
constexpr ::ArrayW<::UnityEngine::UIElements::__StyleSheet__ImportStruct,::Array<::UnityEngine::UIElements::__StyleSheet__ImportStruct>*>& UnityEngine::UIElements::StyleSheet::__get_imports()  {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::UIElements::__StyleSheet__ImportStruct,::Array<::UnityEngine::UIElements::__StyleSheet__ImportStruct>*>, 0x58>(this);
}
constexpr ::ArrayW<::UnityEngine::UIElements::__StyleSheet__ImportStruct,::Array<::UnityEngine::UIElements::__StyleSheet__ImportStruct>*> const& UnityEngine::UIElements::StyleSheet::__get_imports() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::UIElements::__StyleSheet__ImportStruct,::Array<::UnityEngine::UIElements::__StyleSheet__ImportStruct>*>, 0x58>(this);
}
constexpr void UnityEngine::UIElements::StyleSheet::__set_m_FlattenedImportedStyleSheets(::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheet*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheet*>*, 0x60>(this, std::forward<::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheet*>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheet*>* UnityEngine::UIElements::StyleSheet::__get_m_FlattenedImportedStyleSheets()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheet*>*, 0x60>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheet*>*> UnityEngine::UIElements::StyleSheet::__get_m_FlattenedImportedStyleSheets() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheet*>*, 0x60>(this);
}
constexpr void UnityEngine::UIElements::StyleSheet::__set_m_ContentHash(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x68>(this, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::UIElements::StyleSheet::__get_m_ContentHash()  {
return ::cordl_internals::getInstanceField<int32_t, 0x68>(this);
}
constexpr int32_t const& UnityEngine::UIElements::StyleSheet::__get_m_ContentHash() const {
return ::cordl_internals::getInstanceField<int32_t, 0x68>(this);
}
constexpr void UnityEngine::UIElements::StyleSheet::__set_scalableImages(::ArrayW<::UnityEngine::UIElements::StyleSheets::ScalableImage,::Array<::UnityEngine::UIElements::StyleSheets::ScalableImage>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::UIElements::StyleSheets::ScalableImage,::Array<::UnityEngine::UIElements::StyleSheets::ScalableImage>*>, 0x70>(this, std::forward<::ArrayW<::UnityEngine::UIElements::StyleSheets::ScalableImage,::Array<::UnityEngine::UIElements::StyleSheets::ScalableImage>*>>(value));
}
constexpr ::ArrayW<::UnityEngine::UIElements::StyleSheets::ScalableImage,::Array<::UnityEngine::UIElements::StyleSheets::ScalableImage>*>& UnityEngine::UIElements::StyleSheet::__get_scalableImages()  {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::UIElements::StyleSheets::ScalableImage,::Array<::UnityEngine::UIElements::StyleSheets::ScalableImage>*>, 0x70>(this);
}
constexpr ::ArrayW<::UnityEngine::UIElements::StyleSheets::ScalableImage,::Array<::UnityEngine::UIElements::StyleSheets::ScalableImage>*> const& UnityEngine::UIElements::StyleSheet::__get_scalableImages() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::UIElements::StyleSheets::ScalableImage,::Array<::UnityEngine::UIElements::StyleSheets::ScalableImage>*>, 0x70>(this);
}
constexpr void UnityEngine::UIElements::StyleSheet::__set_orderedNameSelectors(::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::UIElements::StyleComplexSelector*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::UIElements::StyleComplexSelector*>*, 0x78>(this, std::forward<::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::UIElements::StyleComplexSelector*>*>(value));
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::UIElements::StyleComplexSelector*>* UnityEngine::UIElements::StyleSheet::__get_orderedNameSelectors()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::UIElements::StyleComplexSelector*>*, 0x78>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::UIElements::StyleComplexSelector*>*> UnityEngine::UIElements::StyleSheet::__get_orderedNameSelectors() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::UIElements::StyleComplexSelector*>*, 0x78>(this);
}
constexpr void UnityEngine::UIElements::StyleSheet::__set_orderedTypeSelectors(::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::UIElements::StyleComplexSelector*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::UIElements::StyleComplexSelector*>*, 0x80>(this, std::forward<::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::UIElements::StyleComplexSelector*>*>(value));
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::UIElements::StyleComplexSelector*>* UnityEngine::UIElements::StyleSheet::__get_orderedTypeSelectors()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::UIElements::StyleComplexSelector*>*, 0x80>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::UIElements::StyleComplexSelector*>*> UnityEngine::UIElements::StyleSheet::__get_orderedTypeSelectors() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::UIElements::StyleComplexSelector*>*, 0x80>(this);
}
constexpr void UnityEngine::UIElements::StyleSheet::__set_orderedClassSelectors(::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::UIElements::StyleComplexSelector*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::UIElements::StyleComplexSelector*>*, 0x88>(this, std::forward<::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::UIElements::StyleComplexSelector*>*>(value));
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::UIElements::StyleComplexSelector*>* UnityEngine::UIElements::StyleSheet::__get_orderedClassSelectors()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::UIElements::StyleComplexSelector*>*, 0x88>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::UIElements::StyleComplexSelector*>*> UnityEngine::UIElements::StyleSheet::__get_orderedClassSelectors() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::UIElements::StyleComplexSelector*>*, 0x88>(this);
}
constexpr void UnityEngine::UIElements::StyleSheet::__set_m_IsDefaultStyleSheet(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x90>(this, std::forward<bool>(value));
}
constexpr bool& UnityEngine::UIElements::StyleSheet::__get_m_IsDefaultStyleSheet()  {
return ::cordl_internals::getInstanceField<bool, 0x90>(this);
}
constexpr bool const& UnityEngine::UIElements::StyleSheet::__get_m_IsDefaultStyleSheet() const {
return ::cordl_internals::getInstanceField<bool, 0x90>(this);
}
inline void UnityEngine::UIElements::StyleSheet::setStaticF_kCustomPropertyMarker(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "kCustomPropertyMarker", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheet*>::get>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::StyleSheet::getStaticF_kCustomPropertyMarker()  {
return ::cordl_internals::getStaticField<::StringW, "kCustomPropertyMarker", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheet*>::get>();
}
inline bool UnityEngine::UIElements::StyleSheet::get_importedWithErrors()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheet*>::get(),
                            "get_importedWithErrors",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::StyleSheet::set_importedWithErrors(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheet*>::get(),
                            "set_importedWithErrors",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline bool UnityEngine::UIElements::StyleSheet::get_importedWithWarnings()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheet*>::get(),
                            "get_importedWithWarnings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::StyleSheet::set_importedWithWarnings(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheet*>::get(),
                            "set_importedWithWarnings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::ArrayW<::UnityEngine::UIElements::StyleRule*,::Array<::UnityEngine::UIElements::StyleRule*>*> UnityEngine::UIElements::StyleSheet::get_rules()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheet*>::get(),
                            "get_rules",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::UIElements::StyleRule*,::Array<::UnityEngine::UIElements::StyleRule*>*>, false>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::StyleSheet::set_rules(::ArrayW<::UnityEngine::UIElements::StyleRule*,::Array<::UnityEngine::UIElements::StyleRule*>*>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheet*>::get(),
                            "set_rules",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::UIElements::StyleRule*,::Array<::UnityEngine::UIElements::StyleRule*>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::ArrayW<::UnityEngine::UIElements::StyleComplexSelector*,::Array<::UnityEngine::UIElements::StyleComplexSelector*>*> UnityEngine::UIElements::StyleSheet::get_complexSelectors()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheet*>::get(),
                            "get_complexSelectors",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::UIElements::StyleComplexSelector*,::Array<::UnityEngine::UIElements::StyleComplexSelector*>*>, false>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::StyleSheet::set_complexSelectors(::ArrayW<::UnityEngine::UIElements::StyleComplexSelector*,::Array<::UnityEngine::UIElements::StyleComplexSelector*>*>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheet*>::get(),
                            "set_complexSelectors",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::UIElements::StyleComplexSelector*,::Array<::UnityEngine::UIElements::StyleComplexSelector*>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheet*>* UnityEngine::UIElements::StyleSheet::get_flattenedRecursiveImports()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheet*>::get(),
                            "get_flattenedRecursiveImports",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheet*>*, false>(*this, ___internal_method);
}
inline int32_t UnityEngine::UIElements::StyleSheet::get_contentHash()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheet*>::get(),
                            "get_contentHash",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::StyleSheet::set_contentHash(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheet*>::get(),
                            "set_contentHash",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline bool UnityEngine::UIElements::StyleSheet::get_isDefaultStyleSheet()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheet*>::get(),
                            "get_isDefaultStyleSheet",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::StyleSheet::set_isDefaultStyleSheet(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheet*>::get(),
                            "set_isDefaultStyleSheet",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
template<typename T>
inline bool UnityEngine::UIElements::StyleSheet::TryCheckAccess(::ArrayW<T,::Array<T>*>  list, ::UnityEngine::UIElements::StyleValueType  type, ::UnityEngine::UIElements::StyleValueHandle  handle, ByRef<T>  value)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheet*>::get(),
                        "TryCheckAccess",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T,::Array<T>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleValueType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleValueHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<T>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, list, type, handle, value);
}
template<typename T>
inline T UnityEngine::UIElements::StyleSheet::CheckAccess(::ArrayW<T,::Array<T>*>  list, ::UnityEngine::UIElements::StyleValueType  type, ::UnityEngine::UIElements::StyleValueHandle  handle)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheet*>::get(),
                        "CheckAccess",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T,::Array<T>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleValueType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleValueHandle>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<T, false>(nullptr, ___internal_method, list, type, handle);
}
inline void UnityEngine::UIElements::StyleSheet::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheet*>::get(),
                            "OnEnable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::StyleSheet::FlattenImportedStyleSheetsRecursive()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheet*>::get(),
                            "FlattenImportedStyleSheetsRecursive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::StyleSheet::FlattenImportedStyleSheetsRecursive(::UnityEngine::UIElements::StyleSheet*  sheet)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheet*>::get(),
                            "FlattenImportedStyleSheetsRecursive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheet*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, sheet);
}
inline void UnityEngine::UIElements::StyleSheet::SetupReferences()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheet*>::get(),
                            "SetupReferences",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::UnityEngine::UIElements::StyleValueKeyword UnityEngine::UIElements::StyleSheet::ReadKeyword(::UnityEngine::UIElements::StyleValueHandle  handle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheet*>::get(),
                            "ReadKeyword",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleValueHandle>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleValueKeyword, false>(*this, ___internal_method, handle);
}
inline float_t UnityEngine::UIElements::StyleSheet::ReadFloat(::UnityEngine::UIElements::StyleValueHandle  handle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheet*>::get(),
                            "ReadFloat",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleValueHandle>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method, handle);
}
inline bool UnityEngine::UIElements::StyleSheet::TryReadFloat(::UnityEngine::UIElements::StyleValueHandle  handle, ByRef<float_t>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheet*>::get(),
                            "TryReadFloat",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleValueHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, handle, value);
}
inline ::UnityEngine::UIElements::StyleSheets::Dimension UnityEngine::UIElements::StyleSheet::ReadDimension(::UnityEngine::UIElements::StyleValueHandle  handle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheet*>::get(),
                            "ReadDimension",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleValueHandle>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleSheets::Dimension, false>(*this, ___internal_method, handle);
}
inline bool UnityEngine::UIElements::StyleSheet::TryReadDimension(::UnityEngine::UIElements::StyleValueHandle  handle, ByRef<::UnityEngine::UIElements::StyleSheets::Dimension>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheet*>::get(),
                            "TryReadDimension",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleValueHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::UIElements::StyleSheets::Dimension>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, handle, value);
}
inline ::UnityEngine::Color UnityEngine::UIElements::StyleSheet::ReadColor(::UnityEngine::UIElements::StyleValueHandle  handle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheet*>::get(),
                            "ReadColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleValueHandle>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(*this, ___internal_method, handle);
}
inline bool UnityEngine::UIElements::StyleSheet::TryReadColor(::UnityEngine::UIElements::StyleValueHandle  handle, ByRef<::UnityEngine::Color>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheet*>::get(),
                            "TryReadColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleValueHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Color>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, handle, value);
}
inline ::StringW UnityEngine::UIElements::StyleSheet::ReadString(::UnityEngine::UIElements::StyleValueHandle  handle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheet*>::get(),
                            "ReadString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleValueHandle>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method, handle);
}
inline bool UnityEngine::UIElements::StyleSheet::TryReadString(::UnityEngine::UIElements::StyleValueHandle  handle, ByRef<::StringW>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheet*>::get(),
                            "TryReadString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleValueHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, handle, value);
}
inline ::StringW UnityEngine::UIElements::StyleSheet::ReadEnum(::UnityEngine::UIElements::StyleValueHandle  handle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheet*>::get(),
                            "ReadEnum",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleValueHandle>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method, handle);
}
inline bool UnityEngine::UIElements::StyleSheet::TryReadEnum(::UnityEngine::UIElements::StyleValueHandle  handle, ByRef<::StringW>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheet*>::get(),
                            "TryReadEnum",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleValueHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, handle, value);
}
inline ::StringW UnityEngine::UIElements::StyleSheet::ReadVariable(::UnityEngine::UIElements::StyleValueHandle  handle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheet*>::get(),
                            "ReadVariable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleValueHandle>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method, handle);
}
inline bool UnityEngine::UIElements::StyleSheet::TryReadVariable(::UnityEngine::UIElements::StyleValueHandle  handle, ByRef<::StringW>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheet*>::get(),
                            "TryReadVariable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleValueHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, handle, value);
}
inline ::StringW UnityEngine::UIElements::StyleSheet::ReadResourcePath(::UnityEngine::UIElements::StyleValueHandle  handle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheet*>::get(),
                            "ReadResourcePath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleValueHandle>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method, handle);
}
inline bool UnityEngine::UIElements::StyleSheet::TryReadResourcePath(::UnityEngine::UIElements::StyleValueHandle  handle, ByRef<::StringW>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheet*>::get(),
                            "TryReadResourcePath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleValueHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, handle, value);
}
inline ::UnityEngine::Object* UnityEngine::UIElements::StyleSheet::ReadAssetReference(::UnityEngine::UIElements::StyleValueHandle  handle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheet*>::get(),
                            "ReadAssetReference",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleValueHandle>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Object*, false>(*this, ___internal_method, handle);
}
inline ::StringW UnityEngine::UIElements::StyleSheet::ReadMissingAssetReferenceUrl(::UnityEngine::UIElements::StyleValueHandle  handle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheet*>::get(),
                            "ReadMissingAssetReferenceUrl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleValueHandle>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method, handle);
}
inline bool UnityEngine::UIElements::StyleSheet::TryReadAssetReference(::UnityEngine::UIElements::StyleValueHandle  handle, ByRef<::UnityEngine::Object*>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheet*>::get(),
                            "TryReadAssetReference",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleValueHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Object*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, handle, value);
}
inline ::UnityEngine::UIElements::StyleValueFunction UnityEngine::UIElements::StyleSheet::ReadFunction(::UnityEngine::UIElements::StyleValueHandle  handle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheet*>::get(),
                            "ReadFunction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleValueHandle>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleValueFunction, false>(*this, ___internal_method, handle);
}
inline ::StringW UnityEngine::UIElements::StyleSheet::ReadFunctionName(::UnityEngine::UIElements::StyleValueHandle  handle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheet*>::get(),
                            "ReadFunctionName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleValueHandle>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method, handle);
}
inline ::UnityEngine::UIElements::StyleSheets::ScalableImage UnityEngine::UIElements::StyleSheet::ReadScalableImage(::UnityEngine::UIElements::StyleValueHandle  handle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheet*>::get(),
                            "ReadScalableImage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleValueHandle>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleSheets::ScalableImage, false>(*this, ___internal_method, handle);
}
inline bool UnityEngine::UIElements::StyleSheet::CustomStartsWith(::StringW  originalString, ::StringW  pattern)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheet*>::get(),
                            "CustomStartsWith",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, originalString, pattern);
}
inline ::UnityEngine::UIElements::StyleSheet* UnityEngine::UIElements::StyleSheet::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::UIElements::StyleSheet*>());
}
inline void UnityEngine::UIElements::StyleSheet::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheet*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
