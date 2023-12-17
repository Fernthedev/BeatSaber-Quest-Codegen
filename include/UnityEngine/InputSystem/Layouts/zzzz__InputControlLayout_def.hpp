#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputControlLayout)
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace UnityEngine::InputSystem::Utilities {
struct InternedString;
}
namespace System {
class Object;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System {
class IDisposable;
}
namespace UnityEngine::InputSystem::Utilities {
struct NamedValue;
}
namespace UnityEngine::InputSystem::Utilities {
struct NameAndParameters;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace UnityEngine::InputSystem::Utilities {
template<typename TValue>
struct ReadOnlyArray_1;
}
namespace UnityEngine::InputSystem::Layouts {
struct __InputControlLayout__CacheRefInstance;
}
namespace UnityEngine::InputSystem::Layouts {
struct __InputControlLayout__LayoutJsonNameAndDescriptorOnly;
}
namespace UnityEngine::InputSystem::Layouts {
class __InputControlLayout____c;
}
namespace UnityEngine::InputSystem::Layouts {
struct __InputControlLayout__Cache;
}
namespace UnityEngine::InputSystem::Layouts {
struct InputDeviceMatcher;
}
namespace UnityEngine::InputSystem::Layouts {
struct __InputControlLayout__Collection;
}
namespace UnityEngine::InputSystem::Layouts {
class __InputControlLayout__LayoutNotFoundException;
}
namespace UnityEngine::InputSystem::Layouts {
class __InputControlLayout__ControlItemJson;
}
namespace UnityEngine::InputSystem::Layouts {
struct __InputControlLayout__LayoutJson;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Reflection {
class MemberInfo;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace UnityEngine::InputSystem::Layouts {
class InputControlAttribute;
}
namespace UnityEngine::InputSystem::Layouts {
class __InputControlLayout__Builder;
}
namespace UnityEngine::InputSystem::Layouts {
struct __InputControlLayout__Flags;
}
namespace UnityEngine::InputSystem::Layouts {
struct __InputControlLayout__ControlItem;
}
namespace UnityEngine::InputSystem::Utilities {
struct FourCC;
}
namespace System {
class Type;
}
namespace UnityEngine::InputSystem::Utilities {
template<typename TValue>
struct InlinedArray_1;
}
namespace GlobalNamespace {
struct __InputControlLayout__Builder__ControlBuilder;
}
namespace GlobalNamespace {
class __InputControlLayout__ControlItemJson____c;
}
namespace System {
class Exception;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace GlobalNamespace {
class __InputControlLayout__Builder__ControlBuilder____c;
}
namespace UnityEngine::InputSystem::Utilities {
struct PrimitiveValue;
}
namespace UnityEngine::InputSystem {
class InputDevice;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace GlobalNamespace {
struct __InputControlLayout__Collection__PrecompiledLayout;
}
namespace GlobalNamespace {
struct __InputControlLayout__Collection__LayoutMatcher;
}
namespace UnityEngine::InputSystem {
class InputControl;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace UnityEngine::InputSystem::Layouts {
struct InputDeviceDescription;
}
namespace GlobalNamespace {
class __InputControlLayout__Collection___GetBaseLayouts_d__24;
}
namespace GlobalNamespace {
struct __InputControlLayout__ControlItem__Flags;
}
namespace GlobalNamespace {
class __InputControlLayout__LayoutJson____c;
}
namespace UnityEngine::InputSystem::Layouts {
struct __InputDeviceMatcher__MatcherJson;
}
// Forward declare root types
namespace GlobalNamespace {
struct __InputControlLayout__ControlItem__Flags;
}
namespace UnityEngine::InputSystem::Layouts {
struct __InputControlLayout__Flags;
}
namespace GlobalNamespace {
class __InputControlLayout__Builder__ControlBuilder____c;
}
namespace GlobalNamespace {
class __InputControlLayout__Collection___GetBaseLayouts_d__24;
}
namespace GlobalNamespace {
class __InputControlLayout__ControlItemJson____c;
}
namespace GlobalNamespace {
class __InputControlLayout__LayoutJson____c;
}
namespace UnityEngine::InputSystem::Layouts {
class InputControlLayout;
}
namespace UnityEngine::InputSystem::Layouts {
class __InputControlLayout__Builder;
}
namespace UnityEngine::InputSystem::Layouts {
class __InputControlLayout__ControlItemJson;
}
namespace UnityEngine::InputSystem::Layouts {
class __InputControlLayout__LayoutNotFoundException;
}
namespace UnityEngine::InputSystem::Layouts {
class __InputControlLayout____c;
}
namespace GlobalNamespace {
struct __InputControlLayout__Builder__ControlBuilder;
}
namespace GlobalNamespace {
struct __InputControlLayout__Collection__LayoutMatcher;
}
namespace GlobalNamespace {
struct __InputControlLayout__Collection__PrecompiledLayout;
}
namespace UnityEngine::InputSystem::Layouts {
struct __InputControlLayout__Cache;
}
namespace UnityEngine::InputSystem::Layouts {
struct __InputControlLayout__CacheRefInstance;
}
namespace UnityEngine::InputSystem::Layouts {
struct __InputControlLayout__Collection;
}
namespace UnityEngine::InputSystem::Layouts {
struct __InputControlLayout__ControlItem;
}
namespace UnityEngine::InputSystem::Layouts {
struct __InputControlLayout__LayoutJson;
}
namespace UnityEngine::InputSystem::Layouts {
struct __InputControlLayout__LayoutJsonNameAndDescriptorOnly;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__InputControlLayout__ControlItem__Flags);
MARK_VAL_T(::UnityEngine::InputSystem::Layouts::__InputControlLayout__Flags);
MARK_REF_PTR_T(::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder____c);
MARK_REF_PTR_T(::GlobalNamespace::__InputControlLayout__Collection___GetBaseLayouts_d__24);
MARK_REF_PTR_T(::GlobalNamespace::__InputControlLayout__ControlItemJson____c);
MARK_REF_PTR_T(::GlobalNamespace::__InputControlLayout__LayoutJson____c);
MARK_REF_PTR_T(::UnityEngine::InputSystem::Layouts::InputControlLayout);
MARK_REF_PTR_T(::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder);
MARK_REF_PTR_T(::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItemJson);
MARK_REF_PTR_T(::UnityEngine::InputSystem::Layouts::__InputControlLayout__LayoutNotFoundException);
MARK_REF_PTR_T(::UnityEngine::InputSystem::Layouts::__InputControlLayout____c);
MARK_VAL_T(::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder);
MARK_VAL_T(::GlobalNamespace::__InputControlLayout__Collection__LayoutMatcher);
MARK_VAL_T(::GlobalNamespace::__InputControlLayout__Collection__PrecompiledLayout);
MARK_VAL_T(::UnityEngine::InputSystem::Layouts::__InputControlLayout__Cache);
MARK_VAL_T(::UnityEngine::InputSystem::Layouts::__InputControlLayout__CacheRefInstance);
MARK_VAL_T(::UnityEngine::InputSystem::Layouts::__InputControlLayout__Collection);
MARK_VAL_T(::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem);
MARK_VAL_T(::UnityEngine::InputSystem::Layouts::__InputControlLayout__LayoutJson);
MARK_VAL_T(::UnityEngine::InputSystem::Layouts::__InputControlLayout__LayoutJsonNameAndDescriptorOnly);
// Type: ::Flags
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6596))
// CS Name: ::InputControlLayout::ControlItem::Flags
struct CORDL_TYPE __InputControlLayout__ControlItem__Flags : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____InputControlLayout__ControlItem__Flags_Unwrapped
enum struct ____InputControlLayout__ControlItem__Flags_Unwrapped : int32_t {
__E_isModifyingExistingControl = static_cast<int32_t>(0x1),
__E_IsNoisy = static_cast<int32_t>(0x2),
__E_IsSynthetic = static_cast<int32_t>(0x4),
__E_IsFirstDefinedInThisLayout = static_cast<int32_t>(0x8),
__E_DontReset = static_cast<int32_t>(0x10),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field isModifyingExistingControl value: static_cast<int32_t>(0x1)
static ::GlobalNamespace::__InputControlLayout__ControlItem__Flags const isModifyingExistingControl;

/// @brief Field IsNoisy value: static_cast<int32_t>(0x2)
static ::GlobalNamespace::__InputControlLayout__ControlItem__Flags const IsNoisy;

/// @brief Field IsSynthetic value: static_cast<int32_t>(0x4)
static ::GlobalNamespace::__InputControlLayout__ControlItem__Flags const IsSynthetic;

/// @brief Field IsFirstDefinedInThisLayout value: static_cast<int32_t>(0x8)
static ::GlobalNamespace::__InputControlLayout__ControlItem__Flags const IsFirstDefinedInThisLayout;

/// @brief Field DontReset value: static_cast<int32_t>(0x10)
static ::GlobalNamespace::__InputControlLayout__ControlItem__Flags const DontReset;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____InputControlLayout__ControlItem__Flags_Unwrapped () const noexcept {
return std::bit_cast<____InputControlLayout__ControlItem__Flags_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __InputControlLayout__ControlItem__Flags(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __InputControlLayout__ControlItem__Flags(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __InputControlLayout__ControlItem__Flags()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__InputControlLayout__ControlItem__Flags, 0x4>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::ControlItem
namespace UnityEngine::InputSystem::Layouts {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6597))
// CS Name: ::InputControlLayout::ControlItem
struct CORDL_TYPE __InputControlLayout__ControlItem : public ::bs_hook::ValueTypeWrapper<0xd0> {
public:
// Declarations
using Flags = ::GlobalNamespace::__InputControlLayout__ControlItem__Flags;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xd0};

/// @brief Field <name>k__BackingField offset 0x0
 __declspec(property(get=__get__name_k__BackingField, put=__set__name_k__BackingField)) ::UnityEngine::InputSystem::Utilities::InternedString  _name_k__BackingField;

/// @brief Field <layout>k__BackingField offset 0x10
 __declspec(property(get=__get__layout_k__BackingField, put=__set__layout_k__BackingField)) ::UnityEngine::InputSystem::Utilities::InternedString  _layout_k__BackingField;

/// @brief Field <variants>k__BackingField offset 0x20
 __declspec(property(get=__get__variants_k__BackingField, put=__set__variants_k__BackingField)) ::UnityEngine::InputSystem::Utilities::InternedString  _variants_k__BackingField;

/// @brief Field <useStateFrom>k__BackingField offset 0x30
 __declspec(property(get=__get__useStateFrom_k__BackingField, put=__set__useStateFrom_k__BackingField)) ::StringW  _useStateFrom_k__BackingField;

/// @brief Field <displayName>k__BackingField offset 0x38
 __declspec(property(get=__get__displayName_k__BackingField, put=__set__displayName_k__BackingField)) ::StringW  _displayName_k__BackingField;

/// @brief Field <shortDisplayName>k__BackingField offset 0x40
 __declspec(property(get=__get__shortDisplayName_k__BackingField, put=__set__shortDisplayName_k__BackingField)) ::StringW  _shortDisplayName_k__BackingField;

/// @brief Field <usages>k__BackingField offset 0x48
 __declspec(property(get=__get__usages_k__BackingField, put=__set__usages_k__BackingField)) ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString>  _usages_k__BackingField;

/// @brief Field <aliases>k__BackingField offset 0x58
 __declspec(property(get=__get__aliases_k__BackingField, put=__set__aliases_k__BackingField)) ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString>  _aliases_k__BackingField;

/// @brief Field <parameters>k__BackingField offset 0x68
 __declspec(property(get=__get__parameters_k__BackingField, put=__set__parameters_k__BackingField)) ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::NamedValue>  _parameters_k__BackingField;

/// @brief Field <processors>k__BackingField offset 0x78
 __declspec(property(get=__get__processors_k__BackingField, put=__set__processors_k__BackingField)) ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::NameAndParameters>  _processors_k__BackingField;

/// @brief Field <offset>k__BackingField offset 0x88
 __declspec(property(get=__get__offset_k__BackingField, put=__set__offset_k__BackingField)) uint32_t  _offset_k__BackingField;

/// @brief Field <bit>k__BackingField offset 0x8c
 __declspec(property(get=__get__bit_k__BackingField, put=__set__bit_k__BackingField)) uint32_t  _bit_k__BackingField;

/// @brief Field <sizeInBits>k__BackingField offset 0x90
 __declspec(property(get=__get__sizeInBits_k__BackingField, put=__set__sizeInBits_k__BackingField)) uint32_t  _sizeInBits_k__BackingField;

/// @brief Field <format>k__BackingField offset 0x94
 __declspec(property(get=__get__format_k__BackingField, put=__set__format_k__BackingField)) ::UnityEngine::InputSystem::Utilities::FourCC  _format_k__BackingField;

/// @brief Field <flags>k__BackingField offset 0x98
 __declspec(property(get=__get__flags_k__BackingField, put=__set__flags_k__BackingField)) ::GlobalNamespace::__InputControlLayout__ControlItem__Flags  _flags_k__BackingField;

/// @brief Field <arraySize>k__BackingField offset 0x9c
 __declspec(property(get=__get__arraySize_k__BackingField, put=__set__arraySize_k__BackingField)) int32_t  _arraySize_k__BackingField;

/// @brief Field <defaultState>k__BackingField offset 0xa0
 __declspec(property(get=__get__defaultState_k__BackingField, put=__set__defaultState_k__BackingField)) ::UnityEngine::InputSystem::Utilities::PrimitiveValue  _defaultState_k__BackingField;

/// @brief Field <minValue>k__BackingField offset 0xb0
 __declspec(property(get=__get__minValue_k__BackingField, put=__set__minValue_k__BackingField)) ::UnityEngine::InputSystem::Utilities::PrimitiveValue  _minValue_k__BackingField;

/// @brief Field <maxValue>k__BackingField offset 0xc0
 __declspec(property(get=__get__maxValue_k__BackingField, put=__set__maxValue_k__BackingField)) ::UnityEngine::InputSystem::Utilities::PrimitiveValue  _maxValue_k__BackingField;

 __declspec(property(get=get_name, put=set_name)) ::UnityEngine::InputSystem::Utilities::InternedString  name;

 __declspec(property(get=get_layout, put=set_layout)) ::UnityEngine::InputSystem::Utilities::InternedString  layout;

 __declspec(property(get=get_variants, put=set_variants)) ::UnityEngine::InputSystem::Utilities::InternedString  variants;

 __declspec(property(get=get_useStateFrom, put=set_useStateFrom)) ::StringW  useStateFrom;

 __declspec(property(get=get_displayName, put=set_displayName)) ::StringW  displayName;

 __declspec(property(get=get_shortDisplayName, put=set_shortDisplayName)) ::StringW  shortDisplayName;

 __declspec(property(get=get_usages, put=set_usages)) ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString>  usages;

 __declspec(property(get=get_aliases, put=set_aliases)) ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString>  aliases;

 __declspec(property(get=get_parameters, put=set_parameters)) ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::NamedValue>  parameters;

 __declspec(property(get=get_processors, put=set_processors)) ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::NameAndParameters>  processors;

 __declspec(property(get=get_offset, put=set_offset)) uint32_t  offset;

 __declspec(property(get=get_bit, put=set_bit)) uint32_t  bit;

 __declspec(property(get=get_sizeInBits, put=set_sizeInBits)) uint32_t  sizeInBits;

 __declspec(property(get=get_format, put=set_format)) ::UnityEngine::InputSystem::Utilities::FourCC  format;

 __declspec(property(get=get_flags, put=set_flags)) ::GlobalNamespace::__InputControlLayout__ControlItem__Flags  flags;

 __declspec(property(get=get_arraySize, put=set_arraySize)) int32_t  arraySize;

 __declspec(property(get=get_defaultState, put=set_defaultState)) ::UnityEngine::InputSystem::Utilities::PrimitiveValue  defaultState;

 __declspec(property(get=get_minValue, put=set_minValue)) ::UnityEngine::InputSystem::Utilities::PrimitiveValue  minValue;

 __declspec(property(get=get_maxValue, put=set_maxValue)) ::UnityEngine::InputSystem::Utilities::PrimitiveValue  maxValue;

 __declspec(property(get=get_isModifyingExistingControl, put=set_isModifyingExistingControl)) bool  isModifyingExistingControl;

 __declspec(property(get=get_isNoisy, put=set_isNoisy)) bool  isNoisy;

 __declspec(property(get=get_isSynthetic, put=set_isSynthetic)) bool  isSynthetic;

 __declspec(property(get=get_dontReset, put=set_dontReset)) bool  dontReset;

 __declspec(property(get=get_isFirstDefinedInThisLayout, put=set_isFirstDefinedInThisLayout)) bool  isFirstDefinedInThisLayout;

 __declspec(property(get=get_isArray)) bool  isArray;

constexpr void __set__name_k__BackingField(::UnityEngine::InputSystem::Utilities::InternedString  value) ;

constexpr ::UnityEngine::InputSystem::Utilities::InternedString& __get__name_k__BackingField() ;

constexpr ::UnityEngine::InputSystem::Utilities::InternedString const& __get__name_k__BackingField() const;

constexpr void __set__layout_k__BackingField(::UnityEngine::InputSystem::Utilities::InternedString  value) ;

constexpr ::UnityEngine::InputSystem::Utilities::InternedString& __get__layout_k__BackingField() ;

constexpr ::UnityEngine::InputSystem::Utilities::InternedString const& __get__layout_k__BackingField() const;

constexpr void __set__variants_k__BackingField(::UnityEngine::InputSystem::Utilities::InternedString  value) ;

constexpr ::UnityEngine::InputSystem::Utilities::InternedString& __get__variants_k__BackingField() ;

constexpr ::UnityEngine::InputSystem::Utilities::InternedString const& __get__variants_k__BackingField() const;

constexpr void __set__useStateFrom_k__BackingField(::StringW  value) ;

constexpr ::StringW& __get__useStateFrom_k__BackingField() ;

constexpr ::StringW const& __get__useStateFrom_k__BackingField() const;

constexpr void __set__displayName_k__BackingField(::StringW  value) ;

constexpr ::StringW& __get__displayName_k__BackingField() ;

constexpr ::StringW const& __get__displayName_k__BackingField() const;

constexpr void __set__shortDisplayName_k__BackingField(::StringW  value) ;

constexpr ::StringW& __get__shortDisplayName_k__BackingField() ;

constexpr ::StringW const& __get__shortDisplayName_k__BackingField() const;

constexpr void __set__usages_k__BackingField(::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString>  value) ;

constexpr ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString>& __get__usages_k__BackingField() ;

constexpr ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString> const& __get__usages_k__BackingField() const;

constexpr void __set__aliases_k__BackingField(::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString>  value) ;

constexpr ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString>& __get__aliases_k__BackingField() ;

constexpr ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString> const& __get__aliases_k__BackingField() const;

constexpr void __set__parameters_k__BackingField(::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::NamedValue>  value) ;

constexpr ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::NamedValue>& __get__parameters_k__BackingField() ;

constexpr ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::NamedValue> const& __get__parameters_k__BackingField() const;

constexpr void __set__processors_k__BackingField(::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::NameAndParameters>  value) ;

constexpr ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::NameAndParameters>& __get__processors_k__BackingField() ;

constexpr ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::NameAndParameters> const& __get__processors_k__BackingField() const;

constexpr void __set__offset_k__BackingField(uint32_t  value) ;

constexpr uint32_t& __get__offset_k__BackingField() ;

constexpr uint32_t const& __get__offset_k__BackingField() const;

constexpr void __set__bit_k__BackingField(uint32_t  value) ;

constexpr uint32_t& __get__bit_k__BackingField() ;

constexpr uint32_t const& __get__bit_k__BackingField() const;

constexpr void __set__sizeInBits_k__BackingField(uint32_t  value) ;

constexpr uint32_t& __get__sizeInBits_k__BackingField() ;

constexpr uint32_t const& __get__sizeInBits_k__BackingField() const;

constexpr void __set__format_k__BackingField(::UnityEngine::InputSystem::Utilities::FourCC  value) ;

constexpr ::UnityEngine::InputSystem::Utilities::FourCC& __get__format_k__BackingField() ;

constexpr ::UnityEngine::InputSystem::Utilities::FourCC const& __get__format_k__BackingField() const;

constexpr void __set__flags_k__BackingField(::GlobalNamespace::__InputControlLayout__ControlItem__Flags  value) ;

constexpr ::GlobalNamespace::__InputControlLayout__ControlItem__Flags& __get__flags_k__BackingField() ;

constexpr ::GlobalNamespace::__InputControlLayout__ControlItem__Flags const& __get__flags_k__BackingField() const;

constexpr void __set__arraySize_k__BackingField(int32_t  value) ;

constexpr int32_t& __get__arraySize_k__BackingField() ;

constexpr int32_t const& __get__arraySize_k__BackingField() const;

constexpr void __set__defaultState_k__BackingField(::UnityEngine::InputSystem::Utilities::PrimitiveValue  value) ;

constexpr ::UnityEngine::InputSystem::Utilities::PrimitiveValue& __get__defaultState_k__BackingField() ;

constexpr ::UnityEngine::InputSystem::Utilities::PrimitiveValue const& __get__defaultState_k__BackingField() const;

constexpr void __set__minValue_k__BackingField(::UnityEngine::InputSystem::Utilities::PrimitiveValue  value) ;

constexpr ::UnityEngine::InputSystem::Utilities::PrimitiveValue& __get__minValue_k__BackingField() ;

constexpr ::UnityEngine::InputSystem::Utilities::PrimitiveValue const& __get__minValue_k__BackingField() const;

constexpr void __set__maxValue_k__BackingField(::UnityEngine::InputSystem::Utilities::PrimitiveValue  value) ;

constexpr ::UnityEngine::InputSystem::Utilities::PrimitiveValue& __get__maxValue_k__BackingField() ;

constexpr ::UnityEngine::InputSystem::Utilities::PrimitiveValue const& __get__maxValue_k__BackingField() const;

/// @brief Method get_name addr 0x2aff748 size 0xc virtual false final false
inline ::UnityEngine::InputSystem::Utilities::InternedString get_name() ;

/// @brief Method set_name addr 0x2aff754 size 0x8 virtual false final false
inline void set_name(::UnityEngine::InputSystem::Utilities::InternedString  value) ;

/// @brief Method get_layout addr 0x2aff75c size 0xc virtual false final false
inline ::UnityEngine::InputSystem::Utilities::InternedString get_layout() ;

/// @brief Method set_layout addr 0x2aff768 size 0x8 virtual false final false
inline void set_layout(::UnityEngine::InputSystem::Utilities::InternedString  value) ;

/// @brief Method get_variants addr 0x2aff770 size 0xc virtual false final false
inline ::UnityEngine::InputSystem::Utilities::InternedString get_variants() ;

/// @brief Method set_variants addr 0x2aff77c size 0x8 virtual false final false
inline void set_variants(::UnityEngine::InputSystem::Utilities::InternedString  value) ;

/// @brief Method get_useStateFrom addr 0x2aff784 size 0x8 virtual false final false
inline ::StringW get_useStateFrom() ;

/// @brief Method set_useStateFrom addr 0x2aff78c size 0x8 virtual false final false
inline void set_useStateFrom(::StringW  value) ;

/// @brief Method get_displayName addr 0x2aff794 size 0x8 virtual false final false
inline ::StringW get_displayName() ;

/// @brief Method set_displayName addr 0x2aff79c size 0x8 virtual false final false
inline void set_displayName(::StringW  value) ;

/// @brief Method get_shortDisplayName addr 0x2aff7a4 size 0x8 virtual false final false
inline ::StringW get_shortDisplayName() ;

/// @brief Method set_shortDisplayName addr 0x2aff7ac size 0x8 virtual false final false
inline void set_shortDisplayName(::StringW  value) ;

/// @brief Method get_usages addr 0x2aff7b4 size 0xc virtual false final false
inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString> get_usages() ;

/// @brief Method set_usages addr 0x2aff7c0 size 0x8 virtual false final false
inline void set_usages(::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString>  value) ;

/// @brief Method get_aliases addr 0x2aff7c8 size 0xc virtual false final false
inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString> get_aliases() ;

/// @brief Method set_aliases addr 0x2aff7d4 size 0x8 virtual false final false
inline void set_aliases(::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString>  value) ;

/// @brief Method get_parameters addr 0x2aff7dc size 0xc virtual false final false
inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::NamedValue> get_parameters() ;

/// @brief Method set_parameters addr 0x2aff7e8 size 0x8 virtual false final false
inline void set_parameters(::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::NamedValue>  value) ;

/// @brief Method get_processors addr 0x2aff7f0 size 0xc virtual false final false
inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::NameAndParameters> get_processors() ;

/// @brief Method set_processors addr 0x2aff7fc size 0x8 virtual false final false
inline void set_processors(::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::NameAndParameters>  value) ;

/// @brief Method get_offset addr 0x2aff804 size 0x8 virtual false final false
inline uint32_t get_offset() ;

/// @brief Method set_offset addr 0x2aff80c size 0x8 virtual false final false
inline void set_offset(uint32_t  value) ;

/// @brief Method get_bit addr 0x2aff814 size 0x8 virtual false final false
inline uint32_t get_bit() ;

/// @brief Method set_bit addr 0x2aff81c size 0x8 virtual false final false
inline void set_bit(uint32_t  value) ;

/// @brief Method get_sizeInBits addr 0x2aff824 size 0x8 virtual false final false
inline uint32_t get_sizeInBits() ;

/// @brief Method set_sizeInBits addr 0x2aff82c size 0x8 virtual false final false
inline void set_sizeInBits(uint32_t  value) ;

/// @brief Method get_format addr 0x2aff834 size 0x8 virtual false final false
inline ::UnityEngine::InputSystem::Utilities::FourCC get_format() ;

/// @brief Method set_format addr 0x2aff83c size 0x8 virtual false final false
inline void set_format(::UnityEngine::InputSystem::Utilities::FourCC  value) ;

/// @brief Method get_flags addr 0x2aff844 size 0x8 virtual false final false
inline ::GlobalNamespace::__InputControlLayout__ControlItem__Flags get_flags() ;

/// @brief Method set_flags addr 0x2aff84c size 0x8 virtual false final false
inline void set_flags(::GlobalNamespace::__InputControlLayout__ControlItem__Flags  value) ;

/// @brief Method get_arraySize addr 0x2aff854 size 0x8 virtual false final false
inline int32_t get_arraySize() ;

/// @brief Method set_arraySize addr 0x2aff85c size 0x8 virtual false final false
inline void set_arraySize(int32_t  value) ;

/// @brief Method get_defaultState addr 0x2aff864 size 0xc virtual false final false
inline ::UnityEngine::InputSystem::Utilities::PrimitiveValue get_defaultState() ;

/// @brief Method set_defaultState addr 0x2aff870 size 0x8 virtual false final false
inline void set_defaultState(::UnityEngine::InputSystem::Utilities::PrimitiveValue  value) ;

/// @brief Method get_minValue addr 0x2aff878 size 0xc virtual false final false
inline ::UnityEngine::InputSystem::Utilities::PrimitiveValue get_minValue() ;

/// @brief Method set_minValue addr 0x2aff884 size 0x8 virtual false final false
inline void set_minValue(::UnityEngine::InputSystem::Utilities::PrimitiveValue  value) ;

/// @brief Method get_maxValue addr 0x2aff88c size 0xc virtual false final false
inline ::UnityEngine::InputSystem::Utilities::PrimitiveValue get_maxValue() ;

/// @brief Method set_maxValue addr 0x2aff898 size 0x8 virtual false final false
inline void set_maxValue(::UnityEngine::InputSystem::Utilities::PrimitiveValue  value) ;

/// @brief Method get_isModifyingExistingControl addr 0x2aff8a0 size 0xc virtual false final false
inline bool get_isModifyingExistingControl() ;

/// @brief Method set_isModifyingExistingControl addr 0x2afd650 size 0x1c virtual false final false
inline void set_isModifyingExistingControl(bool  value) ;

/// @brief Method get_isNoisy addr 0x2aff8ac size 0xc virtual false final false
inline bool get_isNoisy() ;

/// @brief Method set_isNoisy addr 0x2afd688 size 0x1c virtual false final false
inline void set_isNoisy(bool  value) ;

/// @brief Method get_isSynthetic addr 0x2aff8b8 size 0xc virtual false final false
inline bool get_isSynthetic() ;

/// @brief Method set_isSynthetic addr 0x2afd6c0 size 0x1c virtual false final false
inline void set_isSynthetic(bool  value) ;

/// @brief Method get_dontReset addr 0x2aff8c4 size 0xc virtual false final false
inline bool get_dontReset() ;

/// @brief Method set_dontReset addr 0x2afd6a4 size 0x1c virtual false final false
inline void set_dontReset(bool  value) ;

/// @brief Method get_isFirstDefinedInThisLayout addr 0x2aff8d0 size 0xc virtual false final false
inline bool get_isFirstDefinedInThisLayout() ;

/// @brief Method set_isFirstDefinedInThisLayout addr 0x2afd66c size 0x1c virtual false final false
inline void set_isFirstDefinedInThisLayout(bool  value) ;

/// @brief Method get_isArray addr 0x2afaf40 size 0x10 virtual false final false
inline bool get_isArray() ;

/// @brief Method Merge addr 0x2afeef0 size 0x3a0 virtual false final false
inline ::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem Merge(::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem  other) ;

// Ctor Parameters [CppParam { name: "_name_k__BackingField", ty: "::UnityEngine::InputSystem::Utilities::InternedString", modifiers: "", def_value: None }, CppParam { name: "_layout_k__BackingField", ty: "::UnityEngine::InputSystem::Utilities::InternedString", modifiers: "", def_value: None }, CppParam { name: "_variants_k__BackingField", ty: "::UnityEngine::InputSystem::Utilities::InternedString", modifiers: "", def_value: None }, CppParam { name: "_useStateFrom_k__BackingField", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "_displayName_k__BackingField", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "_shortDisplayName_k__BackingField", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "_usages_k__BackingField", ty: "::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString>", modifiers: "", def_value: None }, CppParam { name: "_aliases_k__BackingField", ty: "::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString>", modifiers: "", def_value: None }, CppParam { name: "_parameters_k__BackingField", ty: "::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::NamedValue>", modifiers: "", def_value: None }, CppParam { name: "_processors_k__BackingField", ty: "::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::NameAndParameters>", modifiers: "", def_value: None }, CppParam { name: "_offset_k__BackingField", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "_bit_k__BackingField", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "_sizeInBits_k__BackingField", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "_format_k__BackingField", ty: "::UnityEngine::InputSystem::Utilities::FourCC", modifiers: "", def_value: None }, CppParam { name: "_flags_k__BackingField", ty: "::GlobalNamespace::__InputControlLayout__ControlItem__Flags", modifiers: "", def_value: None }, CppParam { name: "_arraySize_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_defaultState_k__BackingField", ty: "::UnityEngine::InputSystem::Utilities::PrimitiveValue", modifiers: "", def_value: None }, CppParam { name: "_minValue_k__BackingField", ty: "::UnityEngine::InputSystem::Utilities::PrimitiveValue", modifiers: "", def_value: None }, CppParam { name: "_maxValue_k__BackingField", ty: "::UnityEngine::InputSystem::Utilities::PrimitiveValue", modifiers: "", def_value: None }]
constexpr __InputControlLayout__ControlItem(::UnityEngine::InputSystem::Utilities::InternedString  _name_k__BackingField, ::UnityEngine::InputSystem::Utilities::InternedString  _layout_k__BackingField, ::UnityEngine::InputSystem::Utilities::InternedString  _variants_k__BackingField, ::StringW  _useStateFrom_k__BackingField, ::StringW  _displayName_k__BackingField, ::StringW  _shortDisplayName_k__BackingField, ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString>  _usages_k__BackingField, ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString>  _aliases_k__BackingField, ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::NamedValue>  _parameters_k__BackingField, ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::NameAndParameters>  _processors_k__BackingField, uint32_t  _offset_k__BackingField, uint32_t  _bit_k__BackingField, uint32_t  _sizeInBits_k__BackingField, ::UnityEngine::InputSystem::Utilities::FourCC  _format_k__BackingField, ::GlobalNamespace::__InputControlLayout__ControlItem__Flags  _flags_k__BackingField, int32_t  _arraySize_k__BackingField, ::UnityEngine::InputSystem::Utilities::PrimitiveValue  _defaultState_k__BackingField, ::UnityEngine::InputSystem::Utilities::PrimitiveValue  _minValue_k__BackingField, ::UnityEngine::InputSystem::Utilities::PrimitiveValue  _maxValue_k__BackingField) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __InputControlLayout__ControlItem(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0xd0>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __InputControlLayout__ControlItem()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem, 0xd0>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::Layouts
// Type: ::<>c
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6598))
// CS Name: ::InputControlLayout::Builder::ControlBuilder::<>c*
class CORDL_TYPE __InputControlLayout__Builder__ControlBuilder____c : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF___9(::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder____c*  value) ;

static inline ::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder____c* getStaticF___9() ;

static inline void setStaticF___9__14_0(::System::Func_2<::StringW,::UnityEngine::InputSystem::Utilities::InternedString>*  value) ;

static inline ::System::Func_2<::StringW,::UnityEngine::InputSystem::Utilities::InternedString>* getStaticF___9__14_0() ;

static inline ::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder____c* New_ctor() ;

/// @brief Method .ctor addr 0x2b00890 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <WithUsages>b__14_0 addr 0x2b00898 size 0x28 virtual false final false
inline ::UnityEngine::InputSystem::Utilities::InternedString _WithUsages_b__14_0(::StringW  x) ;

// Ctor Parameters [CppParam { name: "", ty: "__InputControlLayout__Builder__ControlBuilder____c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__InputControlLayout__Builder__ControlBuilder____c(__InputControlLayout__Builder__ControlBuilder____c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__InputControlLayout__Builder__ControlBuilder____c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__InputControlLayout__Builder__ControlBuilder____c(__InputControlLayout__Builder__ControlBuilder____c const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __InputControlLayout__Builder__ControlBuilder____c()  = default;
public:


// Fields

// Static field <>9

// Static field <>9__14_0


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder____c, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::ControlBuilder
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6599))
// CS Name: ::InputControlLayout::Builder::ControlBuilder
struct CORDL_TYPE __InputControlLayout__Builder__ControlBuilder : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
using __c = ::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder____c;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field builder offset 0x0
 __declspec(property(get=__get_builder, put=__set_builder)) ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder*  builder;

/// @brief Field index offset 0x8
 __declspec(property(get=__get_index, put=__set_index)) int32_t  index;

constexpr void __set_builder(::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder*  value) ;

constexpr ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder* __get_builder() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder*> __get_builder() const;

constexpr void __set_index(int32_t  value) ;

constexpr int32_t& __get_index() ;

constexpr int32_t const& __get_index() const;

/// @brief Method WithDisplayName addr 0x2affe78 size 0x48 virtual false final false
inline ::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder WithDisplayName(::StringW  displayName) ;

/// @brief Method WithLayout addr 0x2affec0 size 0xec virtual false final false
inline ::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder WithLayout(::StringW  layout) ;

/// @brief Method WithFormat addr 0x2afffac size 0x48 virtual false final false
inline ::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder WithFormat(::UnityEngine::InputSystem::Utilities::FourCC  format) ;

/// @brief Method WithFormat addr 0x2affff4 size 0x34 virtual false final false
inline ::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder WithFormat(::StringW  format) ;

/// @brief Method WithByteOffset addr 0x2b00028 size 0x48 virtual false final false
inline ::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder WithByteOffset(uint32_t  offset) ;

/// @brief Method WithBitOffset addr 0x2b00070 size 0x48 virtual false final false
inline ::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder WithBitOffset(uint32_t  bit) ;

/// @brief Method IsSynthetic addr 0x2b000b8 size 0x5c virtual false final false
inline ::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder IsSynthetic(bool  value) ;

/// @brief Method IsNoisy addr 0x2b00114 size 0x5c virtual false final false
inline ::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder IsNoisy(bool  value) ;

/// @brief Method DontReset addr 0x2b00170 size 0x5c virtual false final false
inline ::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder DontReset(bool  value) ;

/// @brief Method WithSizeInBits addr 0x2b001cc size 0x48 virtual false final false
inline ::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder WithSizeInBits(uint32_t  sizeInBits) ;

/// @brief Method WithRange addr 0x2b00214 size 0x9c virtual false final false
inline ::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder WithRange(float_t  minValue, float_t  maxValue) ;

/// @brief Method WithUsages addr 0x2b002b0 size 0x1d4 virtual false final false
inline ::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder WithUsages(::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString,::Array<::UnityEngine::InputSystem::Utilities::InternedString>*>  usages) ;

/// @brief Method WithUsages addr 0x2b00484 size 0x124 virtual false final false
inline ::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder WithUsages(::System::Collections::Generic::IEnumerable_1<::StringW>*  usages) ;

/// @brief Method WithUsages addr 0x2b005a8 size 0x4 virtual false final false
inline ::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder WithUsages(::ArrayW<::StringW,::Array<::StringW>*>  usages) ;

/// @brief Method WithParameters addr 0x2b005ac size 0xb8 virtual false final false
inline ::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder WithParameters(::StringW  parameters) ;

/// @brief Method WithProcessors addr 0x2b00664 size 0xd4 virtual false final false
inline ::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder WithProcessors(::StringW  processors) ;

/// @brief Method WithDefaultState addr 0x2b00738 size 0x48 virtual false final false
inline ::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder WithDefaultState(::UnityEngine::InputSystem::Utilities::PrimitiveValue  value) ;

/// @brief Method UsingStateFrom addr 0x2b00780 size 0x64 virtual false final false
inline ::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder UsingStateFrom(::StringW  path) ;

/// @brief Method AsArrayOfControlsWithSize addr 0x2b007e4 size 0x48 virtual false final false
inline ::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder AsArrayOfControlsWithSize(int32_t  arraySize) ;

// Ctor Parameters [CppParam { name: "builder", ty: "::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder*", modifiers: "", def_value: None }, CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __InputControlLayout__Builder__ControlBuilder(::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder*  builder, int32_t  index) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __InputControlLayout__Builder__ControlBuilder(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __InputControlLayout__Builder__ControlBuilder()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::Builder
namespace UnityEngine::InputSystem::Layouts {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6600))
// CS Name: ::InputControlLayout::Builder*
class CORDL_TYPE __InputControlLayout__Builder : public ::System::Object {
public:
// Declarations
using ControlBuilder = ::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x48};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x48 - sizeof(::System::Object)]{};

/// @brief Field <name>k__BackingField offset 0x10
 __declspec(property(get=__get__name_k__BackingField, put=__set__name_k__BackingField)) ::StringW  _name_k__BackingField;

/// @brief Field <displayName>k__BackingField offset 0x18
 __declspec(property(get=__get__displayName_k__BackingField, put=__set__displayName_k__BackingField)) ::StringW  _displayName_k__BackingField;

/// @brief Field <type>k__BackingField offset 0x20
 __declspec(property(get=__get__type_k__BackingField, put=__set__type_k__BackingField)) ::System::Type*  _type_k__BackingField;

/// @brief Field <stateFormat>k__BackingField offset 0x28
 __declspec(property(get=__get__stateFormat_k__BackingField, put=__set__stateFormat_k__BackingField)) ::UnityEngine::InputSystem::Utilities::FourCC  _stateFormat_k__BackingField;

/// @brief Field <stateSizeInBytes>k__BackingField offset 0x2c
 __declspec(property(get=__get__stateSizeInBytes_k__BackingField, put=__set__stateSizeInBytes_k__BackingField)) int32_t  _stateSizeInBytes_k__BackingField;

/// @brief Field m_ExtendsLayout offset 0x30
 __declspec(property(get=__get_m_ExtendsLayout, put=__set_m_ExtendsLayout)) ::StringW  m_ExtendsLayout;

/// @brief Field <updateBeforeRender>k__BackingField offset 0x38
 __declspec(property(get=__get__updateBeforeRender_k__BackingField, put=__set__updateBeforeRender_k__BackingField)) ::System::Nullable_1<bool>  _updateBeforeRender_k__BackingField;

/// @brief Field m_ControlCount offset 0x3c
 __declspec(property(get=__get_m_ControlCount, put=__set_m_ControlCount)) int32_t  m_ControlCount;

/// @brief Field m_Controls offset 0x40
 __declspec(property(get=__get_m_Controls, put=__set_m_Controls)) ::ArrayW<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem,::Array<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>*>  m_Controls;

