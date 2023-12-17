#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "TMPro/zzzz__TMP_Settings_def.hpp"
#include "TMPro/zzzz__TMP_StyleSheet_def.hpp"
#include "TMPro/zzzz__TMP_Settings_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/zzzz__TextAsset_def.hpp"
#include "TMPro/zzzz__TMP_FontAsset_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "TMPro/zzzz__TMP_SpriteAsset_def.hpp"
//  Writing Method size for method: ::TMPro::__TMP_Settings__LineBreakingTable._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::__TMP_Settings__LineBreakingTable::*)()>(&::TMPro::__TMP_Settings__LineBreakingTable::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c40510;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::__TMP_Settings__LineBreakingTable*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void TMPro::__TMP_Settings__LineBreakingTable::__set_leadingCharacters(::System::Collections::Generic::Dictionary_2<int32_t,char16_t>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Dictionary_2<int32_t,char16_t>*, 0x10>(this, std::forward<::System::Collections::Generic::Dictionary_2<int32_t,char16_t>*>(value));
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,char16_t>* TMPro::__TMP_Settings__LineBreakingTable::__get_leadingCharacters()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<int32_t,char16_t>*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t,char16_t>*> TMPro::__TMP_Settings__LineBreakingTable::__get_leadingCharacters() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<int32_t,char16_t>*, 0x10>(this);
}
constexpr void TMPro::__TMP_Settings__LineBreakingTable::__set_followingCharacters(::System::Collections::Generic::Dictionary_2<int32_t,char16_t>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Dictionary_2<int32_t,char16_t>*, 0x18>(this, std::forward<::System::Collections::Generic::Dictionary_2<int32_t,char16_t>*>(value));
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,char16_t>* TMPro::__TMP_Settings__LineBreakingTable::__get_followingCharacters()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<int32_t,char16_t>*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t,char16_t>*> TMPro::__TMP_Settings__LineBreakingTable::__get_followingCharacters() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<int32_t,char16_t>*, 0x18>(this);
}
inline ::TMPro::__TMP_Settings__LineBreakingTable* TMPro::__TMP_Settings__LineBreakingTable::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::TMPro::__TMP_Settings__LineBreakingTable*>());
}
inline void TMPro::__TMP_Settings__LineBreakingTable::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::__TMP_Settings__LineBreakingTable*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::TMPro::TMP_Settings.get_version
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::TMPro::TMP_Settings::get_version)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2c3fbd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(),
                            "get_version",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Settings.get_enableWordWrapping
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::TMPro::TMP_Settings::get_enableWordWrapping)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2c3fc10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(),
                            "get_enableWordWrapping",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Settings.get_enableKerning
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::TMPro::TMP_Settings::get_enableKerning)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2c3fcf8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(),
                            "get_enableKerning",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Settings.get_enableExtraPadding
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::TMPro::TMP_Settings::get_enableExtraPadding)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2c3fd14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(),
                            "get_enableExtraPadding",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Settings.get_enableTintAllSprites
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::TMPro::TMP_Settings::get_enableTintAllSprites)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2c3fd30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(),
                            "get_enableTintAllSprites",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Settings.get_enableParseEscapeCharacters
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::TMPro::TMP_Settings::get_enableParseEscapeCharacters)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2c3fd4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(),
                            "get_enableParseEscapeCharacters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Settings.get_enableRaycastTarget
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::TMPro::TMP_Settings::get_enableRaycastTarget)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2c3fd68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(),
                            "get_enableRaycastTarget",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Settings.get_getFontFeaturesAtRuntime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::TMPro::TMP_Settings::get_getFontFeaturesAtRuntime)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2c3fd84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(),
                            "get_getFontFeaturesAtRuntime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Settings.get_missingGlyphCharacter
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&::TMPro::TMP_Settings::get_missingGlyphCharacter)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2c3fda0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(),
                            "get_missingGlyphCharacter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Settings.set_missingGlyphCharacter
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t)>(&::TMPro::TMP_Settings::set_missingGlyphCharacter)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2c3fdbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(),
                            "set_missingGlyphCharacter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Settings.get_warningsDisabled
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::TMPro::TMP_Settings::get_warningsDisabled)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2c3fddc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(),
                            "get_warningsDisabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Settings.get_defaultFontAsset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::TMPro::TMP_FontAsset* (*)()>(&::TMPro::TMP_Settings::get_defaultFontAsset)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2c3fdf8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(),
                            "get_defaultFontAsset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Settings.get_defaultFontAssetPath
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::TMPro::TMP_Settings::get_defaultFontAssetPath)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2c3fe14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(),
                            "get_defaultFontAssetPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Settings.get_defaultFontSize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)()>(&::TMPro::TMP_Settings::get_defaultFontSize)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2c3fe30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(),
                            "get_defaultFontSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Settings.get_defaultTextAutoSizingMinRatio
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)()>(&::TMPro::TMP_Settings::get_defaultTextAutoSizingMinRatio)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2c3fe4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(),
                            "get_defaultTextAutoSizingMinRatio",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Settings.get_defaultTextAutoSizingMaxRatio
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)()>(&::TMPro::TMP_Settings::get_defaultTextAutoSizingMaxRatio)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2c3fe68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(),
                            "get_defaultTextAutoSizingMaxRatio",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Settings.get_defaultTextMeshProTextContainerSize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (*)()>(&::TMPro::TMP_Settings::get_defaultTextMeshProTextContainerSize)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2c3fe84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(),
                            "get_defaultTextMeshProTextContainerSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Settings.get_defaultTextMeshProUITextContainerSize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (*)()>(&::TMPro::TMP_Settings::get_defaultTextMeshProUITextContainerSize)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2c3fea0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(),
                            "get_defaultTextMeshProUITextContainerSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Settings.get_autoSizeTextContainer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::TMPro::TMP_Settings::get_autoSizeTextContainer)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2c3febc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(),
                            "get_autoSizeTextContainer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Settings.get_isTextObjectScaleStatic
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::TMPro::TMP_Settings::get_isTextObjectScaleStatic)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2c3fed8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(),
                            "get_isTextObjectScaleStatic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Settings.set_isTextObjectScaleStatic
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&::TMPro::TMP_Settings::set_isTextObjectScaleStatic)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2c3fef4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(),
                            "set_isTextObjectScaleStatic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Settings.get_fallbackFontAssets
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::TMPro::TMP_FontAsset*>* (*)()>(&::TMPro::TMP_Settings::get_fallbackFontAssets)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2c3ff18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(),
                            "get_fallbackFontAssets",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Settings.get_matchMaterialPreset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::TMPro::TMP_Settings::get_matchMaterialPreset)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2c3ff34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(),
                            "get_matchMaterialPreset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Settings.get_defaultSpriteAsset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::TMPro::TMP_SpriteAsset* (*)()>(&::TMPro::TMP_Settings::get_defaultSpriteAsset)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2c3ff50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(),
                            "get_defaultSpriteAsset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Settings.get_defaultSpriteAssetPath
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::TMPro::TMP_Settings::get_defaultSpriteAssetPath)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2c3ff6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(),
                            "get_defaultSpriteAssetPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Settings.get_enableEmojiSupport
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::TMPro::TMP_Settings::get_enableEmojiSupport)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2c3ff88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(),
                            "get_enableEmojiSupport",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Settings.set_enableEmojiSupport
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&::TMPro::TMP_Settings::set_enableEmojiSupport)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2c3ffa4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(),
                            "set_enableEmojiSupport",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Settings.get_missingCharacterSpriteUnicode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (*)()>(&::TMPro::TMP_Settings::get_missingCharacterSpriteUnicode)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2c3ffc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(),
                            "get_missingCharacterSpriteUnicode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Settings.set_missingCharacterSpriteUnicode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint32_t)>(&::TMPro::TMP_Settings::set_missingCharacterSpriteUnicode)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2c3ffe4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(),
                            "set_missingCharacterSpriteUnicode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Settings.get_defaultColorGradientPresetsPath
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::TMPro::TMP_Settings::get_defaultColorGradientPresetsPath)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2c40004;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(),
                            "get_defaultColorGradientPresetsPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Settings.get_defaultStyleSheet
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::TMPro::TMP_StyleSheet* (*)()>(&::TMPro::TMP_Settings::get_defaultStyleSheet)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2c40020;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(),
                            "get_defaultStyleSheet",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Settings.get_styleSheetsResourcePath
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::TMPro::TMP_Settings::get_styleSheetsResourcePath)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2c4003c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(),
                            "get_styleSheetsResourcePath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Settings.get_leadingCharacters
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::TextAsset* (*)()>(&::TMPro::TMP_Settings::get_leadingCharacters)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2c40058;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(),
                            "get_leadingCharacters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Settings.get_followingCharacters
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::TextAsset* (*)()>(&::TMPro::TMP_Settings::get_followingCharacters)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2c40074;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(),
                            "get_followingCharacters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Settings.get_linebreakingRules
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::TMPro::__TMP_Settings__LineBreakingTable* (*)()>(&::TMPro::TMP_Settings::get_linebreakingRules)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2c40090;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(),
                            "get_linebreakingRules",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Settings.get_useModernHangulLineBreakingRules
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::TMPro::TMP_Settings::get_useModernHangulLineBreakingRules)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2c401d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(),
                            "get_useModernHangulLineBreakingRules",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Settings.set_useModernHangulLineBreakingRules
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&::TMPro::TMP_Settings::set_useModernHangulLineBreakingRules)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2c401ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(),
                            "set_useModernHangulLineBreakingRules",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Settings.get_instance
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::TMPro::TMP_Settings* (*)()>(&::TMPro::TMP_Settings::get_instance)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x2c3fc2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(),
                            "get_instance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Settings.LoadDefaultSettings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::TMPro::TMP_Settings* (*)()>(&::TMPro::TMP_Settings::LoadDefaultSettings)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2c40210;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(),
                            "LoadDefaultSettings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Settings.GetSettings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::TMPro::TMP_Settings* (*)()>(&::TMPro::TMP_Settings::GetSettings)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2c40308;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(),
                            "GetSettings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Settings.GetFontAsset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::TMPro::TMP_FontAsset* (*)()>(&::TMPro::TMP_Settings::GetFontAsset)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2c40384;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(),
                            "GetFontAsset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Settings.GetSpriteAsset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::TMPro::TMP_SpriteAsset* (*)()>(&::TMPro::TMP_Settings::GetSpriteAsset)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2c40408;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(),
                            "GetSpriteAsset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Settings.GetStyleSheet
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::TMPro::TMP_StyleSheet* (*)()>(&::TMPro::TMP_Settings::GetStyleSheet)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2c4048c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(),
                            "GetStyleSheet",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Settings.LoadLinebreakingRules
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::TMPro::TMP_Settings::LoadLinebreakingRules)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x2c400c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(),
                            "LoadLinebreakingRules",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Settings.GetCharacters
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::Dictionary_2<int32_t,char16_t>* (*)(::UnityEngine::TextAsset*)>(&::TMPro::TMP_Settings::GetCharacters)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x2c40518;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(),
                            "GetCharacters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextAsset*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Settings._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_Settings::*)()>(&::TMPro::TMP_Settings::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2c40638;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
