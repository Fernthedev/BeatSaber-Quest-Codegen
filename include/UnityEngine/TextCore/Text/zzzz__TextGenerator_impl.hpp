#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextGenerator_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__WordWrapState_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__RichTextTagAttribute_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextColorGradient_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextElementInfo_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextInfo_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextGenerator_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextElement_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__Extents_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextFontWeight_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextProcessingStack_1_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__FontAsset_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__MaterialReference_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__SpriteAsset_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__FontStyleStack_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__XmlTagAttribute_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextGenerationSettings_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__FontStyles_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextAlignment_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextElementType_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__Character_def.hpp"
//  Writing Method size for method: ::UnityEngine::TextCore::Text::__TextGenerator__SpecialCharacter._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::__TextGenerator__SpecialCharacter::*)(::UnityEngine::TextCore::Text::Character*, int32_t)>(&::UnityEngine::TextCore::Text::__TextGenerator__SpecialCharacter::_ctor)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x2d412b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::__TextGenerator__SpecialCharacter>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::Character*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::TextCore::Text::__TextGenerator__SpecialCharacter::__set_character(::UnityEngine::TextCore::Text::Character*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::TextCore::Text::Character*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::TextCore::Text::Character*>(value));
}
constexpr ::UnityEngine::TextCore::Text::Character* UnityEngine::TextCore::Text::__TextGenerator__SpecialCharacter::__get_character()  {
return ::cordl_internals::getInstanceField<::UnityEngine::TextCore::Text::Character*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::TextCore::Text::Character*> UnityEngine::TextCore::Text::__TextGenerator__SpecialCharacter::__get_character() const {
return ::cordl_internals::getInstanceField<::UnityEngine::TextCore::Text::Character*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::TextCore::Text::__TextGenerator__SpecialCharacter::__set_fontAsset(::UnityEngine::TextCore::Text::FontAsset*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::TextCore::Text::FontAsset*, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::TextCore::Text::FontAsset*>(value));
}
constexpr ::UnityEngine::TextCore::Text::FontAsset* UnityEngine::TextCore::Text::__TextGenerator__SpecialCharacter::__get_fontAsset()  {
return ::cordl_internals::getInstanceField<::UnityEngine::TextCore::Text::FontAsset*, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::TextCore::Text::FontAsset*> UnityEngine::TextCore::Text::__TextGenerator__SpecialCharacter::__get_fontAsset() const {
return ::cordl_internals::getInstanceField<::UnityEngine::TextCore::Text::FontAsset*, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::TextCore::Text::__TextGenerator__SpecialCharacter::__set_material(::UnityEngine::Material*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Material*, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::Material*>(value));
}
constexpr ::UnityEngine::Material* UnityEngine::TextCore::Text::__TextGenerator__SpecialCharacter::__get_material()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Material*, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> UnityEngine::TextCore::Text::__TextGenerator__SpecialCharacter::__get_material() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Material*, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::TextCore::Text::__TextGenerator__SpecialCharacter::__set_materialIndex(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::TextCore::Text::__TextGenerator__SpecialCharacter::__get_materialIndex()  {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::TextCore::Text::__TextGenerator__SpecialCharacter::__get_materialIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void UnityEngine::TextCore::Text::__TextGenerator__SpecialCharacter::_ctor(::UnityEngine::TextCore::Text::Character*  character, int32_t  materialIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::__TextGenerator__SpecialCharacter>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::Character*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, character, materialIndex);
}
// Ctor Parameters [CppParam { name: "character", ty: "::UnityEngine::TextCore::Text::Character*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "fontAsset", ty: "::UnityEngine::TextCore::Text::FontAsset*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "material", ty: "::UnityEngine::Material*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "materialIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::TextCore::Text::__TextGenerator__SpecialCharacter::__TextGenerator__SpecialCharacter(::UnityEngine::TextCore::Text::Character*  character, ::UnityEngine::TextCore::Text::FontAsset*  fontAsset, ::UnityEngine::Material*  material, int32_t  materialIndex) noexcept : ::bs_hook::ValueTypeWrapper<0x20>() {this->character = character;
this->fontAsset = fontAsset;
this->material = material;
this->materialIndex = materialIndex;
}
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGenerator.GetTextGenerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::TextCore::Text::TextGenerator* (*)()>(&::UnityEngine::TextCore::Text::TextGenerator::GetTextGenerator)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2d296a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator*>::get(),
                            "GetTextGenerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGenerator.GenerateText
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::TextCore::Text::TextGenerationSettings*, ::UnityEngine::TextCore::Text::TextInfo*)>(&::UnityEngine::TextCore::Text::TextGenerator::GenerateText)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x2d29bf8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator*>::get(),
                            "GenerateText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextGenerationSettings*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextInfo*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGenerator.GetCursorPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (*)(::UnityEngine::TextCore::Text::TextInfo*, ::UnityEngine::Rect, int32_t, bool)>(&::UnityEngine::TextCore::Text::TextGenerator::GetCursorPosition)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x2d29ea0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator*>::get(),
                            "GetCursorPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGenerator.GetPreferredValues
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (*)(::UnityEngine::TextCore::Text::TextGenerationSettings*, ::UnityEngine::TextCore::Text::TextInfo*)>(&::UnityEngine::TextCore::Text::TextGenerator::GetPreferredValues)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x2d29fd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator*>::get(),
                            "GetPreferredValues",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextGenerationSettings*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextInfo*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGenerator.Prepare
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::TextGenerator::*)(::UnityEngine::TextCore::Text::TextGenerationSettings*, ::UnityEngine::TextCore::Text::TextInfo*)>(&::UnityEngine::TextCore::Text::TextGenerator::Prepare)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x2d29d6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator*>::get(),
                            "Prepare",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextGenerationSettings*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextInfo*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGenerator.GenerateTextMesh
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::TextGenerator::*)(::UnityEngine::TextCore::Text::TextGenerationSettings*, ::UnityEngine::TextCore::Text::TextInfo*)>(&::UnityEngine::TextCore::Text::TextGenerator::GenerateTextMesh)> {
  constexpr static std::size_t size = 0x68c8;
  constexpr static std::size_t addrs = 0x2d22ddc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator*>::get(),
                            "GenerateTextMesh",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextGenerationSettings*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextInfo*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGenerator.SaveWordWrappingState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::TextGenerator::*)(ByRef<::UnityEngine::TextCore::Text::WordWrapState>, int32_t, int32_t, ::UnityEngine::TextCore::Text::TextInfo*)>(&::UnityEngine::TextCore::Text::TextGenerator::SaveWordWrappingState)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x2d2b1f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator*>::get(),
                            "SaveWordWrappingState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::TextCore::Text::WordWrapState>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextInfo*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGenerator.RestoreWordWrappingState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::TextCore::Text::TextGenerator::*)(ByRef<::UnityEngine::TextCore::Text::WordWrapState>, ::UnityEngine::TextCore::Text::TextInfo*)>(&::UnityEngine::TextCore::Text::TextGenerator::RestoreWordWrappingState)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x2d2b410;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator*>::get(),
                            "RestoreWordWrappingState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::TextCore::Text::WordWrapState>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextInfo*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGenerator.ValidateHtmlTag
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::TextCore::Text::TextGenerator::*)(::ArrayW<int32_t,::Array<int32_t>*>, int32_t, ByRef<int32_t>, ::UnityEngine::TextCore::Text::TextGenerationSettings*, ::UnityEngine::TextCore::Text::TextInfo*)>(&::UnityEngine::TextCore::Text::TextGenerator::ValidateHtmlTag)> {
  constexpr static std::size_t size = 0x42ac;
  constexpr static std::size_t addrs = 0x2d2b64c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator*>::get(),
                            "ValidateHtmlTag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t,::Array<int32_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextGenerationSettings*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextInfo*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGenerator.SaveGlyphVertexInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::TextGenerator::*)(float_t, float_t, ::UnityEngine::Color32, ::UnityEngine::TextCore::Text::TextGenerationSettings*, ::UnityEngine::TextCore::Text::TextInfo*)>(&::UnityEngine::TextCore::Text::TextGenerator::SaveGlyphVertexInfo)> {
  constexpr static std::size_t size = 0x1dec;
  constexpr static std::size_t addrs = 0x2d2f8f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator*>::get(),
                            "SaveGlyphVertexInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color32>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextGenerationSettings*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextInfo*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGenerator.SaveSpriteVertexInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::TextGenerator::*)(::UnityEngine::Color32, ::UnityEngine::TextCore::Text::TextGenerationSettings*, ::UnityEngine::TextCore::Text::TextInfo*)>(&::UnityEngine::TextCore::Text::TextGenerator::SaveSpriteVertexInfo)> {
  constexpr static std::size_t size = 0x1ab4;
  constexpr static std::size_t addrs = 0x2d316e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator*>::get(),
                            "SaveSpriteVertexInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color32>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextGenerationSettings*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextInfo*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGenerator.DrawUnderlineMesh
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::TextGenerator::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ByRef<int32_t>, float_t, float_t, float_t, float_t, ::UnityEngine::Color32, ::UnityEngine::TextCore::Text::TextGenerationSettings*, ::UnityEngine::TextCore::Text::TextInfo*)>(&::UnityEngine::TextCore::Text::TextGenerator::DrawUnderlineMesh)> {
  constexpr static std::size_t size = 0xf68;
  constexpr static std::size_t addrs = 0x2d33198;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator*>::get(),
                            "DrawUnderlineMesh",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color32>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextGenerationSettings*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextInfo*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGenerator.DrawTextHighlight
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::TextGenerator::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ByRef<int32_t>, ::UnityEngine::Color32, ::UnityEngine::TextCore::Text::TextGenerationSettings*, ::UnityEngine::TextCore::Text::TextInfo*)>(&::UnityEngine::TextCore::Text::TextGenerator::DrawTextHighlight)> {
  constexpr static std::size_t size = 0x5ac;
  constexpr static std::size_t addrs = 0x2d34238;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator*>::get(),
                            "DrawTextHighlight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color32>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextGenerationSettings*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextInfo*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGenerator.ClearMesh
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool, ::UnityEngine::TextCore::Text::TextInfo*)>(&::UnityEngine::TextCore::Text::TextGenerator::ClearMesh)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2d347e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator*>::get(),
                            "ClearMesh",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextInfo*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGenerator.EnableMasking
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::TextGenerator::*)()>(&::UnityEngine::TextCore::Text::TextGenerator::EnableMasking)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2d34804;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator*>::get(),
                            "EnableMasking",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGenerator.DisableMasking
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::TextGenerator::*)()>(&::UnityEngine::TextCore::Text::TextGenerator::DisableMasking)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d34810;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator*>::get(),
                            "DisableMasking",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGenerator.SetArraySizes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::TextGenerator::*)(::ArrayW<int32_t,::Array<int32_t>*>, ::UnityEngine::TextCore::Text::TextGenerationSettings*, ::UnityEngine::TextCore::Text::TextInfo*)>(&::UnityEngine::TextCore::Text::TextGenerator::SetArraySizes)> {
  constexpr static std::size_t size = 0xe78;
  constexpr static std::size_t addrs = 0x2d2a380;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator*>::get(),
                            "SetArraySizes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t,::Array<int32_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextGenerationSettings*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextInfo*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGenerator.GetTextElement
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::TextCore::Text::TextElement* (::UnityEngine::TextCore::Text::TextGenerator::*)(::UnityEngine::TextCore::Text::TextGenerationSettings*, uint32_t, ::UnityEngine::TextCore::Text::FontAsset*, ::UnityEngine::TextCore::Text::FontStyles, ::UnityEngine::TextCore::Text::TextFontWeight, ByRef<bool>)>(&::UnityEngine::TextCore::Text::TextGenerator::GetTextElement)> {
  constexpr static std::size_t size = 0x2ec;
  constexpr static std::size_t addrs = 0x2d34818;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator*>::get(),
                            "GetTextElement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextGenerationSettings*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::FontAsset*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::FontStyles>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextFontWeight>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGenerator.ComputeMarginSize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::TextGenerator::*)(::UnityEngine::Rect, ::UnityEngine::Vector4)>(&::UnityEngine::TextCore::Text::TextGenerator::ComputeMarginSize)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x2d2a240;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator*>::get(),
                            "ComputeMarginSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGenerator.GetSpecialCharacters
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::TextGenerator::*)(::UnityEngine::TextCore::Text::TextGenerationSettings*)>(&::UnityEngine::TextCore::Text::TextGenerator::GetSpecialCharacters)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2d2a218;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator*>::get(),
                            "GetSpecialCharacters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextGenerationSettings*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGenerator.GetEllipsisSpecialCharacter
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::TextGenerator::*)(::UnityEngine::TextCore::Text::TextGenerationSettings*)>(&::UnityEngine::TextCore::Text::TextGenerator::GetEllipsisSpecialCharacter)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x2d34b04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator*>::get(),
                            "GetEllipsisSpecialCharacter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextGenerationSettings*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGenerator.GetUnderlineSpecialCharacter
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::TextGenerator::*)(::UnityEngine::TextCore::Text::TextGenerationSettings*)>(&::UnityEngine::TextCore::Text::TextGenerator::GetUnderlineSpecialCharacter)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x2d34100;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator*>::get(),
                            "GetUnderlineSpecialCharacter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextGenerationSettings*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGenerator.GetPaddingForMaterial
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::TextCore::Text::TextGenerator::*)(::UnityEngine::Material*, bool)>(&::UnityEngine::TextCore::Text::TextGenerator::GetPaddingForMaterial)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x2d34c90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator*>::get(),
                            "GetPaddingForMaterial",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGenerator.GetPreferredValuesInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::UnityEngine::TextCore::Text::TextGenerator::*)(::UnityEngine::TextCore::Text::TextGenerationSettings*, ::UnityEngine::TextCore::Text::TextInfo*)>(&::UnityEngine::TextCore::Text::TextGenerator::GetPreferredValuesInternal)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x2d2a104;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator*>::get(),
                            "GetPreferredValuesInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextGenerationSettings*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextInfo*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGenerator.CalculatePreferredValues
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::UnityEngine::TextCore::Text::TextGenerator::*)(float_t, ::UnityEngine::Vector2, bool, ::UnityEngine::TextCore::Text::TextGenerationSettings*, ::UnityEngine::TextCore::Text::TextInfo*)>(&::UnityEngine::TextCore::Text::TextGenerator::CalculatePreferredValues)> {
  constexpr static std::size_t size = 0x2c10;
  constexpr static std::size_t addrs = 0x2d34da4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGenerator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::TextGenerator::*)()>(&::UnityEngine::TextCore::Text::TextGenerator::_ctor)> {
  constexpr static std::size_t size = 0x4dc;
  constexpr static std::size_t addrs = 0x2d2971c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
inline void UnityEngine::TextCore::Text::TextGenerator::setStaticF_s_TextGenerator(::UnityEngine::TextCore::Text::TextGenerator*  value)  {
::cordl_internals::setStaticField<::UnityEngine::TextCore::Text::TextGenerator*, "s_TextGenerator", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator*>::get>(std::forward<::UnityEngine::TextCore::Text::TextGenerator*>(value));
}
inline ::UnityEngine::TextCore::Text::TextGenerator* UnityEngine::TextCore::Text::TextGenerator::getStaticF_s_TextGenerator()  {
return ::cordl_internals::getStaticField<::UnityEngine::TextCore::Text::TextGenerator*, "s_TextGenerator", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator*>::get>();
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__set_m_RectTransformCorners(::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>, 0x10>(this, std::forward<::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>>(value));
}
constexpr ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>& UnityEngine::TextCore::Text::TextGenerator::__get_m_RectTransformCorners()  {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>, 0x10>(this);
}
constexpr ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*> const& UnityEngine::TextCore::Text::TextGenerator::__get_m_RectTransformCorners() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>, 0x10>(this);
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__set_m_MarginWidth(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x18>(this, std::forward<float_t>(value));
}
constexpr float_t& UnityEngine::TextCore::Text::TextGenerator::__get_m_MarginWidth()  {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this);
}
constexpr float_t const& UnityEngine::TextCore::Text::TextGenerator::__get_m_MarginWidth() const {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this);
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__set_m_MarginHeight(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x1c>(this, std::forward<float_t>(value));
}
constexpr float_t& UnityEngine::TextCore::Text::TextGenerator::__get_m_MarginHeight()  {
return ::cordl_internals::getInstanceField<float_t, 0x1c>(this);
}
constexpr float_t const& UnityEngine::TextCore::Text::TextGenerator::__get_m_MarginHeight() const {
return ::cordl_internals::getInstanceField<float_t, 0x1c>(this);
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__set_m_CharBuffer(::ArrayW<int32_t,::Array<int32_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0x20>(this, std::forward<::ArrayW<int32_t,::Array<int32_t>*>>(value));
}
constexpr ::ArrayW<int32_t,::Array<int32_t>*>& UnityEngine::TextCore::Text::TextGenerator::__get_m_CharBuffer()  {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0x20>(this);
}
constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& UnityEngine::TextCore::Text::TextGenerator::__get_m_CharBuffer() const {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0x20>(this);
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__set_m_PreferredWidth(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x28>(this, std::forward<float_t>(value));
}
constexpr float_t& UnityEngine::TextCore::Text::TextGenerator::__get_m_PreferredWidth()  {
return ::cordl_internals::getInstanceField<float_t, 0x28>(this);
}
constexpr float_t const& UnityEngine::TextCore::Text::TextGenerator::__get_m_PreferredWidth() const {
return ::cordl_internals::getInstanceField<float_t, 0x28>(this);
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__set_m_PreferredHeight(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x2c>(this, std::forward<float_t>(value));
}
constexpr float_t& UnityEngine::TextCore::Text::TextGenerator::__get_m_PreferredHeight()  {
return ::cordl_internals::getInstanceField<float_t, 0x2c>(this);
}
constexpr float_t const& UnityEngine::TextCore::Text::TextGenerator::__get_m_PreferredHeight() const {
return ::cordl_internals::getInstanceField<float_t, 0x2c>(this);
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__set_m_CurrentFontAsset(::UnityEngine::TextCore::Text::FontAsset*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::TextCore::Text::FontAsset*, 0x30>(this, std::forward<::UnityEngine::TextCore::Text::FontAsset*>(value));
}
constexpr ::UnityEngine::TextCore::Text::FontAsset* UnityEngine::TextCore::Text::TextGenerator::__get_m_CurrentFontAsset()  {
return ::cordl_internals::getInstanceField<::UnityEngine::TextCore::Text::FontAsset*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::TextCore::Text::FontAsset*> UnityEngine::TextCore::Text::TextGenerator::__get_m_CurrentFontAsset() const {
return ::cordl_internals::getInstanceField<::UnityEngine::TextCore::Text::FontAsset*, 0x30>(this);
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__set_m_CurrentMaterial(::UnityEngine::Material*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Material*, 0x38>(this, std::forward<::UnityEngine::Material*>(value));
}
constexpr ::UnityEngine::Material* UnityEngine::TextCore::Text::TextGenerator::__get_m_CurrentMaterial()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Material*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> UnityEngine::TextCore::Text::TextGenerator::__get_m_CurrentMaterial() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Material*, 0x38>(this);
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__set_m_CurrentMaterialIndex(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x40>(this, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::TextCore::Text::TextGenerator::__get_m_CurrentMaterialIndex()  {
return ::cordl_internals::getInstanceField<int32_t, 0x40>(this);
}
constexpr int32_t const& UnityEngine::TextCore::Text::TextGenerator::__get_m_CurrentMaterialIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x40>(this);
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__set_m_MaterialReferenceStack(::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::MaterialReference>  value)  {
::cordl_internals::setInstanceField<::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::MaterialReference>, 0x48>(this, std::forward<::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::MaterialReference>>(value));
}
constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::MaterialReference>& UnityEngine::TextCore::Text::TextGenerator::__get_m_MaterialReferenceStack()  {
return ::cordl_internals::getInstanceField<::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::MaterialReference>, 0x48>(this);
}
constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::MaterialReference> const& UnityEngine::TextCore::Text::TextGenerator::__get_m_MaterialReferenceStack() const {
return ::cordl_internals::getInstanceField<::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::MaterialReference>, 0x48>(this);
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__set_m_Padding(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0xa0>(this, std::forward<float_t>(value));
}
constexpr float_t& UnityEngine::TextCore::Text::TextGenerator::__get_m_Padding()  {
return ::cordl_internals::getInstanceField<float_t, 0xa0>(this);
}
constexpr float_t const& UnityEngine::TextCore::Text::TextGenerator::__get_m_Padding() const {
return ::cordl_internals::getInstanceField<float_t, 0xa0>(this);
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__set_m_CurrentSpriteAsset(::UnityEngine::TextCore::Text::SpriteAsset*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::TextCore::Text::SpriteAsset*, 0xa8>(this, std::forward<::UnityEngine::TextCore::Text::SpriteAsset*>(value));
}
constexpr ::UnityEngine::TextCore::Text::SpriteAsset* UnityEngine::TextCore::Text::TextGenerator::__get_m_CurrentSpriteAsset()  {
return ::cordl_internals::getInstanceField<::UnityEngine::TextCore::Text::SpriteAsset*, 0xa8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::TextCore::Text::SpriteAsset*> UnityEngine::TextCore::Text::TextGenerator::__get_m_CurrentSpriteAsset() const {
return ::cordl_internals::getInstanceField<::UnityEngine::TextCore::Text::SpriteAsset*, 0xa8>(this);
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__set_m_TotalCharacterCount(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0xb0>(this, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::TextCore::Text::TextGenerator::__get_m_TotalCharacterCount()  {
return ::cordl_internals::getInstanceField<int32_t, 0xb0>(this);
}
constexpr int32_t const& UnityEngine::TextCore::Text::TextGenerator::__get_m_TotalCharacterCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0xb0>(this);
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__set_m_FontScale(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0xb4>(this, std::forward<float_t>(value));
}
constexpr float_t& UnityEngine::TextCore::Text::TextGenerator::__get_m_FontScale()  {
return ::cordl_internals::getInstanceField<float_t, 0xb4>(this);
}
constexpr float_t const& UnityEngine::TextCore::Text::TextGenerator::__get_m_FontScale() const {
return ::cordl_internals::getInstanceField<float_t, 0xb4>(this);
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__set_m_FontSize(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0xb8>(this, std::forward<float_t>(value));
}
constexpr float_t& UnityEngine::TextCore::Text::TextGenerator::__get_m_FontSize()  {
return ::cordl_internals::getInstanceField<float_t, 0xb8>(this);
}
constexpr float_t const& UnityEngine::TextCore::Text::TextGenerator::__get_m_FontSize() const {
return ::cordl_internals::getInstanceField<float_t, 0xb8>(this);
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__set_m_FontScaleMultiplier(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0xbc>(this, std::forward<float_t>(value));
}
constexpr float_t& UnityEngine::TextCore::Text::TextGenerator::__get_m_FontScaleMultiplier()  {
return ::cordl_internals::getInstanceField<float_t, 0xbc>(this);
}
constexpr float_t const& UnityEngine::TextCore::Text::TextGenerator::__get_m_FontScaleMultiplier() const {
return ::cordl_internals::getInstanceField<float_t, 0xbc>(this);
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__set_m_CurrentFontSize(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0xc0>(this, std::forward<float_t>(value));
}
constexpr float_t& UnityEngine::TextCore::Text::TextGenerator::__get_m_CurrentFontSize()  {
return ::cordl_internals::getInstanceField<float_t, 0xc0>(this);
}
constexpr float_t const& UnityEngine::TextCore::Text::TextGenerator::__get_m_CurrentFontSize() const {
return ::cordl_internals::getInstanceField<float_t, 0xc0>(this);
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__set_m_SizeStack(::UnityEngine::TextCore::Text::TextProcessingStack_1<float_t>  value)  {
::cordl_internals::setInstanceField<::UnityEngine::TextCore::Text::TextProcessingStack_1<float_t>, 0xc8>(this, std::forward<::UnityEngine::TextCore::Text::TextProcessingStack_1<float_t>>(value));
}
constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<float_t>& UnityEngine::TextCore::Text::TextGenerator::__get_m_SizeStack()  {
return ::cordl_internals::getInstanceField<::UnityEngine::TextCore::Text::TextProcessingStack_1<float_t>, 0xc8>(this);
}
constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<float_t> const& UnityEngine::TextCore::Text::TextGenerator::__get_m_SizeStack() const {
return ::cordl_internals::getInstanceField<::UnityEngine::TextCore::Text::TextProcessingStack_1<float_t>, 0xc8>(this);
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__set_m_FontStyleInternal(::UnityEngine::TextCore::Text::FontStyles  value)  {
::cordl_internals::setInstanceField<::UnityEngine::TextCore::Text::FontStyles, 0xe8>(this, std::forward<::UnityEngine::TextCore::Text::FontStyles>(value));
}
constexpr ::UnityEngine::TextCore::Text::FontStyles& UnityEngine::TextCore::Text::TextGenerator::__get_m_FontStyleInternal()  {
return ::cordl_internals::getInstanceField<::UnityEngine::TextCore::Text::FontStyles, 0xe8>(this);
}
constexpr ::UnityEngine::TextCore::Text::FontStyles const& UnityEngine::TextCore::Text::TextGenerator::__get_m_FontStyleInternal() const {
return ::cordl_internals::getInstanceField<::UnityEngine::TextCore::Text::FontStyles, 0xe8>(this);
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__set_m_FontStyleStack(::UnityEngine::TextCore::Text::FontStyleStack  value)  {
::cordl_internals::setInstanceField<::UnityEngine::TextCore::Text::FontStyleStack, 0xec>(this, std::forward<::UnityEngine::TextCore::Text::FontStyleStack>(value));
}
constexpr ::UnityEngine::TextCore::Text::FontStyleStack& UnityEngine::TextCore::Text::TextGenerator::__get_m_FontStyleStack()  {
return ::cordl_internals::getInstanceField<::UnityEngine::TextCore::Text::FontStyleStack, 0xec>(this);
}
constexpr ::UnityEngine::TextCore::Text::FontStyleStack const& UnityEngine::TextCore::Text::TextGenerator::__get_m_FontStyleStack() const {
return ::cordl_internals::getInstanceField<::UnityEngine::TextCore::Text::FontStyleStack, 0xec>(this);
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__set_m_FontWeightInternal(::UnityEngine::TextCore::Text::TextFontWeight  value)  {
::cordl_internals::setInstanceField<::UnityEngine::TextCore::Text::TextFontWeight, 0xf8>(this, std::forward<::UnityEngine::TextCore::Text::TextFontWeight>(value));
}
constexpr ::UnityEngine::TextCore::Text::TextFontWeight& UnityEngine::TextCore::Text::TextGenerator::__get_m_FontWeightInternal()  {
return ::cordl_internals::getInstanceField<::UnityEngine::TextCore::Text::TextFontWeight, 0xf8>(this);
}
constexpr ::UnityEngine::TextCore::Text::TextFontWeight const& UnityEngine::TextCore::Text::TextGenerator::__get_m_FontWeightInternal() const {
return ::cordl_internals::getInstanceField<::UnityEngine::TextCore::Text::TextFontWeight, 0xf8>(this);
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__set_m_FontWeightStack(::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::TextFontWeight>  value)  {
::cordl_internals::setInstanceField<::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::TextFontWeight>, 0x100>(this, std::forward<::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::TextFontWeight>>(value));
}
constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::TextFontWeight>& UnityEngine::TextCore::Text::TextGenerator::__get_m_FontWeightStack()  {
return ::cordl_internals::getInstanceField<::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::TextFontWeight>, 0x100>(this);
}
constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::TextFontWeight> const& UnityEngine::TextCore::Text::TextGenerator::__get_m_FontWeightStack() const {
return ::cordl_internals::getInstanceField<::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::TextFontWeight>, 0x100>(this);
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__set_m_LineJustification(::UnityEngine::TextCore::Text::TextAlignment  value)  {
::cordl_internals::setInstanceField<::UnityEngine::TextCore::Text::TextAlignment, 0x120>(this, std::forward<::UnityEngine::TextCore::Text::TextAlignment>(value));
}
constexpr ::UnityEngine::TextCore::Text::TextAlignment& UnityEngine::TextCore::Text::TextGenerator::__get_m_LineJustification()  {
return ::cordl_internals::getInstanceField<::UnityEngine::TextCore::Text::TextAlignment, 0x120>(this);
}
constexpr ::UnityEngine::TextCore::Text::TextAlignment const& UnityEngine::TextCore::Text::TextGenerator::__get_m_LineJustification() const {
return ::cordl_internals::getInstanceField<::UnityEngine::TextCore::Text::TextAlignment, 0x120>(this);
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__set_m_LineJustificationStack(::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::TextAlignment>  value)  {
::cordl_internals::setInstanceField<::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::TextAlignment>, 0x128>(this, std::forward<::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::TextAlignment>>(value));
}
constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::TextAlignment>& UnityEngine::TextCore::Text::TextGenerator::__get_m_LineJustificationStack()  {
return ::cordl_internals::getInstanceField<::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::TextAlignment>, 0x128>(this);
}
constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::TextAlignment> const& UnityEngine::TextCore::Text::TextGenerator::__get_m_LineJustificationStack() const {
return ::cordl_internals::getInstanceField<::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::TextAlignment>, 0x128>(this);
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__set_m_BaselineOffset(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x148>(this, std::forward<float_t>(value));
}
constexpr float_t& UnityEngine::TextCore::Text::TextGenerator::__get_m_BaselineOffset()  {
return ::cordl_internals::getInstanceField<float_t, 0x148>(this);
}
constexpr float_t const& UnityEngine::TextCore::Text::TextGenerator::__get_m_BaselineOffset() const {
return ::cordl_internals::getInstanceField<float_t, 0x148>(this);
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__set_m_BaselineOffsetStack(::UnityEngine::TextCore::Text::TextProcessingStack_1<float_t>  value)  {
::cordl_internals::setInstanceField<::UnityEngine::TextCore::Text::TextProcessingStack_1<float_t>, 0x150>(this, std::forward<::UnityEngine::TextCore::Text::TextProcessingStack_1<float_t>>(value));
}
constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<float_t>& UnityEngine::TextCore::Text::TextGenerator::__get_m_BaselineOffsetStack()  {
return ::cordl_internals::getInstanceField<::UnityEngine::TextCore::Text::TextProcessingStack_1<float_t>, 0x150>(this);
}
constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<float_t> const& UnityEngine::TextCore::Text::TextGenerator::__get_m_BaselineOffsetStack() const {
return ::cordl_internals::getInstanceField<::UnityEngine::TextCore::Text::TextProcessingStack_1<float_t>, 0x150>(this);
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__set_m_FontColor32(::UnityEngine::Color32  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Color32, 0x170>(this, std::forward<::UnityEngine::Color32>(value));
}
constexpr ::UnityEngine::Color32& UnityEngine::TextCore::Text::TextGenerator::__get_m_FontColor32()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Color32, 0x170>(this);
}
constexpr ::UnityEngine::Color32 const& UnityEngine::TextCore::Text::TextGenerator::__get_m_FontColor32() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Color32, 0x170>(this);
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__set_m_HtmlColor(::UnityEngine::Color32  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Color32, 0x174>(this, std::forward<::UnityEngine::Color32>(value));
}
constexpr ::UnityEngine::Color32& UnityEngine::TextCore::Text::TextGenerator::__get_m_HtmlColor()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Color32, 0x174>(this);
}
constexpr ::UnityEngine::Color32 const& UnityEngine::TextCore::Text::TextGenerator::__get_m_HtmlColor() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Color32, 0x174>(this);
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__set_m_UnderlineColor(::UnityEngine::Color32  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Color32, 0x178>(this, std::forward<::UnityEngine::Color32>(value));
}
constexpr ::UnityEngine::Color32& UnityEngine::TextCore::Text::TextGenerator::__get_m_UnderlineColor()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Color32, 0x178>(this);
}
constexpr ::UnityEngine::Color32 const& UnityEngine::TextCore::Text::TextGenerator::__get_m_UnderlineColor() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Color32, 0x178>(this);
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__set_m_StrikethroughColor(::UnityEngine::Color32  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Color32, 0x17c>(this, std::forward<::UnityEngine::Color32>(value));
}
constexpr ::UnityEngine::Color32& UnityEngine::TextCore::Text::TextGenerator::__get_m_StrikethroughColor()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Color32, 0x17c>(this);
}
constexpr ::UnityEngine::Color32 const& UnityEngine::TextCore::Text::TextGenerator::__get_m_StrikethroughColor() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Color32, 0x17c>(this);
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__set_m_ColorStack(::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32>  value)  {
::cordl_internals::setInstanceField<::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32>, 0x180>(this, std::forward<::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32>>(value));
}
constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32>& UnityEngine::TextCore::Text::TextGenerator::__get_m_ColorStack()  {
return ::cordl_internals::getInstanceField<::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32>, 0x180>(this);
}
constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32> const& UnityEngine::TextCore::Text::TextGenerator::__get_m_ColorStack() const {
return ::cordl_internals::getInstanceField<::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32>, 0x180>(this);
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__set_m_UnderlineColorStack(::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32>  value)  {
::cordl_internals::setInstanceField<::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32>, 0x1a0>(this, std::forward<::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32>>(value));
}
constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32>& UnityEngine::TextCore::Text::TextGenerator::__get_m_UnderlineColorStack()  {
return ::cordl_internals::getInstanceField<::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32>, 0x1a0>(this);
}
constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32> const& UnityEngine::TextCore::Text::TextGenerator::__get_m_UnderlineColorStack() const {
return ::cordl_internals::getInstanceField<::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32>, 0x1a0>(this);
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__set_m_StrikethroughColorStack(::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32>  value)  {
::cordl_internals::setInstanceField<::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32>, 0x1c0>(this, std::forward<::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32>>(value));
}
constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32>& UnityEngine::TextCore::Text::TextGenerator::__get_m_StrikethroughColorStack()  {
return ::cordl_internals::getInstanceField<::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32>, 0x1c0>(this);
}
constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32> const& UnityEngine::TextCore::Text::TextGenerator::__get_m_StrikethroughColorStack() const {
return ::cordl_internals::getInstanceField<::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32>, 0x1c0>(this);
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__set_m_HighlightColorStack(::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32>  value)  {
::cordl_internals::setInstanceField<::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32>, 0x1e0>(this, std::forward<::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32>>(value));
}
constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32>& UnityEngine::TextCore::Text::TextGenerator::__get_m_HighlightColorStack()  {
return ::cordl_internals::getInstanceField<::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32>, 0x1e0>(this);
}
constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32> const& UnityEngine::TextCore::Text::TextGenerator::__get_m_HighlightColorStack() const {
return ::cordl_internals::getInstanceField<::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32>, 0x1e0>(this);
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__set_m_ColorGradientPreset(::UnityEngine::TextCore::Text::TextColorGradient*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::TextCore::Text::TextColorGradient*, 0x200>(this, std::forward<::UnityEngine::TextCore::Text::TextColorGradient*>(value));
}
constexpr ::UnityEngine::TextCore::Text::TextColorGradient* UnityEngine::TextCore::Text::TextGenerator::__get_m_ColorGradientPreset()  {
return ::cordl_internals::getInstanceField<::UnityEngine::TextCore::Text::TextColorGradient*, 0x200>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::TextCore::Text::TextColorGradient*> UnityEngine::TextCore::Text::TextGenerator::__get_m_ColorGradientPreset() const {
return ::cordl_internals::getInstanceField<::UnityEngine::TextCore::Text::TextColorGradient*, 0x200>(this);
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__set_m_ColorGradientStack(::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::TextColorGradient*>  value)  {
::cordl_internals::setInstanceField<::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::TextColorGradient*>, 0x208>(this, std::forward<::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::TextColorGradient*>>(value));
}
constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::TextColorGradient*>& UnityEngine::TextCore::Text::TextGenerator::__get_m_ColorGradientStack()  {
return ::cordl_internals::getInstanceField<::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::TextColorGradient*>, 0x208>(this);
}
constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::TextColorGradient*> const& UnityEngine::TextCore::Text::TextGenerator::__get_m_ColorGradientStack() const {
return ::cordl_internals::getInstanceField<::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::TextColorGradient*>, 0x208>(this);
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__set_m_ActionStack(::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>  value)  {
::cordl_internals::setInstanceField<::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>, 0x230>(this, std::forward<::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>>(value));
}
constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>& UnityEngine::TextCore::Text::TextGenerator::__get_m_ActionStack()  {
return ::cordl_internals::getInstanceField<::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>, 0x230>(this);
}
constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t> const& UnityEngine::TextCore::Text::TextGenerator::__get_m_ActionStack() const {
return ::cordl_internals::getInstanceField<::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>, 0x230>(this);
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__set_m_IsFxMatrixSet(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x250>(this, std::forward<bool>(value));
}
constexpr bool& UnityEngine::TextCore::Text::TextGenerator::__get_m_IsFxMatrixSet()  {
return ::cordl_internals::getInstanceField<bool, 0x250>(this);
}
constexpr bool const& UnityEngine::TextCore::Text::TextGenerator::__get_m_IsFxMatrixSet() const {
return ::cordl_internals::getInstanceField<bool, 0x250>(this);
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__set_m_LineOffset(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x254>(this, std::forward<float_t>(value));
}
constexpr float_t& UnityEngine::TextCore::Text::TextGenerator::__get_m_LineOffset()  {
return ::cordl_internals::getInstanceField<float_t, 0x254>(this);
}
constexpr float_t const& UnityEngine::TextCore::Text::TextGenerator::__get_m_LineOffset() const {
return ::cordl_internals::getInstanceField<float_t, 0x254>(this);
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__set_m_LineHeight(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x258>(this, std::forward<float_t>(value));
}
constexpr float_t& UnityEngine::TextCore::Text::TextGenerator::__get_m_LineHeight()  {
return ::cordl_internals::getInstanceField<float_t, 0x258>(this);
}
constexpr float_t const& UnityEngine::TextCore::Text::TextGenerator::__get_m_LineHeight() const {
return ::cordl_internals::getInstanceField<float_t, 0x258>(this);
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__set_m_CSpacing(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x25c>(this, std::forward<float_t>(value));
}
constexpr float_t& UnityEngine::TextCore::Text::TextGenerator::__get_m_CSpacing()  {
return ::cordl_internals::getInstanceField<float_t, 0x25c>(this);
}
constexpr float_t const& UnityEngine::TextCore::Text::TextGenerator::__get_m_CSpacing() const {
return ::cordl_internals::getInstanceField<float_t, 0x25c>(this);
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__set_m_MonoSpacing(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x260>(this, std::forward<float_t>(value));
}
constexpr float_t& UnityEngine::TextCore::Text::TextGenerator::__get_m_MonoSpacing()  {
return ::cordl_internals::getInstanceField<float_t, 0x260>(this);
}
constexpr float_t const& UnityEngine::TextCore::Text::TextGenerator::__get_m_MonoSpacing() const {
return ::cordl_internals::getInstanceField<float_t, 0x260>(this);
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__set_m_XAdvance(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x264>(this, std::forward<float_t>(value));
}
constexpr float_t& UnityEngine::TextCore::Text::TextGenerator::__get_m_XAdvance()  {
return ::cordl_internals::getInstanceField<float_t, 0x264>(this);
}
constexpr float_t const& UnityEngine::TextCore::Text::TextGenerator::__get_m_XAdvance() const {
return ::cordl_internals::getInstanceField<float_t, 0x264>(this);
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__set_m_TagLineIndent(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x268>(this, std::forward<float_t>(value));
}
constexpr float_t& UnityEngine::TextCore::Text::TextGenerator::__get_m_TagLineIndent()  {
return ::cordl_internals::getInstanceField<float_t, 0x268>(this);
}
constexpr float_t const& UnityEngine::TextCore::Text::TextGenerator::__get_m_TagLineIndent() const {
return ::cordl_internals::getInstanceField<float_t, 0x268>(this);
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__set_m_TagIndent(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x26c>(this, std::forward<float_t>(value));
}
constexpr float_t& UnityEngine::TextCore::Text::TextGenerator::__get_m_TagIndent()  {
return ::cordl_internals::getInstanceField<float_t, 0x26c>(this);
}
constexpr float_t const& UnityEngine::TextCore::Text::TextGenerator::__get_m_TagIndent() const {
return ::cordl_internals::getInstanceField<float_t, 0x26c>(this);
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__set_m_IndentStack(::UnityEngine::TextCore::Text::TextProcessingStack_1<float_t>  value)  {
::cordl_internals::setInstanceField<::UnityEngine::TextCore::Text::TextProcessingStack_1<float_t>, 0x270>(this, std::forward<::UnityEngine::TextCore::Text::TextProcessingStack_1<float_t>>(value));
}
constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<float_t>& UnityEngine::TextCore::Text::TextGenerator::__get_m_IndentStack()  {
return ::cordl_internals::getInstanceField<::UnityEngine::TextCore::Text::TextProcessingStack_1<float_t>, 0x270>(this);
}
constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<float_t> const& UnityEngine::TextCore::Text::TextGenerator::__get_m_IndentStack() const {
return ::cordl_internals::getInstanceField<::UnityEngine::TextCore::Text::TextProcessingStack_1<float_t>, 0x270>(this);
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__set_m_TagNoParsing(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x290>(this, std::forward<bool>(value));
}
constexpr bool& UnityEngine::TextCore::Text::TextGenerator::__get_m_TagNoParsing()  {
return ::cordl_internals::getInstanceField<bool, 0x290>(this);
}
constexpr bool const& UnityEngine::TextCore::Text::TextGenerator::__get_m_TagNoParsing() const {
return ::cordl_internals::getInstanceField<bool, 0x290>(this);
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__set_m_CharacterCount(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x294>(this, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::TextCore::Text::TextGenerator::__get_m_CharacterCount()  {
return ::cordl_internals::getInstanceField<int32_t, 0x294>(this);
}
constexpr int32_t const& UnityEngine::TextCore::Text::TextGenerator::__get_m_CharacterCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x294>(this);
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__set_m_FirstCharacterOfLine(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x298>(this, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::TextCore::Text::TextGenerator::__get_m_FirstCharacterOfLine()  {
return ::cordl_internals::getInstanceField<int32_t, 0x298>(this);
}
constexpr int32_t const& UnityEngine::TextCore::Text::TextGenerator::__get_m_FirstCharacterOfLine() const {
return ::cordl_internals::getInstanceField<int32_t, 0x298>(this);
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__set_m_LastCharacterOfLine(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x29c>(this, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::TextCore::Text::TextGenerator::__get_m_LastCharacterOfLine()  {
return ::cordl_internals::getInstanceField<int32_t, 0x29c>(this);
}
constexpr int32_t const& UnityEngine::TextCore::Text::TextGenerator::__get_m_LastCharacterOfLine() const {
return ::cordl_internals::getInstanceField<int32_t, 0x29c>(this);
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__set_m_FirstVisibleCharacterOfLine(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x2a0>(this, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::TextCore::Text::TextGenerator::__get_m_FirstVisibleCharacterOfLine()  {
return ::cordl_internals::getInstanceField<int32_t, 0x2a0>(this);
}
constexpr int32_t const& UnityEngine::TextCore::Text::TextGenerator::__get_m_FirstVisibleCharacterOfLine() const {
return ::cordl_internals::getInstanceField<int32_t, 0x2a0>(this);
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__set_m_LastVisibleCharacterOfLine(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x2a4>(this, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::TextCore::Text::TextGenerator::__get_m_LastVisibleCharacterOfLine()  {
return ::cordl_internals::getInstanceField<int32_t, 0x2a4>(this);
}
constexpr int32_t const& UnityEngine::TextCore::Text::TextGenerator::__get_m_LastVisibleCharacterOfLine() const {
return ::cordl_internals::getInstanceField<int32_t, 0x2a4>(this);
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__set_m_MaxLineAscender(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x2a8>(this, std::forward<float_t>(value));
}
constexpr float_t& UnityEngine::TextCore::Text::TextGenerator::__get_m_MaxLineAscender()  {
return ::cordl_internals::getInstanceField<float_t, 0x2a8>(this);
}
constexpr float_t const& UnityEngine::TextCore::Text::TextGenerator::__get_m_MaxLineAscender() const {
return ::cordl_internals::getInstanceField<float_t, 0x2a8>(this);
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__set_m_MaxLineDescender(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x2ac>(this, std::forward<float_t>(value));
}
constexpr float_t& UnityEngine::TextCore::Text::TextGenerator::__get_m_MaxLineDescender()  {
return ::cordl_internals::getInstanceField<float_t, 0x2ac>(this);
}
constexpr float_t const& UnityEngine::TextCore::Text::TextGenerator::__get_m_MaxLineDescender() const {
return ::cordl_internals::getInstanceField<float_t, 0x2ac>(this);
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__set_m_LineNumber(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x2b0>(this, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::TextCore::Text::TextGenerator::__get_m_LineNumber()  {
return ::cordl_internals::getInstanceField<int32_t, 0x2b0>(this);
}
constexpr int32_t const& UnityEngine::TextCore::Text::TextGenerator::__get_m_LineNumber() const {
return ::cordl_internals::getInstanceField<int32_t, 0x2b0>(this);
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__set_m_LineVisibleCharacterCount(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x2b4>(this, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::TextCore::Text::TextGenerator::__get_m_LineVisibleCharacterCount()  {
return ::cordl_internals::getInstanceField<int32_t, 0x2b4>(this);
}
constexpr int32_t const& UnityEngine::TextCore::Text::TextGenerator::__get_m_LineVisibleCharacterCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x2b4>(this);
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__set_m_FirstOverflowCharacterIndex(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x2b8>(this, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::TextCore::Text::TextGenerator::__get_m_FirstOverflowCharacterIndex()  {
return ::cordl_internals::getInstanceField<int32_t, 0x2b8>(this);
}
constexpr int32_t const& UnityEngine::TextCore::Text::TextGenerator::__get_m_FirstOverflowCharacterIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x2b8>(this);
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__set_m_PageNumber(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x2bc>(this, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::TextCore::Text::TextGenerator::__get_m_PageNumber()  {
return ::cordl_internals::getInstanceField<int32_t, 0x2bc>(this);
}
constexpr int32_t const& UnityEngine::TextCore::Text::TextGenerator::__get_m_PageNumber() const {
return ::cordl_internals::getInstanceField<int32_t, 0x2bc>(this);
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__set_m_MarginLeft(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x2c0>(this, std::forward<float_t>(value));
}
constexpr float_t& UnityEngine::TextCore::Text::TextGenerator::__get_m_MarginLeft()  {
return ::cordl_internals::getInstanceField<float_t, 0x2c0>(this);
}
constexpr float_t const& UnityEngine::TextCore::Text::TextGenerator::__get_m_MarginLeft() const {
return ::cordl_internals::getInstanceField<float_t, 0x2c0>(this);
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__set_m_MarginRight(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x2c4>(this, std::forward<float_t>(value));
}
constexpr float_t& UnityEngine::TextCore::Text::TextGenerator::__get_m_MarginRight()  {
return ::cordl_internals::getInstanceField<float_t, 0x2c4>(this);
}
constexpr float_t const& UnityEngine::TextCore::Text::TextGenerator::__get_m_MarginRight() const {
return ::cordl_internals::getInstanceField<float_t, 0x2c4>(this);
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__set_m_Width(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x2c8>(this, std::forward<float_t>(value));
}
constexpr float_t& UnityEngine::TextCore::Text::TextGenerator::__get_m_Width()  {
return ::cordl_internals::getInstanceField<float_t, 0x2c8>(this);
}
constexpr float_t const& UnityEngine::TextCore::Text::TextGenerator::__get_m_Width() const {
return ::cordl_internals::getInstanceField<float_t, 0x2c8>(this);
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__set_m_MeshExtents(::UnityEngine::TextCore::Text::Extents  value)  {
::cordl_internals::setInstanceField<::UnityEngine::TextCore::Text::Extents, 0x2cc>(this, std::forward<::UnityEngine::TextCore::Text::Extents>(value));
}
constexpr ::UnityEngine::TextCore::Text::Extents& UnityEngine::TextCore::Text::TextGenerator::__get_m_MeshExtents()  {
return ::cordl_internals::getInstanceField<::UnityEngine::TextCore::Text::Extents, 0x2cc>(this);
}
constexpr ::UnityEngine::TextCore::Text::Extents const& UnityEngine::TextCore::Text::TextGenerator::__get_m_MeshExtents() const {
return ::cordl_internals::getInstanceField<::UnityEngine::TextCore::Text::Extents, 0x2cc>(this);
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__set_m_MaxCapHeight(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x2dc>(this, std::forward<float_t>(value));
}
constexpr float_t& UnityEngine::TextCore::Text::TextGenerator::__get_m_MaxCapHeight()  {
return ::cordl_internals::getInstanceField<float_t, 0x2dc>(this);
}
constexpr float_t const& UnityEngine::TextCore::Text::TextGenerator::__get_m_MaxCapHeight() const {
return ::cordl_internals::getInstanceField<float_t, 0x2dc>(this);
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__set_m_MaxAscender(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x2e0>(this, std::forward<float_t>(value));
}
constexpr float_t& UnityEngine::TextCore::Text::TextGenerator::__get_m_MaxAscender()  {
return ::cordl_internals::getInstanceField<float_t, 0x2e0>(this);
}
constexpr float_t const& UnityEngine::TextCore::Text::TextGenerator::__get_m_MaxAscender() const {
return ::cordl_internals::getInstanceField<float_t, 0x2e0>(this);
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__set_m_MaxDescender(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x2e4>(this, std::forward<float_t>(value));
}
constexpr float_t& UnityEngine::TextCore::Text::TextGenerator::__get_m_MaxDescender()  {
return ::cordl_internals::getInstanceField<float_t, 0x2e4>(this);
}
constexpr float_t const& UnityEngine::TextCore::Text::TextGenerator::__get_m_MaxDescender() const {
return ::cordl_internals::getInstanceField<float_t, 0x2e4>(this);
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__set_m_IsNewPage(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x2e8>(this, std::forward<bool>(value));
}
constexpr bool& UnityEngine::TextCore::Text::TextGenerator::__get_m_IsNewPage()  {
return ::cordl_internals::getInstanceField<bool, 0x2e8>(this);
}
constexpr bool const& UnityEngine::TextCore::Text::TextGenerator::__get_m_IsNewPage() const {
return ::cordl_internals::getInstanceField<bool, 0x2e8>(this);
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__set_m_IsNonBreakingSpace(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x2e9>(this, std::forward<bool>(value));
}
constexpr bool& UnityEngine::TextCore::Text::TextGenerator::__get_m_IsNonBreakingSpace()  {
return ::cordl_internals::getInstanceField<bool, 0x2e9>(this);
}
constexpr bool const& UnityEngine::TextCore::Text::TextGenerator::__get_m_IsNonBreakingSpace() const {
return ::cordl_internals::getInstanceField<bool, 0x2e9>(this);
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__set_m_SavedWordWrapState(::UnityEngine::TextCore::Text::WordWrapState  value)  {
::cordl_internals::setInstanceField<::UnityEngine::TextCore::Text::WordWrapState, 0x2f0>(this, std::forward<::UnityEngine::TextCore::Text::WordWrapState>(value));
}
constexpr ::UnityEngine::TextCore::Text::WordWrapState& UnityEngine::TextCore::Text::TextGenerator::__get_m_SavedWordWrapState()  {
return ::cordl_internals::getInstanceField<::UnityEngine::TextCore::Text::WordWrapState, 0x2f0>(this);
}
constexpr ::UnityEngine::TextCore::Text::WordWrapState const& UnityEngine::TextCore::Text::TextGenerator::__get_m_SavedWordWrapState() const {
return ::cordl_internals::getInstanceField<::UnityEngine::TextCore::Text::WordWrapState, 0x2f0>(this);
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__set_m_SavedLineState(::UnityEngine::TextCore::Text::WordWrapState  value)  {
::cordl_internals::setInstanceField<::UnityEngine::TextCore::Text::WordWrapState, 0x600>(this, std::forward<::UnityEngine::TextCore::Text::WordWrapState>(value));
}
constexpr ::UnityEngine::TextCore::Text::WordWrapState& UnityEngine::TextCore::Text::TextGenerator::__get_m_SavedLineState()  {
return ::cordl_internals::getInstanceField<::UnityEngine::TextCore::Text::WordWrapState, 0x600>(this);
}
constexpr ::UnityEngine::TextCore::Text::WordWrapState const& UnityEngine::TextCore::Text::TextGenerator::__get_m_SavedLineState() const {
return ::cordl_internals::getInstanceField<::UnityEngine::TextCore::Text::WordWrapState, 0x600>(this);
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__set_m_LoopCountA(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x910>(this, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::TextCore::Text::TextGenerator::__get_m_LoopCountA()  {
return ::cordl_internals::getInstanceField<int32_t, 0x910>(this);
}
constexpr int32_t const& UnityEngine::TextCore::Text::TextGenerator::__get_m_LoopCountA() const {
return ::cordl_internals::getInstanceField<int32_t, 0x910>(this);
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__set_m_TextElementType(::UnityEngine::TextCore::Text::TextElementType  value)  {
::cordl_internals::setInstanceField<::UnityEngine::TextCore::Text::TextElementType, 0x914>(this, std::forward<::UnityEngine::TextCore::Text::TextElementType>(value));
}
constexpr ::UnityEngine::TextCore::Text::TextElementType& UnityEngine::TextCore::Text::TextGenerator::__get_m_TextElementType()  {
return ::cordl_internals::getInstanceField<::UnityEngine::TextCore::Text::TextElementType, 0x914>(this);
}
constexpr ::UnityEngine::TextCore::Text::TextElementType const& UnityEngine::TextCore::Text::TextGenerator::__get_m_TextElementType() const {
return ::cordl_internals::getInstanceField<::UnityEngine::TextCore::Text::TextElementType, 0x914>(this);
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__set_m_IsParsingText(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x915>(this, std::forward<bool>(value));
}
constexpr bool& UnityEngine::TextCore::Text::TextGenerator::__get_m_IsParsingText()  {
return ::cordl_internals::getInstanceField<bool, 0x915>(this);
}
constexpr bool const& UnityEngine::TextCore::Text::TextGenerator::__get_m_IsParsingText() const {
return ::cordl_internals::getInstanceField<bool, 0x915>(this);
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__set_m_SpriteIndex(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x918>(this, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::TextCore::Text::TextGenerator::__get_m_SpriteIndex()  {
return ::cordl_internals::getInstanceField<int32_t, 0x918>(this);
}
constexpr int32_t const& UnityEngine::TextCore::Text::TextGenerator::__get_m_SpriteIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x918>(this);
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__set_m_SpriteColor(::UnityEngine::Color32  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Color32, 0x91c>(this, std::forward<::UnityEngine::Color32>(value));
}
constexpr ::UnityEngine::Color32& UnityEngine::TextCore::Text::TextGenerator::__get_m_SpriteColor()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Color32, 0x91c>(this);
}
constexpr ::UnityEngine::Color32 const& UnityEngine::TextCore::Text::TextGenerator::__get_m_SpriteColor() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Color32, 0x91c>(this);
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__set_m_CachedTextElement(::UnityEngine::TextCore::Text::TextElement*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::TextCore::Text::TextElement*, 0x920>(this, std::forward<::UnityEngine::TextCore::Text::TextElement*>(value));
}
constexpr ::UnityEngine::TextCore::Text::TextElement* UnityEngine::TextCore::Text::TextGenerator::__get_m_CachedTextElement()  {
return ::cordl_internals::getInstanceField<::UnityEngine::TextCore::Text::TextElement*, 0x920>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::TextCore::Text::TextElement*> UnityEngine::TextCore::Text::TextGenerator::__get_m_CachedTextElement() const {
return ::cordl_internals::getInstanceField<::UnityEngine::TextCore::Text::TextElement*, 0x920>(this);
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__set_m_HighlightColor(::UnityEngine::Color32  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Color32, 0x928>(this, std::forward<::UnityEngine::Color32>(value));
}
constexpr ::UnityEngine::Color32& UnityEngine::TextCore::Text::TextGenerator::__get_m_HighlightColor()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Color32, 0x928>(this);
}
constexpr ::UnityEngine::Color32 const& UnityEngine::TextCore::Text::TextGenerator::__get_m_HighlightColor() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Color32, 0x928>(this);
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__set_m_CharWidthAdjDelta(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x92c>(this, std::forward<float_t>(value));
}
constexpr float_t& UnityEngine::TextCore::Text::TextGenerator::__get_m_CharWidthAdjDelta()  {
return ::cordl_internals::getInstanceField<float_t, 0x92c>(this);
}
constexpr float_t const& UnityEngine::TextCore::Text::TextGenerator::__get_m_CharWidthAdjDelta() const {
return ::cordl_internals::getInstanceField<float_t, 0x92c>(this);
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__set_m_FxMatrix(::UnityEngine::Matrix4x4  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Matrix4x4, 0x930>(this, std::forward<::UnityEngine::Matrix4x4>(value));
}
constexpr ::UnityEngine::Matrix4x4& UnityEngine::TextCore::Text::TextGenerator::__get_m_FxMatrix()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Matrix4x4, 0x930>(this);
}
constexpr ::UnityEngine::Matrix4x4 const& UnityEngine::TextCore::Text::TextGenerator::__get_m_FxMatrix() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Matrix4x4, 0x930>(this);
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__set_m_MaxFontSize(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x970>(this, std::forward<float_t>(value));
}
constexpr float_t& UnityEngine::TextCore::Text::TextGenerator::__get_m_MaxFontSize()  {
return ::cordl_internals::getInstanceField<float_t, 0x970>(this);
}
constexpr float_t const& UnityEngine::TextCore::Text::TextGenerator::__get_m_MaxFontSize() const {
return ::cordl_internals::getInstanceField<float_t, 0x970>(this);
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__set_m_MinFontSize(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x974>(this, std::forward<float_t>(value));
}
constexpr float_t& UnityEngine::TextCore::Text::TextGenerator::__get_m_MinFontSize()  {
return ::cordl_internals::getInstanceField<float_t, 0x974>(this);
}
constexpr float_t const& UnityEngine::TextCore::Text::TextGenerator::__get_m_MinFontSize() const {
return ::cordl_internals::getInstanceField<float_t, 0x974>(this);
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__set_m_IsCharacterWrappingEnabled(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x978>(this, std::forward<bool>(value));
}
constexpr bool& UnityEngine::TextCore::Text::TextGenerator::__get_m_IsCharacterWrappingEnabled()  {
return ::cordl_internals::getInstanceField<bool, 0x978>(this);
}
constexpr bool const& UnityEngine::TextCore::Text::TextGenerator::__get_m_IsCharacterWrappingEnabled() const {
return ::cordl_internals::getInstanceField<bool, 0x978>(this);
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__set_m_StartOfLineAscender(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x97c>(this, std::forward<float_t>(value));
}
constexpr float_t& UnityEngine::TextCore::Text::TextGenerator::__get_m_StartOfLineAscender()  {
return ::cordl_internals::getInstanceField<float_t, 0x97c>(this);
}
constexpr float_t const& UnityEngine::TextCore::Text::TextGenerator::__get_m_StartOfLineAscender() const {
return ::cordl_internals::getInstanceField<float_t, 0x97c>(this);
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__set_m_LineSpacingDelta(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x980>(this, std::forward<float_t>(value));
}
constexpr float_t& UnityEngine::TextCore::Text::TextGenerator::__get_m_LineSpacingDelta()  {
return ::cordl_internals::getInstanceField<float_t, 0x980>(this);
}
constexpr float_t const& UnityEngine::TextCore::Text::TextGenerator::__get_m_LineSpacingDelta() const {
return ::cordl_internals::getInstanceField<float_t, 0x980>(this);
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__set_m_IsMaskingEnabled(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x984>(this, std::forward<bool>(value));
}
constexpr bool& UnityEngine::TextCore::Text::TextGenerator::__get_m_IsMaskingEnabled()  {
return ::cordl_internals::getInstanceField<bool, 0x984>(this);
}
constexpr bool const& UnityEngine::TextCore::Text::TextGenerator::__get_m_IsMaskingEnabled() const {
return ::cordl_internals::getInstanceField<bool, 0x984>(this);
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__set_m_MaterialReferences(::ArrayW<::UnityEngine::TextCore::Text::MaterialReference,::Array<::UnityEngine::TextCore::Text::MaterialReference>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::TextCore::Text::MaterialReference,::Array<::UnityEngine::TextCore::Text::MaterialReference>*>, 0x988>(this, std::forward<::ArrayW<::UnityEngine::TextCore::Text::MaterialReference,::Array<::UnityEngine::TextCore::Text::MaterialReference>*>>(value));
}
constexpr ::ArrayW<::UnityEngine::TextCore::Text::MaterialReference,::Array<::UnityEngine::TextCore::Text::MaterialReference>*>& UnityEngine::TextCore::Text::TextGenerator::__get_m_MaterialReferences()  {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::TextCore::Text::MaterialReference,::Array<::UnityEngine::TextCore::Text::MaterialReference>*>, 0x988>(this);
}
constexpr ::ArrayW<::UnityEngine::TextCore::Text::MaterialReference,::Array<::UnityEngine::TextCore::Text::MaterialReference>*> const& UnityEngine::TextCore::Text::TextGenerator::__get_m_MaterialReferences() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::TextCore::Text::MaterialReference,::Array<::UnityEngine::TextCore::Text::MaterialReference>*>, 0x988>(this);
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__set_m_SpriteCount(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x990>(this, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::TextCore::Text::TextGenerator::__get_m_SpriteCount()  {
return ::cordl_internals::getInstanceField<int32_t, 0x990>(this);
}
constexpr int32_t const& UnityEngine::TextCore::Text::TextGenerator::__get_m_SpriteCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x990>(this);
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__set_m_StyleStack(::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>  value)  {
::cordl_internals::setInstanceField<::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>, 0x998>(this, std::forward<::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>>(value));
}
constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>& UnityEngine::TextCore::Text::TextGenerator::__get_m_StyleStack()  {
return ::cordl_internals::getInstanceField<::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>, 0x998>(this);
}
constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t> const& UnityEngine::TextCore::Text::TextGenerator::__get_m_StyleStack() const {
return ::cordl_internals::getInstanceField<::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>, 0x998>(this);
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__set_m_SpriteAnimationId(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x9b8>(this, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::TextCore::Text::TextGenerator::__get_m_SpriteAnimationId()  {
return ::cordl_internals::getInstanceField<int32_t, 0x9b8>(this);
}
constexpr int32_t const& UnityEngine::TextCore::Text::TextGenerator::__get_m_SpriteAnimationId() const {
return ::cordl_internals::getInstanceField<int32_t, 0x9b8>(this);
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__set_m_InternalTextParsingBuffer(::ArrayW<uint32_t,::Array<uint32_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<uint32_t,::Array<uint32_t>*>, 0x9c0>(this, std::forward<::ArrayW<uint32_t,::Array<uint32_t>*>>(value));
}
constexpr ::ArrayW<uint32_t,::Array<uint32_t>*>& UnityEngine::TextCore::Text::TextGenerator::__get_m_InternalTextParsingBuffer()  {
return ::cordl_internals::getInstanceField<::ArrayW<uint32_t,::Array<uint32_t>*>, 0x9c0>(this);
}
constexpr ::ArrayW<uint32_t,::Array<uint32_t>*> const& UnityEngine::TextCore::Text::TextGenerator::__get_m_InternalTextParsingBuffer() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint32_t,::Array<uint32_t>*>, 0x9c0>(this);
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__set_m_Attributes(::ArrayW<::UnityEngine::TextCore::Text::RichTextTagAttribute,::Array<::UnityEngine::TextCore::Text::RichTextTagAttribute>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::TextCore::Text::RichTextTagAttribute,::Array<::UnityEngine::TextCore::Text::RichTextTagAttribute>*>, 0x9c8>(this, std::forward<::ArrayW<::UnityEngine::TextCore::Text::RichTextTagAttribute,::Array<::UnityEngine::TextCore::Text::RichTextTagAttribute>*>>(value));
}
constexpr ::ArrayW<::UnityEngine::TextCore::Text::RichTextTagAttribute,::Array<::UnityEngine::TextCore::Text::RichTextTagAttribute>*>& UnityEngine::TextCore::Text::TextGenerator::__get_m_Attributes()  {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::TextCore::Text::RichTextTagAttribute,::Array<::UnityEngine::TextCore::Text::RichTextTagAttribute>*>, 0x9c8>(this);
}
constexpr ::ArrayW<::UnityEngine::TextCore::Text::RichTextTagAttribute,::Array<::UnityEngine::TextCore::Text::RichTextTagAttribute>*> const& UnityEngine::TextCore::Text::TextGenerator::__get_m_Attributes() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::TextCore::Text::RichTextTagAttribute,::Array<::UnityEngine::TextCore::Text::RichTextTagAttribute>*>, 0x9c8>(this);
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__set_m_XmlAttribute(::ArrayW<::UnityEngine::TextCore::Text::XmlTagAttribute,::Array<::UnityEngine::TextCore::Text::XmlTagAttribute>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::TextCore::Text::XmlTagAttribute,::Array<::UnityEngine::TextCore::Text::XmlTagAttribute>*>, 0x9d0>(this, std::forward<::ArrayW<::UnityEngine::TextCore::Text::XmlTagAttribute,::Array<::UnityEngine::TextCore::Text::XmlTagAttribute>*>>(value));
}
constexpr ::ArrayW<::UnityEngine::TextCore::Text::XmlTagAttribute,::Array<::UnityEngine::TextCore::Text::XmlTagAttribute>*>& UnityEngine::TextCore::Text::TextGenerator::__get_m_XmlAttribute()  {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::TextCore::Text::XmlTagAttribute,::Array<::UnityEngine::TextCore::Text::XmlTagAttribute>*>, 0x9d0>(this);
}
constexpr ::ArrayW<::UnityEngine::TextCore::Text::XmlTagAttribute,::Array<::UnityEngine::TextCore::Text::XmlTagAttribute>*> const& UnityEngine::TextCore::Text::TextGenerator::__get_m_XmlAttribute() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::TextCore::Text::XmlTagAttribute,::Array<::UnityEngine::TextCore::Text::XmlTagAttribute>*>, 0x9d0>(this);
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__set_m_RichTextTag(::ArrayW<char16_t,::Array<char16_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<char16_t,::Array<char16_t>*>, 0x9d8>(this, std::forward<::ArrayW<char16_t,::Array<char16_t>*>>(value));
}
constexpr ::ArrayW<char16_t,::Array<char16_t>*>& UnityEngine::TextCore::Text::TextGenerator::__get_m_RichTextTag()  {
return ::cordl_internals::getInstanceField<::ArrayW<char16_t,::Array<char16_t>*>, 0x9d8>(this);
}
constexpr ::ArrayW<char16_t,::Array<char16_t>*> const& UnityEngine::TextCore::Text::TextGenerator::__get_m_RichTextTag() const {
return ::cordl_internals::getInstanceField<::ArrayW<char16_t,::Array<char16_t>*>, 0x9d8>(this);
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__set_m_MaterialReferenceIndexLookup(::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*, 0x9e0>(this, std::forward<::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*>(value));
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>* UnityEngine::TextCore::Text::TextGenerator::__get_m_MaterialReferenceIndexLookup()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*, 0x9e0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*> UnityEngine::TextCore::Text::TextGenerator::__get_m_MaterialReferenceIndexLookup() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*, 0x9e0>(this);
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__set_m_IsCalculatingPreferredValues(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x9e8>(this, std::forward<bool>(value));
}
constexpr bool& UnityEngine::TextCore::Text::TextGenerator::__get_m_IsCalculatingPreferredValues()  {
return ::cordl_internals::getInstanceField<bool, 0x9e8>(this);
}
constexpr bool const& UnityEngine::TextCore::Text::TextGenerator::__get_m_IsCalculatingPreferredValues() const {
return ::cordl_internals::getInstanceField<bool, 0x9e8>(this);
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__set_m_DefaultSpriteAsset(::UnityEngine::TextCore::Text::SpriteAsset*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::TextCore::Text::SpriteAsset*, 0x9f0>(this, std::forward<::UnityEngine::TextCore::Text::SpriteAsset*>(value));
}
constexpr ::UnityEngine::TextCore::Text::SpriteAsset* UnityEngine::TextCore::Text::TextGenerator::__get_m_DefaultSpriteAsset()  {
return ::cordl_internals::getInstanceField<::UnityEngine::TextCore::Text::SpriteAsset*, 0x9f0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::TextCore::Text::SpriteAsset*> UnityEngine::TextCore::Text::TextGenerator::__get_m_DefaultSpriteAsset() const {
return ::cordl_internals::getInstanceField<::UnityEngine::TextCore::Text::SpriteAsset*, 0x9f0>(this);
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__set_m_TintSprite(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x9f8>(this, std::forward<bool>(value));
}
constexpr bool& UnityEngine::TextCore::Text::TextGenerator::__get_m_TintSprite()  {
return ::cordl_internals::getInstanceField<bool, 0x9f8>(this);
}
constexpr bool const& UnityEngine::TextCore::Text::TextGenerator::__get_m_TintSprite() const {
return ::cordl_internals::getInstanceField<bool, 0x9f8>(this);
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__set_m_Ellipsis(::UnityEngine::TextCore::Text::__TextGenerator__SpecialCharacter  value)  {
::cordl_internals::setInstanceField<::UnityEngine::TextCore::Text::__TextGenerator__SpecialCharacter, 0xa00>(this, std::forward<::UnityEngine::TextCore::Text::__TextGenerator__SpecialCharacter>(value));
}
constexpr ::UnityEngine::TextCore::Text::__TextGenerator__SpecialCharacter& UnityEngine::TextCore::Text::TextGenerator::__get_m_Ellipsis()  {
return ::cordl_internals::getInstanceField<::UnityEngine::TextCore::Text::__TextGenerator__SpecialCharacter, 0xa00>(this);
}
constexpr ::UnityEngine::TextCore::Text::__TextGenerator__SpecialCharacter const& UnityEngine::TextCore::Text::TextGenerator::__get_m_Ellipsis() const {
return ::cordl_internals::getInstanceField<::UnityEngine::TextCore::Text::__TextGenerator__SpecialCharacter, 0xa00>(this);
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__set_m_Underline(::UnityEngine::TextCore::Text::__TextGenerator__SpecialCharacter  value)  {
::cordl_internals::setInstanceField<::UnityEngine::TextCore::Text::__TextGenerator__SpecialCharacter, 0xa20>(this, std::forward<::UnityEngine::TextCore::Text::__TextGenerator__SpecialCharacter>(value));
}
constexpr ::UnityEngine::TextCore::Text::__TextGenerator__SpecialCharacter& UnityEngine::TextCore::Text::TextGenerator::__get_m_Underline()  {
return ::cordl_internals::getInstanceField<::UnityEngine::TextCore::Text::__TextGenerator__SpecialCharacter, 0xa20>(this);
}
constexpr ::UnityEngine::TextCore::Text::__TextGenerator__SpecialCharacter const& UnityEngine::TextCore::Text::TextGenerator::__get_m_Underline() const {
return ::cordl_internals::getInstanceField<::UnityEngine::TextCore::Text::__TextGenerator__SpecialCharacter, 0xa20>(this);
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__set_m_IsUsingBold(bool  value)  {
::cordl_internals::setInstanceField<bool, 0xa40>(this, std::forward<bool>(value));
}
constexpr bool& UnityEngine::TextCore::Text::TextGenerator::__get_m_IsUsingBold()  {
return ::cordl_internals::getInstanceField<bool, 0xa40>(this);
}
constexpr bool const& UnityEngine::TextCore::Text::TextGenerator::__get_m_IsUsingBold() const {
return ::cordl_internals::getInstanceField<bool, 0xa40>(this);
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__set_m_IsSdfShader(bool  value)  {
::cordl_internals::setInstanceField<bool, 0xa41>(this, std::forward<bool>(value));
}
constexpr bool& UnityEngine::TextCore::Text::TextGenerator::__get_m_IsSdfShader()  {
return ::cordl_internals::getInstanceField<bool, 0xa41>(this);
}
constexpr bool const& UnityEngine::TextCore::Text::TextGenerator::__get_m_IsSdfShader() const {
return ::cordl_internals::getInstanceField<bool, 0xa41>(this);
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__set_m_InternalTextElementInfo(::ArrayW<::UnityEngine::TextCore::Text::TextElementInfo,::Array<::UnityEngine::TextCore::Text::TextElementInfo>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::TextCore::Text::TextElementInfo,::Array<::UnityEngine::TextCore::Text::TextElementInfo>*>, 0xa48>(this, std::forward<::ArrayW<::UnityEngine::TextCore::Text::TextElementInfo,::Array<::UnityEngine::TextCore::Text::TextElementInfo>*>>(value));
}
constexpr ::ArrayW<::UnityEngine::TextCore::Text::TextElementInfo,::Array<::UnityEngine::TextCore::Text::TextElementInfo>*>& UnityEngine::TextCore::Text::TextGenerator::__get_m_InternalTextElementInfo()  {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::TextCore::Text::TextElementInfo,::Array<::UnityEngine::TextCore::Text::TextElementInfo>*>, 0xa48>(this);
}
constexpr ::ArrayW<::UnityEngine::TextCore::Text::TextElementInfo,::Array<::UnityEngine::TextCore::Text::TextElementInfo>*> const& UnityEngine::TextCore::Text::TextGenerator::__get_m_InternalTextElementInfo() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::TextCore::Text::TextElementInfo,::Array<::UnityEngine::TextCore::Text::TextElementInfo>*>, 0xa48>(this);
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__set_m_RecursiveCount(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0xa50>(this, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::TextCore::Text::TextGenerator::__get_m_RecursiveCount()  {
return ::cordl_internals::getInstanceField<int32_t, 0xa50>(this);
}
constexpr int32_t const& UnityEngine::TextCore::Text::TextGenerator::__get_m_RecursiveCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0xa50>(this);
}
inline ::UnityEngine::TextCore::Text::TextGenerator* UnityEngine::TextCore::Text::TextGenerator::GetTextGenerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator*>::get(),
                            "GetTextGenerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextCore::Text::TextGenerator*, false>(nullptr, ___internal_method);
}
inline void UnityEngine::TextCore::Text::TextGenerator::GenerateText(::UnityEngine::TextCore::Text::TextGenerationSettings*  settings, ::UnityEngine::TextCore::Text::TextInfo*  textInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator*>::get(),
                            "GenerateText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextGenerationSettings*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextInfo*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, settings, textInfo);
}
/// @param inverseYAxis: bool (default: true)
inline ::UnityEngine::Vector2 UnityEngine::TextCore::Text::TextGenerator::GetCursorPosition(::UnityEngine::TextCore::Text::TextInfo*  textInfo, ::UnityEngine::Rect  screenRect, int32_t  index, bool  inverseYAxis)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator*>::get(),
                            "GetCursorPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(nullptr, ___internal_method, textInfo, screenRect, index, inverseYAxis);
}
inline ::UnityEngine::Vector2 UnityEngine::TextCore::Text::TextGenerator::GetPreferredValues(::UnityEngine::TextCore::Text::TextGenerationSettings*  settings, ::UnityEngine::TextCore::Text::TextInfo*  textInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator*>::get(),
                            "GetPreferredValues",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextGenerationSettings*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextInfo*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(nullptr, ___internal_method, settings, textInfo);
}
inline void UnityEngine::TextCore::Text::TextGenerator::Prepare(::UnityEngine::TextCore::Text::TextGenerationSettings*  generationSettings, ::UnityEngine::TextCore::Text::TextInfo*  textInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator*>::get(),
                            "Prepare",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextGenerationSettings*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextInfo*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, generationSettings, textInfo);
}
inline void UnityEngine::TextCore::Text::TextGenerator::GenerateTextMesh(::UnityEngine::TextCore::Text::TextGenerationSettings*  generationSettings, ::UnityEngine::TextCore::Text::TextInfo*  textInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator*>::get(),
                            "GenerateTextMesh",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextGenerationSettings*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextInfo*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, generationSettings, textInfo);
}
inline void UnityEngine::TextCore::Text::TextGenerator::SaveWordWrappingState(ByRef<::UnityEngine::TextCore::Text::WordWrapState>  state, int32_t  index, int32_t  count, ::UnityEngine::TextCore::Text::TextInfo*  textInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator*>::get(),
                            "SaveWordWrappingState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::TextCore::Text::WordWrapState>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextInfo*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, state, index, count, textInfo);
}
inline int32_t UnityEngine::TextCore::Text::TextGenerator::RestoreWordWrappingState(ByRef<::UnityEngine::TextCore::Text::WordWrapState>  state, ::UnityEngine::TextCore::Text::TextInfo*  textInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator*>::get(),
                            "RestoreWordWrappingState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::TextCore::Text::WordWrapState>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextInfo*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, state, textInfo);
}
inline bool UnityEngine::TextCore::Text::TextGenerator::ValidateHtmlTag(::ArrayW<int32_t,::Array<int32_t>*>  chars, int32_t  startIndex, ByRef<int32_t>  endIndex, ::UnityEngine::TextCore::Text::TextGenerationSettings*  generationSettings, ::UnityEngine::TextCore::Text::TextInfo*  textInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator*>::get(),
                            "ValidateHtmlTag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t,::Array<int32_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextGenerationSettings*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextInfo*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, chars, startIndex, endIndex, generationSettings, textInfo);
}
inline void UnityEngine::TextCore::Text::TextGenerator::SaveGlyphVertexInfo(float_t  padding, float_t  stylePadding, ::UnityEngine::Color32  vertexColor, ::UnityEngine::TextCore::Text::TextGenerationSettings*  generationSettings, ::UnityEngine::TextCore::Text::TextInfo*  textInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator*>::get(),
                            "SaveGlyphVertexInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color32>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextGenerationSettings*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextInfo*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, padding, stylePadding, vertexColor, generationSettings, textInfo);
}
inline void UnityEngine::TextCore::Text::TextGenerator::SaveSpriteVertexInfo(::UnityEngine::Color32  vertexColor, ::UnityEngine::TextCore::Text::TextGenerationSettings*  generationSettings, ::UnityEngine::TextCore::Text::TextInfo*  textInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator*>::get(),
                            "SaveSpriteVertexInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color32>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextGenerationSettings*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextInfo*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, vertexColor, generationSettings, textInfo);
}
inline void UnityEngine::TextCore::Text::TextGenerator::DrawUnderlineMesh(::UnityEngine::Vector3  start, ::UnityEngine::Vector3  end, ByRef<int32_t>  index, float_t  startScale, float_t  endScale, float_t  maxScale, float_t  sdfScale, ::UnityEngine::Color32  underlineColor, ::UnityEngine::TextCore::Text::TextGenerationSettings*  generationSettings, ::UnityEngine::TextCore::Text::TextInfo*  textInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator*>::get(),
                            "DrawUnderlineMesh",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color32>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextGenerationSettings*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextInfo*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, start, end, index, startScale, endScale, maxScale, sdfScale, underlineColor, generationSettings, textInfo);
}
inline void UnityEngine::TextCore::Text::TextGenerator::DrawTextHighlight(::UnityEngine::Vector3  start, ::UnityEngine::Vector3  end, ByRef<int32_t>  index, ::UnityEngine::Color32  highlightColor, ::UnityEngine::TextCore::Text::TextGenerationSettings*  generationSettings, ::UnityEngine::TextCore::Text::TextInfo*  textInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator*>::get(),
                            "DrawTextHighlight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color32>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextGenerationSettings*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextInfo*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, start, end, index, highlightColor, generationSettings, textInfo);
}
inline void UnityEngine::TextCore::Text::TextGenerator::ClearMesh(bool  updateMesh, ::UnityEngine::TextCore::Text::TextInfo*  textInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator*>::get(),
                            "ClearMesh",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextInfo*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, updateMesh, textInfo);
}
inline void UnityEngine::TextCore::Text::TextGenerator::EnableMasking()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator*>::get(),
                            "EnableMasking",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::TextGenerator::DisableMasking()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator*>::get(),
                            "DisableMasking",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::TextGenerator::SetArraySizes(::ArrayW<int32_t,::Array<int32_t>*>  chars, ::UnityEngine::TextCore::Text::TextGenerationSettings*  generationSettings, ::UnityEngine::TextCore::Text::TextInfo*  textInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator*>::get(),
                            "SetArraySizes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t,::Array<int32_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextGenerationSettings*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextInfo*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, chars, generationSettings, textInfo);
}
inline ::UnityEngine::TextCore::Text::TextElement* UnityEngine::TextCore::Text::TextGenerator::GetTextElement(::UnityEngine::TextCore::Text::TextGenerationSettings*  generationSettings, uint32_t  unicode, ::UnityEngine::TextCore::Text::FontAsset*  fontAsset, ::UnityEngine::TextCore::Text::FontStyles  fontStyle, ::UnityEngine::TextCore::Text::TextFontWeight  fontWeight, ByRef<bool>  isUsingAlternativeTypeface)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator*>::get(),
                            "GetTextElement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextGenerationSettings*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::FontAsset*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::FontStyles>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextFontWeight>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextCore::Text::TextElement*, false>(*this, ___internal_method, generationSettings, unicode, fontAsset, fontStyle, fontWeight, isUsingAlternativeTypeface);
}
inline void UnityEngine::TextCore::Text::TextGenerator::ComputeMarginSize(::UnityEngine::Rect  rect, ::UnityEngine::Vector4  margins)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator*>::get(),
                            "ComputeMarginSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, rect, margins);
}
inline void UnityEngine::TextCore::Text::TextGenerator::GetSpecialCharacters(::UnityEngine::TextCore::Text::TextGenerationSettings*  generationSettings)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator*>::get(),
                            "GetSpecialCharacters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextGenerationSettings*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, generationSettings);
}
inline void UnityEngine::TextCore::Text::TextGenerator::GetEllipsisSpecialCharacter(::UnityEngine::TextCore::Text::TextGenerationSettings*  generationSettings)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator*>::get(),
                            "GetEllipsisSpecialCharacter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextGenerationSettings*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, generationSettings);
}
inline void UnityEngine::TextCore::Text::TextGenerator::GetUnderlineSpecialCharacter(::UnityEngine::TextCore::Text::TextGenerationSettings*  generationSettings)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator*>::get(),
                            "GetUnderlineSpecialCharacter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextGenerationSettings*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, generationSettings);
}
inline float_t UnityEngine::TextCore::Text::TextGenerator::GetPaddingForMaterial(::UnityEngine::Material*  material, bool  extraPadding)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator*>::get(),
                            "GetPaddingForMaterial",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method, material, extraPadding);
}
inline ::UnityEngine::Vector2 UnityEngine::TextCore::Text::TextGenerator::GetPreferredValuesInternal(::UnityEngine::TextCore::Text::TextGenerationSettings*  generationSettings, ::UnityEngine::TextCore::Text::TextInfo*  textInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator*>::get(),
                            "GetPreferredValuesInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextGenerationSettings*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextInfo*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(*this, ___internal_method, generationSettings, textInfo);
}
inline ::UnityEngine::Vector2 UnityEngine::TextCore::Text::TextGenerator::CalculatePreferredValues(float_t  defaultFontSize, ::UnityEngine::Vector2  marginSize, bool  ignoreTextAutoSizing, ::UnityEngine::TextCore::Text::TextGenerationSettings*  generationSettings, ::UnityEngine::TextCore::Text::TextInfo*  textInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator*>::get(),
                            "CalculatePreferredValues",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextGenerationSettings*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextInfo*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(*this, ___internal_method, defaultFontSize, marginSize, ignoreTextAutoSizing, generationSettings, textInfo);
}
inline ::UnityEngine::TextCore::Text::TextGenerator* UnityEngine::TextCore::Text::TextGenerator::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::TextCore::Text::TextGenerator*>());
}
inline void UnityEngine::TextCore::Text::TextGenerator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