 __declspec(property(get=get_name, put=set_name)) ::StringW  name;

 __declspec(property(get=get_displayName, put=set_displayName)) ::StringW  displayName;

 __declspec(property(get=get_type, put=set_type)) ::System::Type*  type;

 __declspec(property(get=get_stateFormat, put=set_stateFormat)) ::UnityEngine::InputSystem::Utilities::FourCC  stateFormat;

 __declspec(property(get=get_stateSizeInBytes, put=set_stateSizeInBytes)) int32_t  stateSizeInBytes;

 __declspec(property(get=get_extendsLayout, put=set_extendsLayout)) ::StringW  extendsLayout;

 __declspec(property(get=get_updateBeforeRender, put=set_updateBeforeRender)) ::System::Nullable_1<bool>  updateBeforeRender;

 __declspec(property(get=get_controls)) ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>  controls;

constexpr void __set__name_k__BackingField(::StringW  value) ;

constexpr ::StringW& __get__name_k__BackingField() ;

constexpr ::StringW const& __get__name_k__BackingField() const;

constexpr void __set__displayName_k__BackingField(::StringW  value) ;

constexpr ::StringW& __get__displayName_k__BackingField() ;

constexpr ::StringW const& __get__displayName_k__BackingField() const;

constexpr void __set__type_k__BackingField(::System::Type*  value) ;

constexpr ::System::Type* __get__type_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::System::Type*> __get__type_k__BackingField() const;

constexpr void __set__stateFormat_k__BackingField(::UnityEngine::InputSystem::Utilities::FourCC  value) ;

constexpr ::UnityEngine::InputSystem::Utilities::FourCC& __get__stateFormat_k__BackingField() ;

constexpr ::UnityEngine::InputSystem::Utilities::FourCC const& __get__stateFormat_k__BackingField() const;

constexpr void __set__stateSizeInBytes_k__BackingField(int32_t  value) ;

constexpr int32_t& __get__stateSizeInBytes_k__BackingField() ;

constexpr int32_t const& __get__stateSizeInBytes_k__BackingField() const;

constexpr void __set_m_ExtendsLayout(::StringW  value) ;

constexpr ::StringW& __get_m_ExtendsLayout() ;

constexpr ::StringW const& __get_m_ExtendsLayout() const;

constexpr void __set__updateBeforeRender_k__BackingField(::System::Nullable_1<bool>  value) ;

constexpr ::System::Nullable_1<bool>& __get__updateBeforeRender_k__BackingField() ;

constexpr ::System::Nullable_1<bool> const& __get__updateBeforeRender_k__BackingField() const;

constexpr void __set_m_ControlCount(int32_t  value) ;

constexpr int32_t& __get_m_ControlCount() ;

constexpr int32_t const& __get_m_ControlCount() const;

constexpr void __set_m_Controls(::ArrayW<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem,::Array<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>*>  value) ;

constexpr ::ArrayW<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem,::Array<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>*>& __get_m_Controls() ;

constexpr ::ArrayW<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem,::Array<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>*> const& __get_m_Controls() const;

/// @brief Method get_name addr 0x2aff8dc size 0x8 virtual false final false
inline ::StringW get_name() ;

/// @brief Method set_name addr 0x2aff8e4 size 0x8 virtual false final false
inline void set_name(::StringW  value) ;

/// @brief Method get_displayName addr 0x2aff8ec size 0x8 virtual false final false
inline ::StringW get_displayName() ;

/// @brief Method set_displayName addr 0x2aff8f4 size 0x8 virtual false final false
inline void set_displayName(::StringW  value) ;

/// @brief Method get_type addr 0x2aff8fc size 0x8 virtual false final false
inline ::System::Type* get_type() ;

/// @brief Method set_type addr 0x2aff904 size 0x8 virtual false final false
inline void set_type(::System::Type*  value) ;

/// @brief Method get_stateFormat addr 0x2aff90c size 0x8 virtual false final false
inline ::UnityEngine::InputSystem::Utilities::FourCC get_stateFormat() ;

/// @brief Method set_stateFormat addr 0x2aff914 size 0x8 virtual false final false
inline void set_stateFormat(::UnityEngine::InputSystem::Utilities::FourCC  value) ;

/// @brief Method get_stateSizeInBytes addr 0x2aff91c size 0x8 virtual false final false
inline int32_t get_stateSizeInBytes() ;

/// @brief Method set_stateSizeInBytes addr 0x2aff924 size 0x8 virtual false final false
inline void set_stateSizeInBytes(int32_t  value) ;

/// @brief Method get_extendsLayout addr 0x2aff92c size 0x8 virtual false final false
inline ::StringW get_extendsLayout() ;

/// @brief Method set_extendsLayout addr 0x2aff934 size 0x34 virtual false final false
inline void set_extendsLayout(::StringW  value) ;

/// @brief Method get_updateBeforeRender addr 0x2aff968 size 0x8 virtual false final false
inline ::System::Nullable_1<bool> get_updateBeforeRender() ;

/// @brief Method set_updateBeforeRender addr 0x2aff970 size 0x8 virtual false final false
inline void set_updateBeforeRender(::System::Nullable_1<bool>  value) ;

/// @brief Method get_controls addr 0x2aff978 size 0x68 virtual false final false
inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem> get_controls() ;

/// @brief Method AddControl addr 0x2aff9e0 size 0x1d0 virtual false final false
inline ::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder AddControl(::StringW  name) ;

/// @brief Method WithName addr 0x2affbb0 size 0x8 virtual false final false
inline ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder* WithName(::StringW  name) ;

/// @brief Method WithDisplayName addr 0x2affbb8 size 0x8 virtual false final false
inline ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder* WithDisplayName(::StringW  displayName) ;

/// @brief Method WithType addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
inline ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder* WithType() ;

/// @brief Method WithFormat addr 0x2affbc0 size 0x8 virtual false final false
inline ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder* WithFormat(::UnityEngine::InputSystem::Utilities::FourCC  format) ;

/// @brief Method WithFormat addr 0x2affbc8 size 0x34 virtual false final false
inline ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder* WithFormat(::StringW  format) ;

/// @brief Method WithSizeInBytes addr 0x2affbfc size 0x8 virtual false final false
inline ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder* WithSizeInBytes(int32_t  sizeInBytes) ;

/// @brief Method Extend addr 0x2affc04 size 0x38 virtual false final false
inline ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder* Extend(::StringW  baseLayoutName) ;

/// @brief Method Build addr 0x2affc3c size 0x234 virtual false final false
inline ::UnityEngine::InputSystem::Layouts::InputControlLayout* Build() ;

static inline ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder* New_ctor() ;

/// @brief Method .ctor addr 0x2affe70 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__InputControlLayout__Builder", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__InputControlLayout__Builder(__InputControlLayout__Builder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__InputControlLayout__Builder", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__InputControlLayout__Builder(__InputControlLayout__Builder const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __InputControlLayout__Builder()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder, 0x48>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::Layouts
// Type: ::Flags
namespace UnityEngine::InputSystem::Layouts {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6601))
// CS Name: ::InputControlLayout::Flags
struct CORDL_TYPE __InputControlLayout__Flags : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____InputControlLayout__Flags_Unwrapped
enum struct ____InputControlLayout__Flags_Unwrapped : int32_t {
__E_IsGenericTypeOfDevice = static_cast<int32_t>(0x1),
__E_HideInUI = static_cast<int32_t>(0x2),
__E_IsOverride = static_cast<int32_t>(0x4),
__E_CanRunInBackground = static_cast<int32_t>(0x8),
__E_CanRunInBackgroundIsSet = static_cast<int32_t>(0x10),
__E_IsNoisy = static_cast<int32_t>(0x20),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field IsGenericTypeOfDevice value: static_cast<int32_t>(0x1)
static ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Flags const IsGenericTypeOfDevice;

/// @brief Field HideInUI value: static_cast<int32_t>(0x2)
static ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Flags const HideInUI;

/// @brief Field IsOverride value: static_cast<int32_t>(0x4)
static ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Flags const IsOverride;

/// @brief Field CanRunInBackground value: static_cast<int32_t>(0x8)
static ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Flags const CanRunInBackground;

/// @brief Field CanRunInBackgroundIsSet value: static_cast<int32_t>(0x10)
static ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Flags const CanRunInBackgroundIsSet;

/// @brief Field IsNoisy value: static_cast<int32_t>(0x20)
static ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Flags const IsNoisy;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____InputControlLayout__Flags_Unwrapped () const noexcept {
return std::bit_cast<____InputControlLayout__Flags_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __InputControlLayout__Flags(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __InputControlLayout__Flags(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __InputControlLayout__Flags()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Layouts::__InputControlLayout__Flags, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::Layouts
// Type: ::LayoutJsonNameAndDescriptorOnly
namespace UnityEngine::InputSystem::Layouts {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6602))
// CS Name: ::InputControlLayout::LayoutJsonNameAndDescriptorOnly
struct CORDL_TYPE __InputControlLayout__LayoutJsonNameAndDescriptorOnly : public ::bs_hook::ValueTypeWrapper<0x70> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x70};

/// @brief Field name offset 0x0
 __declspec(property(get=__get_name, put=__set_name)) ::StringW  name;

/// @brief Field extend offset 0x8
 __declspec(property(get=__get_extend, put=__set_extend)) ::StringW  extend;

/// @brief Field extendMultiple offset 0x10
 __declspec(property(get=__get_extendMultiple, put=__set_extendMultiple)) ::ArrayW<::StringW,::Array<::StringW>*>  extendMultiple;

/// @brief Field device offset 0x18
 __declspec(property(get=__get_device, put=__set_device)) ::UnityEngine::InputSystem::Layouts::__InputDeviceMatcher__MatcherJson  device;

constexpr void __set_name(::StringW  value) ;

constexpr ::StringW& __get_name() ;

constexpr ::StringW const& __get_name() const;

constexpr void __set_extend(::StringW  value) ;

constexpr ::StringW& __get_extend() ;

constexpr ::StringW const& __get_extend() const;

constexpr void __set_extendMultiple(::ArrayW<::StringW,::Array<::StringW>*>  value) ;

constexpr ::ArrayW<::StringW,::Array<::StringW>*>& __get_extendMultiple() ;

constexpr ::ArrayW<::StringW,::Array<::StringW>*> const& __get_extendMultiple() const;

constexpr void __set_device(::UnityEngine::InputSystem::Layouts::__InputDeviceMatcher__MatcherJson  value) ;

constexpr ::UnityEngine::InputSystem::Layouts::__InputDeviceMatcher__MatcherJson& __get_device() ;

constexpr ::UnityEngine::InputSystem::Layouts::__InputDeviceMatcher__MatcherJson const& __get_device() const;

// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "extend", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "extendMultiple", ty: "::ArrayW<::StringW,::Array<::StringW>*>", modifiers: "", def_value: None }, CppParam { name: "device", ty: "::UnityEngine::InputSystem::Layouts::__InputDeviceMatcher__MatcherJson", modifiers: "", def_value: None }]
constexpr __InputControlLayout__LayoutJsonNameAndDescriptorOnly(::StringW  name, ::StringW  extend, ::ArrayW<::StringW,::Array<::StringW>*>  extendMultiple, ::UnityEngine::InputSystem::Layouts::__InputDeviceMatcher__MatcherJson  device) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __InputControlLayout__LayoutJsonNameAndDescriptorOnly(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x70>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __InputControlLayout__LayoutJsonNameAndDescriptorOnly()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Layouts::__InputControlLayout__LayoutJsonNameAndDescriptorOnly, 0x70>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::Layouts
// Type: ::<>c
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6603))
// CS Name: ::InputControlLayout::LayoutJson::<>c*
class CORDL_TYPE __InputControlLayout__LayoutJson____c : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF___9(::GlobalNamespace::__InputControlLayout__LayoutJson____c*  value) ;

static inline ::GlobalNamespace::__InputControlLayout__LayoutJson____c* getStaticF___9() ;

static inline void setStaticF___9__14_0(::System::Func_2<::StringW,::UnityEngine::InputSystem::Utilities::InternedString>*  value) ;

static inline ::System::Func_2<::StringW,::UnityEngine::InputSystem::Utilities::InternedString>* getStaticF___9__14_0() ;

static inline void setStaticF___9__15_0(::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString,::StringW>*  value) ;

static inline ::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString,::StringW>* getStaticF___9__15_0() ;

static inline void setStaticF___9__15_1(::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString,::StringW>*  value) ;

static inline ::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString,::StringW>* getStaticF___9__15_1() ;

static inline ::GlobalNamespace::__InputControlLayout__LayoutJson____c* New_ctor() ;

/// @brief Method .ctor addr 0x2b01690 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <ToLayout>b__14_0 addr 0x2b01698 size 0x28 virtual false final false
inline ::UnityEngine::InputSystem::Utilities::InternedString _ToLayout_b__14_0(::StringW  x) ;

/// @brief Method <FromLayout>b__15_0 addr 0x2b016c0 size 0x24 virtual false final false
inline ::StringW _FromLayout_b__15_0(::UnityEngine::InputSystem::Utilities::InternedString  x) ;

/// @brief Method <FromLayout>b__15_1 addr 0x2b016e4 size 0x24 virtual false final false
inline ::StringW _FromLayout_b__15_1(::UnityEngine::InputSystem::Utilities::InternedString  x) ;

// Ctor Parameters [CppParam { name: "", ty: "__InputControlLayout__LayoutJson____c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__InputControlLayout__LayoutJson____c(__InputControlLayout__LayoutJson____c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__InputControlLayout__LayoutJson____c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__InputControlLayout__LayoutJson____c(__InputControlLayout__LayoutJson____c const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __InputControlLayout__LayoutJson____c()  = default;
public:


// Fields

// Static field <>9

// Static field <>9__14_0

// Static field <>9__15_0

// Static field <>9__15_1


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__InputControlLayout__LayoutJson____c, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::LayoutJson
namespace UnityEngine::InputSystem::Layouts {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6604))
// CS Name: ::InputControlLayout::LayoutJson
struct CORDL_TYPE __InputControlLayout__LayoutJson : public ::bs_hook::ValueTypeWrapper<0x68> {
public:
// Declarations
using __c = ::GlobalNamespace::__InputControlLayout__LayoutJson____c;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x68};

/// @brief Field name offset 0x0
 __declspec(property(get=__get_name, put=__set_name)) ::StringW  name;

/// @brief Field extend offset 0x8
 __declspec(property(get=__get_extend, put=__set_extend)) ::StringW  extend;

/// @brief Field extendMultiple offset 0x10
 __declspec(property(get=__get_extendMultiple, put=__set_extendMultiple)) ::ArrayW<::StringW,::Array<::StringW>*>  extendMultiple;

/// @brief Field format offset 0x18
 __declspec(property(get=__get_format, put=__set_format)) ::StringW  format;

/// @brief Field beforeRender offset 0x20
 __declspec(property(get=__get_beforeRender, put=__set_beforeRender)) ::StringW  beforeRender;

/// @brief Field runInBackground offset 0x28
 __declspec(property(get=__get_runInBackground, put=__set_runInBackground)) ::StringW  runInBackground;

/// @brief Field commonUsages offset 0x30
 __declspec(property(get=__get_commonUsages, put=__set_commonUsages)) ::ArrayW<::StringW,::Array<::StringW>*>  commonUsages;

/// @brief Field displayName offset 0x38
 __declspec(property(get=__get_displayName, put=__set_displayName)) ::StringW  displayName;

/// @brief Field description offset 0x40
 __declspec(property(get=__get_description, put=__set_description)) ::StringW  description;

/// @brief Field type offset 0x48
 __declspec(property(get=__get_type, put=__set_type)) ::StringW  type;

/// @brief Field variant offset 0x50
 __declspec(property(get=__get_variant, put=__set_variant)) ::StringW  variant;

/// @brief Field isGenericTypeOfDevice offset 0x58
 __declspec(property(get=__get_isGenericTypeOfDevice, put=__set_isGenericTypeOfDevice)) bool  isGenericTypeOfDevice;

/// @brief Field hideInUI offset 0x59
 __declspec(property(get=__get_hideInUI, put=__set_hideInUI)) bool  hideInUI;

/// @brief Field controls offset 0x60
 __declspec(property(get=__get_controls, put=__set_controls)) ::ArrayW<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItemJson*,::Array<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItemJson*>*>  controls;

constexpr void __set_name(::StringW  value) ;

constexpr ::StringW& __get_name() ;

constexpr ::StringW const& __get_name() const;

constexpr void __set_extend(::StringW  value) ;

constexpr ::StringW& __get_extend() ;

constexpr ::StringW const& __get_extend() const;

constexpr void __set_extendMultiple(::ArrayW<::StringW,::Array<::StringW>*>  value) ;

constexpr ::ArrayW<::StringW,::Array<::StringW>*>& __get_extendMultiple() ;

constexpr ::ArrayW<::StringW,::Array<::StringW>*> const& __get_extendMultiple() const;

constexpr void __set_format(::StringW  value) ;

constexpr ::StringW& __get_format() ;

constexpr ::StringW const& __get_format() const;

constexpr void __set_beforeRender(::StringW  value) ;

constexpr ::StringW& __get_beforeRender() ;

constexpr ::StringW const& __get_beforeRender() const;

constexpr void __set_runInBackground(::StringW  value) ;

constexpr ::StringW& __get_runInBackground() ;

constexpr ::StringW const& __get_runInBackground() const;

constexpr void __set_commonUsages(::ArrayW<::StringW,::Array<::StringW>*>  value) ;

constexpr ::ArrayW<::StringW,::Array<::StringW>*>& __get_commonUsages() ;

constexpr ::ArrayW<::StringW,::Array<::StringW>*> const& __get_commonUsages() const;

constexpr void __set_displayName(::StringW  value) ;

constexpr ::StringW& __get_displayName() ;

constexpr ::StringW const& __get_displayName() const;

constexpr void __set_description(::StringW  value) ;

constexpr ::StringW& __get_description() ;

constexpr ::StringW const& __get_description() const;

constexpr void __set_type(::StringW  value) ;

constexpr ::StringW& __get_type() ;

constexpr ::StringW const& __get_type() const;

constexpr void __set_variant(::StringW  value) ;

constexpr ::StringW& __get_variant() ;

constexpr ::StringW const& __get_variant() const;

constexpr void __set_isGenericTypeOfDevice(bool  value) ;

constexpr bool& __get_isGenericTypeOfDevice() ;

constexpr bool const& __get_isGenericTypeOfDevice() const;

constexpr void __set_hideInUI(bool  value) ;

constexpr bool& __get_hideInUI() ;

constexpr bool const& __get_hideInUI() const;

constexpr void __set_controls(::ArrayW<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItemJson*,::Array<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItemJson*>*>  value) ;

constexpr ::ArrayW<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItemJson*,::Array<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItemJson*>*>& __get_controls() ;

constexpr ::ArrayW<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItemJson*,::Array<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItemJson*>*> const& __get_controls() const;

/// @brief Method ToLayout addr 0x2afb994 size 0xa2c virtual false final false
inline ::UnityEngine::InputSystem::Layouts::InputControlLayout* ToLayout() ;

/// @brief Method FromLayout addr 0x2afb5c0 size 0x344 virtual false final false
static inline ::UnityEngine::InputSystem::Layouts::__InputControlLayout__LayoutJson FromLayout(::UnityEngine::InputSystem::Layouts::InputControlLayout*  layout) ;

// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "extend", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "extendMultiple", ty: "::ArrayW<::StringW,::Array<::StringW>*>", modifiers: "", def_value: None }, CppParam { name: "format", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "beforeRender", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "runInBackground", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "commonUsages", ty: "::ArrayW<::StringW,::Array<::StringW>*>", modifiers: "", def_value: None }, CppParam { name: "displayName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "description", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "type", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "variant", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "isGenericTypeOfDevice", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "hideInUI", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "controls", ty: "::ArrayW<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItemJson*,::Array<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItemJson*>*>", modifiers: "", def_value: None }]
constexpr __InputControlLayout__LayoutJson(::StringW  name, ::StringW  extend, ::ArrayW<::StringW,::Array<::StringW>*>  extendMultiple, ::StringW  format, ::StringW  beforeRender, ::StringW  runInBackground, ::ArrayW<::StringW,::Array<::StringW>*>  commonUsages, ::StringW  displayName, ::StringW  description, ::StringW  type, ::StringW  variant, bool  isGenericTypeOfDevice, bool  hideInUI, ::ArrayW<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItemJson*,::Array<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItemJson*>*>  controls) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __InputControlLayout__LayoutJson(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x68>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __InputControlLayout__LayoutJson()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Layouts::__InputControlLayout__LayoutJson, 0x68>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::Layouts
// Type: ::<>c
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6605))
// CS Name: ::InputControlLayout::ControlItemJson::<>c*
class CORDL_TYPE __InputControlLayout__ControlItemJson____c : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF___9(::GlobalNamespace::__InputControlLayout__ControlItemJson____c*  value) ;

static inline ::GlobalNamespace::__InputControlLayout__ControlItemJson____c* getStaticF___9() ;

static inline void setStaticF___9__24_0(::System::Func_2<::StringW,::UnityEngine::InputSystem::Utilities::InternedString>*  value) ;

static inline ::System::Func_2<::StringW,::UnityEngine::InputSystem::Utilities::InternedString>* getStaticF___9__24_0() ;

static inline void setStaticF___9__24_1(::System::Func_2<::StringW,::UnityEngine::InputSystem::Utilities::InternedString>*  value) ;

static inline ::System::Func_2<::StringW,::UnityEngine::InputSystem::Utilities::InternedString>* getStaticF___9__24_1() ;

static inline void setStaticF___9__25_0(::System::Func_2<::UnityEngine::InputSystem::Utilities::NamedValue,::StringW>*  value) ;

static inline ::System::Func_2<::UnityEngine::InputSystem::Utilities::NamedValue,::StringW>* getStaticF___9__25_0() ;

static inline void setStaticF___9__25_1(::System::Func_2<::UnityEngine::InputSystem::Utilities::NameAndParameters,::StringW>*  value) ;

static inline ::System::Func_2<::UnityEngine::InputSystem::Utilities::NameAndParameters,::StringW>* getStaticF___9__25_1() ;

static inline void setStaticF___9__25_2(::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString,::StringW>*  value) ;

static inline ::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString,::StringW>* getStaticF___9__25_2() ;

static inline void setStaticF___9__25_3(::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString,::StringW>*  value) ;

static inline ::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString,::StringW>* getStaticF___9__25_3() ;

static inline ::GlobalNamespace::__InputControlLayout__ControlItemJson____c* New_ctor() ;

/// @brief Method .ctor addr 0x2b0178c size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <ToLayout>b__24_0 addr 0x2b01794 size 0x28 virtual false final false
inline ::UnityEngine::InputSystem::Utilities::InternedString _ToLayout_b__24_0(::StringW  x) ;

/// @brief Method <ToLayout>b__24_1 addr 0x2b017bc size 0x28 virtual false final false
inline ::UnityEngine::InputSystem::Utilities::InternedString _ToLayout_b__24_1(::StringW  x) ;

/// @brief Method <FromControlItems>b__25_0 addr 0x2b017e4 size 0xc virtual false final false
inline ::StringW _FromControlItems_b__25_0(::UnityEngine::InputSystem::Utilities::NamedValue  x) ;

/// @brief Method <FromControlItems>b__25_1 addr 0x2b017f0 size 0xc virtual false final false
inline ::StringW _FromControlItems_b__25_1(::UnityEngine::InputSystem::Utilities::NameAndParameters  x) ;

/// @brief Method <FromControlItems>b__25_2 addr 0x2b017fc size 0x24 virtual false final false
inline ::StringW _FromControlItems_b__25_2(::UnityEngine::InputSystem::Utilities::InternedString  x) ;

/// @brief Method <FromControlItems>b__25_3 addr 0x2b01820 size 0x24 virtual false final false
inline ::StringW _FromControlItems_b__25_3(::UnityEngine::InputSystem::Utilities::InternedString  x) ;

// Ctor Parameters [CppParam { name: "", ty: "__InputControlLayout__ControlItemJson____c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__InputControlLayout__ControlItemJson____c(__InputControlLayout__ControlItemJson____c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__InputControlLayout__ControlItemJson____c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__InputControlLayout__ControlItemJson____c(__InputControlLayout__ControlItemJson____c const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __InputControlLayout__ControlItemJson____c()  = default;
public:


// Fields

// Static field <>9

// Static field <>9__24_0

// Static field <>9__24_1

// Static field <>9__25_0

// Static field <>9__25_1

// Static field <>9__25_2

// Static field <>9__25_3


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__InputControlLayout__ControlItemJson____c, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::ControlItemJson
namespace UnityEngine::InputSystem::Layouts {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6606))
// CS Name: ::InputControlLayout::ControlItemJson*
class CORDL_TYPE __InputControlLayout__ControlItemJson : public ::System::Object {
public:
// Declarations
using __c = ::GlobalNamespace::__InputControlLayout__ControlItemJson____c;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0xb0};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0xb0 - sizeof(::System::Object)]{};