inline void TMPro::TMP_Settings::setStaticF_s_Instance(::TMPro::TMP_Settings*  value)  {
::cordl_internals::setStaticField<::TMPro::TMP_Settings*, "s_Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get>(std::forward<::TMPro::TMP_Settings*>(value));
}
inline ::TMPro::TMP_Settings* TMPro::TMP_Settings::getStaticF_s_Instance()  {
return ::cordl_internals::getStaticField<::TMPro::TMP_Settings*, "s_Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get>();
}
constexpr void TMPro::TMP_Settings::__set_m_enableWordWrapping(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x18>(this, std::forward<bool>(value));
}
constexpr bool& TMPro::TMP_Settings::__get_m_enableWordWrapping()  {
return ::cordl_internals::getInstanceField<bool, 0x18>(this);
}
constexpr bool const& TMPro::TMP_Settings::__get_m_enableWordWrapping() const {
return ::cordl_internals::getInstanceField<bool, 0x18>(this);
}
constexpr void TMPro::TMP_Settings::__set_m_enableKerning(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x19>(this, std::forward<bool>(value));
}
constexpr bool& TMPro::TMP_Settings::__get_m_enableKerning()  {
return ::cordl_internals::getInstanceField<bool, 0x19>(this);
}
constexpr bool const& TMPro::TMP_Settings::__get_m_enableKerning() const {
return ::cordl_internals::getInstanceField<bool, 0x19>(this);
}
constexpr void TMPro::TMP_Settings::__set_m_enableExtraPadding(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x1a>(this, std::forward<bool>(value));
}
constexpr bool& TMPro::TMP_Settings::__get_m_enableExtraPadding()  {
return ::cordl_internals::getInstanceField<bool, 0x1a>(this);
}
constexpr bool const& TMPro::TMP_Settings::__get_m_enableExtraPadding() const {
return ::cordl_internals::getInstanceField<bool, 0x1a>(this);
}
constexpr void TMPro::TMP_Settings::__set_m_enableTintAllSprites(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x1b>(this, std::forward<bool>(value));
}
constexpr bool& TMPro::TMP_Settings::__get_m_enableTintAllSprites()  {
return ::cordl_internals::getInstanceField<bool, 0x1b>(this);
}
constexpr bool const& TMPro::TMP_Settings::__get_m_enableTintAllSprites() const {
return ::cordl_internals::getInstanceField<bool, 0x1b>(this);
}
constexpr void TMPro::TMP_Settings::__set_m_enableParseEscapeCharacters(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x1c>(this, std::forward<bool>(value));
}
constexpr bool& TMPro::TMP_Settings::__get_m_enableParseEscapeCharacters()  {
return ::cordl_internals::getInstanceField<bool, 0x1c>(this);
}
constexpr bool const& TMPro::TMP_Settings::__get_m_enableParseEscapeCharacters() const {
return ::cordl_internals::getInstanceField<bool, 0x1c>(this);
}
constexpr void TMPro::TMP_Settings::__set_m_EnableRaycastTarget(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x1d>(this, std::forward<bool>(value));
}
constexpr bool& TMPro::TMP_Settings::__get_m_EnableRaycastTarget()  {
return ::cordl_internals::getInstanceField<bool, 0x1d>(this);
}
constexpr bool const& TMPro::TMP_Settings::__get_m_EnableRaycastTarget() const {
return ::cordl_internals::getInstanceField<bool, 0x1d>(this);
}
constexpr void TMPro::TMP_Settings::__set_m_GetFontFeaturesAtRuntime(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x1e>(this, std::forward<bool>(value));
}
constexpr bool& TMPro::TMP_Settings::__get_m_GetFontFeaturesAtRuntime()  {
return ::cordl_internals::getInstanceField<bool, 0x1e>(this);
}
constexpr bool const& TMPro::TMP_Settings::__get_m_GetFontFeaturesAtRuntime() const {
return ::cordl_internals::getInstanceField<bool, 0x1e>(this);
}
constexpr void TMPro::TMP_Settings::__set_m_missingGlyphCharacter(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this, std::forward<int32_t>(value));
}
constexpr int32_t& TMPro::TMP_Settings::__get_m_missingGlyphCharacter()  {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this);
}
constexpr int32_t const& TMPro::TMP_Settings::__get_m_missingGlyphCharacter() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this);
}
constexpr void TMPro::TMP_Settings::__set_m_warningsDisabled(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x24>(this, std::forward<bool>(value));
}
constexpr bool& TMPro::TMP_Settings::__get_m_warningsDisabled()  {
return ::cordl_internals::getInstanceField<bool, 0x24>(this);
}
constexpr bool const& TMPro::TMP_Settings::__get_m_warningsDisabled() const {
return ::cordl_internals::getInstanceField<bool, 0x24>(this);
}
constexpr void TMPro::TMP_Settings::__set_m_defaultFontAsset(::TMPro::TMP_FontAsset*  value)  {
::cordl_internals::setInstanceField<::TMPro::TMP_FontAsset*, 0x28>(this, std::forward<::TMPro::TMP_FontAsset*>(value));
}
constexpr ::TMPro::TMP_FontAsset* TMPro::TMP_Settings::__get_m_defaultFontAsset()  {
return ::cordl_internals::getInstanceField<::TMPro::TMP_FontAsset*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::TMPro::TMP_FontAsset*> TMPro::TMP_Settings::__get_m_defaultFontAsset() const {
return ::cordl_internals::getInstanceField<::TMPro::TMP_FontAsset*, 0x28>(this);
}
constexpr void TMPro::TMP_Settings::__set_m_defaultFontAssetPath(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x30>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& TMPro::TMP_Settings::__get_m_defaultFontAssetPath()  {
return ::cordl_internals::getInstanceField<::StringW, 0x30>(this);
}
constexpr ::StringW const& TMPro::TMP_Settings::__get_m_defaultFontAssetPath() const {
return ::cordl_internals::getInstanceField<::StringW, 0x30>(this);
}
constexpr void TMPro::TMP_Settings::__set_m_defaultFontSize(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x38>(this, std::forward<float_t>(value));
}
constexpr float_t& TMPro::TMP_Settings::__get_m_defaultFontSize()  {
return ::cordl_internals::getInstanceField<float_t, 0x38>(this);
}
constexpr float_t const& TMPro::TMP_Settings::__get_m_defaultFontSize() const {
return ::cordl_internals::getInstanceField<float_t, 0x38>(this);
}
constexpr void TMPro::TMP_Settings::__set_m_defaultAutoSizeMinRatio(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x3c>(this, std::forward<float_t>(value));
}
constexpr float_t& TMPro::TMP_Settings::__get_m_defaultAutoSizeMinRatio()  {
return ::cordl_internals::getInstanceField<float_t, 0x3c>(this);
}
constexpr float_t const& TMPro::TMP_Settings::__get_m_defaultAutoSizeMinRatio() const {
return ::cordl_internals::getInstanceField<float_t, 0x3c>(this);
}
constexpr void TMPro::TMP_Settings::__set_m_defaultAutoSizeMaxRatio(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x40>(this, std::forward<float_t>(value));
}
constexpr float_t& TMPro::TMP_Settings::__get_m_defaultAutoSizeMaxRatio()  {
return ::cordl_internals::getInstanceField<float_t, 0x40>(this);
}
constexpr float_t const& TMPro::TMP_Settings::__get_m_defaultAutoSizeMaxRatio() const {
return ::cordl_internals::getInstanceField<float_t, 0x40>(this);
}
constexpr void TMPro::TMP_Settings::__set_m_defaultTextMeshProTextContainerSize(::UnityEngine::Vector2  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector2, 0x44>(this, std::forward<::UnityEngine::Vector2>(value));
}
constexpr ::UnityEngine::Vector2& TMPro::TMP_Settings::__get_m_defaultTextMeshProTextContainerSize()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector2, 0x44>(this);
}
constexpr ::UnityEngine::Vector2 const& TMPro::TMP_Settings::__get_m_defaultTextMeshProTextContainerSize() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector2, 0x44>(this);
}
constexpr void TMPro::TMP_Settings::__set_m_defaultTextMeshProUITextContainerSize(::UnityEngine::Vector2  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector2, 0x4c>(this, std::forward<::UnityEngine::Vector2>(value));
}
constexpr ::UnityEngine::Vector2& TMPro::TMP_Settings::__get_m_defaultTextMeshProUITextContainerSize()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector2, 0x4c>(this);
}
constexpr ::UnityEngine::Vector2 const& TMPro::TMP_Settings::__get_m_defaultTextMeshProUITextContainerSize() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector2, 0x4c>(this);
}
constexpr void TMPro::TMP_Settings::__set_m_autoSizeTextContainer(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x54>(this, std::forward<bool>(value));
}
constexpr bool& TMPro::TMP_Settings::__get_m_autoSizeTextContainer()  {
return ::cordl_internals::getInstanceField<bool, 0x54>(this);
}
constexpr bool const& TMPro::TMP_Settings::__get_m_autoSizeTextContainer() const {
return ::cordl_internals::getInstanceField<bool, 0x54>(this);
}
constexpr void TMPro::TMP_Settings::__set_m_IsTextObjectScaleStatic(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x55>(this, std::forward<bool>(value));
}
constexpr bool& TMPro::TMP_Settings::__get_m_IsTextObjectScaleStatic()  {
return ::cordl_internals::getInstanceField<bool, 0x55>(this);
}
constexpr bool const& TMPro::TMP_Settings::__get_m_IsTextObjectScaleStatic() const {
return ::cordl_internals::getInstanceField<bool, 0x55>(this);
}
constexpr void TMPro::TMP_Settings::__set_m_fallbackFontAssets(::System::Collections::Generic::List_1<::TMPro::TMP_FontAsset*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::TMPro::TMP_FontAsset*>*, 0x58>(this, std::forward<::System::Collections::Generic::List_1<::TMPro::TMP_FontAsset*>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::TMPro::TMP_FontAsset*>* TMPro::TMP_Settings::__get_m_fallbackFontAssets()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::TMPro::TMP_FontAsset*>*, 0x58>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::TMPro::TMP_FontAsset*>*> TMPro::TMP_Settings::__get_m_fallbackFontAssets() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::TMPro::TMP_FontAsset*>*, 0x58>(this);
}
constexpr void TMPro::TMP_Settings::__set_m_matchMaterialPreset(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x60>(this, std::forward<bool>(value));
}
constexpr bool& TMPro::TMP_Settings::__get_m_matchMaterialPreset()  {
return ::cordl_internals::getInstanceField<bool, 0x60>(this);
}
constexpr bool const& TMPro::TMP_Settings::__get_m_matchMaterialPreset() const {
return ::cordl_internals::getInstanceField<bool, 0x60>(this);
}
constexpr void TMPro::TMP_Settings::__set_m_defaultSpriteAsset(::TMPro::TMP_SpriteAsset*  value)  {
::cordl_internals::setInstanceField<::TMPro::TMP_SpriteAsset*, 0x68>(this, std::forward<::TMPro::TMP_SpriteAsset*>(value));
}
constexpr ::TMPro::TMP_SpriteAsset* TMPro::TMP_Settings::__get_m_defaultSpriteAsset()  {
return ::cordl_internals::getInstanceField<::TMPro::TMP_SpriteAsset*, 0x68>(this);
}
constexpr ::cordl_internals::to_const_pointer<::TMPro::TMP_SpriteAsset*> TMPro::TMP_Settings::__get_m_defaultSpriteAsset() const {
return ::cordl_internals::getInstanceField<::TMPro::TMP_SpriteAsset*, 0x68>(this);
}
constexpr void TMPro::TMP_Settings::__set_m_defaultSpriteAssetPath(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x70>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& TMPro::TMP_Settings::__get_m_defaultSpriteAssetPath()  {
return ::cordl_internals::getInstanceField<::StringW, 0x70>(this);
}
constexpr ::StringW const& TMPro::TMP_Settings::__get_m_defaultSpriteAssetPath() const {
return ::cordl_internals::getInstanceField<::StringW, 0x70>(this);
}
constexpr void TMPro::TMP_Settings::__set_m_enableEmojiSupport(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x78>(this, std::forward<bool>(value));
}
constexpr bool& TMPro::TMP_Settings::__get_m_enableEmojiSupport()  {
return ::cordl_internals::getInstanceField<bool, 0x78>(this);
}
constexpr bool const& TMPro::TMP_Settings::__get_m_enableEmojiSupport() const {
return ::cordl_internals::getInstanceField<bool, 0x78>(this);
}
constexpr void TMPro::TMP_Settings::__set_m_MissingCharacterSpriteUnicode(uint32_t  value)  {
::cordl_internals::setInstanceField<uint32_t, 0x7c>(this, std::forward<uint32_t>(value));
}
constexpr uint32_t& TMPro::TMP_Settings::__get_m_MissingCharacterSpriteUnicode()  {
return ::cordl_internals::getInstanceField<uint32_t, 0x7c>(this);
}
constexpr uint32_t const& TMPro::TMP_Settings::__get_m_MissingCharacterSpriteUnicode() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x7c>(this);
}
constexpr void TMPro::TMP_Settings::__set_m_defaultColorGradientPresetsPath(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x80>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& TMPro::TMP_Settings::__get_m_defaultColorGradientPresetsPath()  {
return ::cordl_internals::getInstanceField<::StringW, 0x80>(this);
}
constexpr ::StringW const& TMPro::TMP_Settings::__get_m_defaultColorGradientPresetsPath() const {
return ::cordl_internals::getInstanceField<::StringW, 0x80>(this);
}
constexpr void TMPro::TMP_Settings::__set_m_defaultStyleSheet(::TMPro::TMP_StyleSheet*  value)  {
::cordl_internals::setInstanceField<::TMPro::TMP_StyleSheet*, 0x88>(this, std::forward<::TMPro::TMP_StyleSheet*>(value));
}
constexpr ::TMPro::TMP_StyleSheet* TMPro::TMP_Settings::__get_m_defaultStyleSheet()  {
return ::cordl_internals::getInstanceField<::TMPro::TMP_StyleSheet*, 0x88>(this);
}
constexpr ::cordl_internals::to_const_pointer<::TMPro::TMP_StyleSheet*> TMPro::TMP_Settings::__get_m_defaultStyleSheet() const {
return ::cordl_internals::getInstanceField<::TMPro::TMP_StyleSheet*, 0x88>(this);
}
constexpr void TMPro::TMP_Settings::__set_m_StyleSheetsResourcePath(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x90>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& TMPro::TMP_Settings::__get_m_StyleSheetsResourcePath()  {
return ::cordl_internals::getInstanceField<::StringW, 0x90>(this);
}
constexpr ::StringW const& TMPro::TMP_Settings::__get_m_StyleSheetsResourcePath() const {
return ::cordl_internals::getInstanceField<::StringW, 0x90>(this);
}
constexpr void TMPro::TMP_Settings::__set_m_leadingCharacters(::UnityEngine::TextAsset*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::TextAsset*, 0x98>(this, std::forward<::UnityEngine::TextAsset*>(value));
}
constexpr ::UnityEngine::TextAsset* TMPro::TMP_Settings::__get_m_leadingCharacters()  {
return ::cordl_internals::getInstanceField<::UnityEngine::TextAsset*, 0x98>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::TextAsset*> TMPro::TMP_Settings::__get_m_leadingCharacters() const {
return ::cordl_internals::getInstanceField<::UnityEngine::TextAsset*, 0x98>(this);
}
constexpr void TMPro::TMP_Settings::__set_m_followingCharacters(::UnityEngine::TextAsset*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::TextAsset*, 0xa0>(this, std::forward<::UnityEngine::TextAsset*>(value));
}
constexpr ::UnityEngine::TextAsset* TMPro::TMP_Settings::__get_m_followingCharacters()  {
return ::cordl_internals::getInstanceField<::UnityEngine::TextAsset*, 0xa0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::TextAsset*> TMPro::TMP_Settings::__get_m_followingCharacters() const {
return ::cordl_internals::getInstanceField<::UnityEngine::TextAsset*, 0xa0>(this);
}
constexpr void TMPro::TMP_Settings::__set_m_linebreakingRules(::TMPro::__TMP_Settings__LineBreakingTable*  value)  {
::cordl_internals::setInstanceField<::TMPro::__TMP_Settings__LineBreakingTable*, 0xa8>(this, std::forward<::TMPro::__TMP_Settings__LineBreakingTable*>(value));
}
constexpr ::TMPro::__TMP_Settings__LineBreakingTable* TMPro::TMP_Settings::__get_m_linebreakingRules()  {
return ::cordl_internals::getInstanceField<::TMPro::__TMP_Settings__LineBreakingTable*, 0xa8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::TMPro::__TMP_Settings__LineBreakingTable*> TMPro::TMP_Settings::__get_m_linebreakingRules() const {
return ::cordl_internals::getInstanceField<::TMPro::__TMP_Settings__LineBreakingTable*, 0xa8>(this);
}
constexpr void TMPro::TMP_Settings::__set_m_UseModernHangulLineBreakingRules(bool  value)  {
::cordl_internals::setInstanceField<bool, 0xb0>(this, std::forward<bool>(value));
}
constexpr bool& TMPro::TMP_Settings::__get_m_UseModernHangulLineBreakingRules()  {
return ::cordl_internals::getInstanceField<bool, 0xb0>(this);
}
constexpr bool const& TMPro::TMP_Settings::__get_m_UseModernHangulLineBreakingRules() const {
return ::cordl_internals::getInstanceField<bool, 0xb0>(this);
}
inline ::StringW TMPro::TMP_Settings::get_version()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(),
                            "get_version",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
inline bool TMPro::TMP_Settings::get_enableWordWrapping()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(),
                            "get_enableWordWrapping",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline bool TMPro::TMP_Settings::get_enableKerning()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(),
                            "get_enableKerning",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline bool TMPro::TMP_Settings::get_enableExtraPadding()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(),
                            "get_enableExtraPadding",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline bool TMPro::TMP_Settings::get_enableTintAllSprites()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(),
                            "get_enableTintAllSprites",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline bool TMPro::TMP_Settings::get_enableParseEscapeCharacters()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(),
                            "get_enableParseEscapeCharacters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline bool TMPro::TMP_Settings::get_enableRaycastTarget()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(),
                            "get_enableRaycastTarget",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline bool TMPro::TMP_Settings::get_getFontFeaturesAtRuntime()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(),
                            "get_getFontFeaturesAtRuntime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline int32_t TMPro::TMP_Settings::get_missingGlyphCharacter()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(),
                            "get_missingGlyphCharacter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
inline void TMPro::TMP_Settings::set_missingGlyphCharacter(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(),
                            "set_missingGlyphCharacter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline bool TMPro::TMP_Settings::get_warningsDisabled()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(),
                            "get_warningsDisabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline ::TMPro::TMP_FontAsset* TMPro::TMP_Settings::get_defaultFontAsset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(),
                            "get_defaultFontAsset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::TMPro::TMP_FontAsset*, false>(nullptr, ___internal_method);
}
inline ::StringW TMPro::TMP_Settings::get_defaultFontAssetPath()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(),
                            "get_defaultFontAssetPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
inline float_t TMPro::TMP_Settings::get_defaultFontSize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(),
                            "get_defaultFontSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method);
}
inline float_t TMPro::TMP_Settings::get_defaultTextAutoSizingMinRatio()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(),
                            "get_defaultTextAutoSizingMinRatio",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method);
}
inline float_t TMPro::TMP_Settings::get_defaultTextAutoSizingMaxRatio()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(),
                            "get_defaultTextAutoSizingMaxRatio",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method);
}
inline ::UnityEngine::Vector2 TMPro::TMP_Settings::get_defaultTextMeshProTextContainerSize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(),
                            "get_defaultTextMeshProTextContainerSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(nullptr, ___internal_method);
}
inline ::UnityEngine::Vector2 TMPro::TMP_Settings::get_defaultTextMeshProUITextContainerSize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(),
                            "get_defaultTextMeshProUITextContainerSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(nullptr, ___internal_method);
}
inline bool TMPro::TMP_Settings::get_autoSizeTextContainer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(),
                            "get_autoSizeTextContainer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline bool TMPro::TMP_Settings::get_isTextObjectScaleStatic()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(),
                            "get_isTextObjectScaleStatic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline void TMPro::TMP_Settings::set_isTextObjectScaleStatic(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(),
                            "set_isTextObjectScaleStatic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::TMPro::TMP_FontAsset*>* TMPro::TMP_Settings::get_fallbackFontAssets()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(),
                            "get_fallbackFontAssets",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::TMPro::TMP_FontAsset*>*, false>(nullptr, ___internal_method);
}
inline bool TMPro::TMP_Settings::get_matchMaterialPreset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(),
                            "get_matchMaterialPreset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline ::TMPro::TMP_SpriteAsset* TMPro::TMP_Settings::get_defaultSpriteAsset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(),
                            "get_defaultSpriteAsset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::TMPro::TMP_SpriteAsset*, false>(nullptr, ___internal_method);
}
inline ::StringW TMPro::TMP_Settings::get_defaultSpriteAssetPath()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(),
                            "get_defaultSpriteAssetPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