/// @brief Field name offset 0x10
 __declspec(property(get=__get_name, put=__set_name)) ::StringW  name;

/// @brief Field layout offset 0x18
 __declspec(property(get=__get_layout, put=__set_layout)) ::StringW  layout;

/// @brief Field variants offset 0x20
 __declspec(property(get=__get_variants, put=__set_variants)) ::StringW  variants;

/// @brief Field usage offset 0x28
 __declspec(property(get=__get_usage, put=__set_usage)) ::StringW  usage;

/// @brief Field alias offset 0x30
 __declspec(property(get=__get_alias, put=__set_alias)) ::StringW  alias;

/// @brief Field useStateFrom offset 0x38
 __declspec(property(get=__get_useStateFrom, put=__set_useStateFrom)) ::StringW  useStateFrom;

/// @brief Field offset offset 0x40
 __declspec(property(get=__get_offset, put=__set_offset)) uint32_t  offset;

/// @brief Field bit offset 0x44
 __declspec(property(get=__get_bit, put=__set_bit)) uint32_t  bit;

/// @brief Field sizeInBits offset 0x48
 __declspec(property(get=__get_sizeInBits, put=__set_sizeInBits)) uint32_t  sizeInBits;

/// @brief Field format offset 0x50
 __declspec(property(get=__get_format, put=__set_format)) ::StringW  format;

/// @brief Field arraySize offset 0x58
 __declspec(property(get=__get_arraySize, put=__set_arraySize)) int32_t  arraySize;

/// @brief Field usages offset 0x60
 __declspec(property(get=__get_usages, put=__set_usages)) ::ArrayW<::StringW,::Array<::StringW>*>  usages;

/// @brief Field aliases offset 0x68
 __declspec(property(get=__get_aliases, put=__set_aliases)) ::ArrayW<::StringW,::Array<::StringW>*>  aliases;

/// @brief Field parameters offset 0x70
 __declspec(property(get=__get_parameters, put=__set_parameters)) ::StringW  parameters;

/// @brief Field processors offset 0x78
 __declspec(property(get=__get_processors, put=__set_processors)) ::StringW  processors;

/// @brief Field displayName offset 0x80
 __declspec(property(get=__get_displayName, put=__set_displayName)) ::StringW  displayName;

/// @brief Field shortDisplayName offset 0x88
 __declspec(property(get=__get_shortDisplayName, put=__set_shortDisplayName)) ::StringW  shortDisplayName;

/// @brief Field noisy offset 0x90
 __declspec(property(get=__get_noisy, put=__set_noisy)) bool  noisy;

/// @brief Field dontReset offset 0x91
 __declspec(property(get=__get_dontReset, put=__set_dontReset)) bool  dontReset;