inline bool TMPro::TMP_Settings::get_enableEmojiSupport()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(),
                            "get_enableEmojiSupport",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline void TMPro::TMP_Settings::set_enableEmojiSupport(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(),
                            "set_enableEmojiSupport",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline uint32_t TMPro::TMP_Settings::get_missingCharacterSpriteUnicode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(),
                            "get_missingCharacterSpriteUnicode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method);
}
inline void TMPro::TMP_Settings::set_missingCharacterSpriteUnicode(uint32_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(),
                            "set_missingCharacterSpriteUnicode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline ::StringW TMPro::TMP_Settings::get_defaultColorGradientPresetsPath()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(),
                            "get_defaultColorGradientPresetsPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
inline ::TMPro::TMP_StyleSheet* TMPro::TMP_Settings::get_defaultStyleSheet()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(),
                            "get_defaultStyleSheet",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::TMPro::TMP_StyleSheet*, false>(nullptr, ___internal_method);
}
inline ::StringW TMPro::TMP_Settings::get_styleSheetsResourcePath()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(),
                            "get_styleSheetsResourcePath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
inline ::UnityEngine::TextAsset* TMPro::TMP_Settings::get_leadingCharacters()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(),
                            "get_leadingCharacters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextAsset*, false>(nullptr, ___internal_method);
}
inline ::UnityEngine::TextAsset* TMPro::TMP_Settings::get_followingCharacters()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(),
                            "get_followingCharacters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextAsset*, false>(nullptr, ___internal_method);
}
inline ::TMPro::__TMP_Settings__LineBreakingTable* TMPro::TMP_Settings::get_linebreakingRules()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(),
                            "get_linebreakingRules",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::TMPro::__TMP_Settings__LineBreakingTable*, false>(nullptr, ___internal_method);
}
inline bool TMPro::TMP_Settings::get_useModernHangulLineBreakingRules()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(),
                            "get_useModernHangulLineBreakingRules",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline void TMPro::TMP_Settings::set_useModernHangulLineBreakingRules(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(),
                            "set_useModernHangulLineBreakingRules",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline ::TMPro::TMP_Settings* TMPro::TMP_Settings::get_instance()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(),
                            "get_instance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::TMPro::TMP_Settings*, false>(nullptr, ___internal_method);
}
inline ::TMPro::TMP_Settings* TMPro::TMP_Settings::LoadDefaultSettings()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(),
                            "LoadDefaultSettings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::TMPro::TMP_Settings*, false>(nullptr, ___internal_method);
}
inline ::TMPro::TMP_Settings* TMPro::TMP_Settings::GetSettings()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(),
                            "GetSettings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::TMPro::TMP_Settings*, false>(nullptr, ___internal_method);
}
inline ::TMPro::TMP_FontAsset* TMPro::TMP_Settings::GetFontAsset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(),
                            "GetFontAsset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::TMPro::TMP_FontAsset*, false>(nullptr, ___internal_method);
}
inline ::TMPro::TMP_SpriteAsset* TMPro::TMP_Settings::GetSpriteAsset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(),
                            "GetSpriteAsset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::TMPro::TMP_SpriteAsset*, false>(nullptr, ___internal_method);
}
inline ::TMPro::TMP_StyleSheet* TMPro::TMP_Settings::GetStyleSheet()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(),
                            "GetStyleSheet",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::TMPro::TMP_StyleSheet*, false>(nullptr, ___internal_method);
}
inline void TMPro::TMP_Settings::LoadLinebreakingRules()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(),
                            "LoadLinebreakingRules",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline ::System::Collections::Generic::Dictionary_2<int32_t,char16_t>* TMPro::TMP_Settings::GetCharacters(::UnityEngine::TextAsset*  file)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(),
                            "GetCharacters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextAsset*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<int32_t,char16_t>*, false>(nullptr, ___internal_method, file);
}
inline ::TMPro::TMP_Settings* TMPro::TMP_Settings::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::TMPro::TMP_Settings*>());
}
inline void TMPro::TMP_Settings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Settings*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