/// @brief Field synthetic offset 0x92
 __declspec(property(get=__get_synthetic, put=__set_synthetic)) bool  synthetic;

/// @brief Field defaultState offset 0x98
 __declspec(property(get=__get_defaultState, put=__set_defaultState)) ::StringW  defaultState;

/// @brief Field minValue offset 0xa0
 __declspec(property(get=__get_minValue, put=__set_minValue)) ::StringW  minValue;

/// @brief Field maxValue offset 0xa8
 __declspec(property(get=__get_maxValue, put=__set_maxValue)) ::StringW  maxValue;

constexpr void __set_name(::StringW  value) ;

constexpr ::StringW& __get_name() ;

constexpr ::StringW const& __get_name() const;

constexpr void __set_layout(::StringW  value) ;

constexpr ::StringW& __get_layout() ;

constexpr ::StringW const& __get_layout() const;

constexpr void __set_variants(::StringW  value) ;

constexpr ::StringW& __get_variants() ;

constexpr ::StringW const& __get_variants() const;

constexpr void __set_usage(::StringW  value) ;

constexpr ::StringW& __get_usage() ;

constexpr ::StringW const& __get_usage() const;

constexpr void __set_alias(::StringW  value) ;

constexpr ::StringW& __get_alias() ;

constexpr ::StringW const& __get_alias() const;

constexpr void __set_useStateFrom(::StringW  value) ;

constexpr ::StringW& __get_useStateFrom() ;

constexpr ::StringW const& __get_useStateFrom() const;

constexpr void __set_offset(uint32_t  value) ;

constexpr uint32_t& __get_offset() ;

constexpr uint32_t const& __get_offset() const;

constexpr void __set_bit(uint32_t  value) ;

constexpr uint32_t& __get_bit() ;

constexpr uint32_t const& __get_bit() const;

constexpr void __set_sizeInBits(uint32_t  value) ;

constexpr uint32_t& __get_sizeInBits() ;

constexpr uint32_t const& __get_sizeInBits() const;

constexpr void __set_format(::StringW  value) ;

constexpr ::StringW& __get_format() ;

constexpr ::StringW const& __get_format() const;

constexpr void __set_arraySize(int32_t  value) ;

constexpr int32_t& __get_arraySize() ;

constexpr int32_t const& __get_arraySize() const;

constexpr void __set_usages(::ArrayW<::StringW,::Array<::StringW>*>  value) ;

constexpr ::ArrayW<::StringW,::Array<::StringW>*>& __get_usages() ;

constexpr ::ArrayW<::StringW,::Array<::StringW>*> const& __get_usages() const;

constexpr void __set_aliases(::ArrayW<::StringW,::Array<::StringW>*>  value) ;

constexpr ::ArrayW<::StringW,::Array<::StringW>*>& __get_aliases() ;

constexpr ::ArrayW<::StringW,::Array<::StringW>*> const& __get_aliases() const;

constexpr void __set_parameters(::StringW  value) ;

constexpr ::StringW& __get_parameters() ;

constexpr ::StringW const& __get_parameters() const;

constexpr void __set_processors(::StringW  value) ;

constexpr ::StringW& __get_processors() ;

constexpr ::StringW const& __get_processors() const;

constexpr void __set_displayName(::StringW  value) ;

constexpr ::StringW& __get_displayName() ;

constexpr ::StringW const& __get_displayName() const;

constexpr void __set_shortDisplayName(::StringW  value) ;

constexpr ::StringW& __get_shortDisplayName() ;

constexpr ::StringW const& __get_shortDisplayName() const;

constexpr void __set_noisy(bool  value) ;

constexpr bool& __get_noisy() ;

constexpr bool const& __get_noisy() const;

constexpr void __set_dontReset(bool  value) ;

constexpr bool& __get_dontReset() ;

constexpr bool const& __get_dontReset() const;

constexpr void __set_synthetic(bool  value) ;

constexpr bool& __get_synthetic() ;

constexpr bool const& __get_synthetic() const;

constexpr void __set_defaultState(::StringW  value) ;

constexpr ::StringW& __get_defaultState() ;

constexpr ::StringW const& __get_defaultState() const;

constexpr void __set_minValue(::StringW  value) ;

constexpr ::StringW& __get_minValue() ;

constexpr ::StringW const& __get_minValue() const;

constexpr void __set_maxValue(::StringW  value) ;

constexpr ::StringW& __get_maxValue() ;

constexpr ::StringW const& __get_maxValue() const;

static inline ::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItemJson* New_ctor() ;

/// @brief Method .ctor addr 0x2b01708 size 0x20 virtual false final false
inline void _ctor() ;

/// @brief Method ToLayout addr 0x2b008c0 size 0x678 virtual false final false
inline ::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem ToLayout() ;

/// @brief Method FromControlItems addr 0x2b00f38 size 0x6f4 virtual false final false
static inline ::ArrayW<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItemJson*,::Array<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItemJson*>*> FromControlItems(::ArrayW<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem,::Array<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>*>  items) ;

// Ctor Parameters [CppParam { name: "", ty: "__InputControlLayout__ControlItemJson", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__InputControlLayout__ControlItemJson(__InputControlLayout__ControlItemJson && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__InputControlLayout__ControlItemJson", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__InputControlLayout__ControlItemJson(__InputControlLayout__ControlItemJson const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __InputControlLayout__ControlItemJson()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItemJson, 0xb0>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::Layouts
// Type: ::LayoutMatcher
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6607))
// CS Name: ::InputControlLayout::Collection::LayoutMatcher
struct CORDL_TYPE __InputControlLayout__Collection__LayoutMatcher : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field layoutName offset 0x0
 __declspec(property(get=__get_layoutName, put=__set_layoutName)) ::UnityEngine::InputSystem::Utilities::InternedString  layoutName;

/// @brief Field deviceMatcher offset 0x10
 __declspec(property(get=__get_deviceMatcher, put=__set_deviceMatcher)) ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher  deviceMatcher;

constexpr void __set_layoutName(::UnityEngine::InputSystem::Utilities::InternedString  value) ;

constexpr ::UnityEngine::InputSystem::Utilities::InternedString& __get_layoutName() ;

constexpr ::UnityEngine::InputSystem::Utilities::InternedString const& __get_layoutName() const;

constexpr void __set_deviceMatcher(::UnityEngine::InputSystem::Layouts::InputDeviceMatcher  value) ;

constexpr ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher& __get_deviceMatcher() ;

constexpr ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher const& __get_deviceMatcher() const;

// Ctor Parameters [CppParam { name: "layoutName", ty: "::UnityEngine::InputSystem::Utilities::InternedString", modifiers: "", def_value: None }, CppParam { name: "deviceMatcher", ty: "::UnityEngine::InputSystem::Layouts::InputDeviceMatcher", modifiers: "", def_value: None }]
constexpr __InputControlLayout__Collection__LayoutMatcher(::UnityEngine::InputSystem::Utilities::InternedString  layoutName, ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher  deviceMatcher) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __InputControlLayout__Collection__LayoutMatcher(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __InputControlLayout__Collection__LayoutMatcher()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__InputControlLayout__Collection__LayoutMatcher, 0x18>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::PrecompiledLayout
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6608))
// CS Name: ::InputControlLayout::Collection::PrecompiledLayout
struct CORDL_TYPE __InputControlLayout__Collection__PrecompiledLayout : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field factoryMethod offset 0x0
 __declspec(property(get=__get_factoryMethod, put=__set_factoryMethod)) ::System::Func_1<::UnityEngine::InputSystem::InputDevice*>*  factoryMethod;

/// @brief Field metadata offset 0x8
 __declspec(property(get=__get_metadata, put=__set_metadata)) ::StringW  metadata;

constexpr void __set_factoryMethod(::System::Func_1<::UnityEngine::InputSystem::InputDevice*>*  value) ;

constexpr ::System::Func_1<::UnityEngine::InputSystem::InputDevice*>* __get_factoryMethod() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_1<::UnityEngine::InputSystem::InputDevice*>*> __get_factoryMethod() const;

constexpr void __set_metadata(::StringW  value) ;

constexpr ::StringW& __get_metadata() ;

constexpr ::StringW const& __get_metadata() const;

// Ctor Parameters [CppParam { name: "factoryMethod", ty: "::System::Func_1<::UnityEngine::InputSystem::InputDevice*>*", modifiers: "", def_value: None }, CppParam { name: "metadata", ty: "::StringW", modifiers: "", def_value: None }]
constexpr __InputControlLayout__Collection__PrecompiledLayout(::System::Func_1<::UnityEngine::InputSystem::InputDevice*>*  factoryMethod, ::StringW  metadata) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __InputControlLayout__Collection__PrecompiledLayout(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __InputControlLayout__Collection__PrecompiledLayout()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__InputControlLayout__Collection__PrecompiledLayout, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::<GetBaseLayouts>d__24
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6609))
// CS Name: ::InputControlLayout::Collection::<GetBaseLayouts>d__24*
class CORDL_TYPE __InputControlLayout__Collection___GetBaseLayouts_d__24 : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0xd0};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0xd0 - sizeof(::System::Object)]{};

/// @brief Field <>1__state offset 0x10
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current offset 0x18
 __declspec(property(get=__get___2__current, put=__set___2__current)) ::UnityEngine::InputSystem::Utilities::InternedString  __2__current;

/// @brief Field <>l__initialThreadId offset 0x28
 __declspec(property(get=__get___l__initialThreadId, put=__set___l__initialThreadId)) int32_t  __l__initialThreadId;

/// @brief Field includeSelf offset 0x2c
 __declspec(property(get=__get_includeSelf, put=__set_includeSelf)) bool  includeSelf;

/// @brief Field <>3__includeSelf offset 0x2d
 __declspec(property(get=__get___3__includeSelf, put=__set___3__includeSelf)) bool  __3__includeSelf;

/// @brief Field layout offset 0x30
 __declspec(property(get=__get_layout, put=__set_layout)) ::UnityEngine::InputSystem::Utilities::InternedString  layout;

/// @brief Field <>3__layout offset 0x40
 __declspec(property(get=__get___3__layout, put=__set___3__layout)) ::UnityEngine::InputSystem::Utilities::InternedString  __3__layout;

/// @brief Field <>4__this offset 0x50
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Collection  __4__this;

/// @brief Field <>3__<>4__this offset 0x90
 __declspec(property(get=__get___3____4__this, put=__set___3____4__this)) ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Collection  __3____4__this;

 __declspec(property(get=System_Collections_Generic_IEnumerator_UnityEngine_InputSystem_Utilities_InternedString__get_Current)) ::UnityEngine::InputSystem::Utilities::InternedString  System_Collections_Generic_IEnumerator_UnityEngine_InputSystem_Utilities_InternedString__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::InternedString>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::InternedString>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::Utilities::InternedString>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::Utilities::InternedString>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___2__current(::UnityEngine::InputSystem::Utilities::InternedString  value) ;

constexpr ::UnityEngine::InputSystem::Utilities::InternedString& __get___2__current() ;

constexpr ::UnityEngine::InputSystem::Utilities::InternedString const& __get___2__current() const;

constexpr void __set___l__initialThreadId(int32_t  value) ;

constexpr int32_t& __get___l__initialThreadId() ;

constexpr int32_t const& __get___l__initialThreadId() const;

constexpr void __set_includeSelf(bool  value) ;

constexpr bool& __get_includeSelf() ;

constexpr bool const& __get_includeSelf() const;

constexpr void __set___3__includeSelf(bool  value) ;

constexpr bool& __get___3__includeSelf() ;

constexpr bool const& __get___3__includeSelf() const;

constexpr void __set_layout(::UnityEngine::InputSystem::Utilities::InternedString  value) ;

constexpr ::UnityEngine::InputSystem::Utilities::InternedString& __get_layout() ;

constexpr ::UnityEngine::InputSystem::Utilities::InternedString const& __get_layout() const;

constexpr void __set___3__layout(::UnityEngine::InputSystem::Utilities::InternedString  value) ;

constexpr ::UnityEngine::InputSystem::Utilities::InternedString& __get___3__layout() ;

constexpr ::UnityEngine::InputSystem::Utilities::InternedString const& __get___3__layout() const;

constexpr void __set___4__this(::UnityEngine::InputSystem::Layouts::__InputControlLayout__Collection  value) ;

constexpr ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Collection& __get___4__this() ;

constexpr ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Collection const& __get___4__this() const;

constexpr void __set___3____4__this(::UnityEngine::InputSystem::Layouts::__InputControlLayout__Collection  value) ;

constexpr ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Collection& __get___3____4__this() ;

constexpr ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Collection const& __get___3____4__this() const;

static inline ::GlobalNamespace::__InputControlLayout__Collection___GetBaseLayouts_d__24* New_ctor(int32_t  __1__state) ;

/// @brief Method .ctor addr 0x2b02de4 size 0x34 virtual false final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x2b03064 size 0x4 virtual true final true
inline void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x2b03068 size 0xbc virtual true final true
inline bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<UnityEngine.InputSystem.Utilities.InternedString>.get_Current addr 0x2b03124 size 0xc virtual true final true
inline ::UnityEngine::InputSystem::Utilities::InternedString System_Collections_Generic_IEnumerator_UnityEngine_InputSystem_Utilities_InternedString__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x2b03130 size 0x40 virtual true final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x2b03170 size 0x5c virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.Generic.IEnumerable<UnityEngine.InputSystem.Utilities.InternedString>.GetEnumerator addr 0x2b031cc size 0xcc virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::Utilities::InternedString>* System_Collections_Generic_IEnumerable_UnityEngine_InputSystem_Utilities_InternedString__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x2b03298 size 0x4 virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

// Ctor Parameters [CppParam { name: "", ty: "__InputControlLayout__Collection___GetBaseLayouts_d__24", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__InputControlLayout__Collection___GetBaseLayouts_d__24(__InputControlLayout__Collection___GetBaseLayouts_d__24 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__InputControlLayout__Collection___GetBaseLayouts_d__24", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__InputControlLayout__Collection___GetBaseLayouts_d__24(__InputControlLayout__Collection___GetBaseLayouts_d__24 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __InputControlLayout__Collection___GetBaseLayouts_d__24()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__InputControlLayout__Collection___GetBaseLayouts_d__24, 0xd0>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::Collection
namespace UnityEngine::InputSystem::Layouts {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6610))
// CS Name: ::InputControlLayout::Collection
struct CORDL_TYPE __InputControlLayout__Collection : public ::bs_hook::ValueTypeWrapper<0x40> {
public:
// Declarations
using _GetBaseLayouts_d__24 = ::GlobalNamespace::__InputControlLayout__Collection___GetBaseLayouts_d__24;

using PrecompiledLayout = ::GlobalNamespace::__InputControlLayout__Collection__PrecompiledLayout;

using LayoutMatcher = ::GlobalNamespace::__InputControlLayout__Collection__LayoutMatcher;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field kBaseScoreForNonGeneratedLayouts offset 0x0
static constexpr float_t  kBaseScoreForNonGeneratedLayouts{1.0};

/// @brief Field layoutTypes offset 0x0
 __declspec(property(get=__get_layoutTypes, put=__set_layoutTypes)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString,::System::Type*>*  layoutTypes;

/// @brief Field layoutStrings offset 0x8
 __declspec(property(get=__get_layoutStrings, put=__set_layoutStrings)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString,::StringW>*  layoutStrings;

/// @brief Field layoutBuilders offset 0x10
 __declspec(property(get=__get_layoutBuilders, put=__set_layoutBuilders)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString,::System::Func_1<::UnityEngine::InputSystem::Layouts::InputControlLayout*>*>*  layoutBuilders;

/// @brief Field baseLayoutTable offset 0x18
 __declspec(property(get=__get_baseLayoutTable, put=__set_baseLayoutTable)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString,::UnityEngine::InputSystem::Utilities::InternedString>*  baseLayoutTable;

/// @brief Field layoutOverrides offset 0x20
 __declspec(property(get=__get_layoutOverrides, put=__set_layoutOverrides)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString,::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString,::Array<::UnityEngine::InputSystem::Utilities::InternedString>*>>*  layoutOverrides;

/// @brief Field layoutOverrideNames offset 0x28
 __declspec(property(get=__get_layoutOverrideNames, put=__set_layoutOverrideNames)) ::System::Collections::Generic::HashSet_1<::UnityEngine::InputSystem::Utilities::InternedString>*  layoutOverrideNames;

/// @brief Field precompiledLayouts offset 0x30
 __declspec(property(get=__get_precompiledLayouts, put=__set_precompiledLayouts)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString,::GlobalNamespace::__InputControlLayout__Collection__PrecompiledLayout>*  precompiledLayouts;

/// @brief Field layoutMatchers offset 0x38
 __declspec(property(get=__get_layoutMatchers, put=__set_layoutMatchers)) ::System::Collections::Generic::List_1<::GlobalNamespace::__InputControlLayout__Collection__LayoutMatcher>*  layoutMatchers;

constexpr void __set_layoutTypes(::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString,::System::Type*>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString,::System::Type*>* __get_layoutTypes() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString,::System::Type*>*> __get_layoutTypes() const;

constexpr void __set_layoutStrings(::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString,::StringW>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString,::StringW>* __get_layoutStrings() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString,::StringW>*> __get_layoutStrings() const;

constexpr void __set_layoutBuilders(::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString,::System::Func_1<::UnityEngine::InputSystem::Layouts::InputControlLayout*>*>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString,::System::Func_1<::UnityEngine::InputSystem::Layouts::InputControlLayout*>*>* __get_layoutBuilders() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString,::System::Func_1<::UnityEngine::InputSystem::Layouts::InputControlLayout*>*>*> __get_layoutBuilders() const;

constexpr void __set_baseLayoutTable(::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString,::UnityEngine::InputSystem::Utilities::InternedString>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString,::UnityEngine::InputSystem::Utilities::InternedString>* __get_baseLayoutTable() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString,::UnityEngine::InputSystem::Utilities::InternedString>*> __get_baseLayoutTable() const;

constexpr void __set_layoutOverrides(::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString,::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString,::Array<::UnityEngine::InputSystem::Utilities::InternedString>*>>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString,::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString,::Array<::UnityEngine::InputSystem::Utilities::InternedString>*>>* __get_layoutOverrides() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString,::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString,::Array<::UnityEngine::InputSystem::Utilities::InternedString>*>>*> __get_layoutOverrides() const;

constexpr void __set_layoutOverrideNames(::System::Collections::Generic::HashSet_1<::UnityEngine::InputSystem::Utilities::InternedString>*  value) ;

constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::InputSystem::Utilities::InternedString>* __get_layoutOverrideNames() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::UnityEngine::InputSystem::Utilities::InternedString>*> __get_layoutOverrideNames() const;

constexpr void __set_precompiledLayouts(::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString,::GlobalNamespace::__InputControlLayout__Collection__PrecompiledLayout>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString,::GlobalNamespace::__InputControlLayout__Collection__PrecompiledLayout>* __get_precompiledLayouts() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString,::GlobalNamespace::__InputControlLayout__Collection__PrecompiledLayout>*> __get_precompiledLayouts() const;

constexpr void __set_layoutMatchers(::System::Collections::Generic::List_1<::GlobalNamespace::__InputControlLayout__Collection__LayoutMatcher>*  value) ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__InputControlLayout__Collection__LayoutMatcher>* __get_layoutMatchers() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__InputControlLayout__Collection__LayoutMatcher>*> __get_layoutMatchers() const;

/// @brief Method Allocate addr 0x2b01844 size 0x250 virtual false final false
inline void Allocate() ;

/// @brief Method TryFindLayoutForType addr 0x2afd6dc size 0x1b0 virtual false final false
inline ::UnityEngine::InputSystem::Utilities::InternedString TryFindLayoutForType(::System::Type*  layoutType) ;

/// @brief Method TryFindMatchingLayout addr 0x2b01a94 size 0x18c virtual false final false
inline ::UnityEngine::InputSystem::Utilities::InternedString TryFindMatchingLayout(::UnityEngine::InputSystem::Layouts::InputDeviceDescription  deviceDescription) ;

/// @brief Method HasLayout addr 0x2afd88c size 0xdc virtual false final false
inline bool HasLayout(::UnityEngine::InputSystem::Utilities::InternedString  name) ;

/// @brief Method TryLoadLayoutInternal addr 0x2b01f9c size 0x1f4 virtual false final false
inline ::UnityEngine::InputSystem::Layouts::InputControlLayout* TryLoadLayoutInternal(::UnityEngine::InputSystem::Utilities::InternedString  name) ;

/// @brief Method TryLoadLayout addr 0x2b02190 size 0x38c virtual false final false
inline ::UnityEngine::InputSystem::Layouts::InputControlLayout* TryLoadLayout(::UnityEngine::InputSystem::Utilities::InternedString  name, ::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString,::UnityEngine::InputSystem::Layouts::InputControlLayout*>*  table) ;

/// @brief Method GetBaseLayoutName addr 0x2b025d8 size 0x8c virtual false final false
inline ::UnityEngine::InputSystem::Utilities::InternedString GetBaseLayoutName(::UnityEngine::InputSystem::Utilities::InternedString  layoutName) ;

/// @brief Method GetRootLayoutName addr 0x2b02664 size 0x94 virtual false final false
inline ::UnityEngine::InputSystem::Utilities::InternedString GetRootLayoutName(::UnityEngine::InputSystem::Utilities::InternedString  layoutName) ;

/// @brief Method ComputeDistanceInInheritanceHierarchy addr 0x2b026f8 size 0x134 virtual false final false
inline bool ComputeDistanceInInheritanceHierarchy(::UnityEngine::InputSystem::Utilities::InternedString  firstLayout, ::UnityEngine::InputSystem::Utilities::InternedString  secondLayout, ByRef<int32_t>  distance) ;

/// @brief Method FindLayoutThatIntroducesControl addr 0x2b0282c size 0xfc virtual false final false
inline ::UnityEngine::InputSystem::Utilities::InternedString FindLayoutThatIntroducesControl(::UnityEngine::InputSystem::InputControl*  control, ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Cache  cache) ;

/// @brief Method GetControlTypeForLayout addr 0x2b02a54 size 0x154 virtual false final false
inline ::System::Type* GetControlTypeForLayout(::UnityEngine::InputSystem::Utilities::InternedString  layoutName) ;

/// @brief Method ValueTypeIsAssignableFrom addr 0x2b02ba8 size 0x128 virtual false final false
inline bool ValueTypeIsAssignableFrom(::UnityEngine::InputSystem::Utilities::InternedString  layoutName, ::System::Type*  valueType) ;

/// @brief Method IsGeneratedLayout addr 0x2b02cd0 size 0x68 virtual false final false
inline bool IsGeneratedLayout(::UnityEngine::InputSystem::Utilities::InternedString  layout) ;

/// @brief Method GetBaseLayouts addr 0x2b02d38 size 0xac virtual false final false
inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::InternedString>* GetBaseLayouts(::UnityEngine::InputSystem::Utilities::InternedString  layout, bool  includeSelf) ;

/// @brief Method IsBasedOn addr 0x2b02e18 size 0xb0 virtual false final false
inline bool IsBasedOn(::UnityEngine::InputSystem::Utilities::InternedString  parentLayout, ::UnityEngine::InputSystem::Utilities::InternedString  childLayout) ;

/// @brief Method AddMatcher addr 0x2b02ec8 size 0x180 virtual false final false
inline void AddMatcher(::UnityEngine::InputSystem::Utilities::InternedString  layout, ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher  matcher) ;

// Ctor Parameters [CppParam { name: "layoutTypes", ty: "::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString,::System::Type*>*", modifiers: "", def_value: None }, CppParam { name: "layoutStrings", ty: "::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString,::StringW>*", modifiers: "", def_value: None }, CppParam { name: "layoutBuilders", ty: "::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString,::System::Func_1<::UnityEngine::InputSystem::Layouts::InputControlLayout*>*>*", modifiers: "", def_value: None }, CppParam { name: "baseLayoutTable", ty: "::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString,::UnityEngine::InputSystem::Utilities::InternedString>*", modifiers: "", def_value: None }, CppParam { name: "layoutOverrides", ty: "::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString,::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString,::Array<::UnityEngine::InputSystem::Utilities::InternedString>*>>*", modifiers: "", def_value: None }, CppParam { name: "layoutOverrideNames", ty: "::System::Collections::Generic::HashSet_1<::UnityEngine::InputSystem::Utilities::InternedString>*", modifiers: "", def_value: None }, CppParam { name: "precompiledLayouts", ty: "::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString,::GlobalNamespace::__InputControlLayout__Collection__PrecompiledLayout>*", modifiers: "", def_value: None }, CppParam { name: "layoutMatchers", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::__InputControlLayout__Collection__LayoutMatcher>*", modifiers: "", def_value: None }]
constexpr __InputControlLayout__Collection(::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString,::System::Type*>*  layoutTypes, ::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString,::StringW>*  layoutStrings, ::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString,::System::Func_1<::UnityEngine::InputSystem::Layouts::InputControlLayout*>*>*  layoutBuilders, ::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString,::UnityEngine::InputSystem::Utilities::InternedString>*  baseLayoutTable, ::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString,::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString,::Array<::UnityEngine::InputSystem::Utilities::InternedString>*>>*  layoutOverrides, ::System::Collections::Generic::HashSet_1<::UnityEngine::InputSystem::Utilities::InternedString>*  layoutOverrideNames, ::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString,::GlobalNamespace::__InputControlLayout__Collection__PrecompiledLayout>*  precompiledLayouts, ::System::Collections::Generic::List_1<::GlobalNamespace::__InputControlLayout__Collection__LayoutMatcher>*  layoutMatchers) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __InputControlLayout__Collection(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x40>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __InputControlLayout__Collection()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Layouts::__InputControlLayout__Collection, 0x40>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::Layouts
// Type: ::LayoutNotFoundException
namespace UnityEngine::InputSystem::Layouts {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2561))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6611))
// CS Name: ::InputControlLayout::LayoutNotFoundException*
class CORDL_TYPE __InputControlLayout__LayoutNotFoundException : public ::System::Exception {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x98};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x98 - sizeof(::System::Exception)]{};

/// @brief Field <layout>k__BackingField offset 0x90
 __declspec(property(get=__get__layout_k__BackingField, put=__set__layout_k__BackingField)) ::StringW  _layout_k__BackingField;

 __declspec(property(get=get_layout)) ::StringW  layout;

constexpr void __set__layout_k__BackingField(::StringW  value) ;

constexpr ::StringW& __get__layout_k__BackingField() ;

constexpr ::StringW const& __get__layout_k__BackingField() const;

/// @brief Method get_layout addr 0x2b0329c size 0x8 virtual false final false
inline ::StringW get_layout() ;

static inline ::UnityEngine::InputSystem::Layouts::__InputControlLayout__LayoutNotFoundException* New_ctor() ;

/// @brief Method .ctor addr 0x2b032a4 size 0x58 virtual false final false
inline void _ctor() ;

static inline ::UnityEngine::InputSystem::Layouts::__InputControlLayout__LayoutNotFoundException* New_ctor(::StringW  name, ::StringW  message) ;

/// @brief Method .ctor addr 0x2b032fc size 0x74 virtual false final false
inline void _ctor(::StringW  name, ::StringW  message) ;

static inline ::UnityEngine::InputSystem::Layouts::__InputControlLayout__LayoutNotFoundException* New_ctor(::StringW  name) ;

/// @brief Method .ctor addr 0x2b0251c size 0xbc virtual false final false
inline void _ctor(::StringW  name) ;

static inline ::UnityEngine::InputSystem::Layouts::__InputControlLayout__LayoutNotFoundException* New_ctor(::StringW  message, ::System::Exception*  innerException) ;

/// @brief Method .ctor addr 0x2b03370 size 0x70 virtual false final false
inline void _ctor(::StringW  message, ::System::Exception*  innerException) ;

static inline ::UnityEngine::InputSystem::Layouts::__InputControlLayout__LayoutNotFoundException* New_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method .ctor addr 0x2b033e0 size 0x80 virtual false final false
inline void _ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

// Ctor Parameters [CppParam { name: "", ty: "__InputControlLayout__LayoutNotFoundException", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__InputControlLayout__LayoutNotFoundException(__InputControlLayout__LayoutNotFoundException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__InputControlLayout__LayoutNotFoundException", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__InputControlLayout__LayoutNotFoundException(__InputControlLayout__LayoutNotFoundException const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __InputControlLayout__LayoutNotFoundException()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Layouts::__InputControlLayout__LayoutNotFoundException, 0x98>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::Layouts
// Type: ::Cache
namespace UnityEngine::InputSystem::Layouts {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6612))
// CS Name: ::InputControlLayout::Cache
struct CORDL_TYPE __InputControlLayout__Cache : public ::bs_hook::ValueTypeWrapper<0x8> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field table offset 0x0
 __declspec(property(get=__get_table, put=__set_table)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString,::UnityEngine::InputSystem::Layouts::InputControlLayout*>*  table;

constexpr void __set_table(::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString,::UnityEngine::InputSystem::Layouts::InputControlLayout*>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString,::UnityEngine::InputSystem::Layouts::InputControlLayout*>* __get_table() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString,::UnityEngine::InputSystem::Layouts::InputControlLayout*>*> __get_table() const;

/// @brief Method Clear addr 0x2b03460 size 0x8 virtual false final false
inline void Clear() ;

/// @brief Method FindOrLoadLayout addr 0x2b02928 size 0x12c virtual false final false
inline ::UnityEngine::InputSystem::Layouts::InputControlLayout* FindOrLoadLayout(::StringW  name, bool  throwIfNotFound) ;

// Ctor Parameters [CppParam { name: "table", ty: "::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString,::UnityEngine::InputSystem::Layouts::InputControlLayout*>*", modifiers: "", def_value: None }]
constexpr __InputControlLayout__Cache(::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString,::UnityEngine::InputSystem::Layouts::InputControlLayout*>*  table) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __InputControlLayout__Cache(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x8>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __InputControlLayout__Cache()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Layouts::__InputControlLayout__Cache, 0x8>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::Layouts
// Type: ::CacheRefInstance
namespace UnityEngine::InputSystem::Layouts {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6613))
// CS Name: ::InputControlLayout::CacheRefInstance
struct CORDL_TYPE __InputControlLayout__CacheRefInstance : public ::bs_hook::ValueTypeWrapper<0x1> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field valid offset 0x0
 __declspec(property(get=__get_valid, put=__set_valid)) bool  valid;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

constexpr void __set_valid(bool  value) ;

constexpr bool& __get_valid() ;

constexpr bool const& __get_valid() const;

/// @brief Method Dispose addr 0x2b03468 size 0x98 virtual true final true
inline void Dispose() ;

// Ctor Parameters [CppParam { name: "valid", ty: "bool", modifiers: "", def_value: None }]
constexpr __InputControlLayout__CacheRefInstance(bool  valid) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __InputControlLayout__CacheRefInstance(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x1>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __InputControlLayout__CacheRefInstance()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Layouts::__InputControlLayout__CacheRefInstance, 0x1>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::Layouts
// Type: ::<>c
namespace UnityEngine::InputSystem::Layouts {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6614))
// CS Name: ::InputControlLayout::<>c*
class CORDL_TYPE __InputControlLayout____c : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF___9(::UnityEngine::InputSystem::Layouts::__InputControlLayout____c*  value) ;

static inline ::UnityEngine::InputSystem::Layouts::__InputControlLayout____c* getStaticF___9() ;

static inline void setStaticF___9__52_0(::System::Func_2<::StringW,::UnityEngine::InputSystem::Utilities::InternedString>*  value) ;

static inline ::System::Func_2<::StringW,::UnityEngine::InputSystem::Utilities::InternedString>* getStaticF___9__52_0() ;

static inline void setStaticF___9__75_0(::System::Func_2<::StringW,::UnityEngine::InputSystem::Utilities::InternedString>*  value) ;

static inline ::System::Func_2<::StringW,::UnityEngine::InputSystem::Utilities::InternedString>* getStaticF___9__75_0() ;

static inline void setStaticF___9__75_1(::System::Func_2<::StringW,::UnityEngine::InputSystem::Utilities::InternedString>*  value) ;

static inline ::System::Func_2<::StringW,::UnityEngine::InputSystem::Utilities::InternedString>* getStaticF___9__75_1() ;

static inline ::UnityEngine::InputSystem::Layouts::__InputControlLayout____c* New_ctor() ;

/// @brief Method .ctor addr 0x2b03564 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <FromType>b__52_0 addr 0x2b0356c size 0x28 virtual false final false
inline ::UnityEngine::InputSystem::Utilities::InternedString _FromType_b__52_0(::StringW  x) ;

/// @brief Method <CreateControlItemFromMember>b__75_0 addr 0x2b03594 size 0x28 virtual false final false
inline ::UnityEngine::InputSystem::Utilities::InternedString _CreateControlItemFromMember_b__75_0(::StringW  x) ;

/// @brief Method <CreateControlItemFromMember>b__75_1 addr 0x2b035bc size 0x28 virtual false final false
inline ::UnityEngine::InputSystem::Utilities::InternedString _CreateControlItemFromMember_b__75_1(::StringW  x) ;

// Ctor Parameters [CppParam { name: "", ty: "__InputControlLayout____c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__InputControlLayout____c(__InputControlLayout____c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__InputControlLayout____c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__InputControlLayout____c(__InputControlLayout____c const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __InputControlLayout____c()  = default;
public:


// Fields

// Static field <>9

// Static field <>9__52_0

// Static field <>9__75_0

// Static field <>9__75_1


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Layouts::__InputControlLayout____c, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::Layouts
// Type: UnityEngine.InputSystem.Layouts::InputControlLayout
namespace UnityEngine::InputSystem::Layouts {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6615))
// CS Name: ::UnityEngine.InputSystem.Layouts::InputControlLayout*
class CORDL_TYPE InputControlLayout : public ::System::Object {
public:
// Declarations
using __c = ::UnityEngine::InputSystem::Layouts::__InputControlLayout____c;

using CacheRefInstance = ::UnityEngine::InputSystem::Layouts::__InputControlLayout__CacheRefInstance;

using Cache = ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Cache;

using LayoutNotFoundException = ::UnityEngine::InputSystem::Layouts::__InputControlLayout__LayoutNotFoundException;

using Collection = ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Collection;

using ControlItemJson = ::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItemJson;

using LayoutJson = ::UnityEngine::InputSystem::Layouts::__InputControlLayout__LayoutJson;

using LayoutJsonNameAndDescriptorOnly = ::UnityEngine::InputSystem::Layouts::__InputControlLayout__LayoutJsonNameAndDescriptorOnly;

using Flags = ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Flags;

using Builder = ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder;

using ControlItem = ::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0xb0};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0xb0 - sizeof(::System::Object)]{};

/// @brief Field VariantSeparator offset 0x0
static constexpr ::ConstString  VariantSeparator{u";"};

/// @brief Field m_Name offset 0x10
 __declspec(property(get=__get_m_Name, put=__set_m_Name)) ::UnityEngine::InputSystem::Utilities::InternedString  m_Name;

/// @brief Field m_Type offset 0x20
 __declspec(property(get=__get_m_Type, put=__set_m_Type)) ::System::Type*  m_Type;

/// @brief Field m_Variants offset 0x28
 __declspec(property(get=__get_m_Variants, put=__set_m_Variants)) ::UnityEngine::InputSystem::Utilities::InternedString  m_Variants;

/// @brief Field m_StateFormat offset 0x38
 __declspec(property(get=__get_m_StateFormat, put=__set_m_StateFormat)) ::UnityEngine::InputSystem::Utilities::FourCC  m_StateFormat;

/// @brief Field m_StateSizeInBytes offset 0x3c
 __declspec(property(get=__get_m_StateSizeInBytes, put=__set_m_StateSizeInBytes)) int32_t  m_StateSizeInBytes;

/// @brief Field m_UpdateBeforeRender offset 0x40
 __declspec(property(get=__get_m_UpdateBeforeRender, put=__set_m_UpdateBeforeRender)) ::System::Nullable_1<bool>  m_UpdateBeforeRender;

/// @brief Field m_BaseLayouts offset 0x48
 __declspec(property(get=__get_m_BaseLayouts, put=__set_m_BaseLayouts)) ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Utilities::InternedString>  m_BaseLayouts;

/// @brief Field m_AppliedOverrides offset 0x68
 __declspec(property(get=__get_m_AppliedOverrides, put=__set_m_AppliedOverrides)) ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Utilities::InternedString>  m_AppliedOverrides;

/// @brief Field m_CommonUsages offset 0x88
 __declspec(property(get=__get_m_CommonUsages, put=__set_m_CommonUsages)) ::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString,::Array<::UnityEngine::InputSystem::Utilities::InternedString>*>  m_CommonUsages;

/// @brief Field m_Controls offset 0x90
 __declspec(property(get=__get_m_Controls, put=__set_m_Controls)) ::ArrayW<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem,::Array<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>*>  m_Controls;

/// @brief Field m_DisplayName offset 0x98
 __declspec(property(get=__get_m_DisplayName, put=__set_m_DisplayName)) ::StringW  m_DisplayName;

/// @brief Field m_Description offset 0xa0
 __declspec(property(get=__get_m_Description, put=__set_m_Description)) ::StringW  m_Description;

/// @brief Field m_Flags offset 0xa8
 __declspec(property(get=__get_m_Flags, put=__set_m_Flags)) ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Flags  m_Flags;

 __declspec(property(get=get_name)) ::UnityEngine::InputSystem::Utilities::InternedString  name;

 __declspec(property(get=get_displayName)) ::StringW  displayName;

 __declspec(property(get=get_type)) ::System::Type*  type;

 __declspec(property(get=get_variants)) ::UnityEngine::InputSystem::Utilities::InternedString  variants;

 __declspec(property(get=get_stateFormat)) ::UnityEngine::InputSystem::Utilities::FourCC  stateFormat;

 __declspec(property(get=get_stateSizeInBytes)) int32_t  stateSizeInBytes;

 __declspec(property(get=get_baseLayouts)) ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::InternedString>*  baseLayouts;

 __declspec(property(get=get_appliedOverrides)) ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::InternedString>*  appliedOverrides;

 __declspec(property(get=get_commonUsages)) ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString>  commonUsages;

 __declspec(property(get=get_controls)) ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>  controls;

 __declspec(property(get=get_updateBeforeRender)) bool  updateBeforeRender;

 __declspec(property(get=get_isDeviceLayout)) bool  isDeviceLayout;

 __declspec(property(get=get_isControlLayout)) bool  isControlLayout;

 __declspec(property(get=get_isOverride, put=set_isOverride)) bool  isOverride;

 __declspec(property(get=get_isGenericTypeOfDevice, put=set_isGenericTypeOfDevice)) bool  isGenericTypeOfDevice;

 __declspec(property(get=get_hideInUI, put=set_hideInUI)) bool  hideInUI;

 __declspec(property(get=get_isNoisy, put=set_isNoisy)) bool  isNoisy;

 __declspec(property(get=get_canRunInBackground, put=set_canRunInBackground)) ::System::Nullable_1<bool>  canRunInBackground;

 __declspec(property(get=get_Item)) ::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem  Item[];

static inline void setStaticF_s_DefaultVariant(::UnityEngine::InputSystem::Utilities::InternedString  value) ;

static inline ::UnityEngine::InputSystem::Utilities::InternedString getStaticF_s_DefaultVariant() ;

constexpr void __set_m_Name(::UnityEngine::InputSystem::Utilities::InternedString  value) ;

constexpr ::UnityEngine::InputSystem::Utilities::InternedString& __get_m_Name() ;

constexpr ::UnityEngine::InputSystem::Utilities::InternedString const& __get_m_Name() const;

constexpr void __set_m_Type(::System::Type*  value) ;

constexpr ::System::Type* __get_m_Type() ;

constexpr ::cordl_internals::to_const_pointer<::System::Type*> __get_m_Type() const;

constexpr void __set_m_Variants(::UnityEngine::InputSystem::Utilities::InternedString  value) ;

constexpr ::UnityEngine::InputSystem::Utilities::InternedString& __get_m_Variants() ;

constexpr ::UnityEngine::InputSystem::Utilities::InternedString const& __get_m_Variants() const;

constexpr void __set_m_StateFormat(::UnityEngine::InputSystem::Utilities::FourCC  value) ;

constexpr ::UnityEngine::InputSystem::Utilities::FourCC& __get_m_StateFormat() ;

constexpr ::UnityEngine::InputSystem::Utilities::FourCC const& __get_m_StateFormat() const;

constexpr void __set_m_StateSizeInBytes(int32_t  value) ;

constexpr int32_t& __get_m_StateSizeInBytes() ;

constexpr int32_t const& __get_m_StateSizeInBytes() const;

constexpr void __set_m_UpdateBeforeRender(::System::Nullable_1<bool>  value) ;

constexpr ::System::Nullable_1<bool>& __get_m_UpdateBeforeRender() ;

constexpr ::System::Nullable_1<bool> const& __get_m_UpdateBeforeRender() const;

constexpr void __set_m_BaseLayouts(::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Utilities::InternedString>  value) ;

constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Utilities::InternedString>& __get_m_BaseLayouts() ;

constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Utilities::InternedString> const& __get_m_BaseLayouts() const;

constexpr void __set_m_AppliedOverrides(::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Utilities::InternedString>  value) ;

constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Utilities::InternedString>& __get_m_AppliedOverrides() ;

constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Utilities::InternedString> const& __get_m_AppliedOverrides() const;

constexpr void __set_m_CommonUsages(::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString,::Array<::UnityEngine::InputSystem::Utilities::InternedString>*>  value) ;

constexpr ::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString,::Array<::UnityEngine::InputSystem::Utilities::InternedString>*>& __get_m_CommonUsages() ;

constexpr ::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString,::Array<::UnityEngine::InputSystem::Utilities::InternedString>*> const& __get_m_CommonUsages() const;

constexpr void __set_m_Controls(::ArrayW<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem,::Array<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>*>  value) ;

constexpr ::ArrayW<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem,::Array<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>*>& __get_m_Controls() ;

constexpr ::ArrayW<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem,::Array<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>*> const& __get_m_Controls() const;

constexpr void __set_m_DisplayName(::StringW  value) ;

constexpr ::StringW& __get_m_DisplayName() ;

constexpr ::StringW const& __get_m_DisplayName() const;

constexpr void __set_m_Description(::StringW  value) ;

constexpr ::StringW& __get_m_Description() ;

constexpr ::StringW const& __get_m_Description() const;

constexpr void __set_m_Flags(::UnityEngine::InputSystem::Layouts::__InputControlLayout__Flags  value) ;

constexpr ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Flags& __get_m_Flags() ;

constexpr ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Flags const& __get_m_Flags() const;

static inline void setStaticF_s_Layouts(::UnityEngine::InputSystem::Layouts::__InputControlLayout__Collection  value) ;

static inline ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Collection getStaticF_s_Layouts() ;

static inline void setStaticF_s_CacheInstance(::UnityEngine::InputSystem::Layouts::__InputControlLayout__Cache  value) ;

static inline ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Cache getStaticF_s_CacheInstance() ;

static inline void setStaticF_s_CacheInstanceRef(int32_t  value) ;

static inline int32_t getStaticF_s_CacheInstanceRef() ;

/// @brief Method get_DefaultVariant addr 0x2afa45c size 0x58 virtual false final false
static inline ::UnityEngine::InputSystem::Utilities::InternedString get_DefaultVariant() ;

/// @brief Method get_name addr 0x2afa4b4 size 0xc virtual false final false
inline ::UnityEngine::InputSystem::Utilities::InternedString get_name() ;

/// @brief Method get_displayName addr 0x2afa4c0 size 0x20 virtual false final false
inline ::StringW get_displayName() ;

/// @brief Method get_type addr 0x2afa4e0 size 0x8 virtual false final false
inline ::System::Type* get_type() ;

/// @brief Method get_variants addr 0x2afa4e8 size 0xc virtual false final false
inline ::UnityEngine::InputSystem::Utilities::InternedString get_variants() ;

/// @brief Method get_stateFormat addr 0x2afa4f4 size 0x8 virtual false final false
inline ::UnityEngine::InputSystem::Utilities::FourCC get_stateFormat() ;

/// @brief Method get_stateSizeInBytes addr 0x2afa4fc size 0x8 virtual false final false
inline int32_t get_stateSizeInBytes() ;

/// @brief Method get_baseLayouts addr 0x2afa504 size 0x60 virtual false final false
inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::InternedString>* get_baseLayouts() ;

/// @brief Method get_appliedOverrides addr 0x2afa564 size 0x60 virtual false final false
inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::InternedString>* get_appliedOverrides() ;

/// @brief Method get_commonUsages addr 0x2afa5c4 size 0x60 virtual false final false
inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString> get_commonUsages() ;

/// @brief Method get_controls addr 0x2afa624 size 0x60 virtual false final false
inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem> get_controls() ;

/// @brief Method get_updateBeforeRender addr 0x2afa684 size 0x3c virtual false final false
inline bool get_updateBeforeRender() ;

/// @brief Method get_isDeviceLayout addr 0x2afa6c0 size 0x94 virtual false final false
inline bool get_isDeviceLayout() ;

/// @brief Method get_isControlLayout addr 0x2afa754 size 0x18 virtual false final false
inline bool get_isControlLayout() ;

/// @brief Method get_isOverride addr 0x2afa76c size 0xc virtual false final false
inline bool get_isOverride() ;

/// @brief Method set_isOverride addr 0x2afa778 size 0x1c virtual false final false
inline void set_isOverride(bool  value) ;

/// @brief Method get_isGenericTypeOfDevice addr 0x2afa794 size 0xc virtual false final false
inline bool get_isGenericTypeOfDevice() ;

/// @brief Method set_isGenericTypeOfDevice addr 0x2afa7a0 size 0x1c virtual false final false
inline void set_isGenericTypeOfDevice(bool  value) ;

/// @brief Method get_hideInUI addr 0x2afa7bc size 0xc virtual false final false
inline bool get_hideInUI() ;

/// @brief Method set_hideInUI addr 0x2afa7c8 size 0x1c virtual false final false
inline void set_hideInUI(bool  value) ;

/// @brief Method get_isNoisy addr 0x2afa7e4 size 0xc virtual false final false
inline bool get_isNoisy() ;

/// @brief Method set_isNoisy addr 0x2afa7f0 size 0x1c virtual false final false
inline void set_isNoisy(bool  value) ;

/// @brief Method get_canRunInBackground addr 0x2afa80c size 0x68 virtual false final false
inline ::System::Nullable_1<bool> get_canRunInBackground() ;

/// @brief Method set_canRunInBackground addr 0x2afa874 size 0x9c virtual false final false
inline void set_canRunInBackground(::System::Nullable_1<bool>  value) ;

/// @brief Method get_Item addr 0x2afa910 size 0x184 virtual false final false
inline ::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem get_Item(::StringW  path) ;

/// @brief Method FindControl addr 0x2afaa94 size 0x19c virtual false final false
inline ::System::Nullable_1<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem> FindControl(::UnityEngine::InputSystem::Utilities::InternedString  path) ;

/// @brief Method FindControlIncludingArrayElements addr 0x2afac30 size 0x310 virtual false final false
inline ::System::Nullable_1<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem> FindControlIncludingArrayElements(::StringW  path, ByRef<int32_t>  arrayIndex) ;

/// @brief Method GetValueType addr 0x2afaf50 size 0x90 virtual false final false
inline ::System::Type* GetValueType() ;

/// @brief Method FromType addr 0x2afafe0 size 0x498 virtual false final false
static inline ::UnityEngine::InputSystem::Layouts::InputControlLayout* FromType(::StringW  name, ::System::Type*  type) ;

/// @brief Method ToJson addr 0x2afb544 size 0x7c virtual false final false
inline ::StringW ToJson() ;

/// @brief Method FromJson addr 0x2afb904 size 0x90 virtual false final false
static inline ::UnityEngine::InputSystem::Layouts::InputControlLayout* FromJson(::StringW  json) ;

static inline ::UnityEngine::InputSystem::Layouts::InputControlLayout* New_ctor(::StringW  name, ::System::Type*  type) ;

/// @brief Method .ctor addr 0x2afb4f4 size 0x50 virtual false final false
inline void _ctor(::StringW  name, ::System::Type*  type) ;

/// @brief Method AddControlItems addr 0x2afb478 size 0x7c virtual false final false
static inline void AddControlItems(::System::Type*  type, ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>*  controlLayouts, ::StringW  layoutName) ;

/// @brief Method AddControlItemsFromFields addr 0x2afc3c0 size 0x94 virtual false final false
static inline void AddControlItemsFromFields(::System::Type*  type, ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>*  controlLayouts, ::StringW  layoutName) ;

/// @brief Method AddControlItemsFromProperties addr 0x2afc454 size 0x94 virtual false final false
static inline void AddControlItemsFromProperties(::System::Type*  type, ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>*  controlLayouts, ::StringW  layoutName) ;

/// @brief Method AddControlItemsFromMembers addr 0x2afc4e8 size 0x52c virtual false final false
static inline void AddControlItemsFromMembers(::ArrayW<::System::Reflection::MemberInfo*,::Array<::System::Reflection::MemberInfo*>*>  members, ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>*  controlItems, ::StringW  layoutName) ;

/// @brief Method AddControlItemsFromMember addr 0x2afca14 size 0x270 virtual false final false
static inline void AddControlItemsFromMember(::System::Reflection::MemberInfo*  member, ::ArrayW<::UnityEngine::InputSystem::Layouts::InputControlAttribute*,::Array<::UnityEngine::InputSystem::Layouts::InputControlAttribute*>*>  attributes, ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>*  controlItems) ;

/// @brief Method CreateControlItemFromMember addr 0x2afcc84 size 0x814 virtual false final false
static inline ::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem CreateControlItemFromMember(::System::Reflection::MemberInfo*  member, ::UnityEngine::InputSystem::Layouts::InputControlAttribute*  attribute) ;

/// @brief Method InferLayoutFromValueType addr 0x2afd498 size 0x1b8 virtual false final false
static inline ::StringW InferLayoutFromValueType(::System::Type*  type) ;

/// @brief Method MergeLayout addr 0x2afd968 size 0x117c virtual false final false
inline void MergeLayout(::UnityEngine::InputSystem::Layouts::InputControlLayout*  other) ;

/// @brief Method CreateLookupTableForControls addr 0x2afeae4 size 0x40c virtual false final false
static inline ::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>* CreateLookupTableForControls(::ArrayW<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem,::Array<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>*>  controlItems, ::System::Collections::Generic::List_1<::StringW>*  variants) ;

/// @brief Method VariantsMatch addr 0x2aff3bc size 0x64 virtual false final false
static inline bool VariantsMatch(::UnityEngine::InputSystem::Utilities::InternedString  expected, ::UnityEngine::InputSystem::Utilities::InternedString  actual) ;

/// @brief Method VariantsMatch addr 0x2aff290 size 0x12c virtual false final false
static inline bool VariantsMatch(::StringW  expected, ::StringW  actual) ;

/// @brief Method ParseHeaderFieldsFromJson addr 0x2aff420 size 0x17c virtual false final false
static inline void ParseHeaderFieldsFromJson(::StringW  json, ByRef<::UnityEngine::InputSystem::Utilities::InternedString>  name, ByRef<::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Utilities::InternedString>>  baseLayouts, ByRef<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>  deviceMatcher) ;

/// @brief Method get_cache addr 0x2aff59c size 0x58 virtual false final false
static inline ByRef<::UnityEngine::InputSystem::Layouts::__InputControlLayout__Cache> get_cache() ;

/// @brief Method CacheRef addr 0x2aff5f4 size 0x64 virtual false final false
static inline ::UnityEngine::InputSystem::Layouts::__InputControlLayout__CacheRefInstance CacheRef() ;

/// @brief Method <MergeLayout>b__77_0 addr 0x2aff6d4 size 0x74 virtual false final false
inline bool _MergeLayout_b__77_0(::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem  x) ;

// Ctor Parameters [CppParam { name: "", ty: "InputControlLayout", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InputControlLayout(InputControlLayout && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputControlLayout", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputControlLayout(InputControlLayout const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 InputControlLayout()  = default;
public:


// Fields

// Static field s_DefaultVariant

// Static field s_Layouts

// Static field s_CacheInstance

// Static field s_CacheInstanceRef


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Layouts::InputControlLayout, 0xb0>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::Layouts
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__InputControlLayout__ControlItem__Flags, "UnityEngine.InputSystem.Layouts", "InputControlLayout/ControlItem/Flags");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Layouts::__InputControlLayout__Flags, "UnityEngine.InputSystem.Layouts", "InputControlLayout/Flags");
NEED_NO_BOX(::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder____c*, "UnityEngine.InputSystem.Layouts", "InputControlLayout/Builder/ControlBuilder/<>c");
NEED_NO_BOX(::GlobalNamespace::__InputControlLayout__Collection___GetBaseLayouts_d__24);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__InputControlLayout__Collection___GetBaseLayouts_d__24*, "UnityEngine.InputSystem.Layouts", "InputControlLayout/Collection/<GetBaseLayouts>d__24");
NEED_NO_BOX(::GlobalNamespace::__InputControlLayout__ControlItemJson____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__InputControlLayout__ControlItemJson____c*, "UnityEngine.InputSystem.Layouts", "InputControlLayout/ControlItemJson/<>c");
NEED_NO_BOX(::GlobalNamespace::__InputControlLayout__LayoutJson____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__InputControlLayout__LayoutJson____c*, "UnityEngine.InputSystem.Layouts", "InputControlLayout/LayoutJson/<>c");
NEED_NO_BOX(::UnityEngine::InputSystem::Layouts::InputControlLayout);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Layouts::InputControlLayout*, "UnityEngine.InputSystem.Layouts", "InputControlLayout");
NEED_NO_BOX(::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder*, "UnityEngine.InputSystem.Layouts", "InputControlLayout/Builder");
NEED_NO_BOX(::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItemJson);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItemJson*, "UnityEngine.InputSystem.Layouts", "InputControlLayout/ControlItemJson");
NEED_NO_BOX(::UnityEngine::InputSystem::Layouts::__InputControlLayout__LayoutNotFoundException);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Layouts::__InputControlLayout__LayoutNotFoundException*, "UnityEngine.InputSystem.Layouts", "InputControlLayout/LayoutNotFoundException");
NEED_NO_BOX(::UnityEngine::InputSystem::Layouts::__InputControlLayout____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Layouts::__InputControlLayout____c*, "UnityEngine.InputSystem.Layouts", "InputControlLayout/<>c");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder, "UnityEngine.InputSystem.Layouts", "InputControlLayout/Builder/ControlBuilder");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__InputControlLayout__Collection__LayoutMatcher, "UnityEngine.InputSystem.Layouts", "InputControlLayout/Collection/LayoutMatcher");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__InputControlLayout__Collection__PrecompiledLayout, "UnityEngine.InputSystem.Layouts", "InputControlLayout/Collection/PrecompiledLayout");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Layouts::__InputControlLayout__Cache, "UnityEngine.InputSystem.Layouts", "InputControlLayout/Cache");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Layouts::__InputControlLayout__CacheRefInstance, "UnityEngine.InputSystem.Layouts", "InputControlLayout/CacheRefInstance");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Layouts::__InputControlLayout__Collection, "UnityEngine.InputSystem.Layouts", "InputControlLayout/Collection");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem, "UnityEngine.InputSystem.Layouts", "InputControlLayout/ControlItem");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Layouts::__InputControlLayout__LayoutJson, "UnityEngine.InputSystem.Layouts", "InputControlLayout/LayoutJson");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Layouts::__InputControlLayout__LayoutJsonNameAndDescriptorOnly, "UnityEngine.InputSystem.Layouts", "InputControlLayout/LayoutJsonNameAndDescriptorOnly");
